// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Background.proto

#ifndef PROTOBUF_INCLUDED_Background_2eproto
#define PROTOBUF_INCLUDED_Background_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "options.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_Background_2eproto 

namespace protobuf_Background_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_Background_2eproto
namespace buffers {
namespace resources {
class Background;
class BackgroundDefaultTypeInternal;
extern BackgroundDefaultTypeInternal _Background_default_instance_;
}  // namespace resources
}  // namespace buffers
namespace google {
namespace protobuf {
template<> ::buffers::resources::Background* Arena::CreateMaybeMessage<::buffers::resources::Background>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace buffers {
namespace resources {

// ===================================================================

class Background : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:buffers.resources.Background) */ {
 public:
  Background();
  virtual ~Background();

  Background(const Background& from);

  inline Background& operator=(const Background& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Background(Background&& from) noexcept
    : Background() {
    *this = ::std::move(from);
  }

  inline Background& operator=(Background&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Background& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Background* internal_default_instance() {
    return reinterpret_cast<const Background*>(
               &_Background_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Background* other);
  friend void swap(Background& a, Background& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Background* New() const final {
    return CreateMaybeMessage<Background>(NULL);
  }

  Background* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Background>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Background& from);
  void MergeFrom(const Background& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Background* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string image = 17 [(.buffers.file_path) = true, (.buffers.gmx) = "data"];
  bool has_image() const;
  void clear_image();
  static const int kImageFieldNumber = 17;
  const ::std::string& image() const;
  void set_image(const ::std::string& value);
  #if LANG_CXX11
  void set_image(::std::string&& value);
  #endif
  void set_image(const char* value);
  void set_image(const char* value, size_t size);
  ::std::string* mutable_image();
  ::std::string* release_image();
  void set_allocated_image(::std::string* image);

  // optional int32 id = 1 [(.buffers.gmx) = "GMX_DEPRECATED"];
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // optional int32 tile_width = 5 [(.buffers.gmx) = "tilewidth"];
  bool has_tile_width() const;
  void clear_tile_width();
  static const int kTileWidthFieldNumber = 5;
  ::google::protobuf::int32 tile_width() const;
  void set_tile_width(::google::protobuf::int32 value);

  // optional bool preload = 2 [(.buffers.gmx) = "GMX_DEPRECATED"];
  bool has_preload() const;
  void clear_preload();
  static const int kPreloadFieldNumber = 2;
  bool preload() const;
  void set_preload(bool value);

  // optional bool smooth_edges = 3 [(.buffers.gmx) = "GMX_DEPRECATED"];
  bool has_smooth_edges() const;
  void clear_smooth_edges();
  static const int kSmoothEdgesFieldNumber = 3;
  bool smooth_edges() const;
  void set_smooth_edges(bool value);

  // optional bool use_as_tileset = 4 [(.buffers.gmx) = "istileset"];
  bool has_use_as_tileset() const;
  void clear_use_as_tileset();
  static const int kUseAsTilesetFieldNumber = 4;
  bool use_as_tileset() const;
  void set_use_as_tileset(bool value);

  // optional bool for3D = 14 [(.buffers.gmx) = "For3D"];
  bool has_for3d() const;
  void clear_for3d();
  static const int kFor3DFieldNumber = 14;
  bool for3d() const;
  void set_for3d(bool value);

  // optional int32 tile_height = 6 [(.buffers.gmx) = "tileheight"];
  bool has_tile_height() const;
  void clear_tile_height();
  static const int kTileHeightFieldNumber = 6;
  ::google::protobuf::int32 tile_height() const;
  void set_tile_height(::google::protobuf::int32 value);

  // optional int32 horizontal_offset = 7 [(.buffers.gmx) = "tilexoff"];
  bool has_horizontal_offset() const;
  void clear_horizontal_offset();
  static const int kHorizontalOffsetFieldNumber = 7;
  ::google::protobuf::int32 horizontal_offset() const;
  void set_horizontal_offset(::google::protobuf::int32 value);

  // optional int32 vertical_offset = 8 [(.buffers.gmx) = "tileyoff"];
  bool has_vertical_offset() const;
  void clear_vertical_offset();
  static const int kVerticalOffsetFieldNumber = 8;
  ::google::protobuf::int32 vertical_offset() const;
  void set_vertical_offset(::google::protobuf::int32 value);

  // optional int32 horizontal_spacing = 9 [(.buffers.gmx) = "tilehsep"];
  bool has_horizontal_spacing() const;
  void clear_horizontal_spacing();
  static const int kHorizontalSpacingFieldNumber = 9;
  ::google::protobuf::int32 horizontal_spacing() const;
  void set_horizontal_spacing(::google::protobuf::int32 value);

  // optional int32 vertical_spacing = 10 [(.buffers.gmx) = "tilevsep"];
  bool has_vertical_spacing() const;
  void clear_vertical_spacing();
  static const int kVerticalSpacingFieldNumber = 10;
  ::google::protobuf::int32 vertical_spacing() const;
  void set_vertical_spacing(::google::protobuf::int32 value);

  // optional int32 h_tile = 11 [(.buffers.gmx) = "HTile"];
  bool has_h_tile() const;
  void clear_h_tile();
  static const int kHTileFieldNumber = 11;
  ::google::protobuf::int32 h_tile() const;
  void set_h_tile(::google::protobuf::int32 value);

  // optional int32 v_tile = 12 [(.buffers.gmx) = "VTile"];
  bool has_v_tile() const;
  void clear_v_tile();
  static const int kVTileFieldNumber = 12;
  ::google::protobuf::int32 v_tile() const;
  void set_v_tile(::google::protobuf::int32 value);

  // optional int32 texture_group = 13 [(.buffers.gmx) = "TextureGroups/TextureGroup0"];
  bool has_texture_group() const;
  void clear_texture_group();
  static const int kTextureGroupFieldNumber = 13;
  ::google::protobuf::int32 texture_group() const;
  void set_texture_group(::google::protobuf::int32 value);

  // optional uint32 width = 15;
  bool has_width() const;
  void clear_width();
  static const int kWidthFieldNumber = 15;
  ::google::protobuf::uint32 width() const;
  void set_width(::google::protobuf::uint32 value);

  // optional uint32 height = 16;
  bool has_height() const;
  void clear_height();
  static const int kHeightFieldNumber = 16;
  ::google::protobuf::uint32 height() const;
  void set_height(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:buffers.resources.Background)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_preload();
  void clear_has_preload();
  void set_has_smooth_edges();
  void clear_has_smooth_edges();
  void set_has_use_as_tileset();
  void clear_has_use_as_tileset();
  void set_has_tile_width();
  void clear_has_tile_width();
  void set_has_tile_height();
  void clear_has_tile_height();
  void set_has_horizontal_offset();
  void clear_has_horizontal_offset();
  void set_has_vertical_offset();
  void clear_has_vertical_offset();
  void set_has_horizontal_spacing();
  void clear_has_horizontal_spacing();
  void set_has_vertical_spacing();
  void clear_has_vertical_spacing();
  void set_has_h_tile();
  void clear_has_h_tile();
  void set_has_v_tile();
  void clear_has_v_tile();
  void set_has_texture_group();
  void clear_has_texture_group();
  void set_has_for3d();
  void clear_has_for3d();
  void set_has_width();
  void clear_has_width();
  void set_has_height();
  void clear_has_height();
  void set_has_image();
  void clear_has_image();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr image_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 tile_width_;
  bool preload_;
  bool smooth_edges_;
  bool use_as_tileset_;
  bool for3d_;
  ::google::protobuf::int32 tile_height_;
  ::google::protobuf::int32 horizontal_offset_;
  ::google::protobuf::int32 vertical_offset_;
  ::google::protobuf::int32 horizontal_spacing_;
  ::google::protobuf::int32 vertical_spacing_;
  ::google::protobuf::int32 h_tile_;
  ::google::protobuf::int32 v_tile_;
  ::google::protobuf::int32 texture_group_;
  ::google::protobuf::uint32 width_;
  ::google::protobuf::uint32 height_;
  friend struct ::protobuf_Background_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Background

// optional int32 id = 1 [(.buffers.gmx) = "GMX_DEPRECATED"];
inline bool Background::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Background::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Background::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Background::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Background::id() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Background.id)
  return id_;
}
inline void Background::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Background.id)
}

// optional bool preload = 2 [(.buffers.gmx) = "GMX_DEPRECATED"];
inline bool Background::has_preload() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Background::set_has_preload() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Background::clear_has_preload() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Background::clear_preload() {
  preload_ = false;
  clear_has_preload();
}
inline bool Background::preload() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Background.preload)
  return preload_;
}
inline void Background::set_preload(bool value) {
  set_has_preload();
  preload_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Background.preload)
}

// optional bool smooth_edges = 3 [(.buffers.gmx) = "GMX_DEPRECATED"];
inline bool Background::has_smooth_edges() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Background::set_has_smooth_edges() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Background::clear_has_smooth_edges() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Background::clear_smooth_edges() {
  smooth_edges_ = false;
  clear_has_smooth_edges();
}
inline bool Background::smooth_edges() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Background.smooth_edges)
  return smooth_edges_;
}
inline void Background::set_smooth_edges(bool value) {
  set_has_smooth_edges();
  smooth_edges_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Background.smooth_edges)
}

