// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Shader.proto

#include "Shader.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace buffers {
namespace resources {
class ShaderDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Shader>
      _instance;
} _Shader_default_instance_;
}  // namespace resources
}  // namespace buffers
namespace protobuf_Shader_2eproto {
static void InitDefaultsShader() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::buffers::resources::_Shader_default_instance_;
    new (ptr) ::buffers::resources::Shader();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::buffers::resources::Shader::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Shader =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsShader}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Shader.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Shader, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Shader, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Shader, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Shader, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Shader, precompile_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Shader, vertex_code_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Shader, fragment_code_),
  3,
  0,
  4,
  1,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::buffers::resources::Shader)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::buffers::resources::_Shader_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "Shader.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014Shader.proto\022\021buffers.resources\032\roptio"
      "ns.proto\"b\n\006Shader\022\n\n\002id\030\002 \001(\005\022\014\n\004type\030\003"
      " \001(\t\022\022\n\nprecompile\030\004 \001(\010\022\023\n\013vertex_code\030"
      "\005 \001(\t\022\025\n\rfragment_code\030\006 \001(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 148);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Shader.proto", &protobuf_RegisterTypes);
  ::protobuf_options_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_Shader_2eproto
namespace buffers {
namespace resources {

// ===================================================================

void Shader::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Shader::kIdFieldNumber;
const int Shader::kTypeFieldNumber;
const int Shader::kPrecompileFieldNumber;
const int Shader::kVertexCodeFieldNumber;
const int Shader::kFragmentCodeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Shader::Shader()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_Shader_2eproto::scc_info_Shader.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:buffers.resources.Shader)
}
Shader::Shader(const Shader& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_type()) {
    type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_);
  }
  vertex_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_vertex_code()) {
    vertex_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.vertex_code_);
  }
  fragment_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_fragment_code()) {
    fragment_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.fragment_code_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&precompile_) -
    reinterpret_cast<char*>(&id_)) + sizeof(precompile_));
  // @@protoc_insertion_point(copy_constructor:buffers.resources.Shader)
}

void Shader::SharedCtor() {
  type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  vertex_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fragment_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&precompile_) -
      reinterpret_cast<char*>(&id_)) + sizeof(precompile_));
}

Shader::~Shader() {
  // @@protoc_insertion_point(destructor:buffers.resources.Shader)
  SharedDtor();
}

void Shader::SharedDtor() {
  type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  vertex_code_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fragment_code_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Shader::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Shader::descriptor() {
  ::protobuf_Shader_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Shader_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Shader& Shader::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_Shader_2eproto::scc_info_Shader.base);
  return *internal_default_instance();
}


void Shader::Clear() {
// @@protoc_insertion_point(message_clear_start:buffers.resources.Shader)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      type_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      vertex_code_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      fragment_code_.ClearNonDefaultToEmptyNoArena();
    }
  }
  if (cached_has_bits & 24u) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&precompile_) -
        reinterpret_cast<char*>(&id_)) + sizeof(precompile_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Shader::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:buffers.resources.Shader)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string type = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_type()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->type().data(), static_cast<int>(this->type().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "buffers.resources.Shader.type");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool precompile = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_precompile();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &precompile_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string vertex_code = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_vertex_code()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->vertex_code().data(), static_cast<int>(this->vertex_code().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "buffers.resources.Shader.vertex_code");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string fragment_code = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_fragment_code()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->fragment_code().data(), static_cast<int>(this->fragment_code().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "buffers.resources.Shader.fragment_code");
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:buffers.resources.Shader)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:buffers.resources.Shader)
  return false;
#undef DO_
}

void Shader::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:buffers.resources.Shader)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 id = 2;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->id(), output);
  }

  // optional string type = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->type().data(), static_cast<int>(this->type().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Shader.type");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->type(), output);
  }

  // optional bool precompile = 4;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->precompile(), output);
  }

  // optional string vertex_code = 5;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->vertex_code().data(), static_cast<int>(this->vertex_code().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Shader.vertex_code");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->vertex_code(), output);
  }

  // optional string fragment_code = 6;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->fragment_code().data(), static_cast<int>(this->fragment_code().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Shader.fragment_code");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->fragment_code(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:buffers.resources.Shader)
}

::google::protobuf::uint8* Shader::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:buffers.resources.Shader)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 id = 2;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->id(), target);
  }

  // optional string type = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->type().data(), static_cast<int>(this->type().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Shader.type");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->type(), target);
  }

  // optional bool precompile = 4;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->precompile(), target);
  }

  // optional string vertex_code = 5;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->vertex_code().data(), static_cast<int>(this->vertex_code().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Shader.vertex_code");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->vertex_code(), target);
  }

  // optional string fragment_code = 6;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->fragment_code().data(), static_cast<int>(this->fragment_code().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Shader.fragment_code");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->fragment_code(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:buffers.resources.Shader)
  return target;
}

size_t Shader::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:buffers.resources.Shader)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 31u) {
    // optional string type = 3;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->type());
    }

    // optional string vertex_code = 5;
    if (has_vertex_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->vertex_code());
    }

    // optional string fragment_code = 6;
    if (has_fragment_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->fragment_code());
    }

    // optional int32 id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional bool precompile = 4;
    if (has_precompile()) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Shader::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:buffers.resources.Shader)
  GOOGLE_DCHECK_NE(&from, this);
  const Shader* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Shader>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:buffers.resources.Shader)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:buffers.resources.Shader)
    MergeFrom(*source);
  }
}

void Shader::MergeFrom(const Shader& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:buffers.resources.Shader)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 31u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_type();
      type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_vertex_code();
      vertex_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.vertex_code_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_fragment_code();
      fragment_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.fragment_code_);
    }
    if (cached_has_bits & 0x00000008u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000010u) {
      precompile_ = from.precompile_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Shader::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:buffers.resources.Shader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Shader::CopyFrom(const Shader& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:buffers.resources.Shader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Shader::IsInitialized() const {
  return true;
}

void Shader::Swap(Shader* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Shader::InternalSwap(Shader* other) {
  using std::swap;
  type_.Swap(&other->type_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  vertex_code_.Swap(&other->vertex_code_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  fragment_code_.Swap(&other->fragment_code_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
  swap(precompile_, other->precompile_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Shader::GetMetadata() const {
  protobuf_Shader_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Shader_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace resources
}  // namespace buffers
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::buffers::resources::Shader* Arena::CreateMaybeMessage< ::buffers::resources::Shader >(Arena* arena) {
  return Arena::CreateInternal< ::buffers::resources::Shader >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
