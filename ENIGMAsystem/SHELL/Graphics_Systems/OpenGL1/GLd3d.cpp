/** Copyright (C) 2008-2013 Josh Ventura, DatZach, Polygone
*** Copyright (C) 2013, 2019 Robert B. Colton
***
*** This file is a part of the ENIGMA Development Environment.
***
*** ENIGMA is free software: you can redistribute it and/or modify it under the
*** terms of the GNU General Public License as published by the Free Software
*** Foundation, version 3 of the license or any later version.
***
*** This application and its source code is distributed AS-IS, WITHOUT ANY
*** WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
*** FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
*** details.
***
*** You should have received a copy of the GNU General Public License along
*** with this code. If not, see <http://www.gnu.org/licenses/>
**/

#include "OpenGLHeaders.h"
#include "Graphics_Systems/OpenGL/GLenums.h"
#include "Graphics_Systems/OpenGL/GLtextures_impl.h"
#include "Graphics_Systems/General/GSd3d.h"
#include "Graphics_Systems/General/GStextures.h"
#include "Graphics_Systems/General/GSblend.h"
#include "Graphics_Systems/General/GSstdraw.h"
#include "Graphics_Systems/General/GScolors.h"
#include "Graphics_Systems/General/GSprimitives.h"
#include "Graphics_Systems/General/GSmatrix.h"
#include "Graphics_Systems/General/GSmatrix_impl.h"
#include "Graphics_Systems/General/GScolor_macros.h"

#include "Widget_Systems/widgets_mandatory.h"

#include <glm/gtc/type_ptr.hpp>

#include <math.h>
#include <floatcomp.h>

using namespace std;

namespace enigma {

void graphics_state_flush_samplers(const RenderState& state) {
  for (int i = 0; i < 8; ++i) {
    const Sampler& sampler = state.samplers[i];
    const auto tex = get_texture_peer(sampler.texture);
    glActiveTexture(GL_TEXTURE0 + i);
    glBindTexture(GL_TEXTURE_2D, tex);
    if (tex == 0) continue; // texture doesn't exist skip updating the sampler
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_R, sampler.wrapu?GL_REPEAT:GL_CLAMP);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, sampler.wrapv?GL_REPEAT:GL_CLAMP);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, sampler.wrapw?GL_REPEAT:GL_CLAMP);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, sampler.interpolate?GL_LINEAR:GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, sampler.interpolate?GL_LINEAR:GL_NEAREST);
  }
}

void graphics_state_flush_fog(const RenderState& state) {
  glFogi(GL_FOG_MODE, fogmodes[state.d3dFogMode]);
  glHint(GL_FOG_HINT, state.d3dFogHint);
  const float glFogColor[] = {COL_GET_Rf(state.d3dFogColor),COL_GET_Gf(state.d3dFogColor),COL_GET_Bf(state.d3dFogColor)};
  glFogfv(GL_FOG_COLOR, glFogColor);
  glFogf(GL_FOG_START, state.d3dFogStart);
  glFogf(GL_FOG_END, state.d3dFogEnd);
  glFogf(GL_FOG_DENSITY, state.d3dFogDensity);
}

void graphics_state_flush_lighting(const RenderState& state) {
  glShadeModel(state.d3dShading?GL_SMOOTH:GL_FLAT);
  const float glAmbientColor[4] = {COL_GET_Rf(state.d3dLightingAmbient),COL_GET_Gf(state.d3dLightingAmbient),COL_GET_Bf(state.d3dLightingAmbient),1.0f};
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, glAmbientColor);

  // this is done for compatibility with D3D/GM
  glMatrixMode(GL_MODELVIEW);
  // define lights with respect to view matrix but not world
  glLoadMatrixf(glm::value_ptr(enigma::view));
  for (int i = 0; i < 8; ++i) {
    const bool enabled = (i<state.d3dLightsActive);

    (enabled?glEnable:glDisable)(GL_LIGHT0+i);
    if (!enabled) continue; // don't bother updating disabled lights

    const Light& light = get_active_light(i);

    const float posFactor = light.directional ? -1.0f : 1.0f;
    const float pos[4] = {posFactor * (float)light.x, posFactor * (float)light.y, posFactor * (float)light.z, light.directional ? 0.0f : 1.0f},
                color[4] = {float(COL_GET_Rf(light.color)), float(COL_GET_Gf(light.color)), float(COL_GET_Bf(light.color)), 1.0f};

    glLightfv(GL_LIGHT0+i, GL_POSITION, pos);
    glLightfv(GL_LIGHT0+i, GL_DIFFUSE, color);

    if (light.directional) continue; // only point lights have range falloff and attenuation

    // Limit the range of the light through attenuation.
    glLightf(GL_LIGHT0+i, GL_CONSTANT_ATTENUATION, 1.0);
    glLightf(GL_LIGHT0+i, GL_LINEAR_ATTENUATION, 0.0);
    // 48 is a number gotten through manual calibration. Make it lower to increase the light power.
    const float attenuation_calibration = 8.0;
    glLightf(GL_LIGHT0+i, GL_QUADRATIC_ATTENUATION, attenuation_calibration/(light.range*light.range));
  }
}