// optional bool use_as_tileset = 4 [(.buffers.gmx) = "istileset"];
inline bool Background::has_use_as_tileset() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Background::set_has_use_as_tileset() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Background::clear_has_use_as_tileset() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Background::clear_use_as_tileset() {
  use_as_tileset_ = false;
  clear_has_use_as_tileset();
}
inline bool Background::use_as_tileset() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Background.use_as_tileset)
  return use_as_tileset_;
}
inline void Background::set_use_as_tileset(bool value) {
  set_has_use_as_tileset();
  use_as_tileset_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Background.use_as_tileset)
}

// optional int32 tile_width = 5 [(.buffers.gmx) = "tilewidth"];
inline bool Background::has_tile_width() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Background::set_has_tile_width() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Background::clear_has_tile_width() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Background::clear_tile_width() {
  tile_width_ = 0;
  clear_has_tile_width();
}
inline ::google::protobuf::int32 Background::tile_width() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Background.tile_width)
  return tile_width_;
}
inline void Background::set_tile_width(::google::protobuf::int32 value) {
  set_has_tile_width();
  tile_width_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Background.tile_width)
}

// optional int32 tile_height = 6 [(.buffers.gmx) = "tileheight"];
inline bool Background::has_tile_height() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Background::set_has_tile_height() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Background::clear_has_tile_height() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Background::clear_tile_height() {
  tile_height_ = 0;
  clear_has_tile_height();
}
inline ::google::protobuf::int32 Background::tile_height() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Background.tile_height)
  return tile_height_;
}
inline void Background::set_tile_height(::google::protobuf::int32 value) {
  set_has_tile_height();
  tile_height_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Background.tile_height)
}

// optional int32 horizontal_offset = 7 [(.buffers.gmx) = "tilexoff"];
inline bool Background::has_horizontal_offset() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Background::set_has_horizontal_offset() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Background::clear_has_horizontal_offset() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Background::clear_horizontal_offset() {
  horizontal_offset_ = 0;
  clear_has_horizontal_offset();
}
inline ::google::protobuf::int32 Background::horizontal_offset() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Background.horizontal_offset)
  return horizontal_offset_;
}
inline void Background::set_horizontal_offset(::google::protobuf::int32 value) {
  set_has_horizontal_offset();
  horizontal_offset_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Background.horizontal_offset)
}

// optional int32 vertical_offset = 8 [(.buffers.gmx) = "tileyoff"];
inline bool Background::has_vertical_offset() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Background::set_has_vertical_offset() {
  _has_bits_[0] |= 0x00000200u;
}
inline void Background::clear_has_vertical_offset() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void Background::clear_vertical_offset() {
  vertical_offset_ = 0;
  clear_has_vertical_offset();
}
inline ::google::protobuf::int32 Background::vertical_offset() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Background.vertical_offset)
  return vertical_offset_;
}
inline void Background::set_vertical_offset(::google::protobuf::int32 value) {
  set_has_vertical_offset();
  vertical_offset_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Background.vertical_offset)
}

// optional int32 horizontal_spacing = 9 [(.buffers.gmx) = "tilehsep"];
inline bool Background::has_horizontal_spacing() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void Background::set_has_horizontal_spacing() {
  _has_bits_[0] |= 0x00000400u;
}
inline void Background::clear_has_horizontal_spacing() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void Background::clear_horizontal_spacing() {
  horizontal_spacing_ = 0;
  clear_has_horizontal_spacing();
}
inline ::google::protobuf::int32 Background::horizontal_spacing() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Background.horizontal_spacing)
  return horizontal_spacing_;
}
inline void Background::set_horizontal_spacing(::google::protobuf::int32 value) {
  set_has_horizontal_spacing();
  horizontal_spacing_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Background.horizontal_spacing)
}

// optional int32 vertical_spacing = 10 [(.buffers.gmx) = "tilevsep"];
inline bool Background::has_vertical_spacing() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void Background::set_has_vertical_spacing() {
  _has_bits_[0] |= 0x00000800u;
}
inline void Background::clear_has_vertical_spacing() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void Background::clear_vertical_spacing() {
  vertical_spacing_ = 0;
  clear_has_vertical_spacing();
}
inline ::google::protobuf::int32 Background::vertical_spacing() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Background.vertical_spacing)
  return vertical_spacing_;
}
inline void Background::set_vertical_spacing(::google::protobuf::int32 value) {
  set_has_vertical_spacing();
  vertical_spacing_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Background.vertical_spacing)
}