void graphics_state_flush_stencil(const RenderState& state) {
  glStencilMask(state.d3dStencilMask);
  glStencilFunc(depthoperators[state.d3dStencilFunc], state.d3dStencilFuncRef, state.d3dStencilFuncMask);
  glStencilOp(stenciloperators[state.d3dStencilOpStencilFail], stenciloperators[state.d3dStencilOpDepthFail],
              stenciloperators[state.d3dStencilOpPass]);
}

void graphics_state_flush(const RenderState& state) {
  glColor4ubv(state.currentcolor);
  glPolygonMode(GL_FRONT_AND_BACK, fillmodes[state.drawFillMode]);
  glPointSize(state.drawPointSize);
  glLineWidth(state.drawLineWidth);

  (state.lineStippleEnable?glEnable:glDisable)(GL_LINE_STIPPLE);
  glLineStipple(state.lineStippleScale,state.lineStipplePattern);

  (state.msaaEnabled?glEnable:glDisable)(GL_MULTISAMPLE);
  (state.d3dHidden?glEnable:glDisable)(GL_DEPTH_TEST);
  glDepthFunc(depthoperators[state.d3dDepthOperator]);
  glDepthMask(state.d3dZWriteEnable);
  (state.d3dCulling>0?glEnable:glDisable)(GL_CULL_FACE);
  if (state.d3dCulling > 0){
    glFrontFace(windingstates[state.d3dCulling-1]);
  }

  glColorMask(state.colorWriteEnable[0], state.colorWriteEnable[1], state.colorWriteEnable[2], state.colorWriteEnable[3]);
  glBlendFunc(blendequivs[(state.blendMode[0]-1)%11],blendequivs[(state.blendMode[1]-1)%11]);
  (state.alphaBlend?glEnable:glDisable)(GL_BLEND);
  (state.alphaTest?glEnable:glDisable)(GL_ALPHA_TEST);
  glAlphaFunc(GL_GREATER, state.alphaTestRef/255);

  graphics_state_flush_samplers(state);

  //NOTE: fog can use vertex checks with less good graphic cards which screws up large textures (however this doesn't happen in directx)
  (state.d3dFogEnabled?glEnable:glDisable)(GL_FOG);
  if (state.d3dFogEnabled) graphics_state_flush_fog(state);

  // flush lighting before matrix so GL1 ffp can compute lights with respect to view only
  (state.d3dLighting?glEnable:glDisable)(GL_LIGHTING);
  if (state.d3dLighting) graphics_state_flush_lighting(state);

  (state.d3dStencilTest?glEnable:glDisable)(GL_STENCIL_TEST);
  if (state.d3dStencilTest) graphics_state_flush_stencil(state);

  glm::mat4 modelview = view * world;
  glMatrixMode(GL_MODELVIEW);
  glLoadMatrixf(glm::value_ptr(modelview));

  glMatrixMode(GL_PROJECTION);
  glLoadMatrixf(glm::value_ptr(projection));
}

} // namespace enigma

namespace enigma_user {

void d3d_clear_depth(double value) {
  draw_batch_flush(batch_flush_deferred);
  glClearDepth(value);
  glClear(GL_DEPTH_BUFFER_BIT);
}

void d3d_clear_depth() {
  draw_batch_flush(batch_flush_deferred);
  glClear(GL_DEPTH_BUFFER_BIT);
}

void d3d_stencil_clear_value(int value) {
  draw_batch_flush(batch_flush_deferred);
  glClearStencil(value);
  glClear(GL_STENCIL_BUFFER_BIT);
}

void d3d_stencil_clear() {
  draw_batch_flush(batch_flush_deferred);
  glClear(GL_STENCIL_BUFFER_BIT);
}

void d3d_set_software_vertex_processing(bool software) {
  //Does nothing as GL doesn't have such an awful thing
  //TODO: When we seperate platform specific things, then this shouldn't even exist
}

} // namespace enigma_user