// optional int32 h_tile = 11 [(.buffers.gmx) = "HTile"];
inline bool Background::has_h_tile() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void Background::set_has_h_tile() {
  _has_bits_[0] |= 0x00001000u;
}
inline void Background::clear_has_h_tile() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void Background::clear_h_tile() {
  h_tile_ = 0;
  clear_has_h_tile();
}
inline ::google::protobuf::int32 Background::h_tile() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Background.h_tile)
  return h_tile_;
}
inline void Background::set_h_tile(::google::protobuf::int32 value) {
  set_has_h_tile();
  h_tile_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Background.h_tile)
}

// optional int32 v_tile = 12 [(.buffers.gmx) = "VTile"];
inline bool Background::has_v_tile() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void Background::set_has_v_tile() {
  _has_bits_[0] |= 0x00002000u;
}
inline void Background::clear_has_v_tile() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void Background::clear_v_tile() {
  v_tile_ = 0;
  clear_has_v_tile();
}
inline ::google::protobuf::int32 Background::v_tile() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Background.v_tile)
  return v_tile_;
}
inline void Background::set_v_tile(::google::protobuf::int32 value) {
  set_has_v_tile();
  v_tile_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Background.v_tile)
}

// optional int32 texture_group = 13 [(.buffers.gmx) = "TextureGroups/TextureGroup0"];
inline bool Background::has_texture_group() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void Background::set_has_texture_group() {
  _has_bits_[0] |= 0x00004000u;
}
inline void Background::clear_has_texture_group() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void Background::clear_texture_group() {
  texture_group_ = 0;
  clear_has_texture_group();
}
inline ::google::protobuf::int32 Background::texture_group() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Background.texture_group)
  return texture_group_;
}
inline void Background::set_texture_group(::google::protobuf::int32 value) {
  set_has_texture_group();
  texture_group_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Background.texture_group)
}

// optional bool for3D = 14 [(.buffers.gmx) = "For3D"];
inline bool Background::has_for3d() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Background::set_has_for3d() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Background::clear_has_for3d() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Background::clear_for3d() {
  for3d_ = false;
  clear_has_for3d();
}
inline bool Background::for3d() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Background.for3D)
  return for3d_;
}
inline void Background::set_for3d(bool value) {
  set_has_for3d();
  for3d_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Background.for3D)
}

// optional uint32 width = 15;
inline bool Background::has_width() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void Background::set_has_width() {
  _has_bits_[0] |= 0x00008000u;
}
inline void Background::clear_has_width() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void Background::clear_width() {
  width_ = 0u;
  clear_has_width();
}
inline ::google::protobuf::uint32 Background::width() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Background.width)
  return width_;
}
inline void Background::set_width(::google::protobuf::uint32 value) {
  set_has_width();
  width_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Background.width)
}

// optional uint32 height = 16;
inline bool Background::has_height() const {
  return (_has_bits_[0] & 0x00010000u) != 0;
}
inline void Background::set_has_height() {
  _has_bits_[0] |= 0x00010000u;
}
inline void Background::clear_has_height() {
  _has_bits_[0] &= ~0x00010000u;
}
inline void Background::clear_height() {
  height_ = 0u;
  clear_has_height();
}
inline ::google::protobuf::uint32 Background::height() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Background.height)
  return height_;
}
inline void Background::set_height(::google::protobuf::uint32 value) {
  set_has_height();
  height_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Background.height)
}

// optional string image = 17 [(.buffers.file_path) = true, (.buffers.gmx) = "data"];
inline bool Background::has_image() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Background::set_has_image() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Background::clear_has_image() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Background::clear_image() {
  image_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_image();
}
inline const ::std::string& Background::image() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Background.image)
  return image_.GetNoArena();
}
inline void Background::set_image(const ::std::string& value) {
  set_has_image();
  image_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:buffers.resources.Background.image)
}
#if LANG_CXX11
inline void Background::set_image(::std::string&& value) {
  set_has_image();
  image_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:buffers.resources.Background.image)
}
#endif
inline void Background::set_image(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_image();
  image_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:buffers.resources.Background.image)
}
inline void Background::set_image(const char* value, size_t size) {
  set_has_image();
  image_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:buffers.resources.Background.image)
}
inline ::std::string* Background::mutable_image() {
  set_has_image();
  // @@protoc_insertion_point(field_mutable:buffers.resources.Background.image)
  return image_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Background::release_image() {
  // @@protoc_insertion_point(field_release:buffers.resources.Background.image)
  if (!has_image()) {
    return NULL;
  }
  clear_has_image();
  return image_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Background::set_allocated_image(::std::string* image) {
  if (image != NULL) {
    set_has_image();
  } else {
    clear_has_image();
  }
  image_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), image);
  // @@protoc_insertion_point(field_set_allocated:buffers.resources.Background.image)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace resources
}  // namespace buffers

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_Background_2eproto
