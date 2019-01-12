// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Include.proto

#include "Include.pb.h"

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
class IncludeDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Include>
      _instance;
} _Include_default_instance_;
}  // namespace resources
}  // namespace buffers
namespace protobuf_Include_2eproto {
static void InitDefaultsInclude() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::buffers::resources::_Include_default_instance_;
    new (ptr) ::buffers::resources::Include();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::buffers::resources::Include::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Include =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsInclude}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Include.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Include, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Include, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Include, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Include, exists_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Include, size_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Include, export_action_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Include, export_directory_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Include, overwrite_existing_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Include, free_after_export_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Include, remove_at_game_end_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Include, store_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Include, file_name_),
  2,
  5,
  3,
  4,
  0,
  6,
  7,
  8,
  9,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 15, sizeof(::buffers::resources::Include)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::buffers::resources::_Include_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "Include.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
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
      "\n\rInclude.proto\022\021buffers.resources\032\ropti"
      "ons.proto\"\373\003\n\007Include\022\036\n\002id\030\002 \001(\005B\022\222\265\030\016G"
      "MX_DEPRECATED\022\016\n\006exists\030\004 \001(\010\022\014\n\004size\030\005 "
      "\001(\005\022P\n\rexport_action\030\006 \001(\0162\'.buffers.res"
      "ources.Include.ExportActionB\020\222\265\030\014exportA"
      "ction\022\'\n\020export_directory\030\007 \001(\tB\r\222\265\030\texp"
      "ortDir\022)\n\022overwrite_existing\030\010 \001(\010B\r\222\265\030\t"
      "overwrite\022\'\n\021free_after_export\030\t \001(\010B\014\222\265"
      "\030\010freeData\022)\n\022remove_at_game_end\030\n \001(\010B\r"
      "\222\265\030\tremoveEnd\022\r\n\005store\030\013 \001(\010\022#\n\tfile_nam"
      "e\030\014 \001(\tB\020\222\265\030\010filename\210\265\030\001\"\203\001\n\014ExportActi"
      "on\022\017\n\013DONT_EXPORT\020\000\022!\n\035EXPORT_TO_TEMPORA"
      "RY_DIRECTORY\020\001\022\037\n\033EXPORT_TO_WORKING_DIRE"
      "CTORY\020\002\022\036\n\032EXPORT_TO_CUSTOM_DIRECTORY\020\003"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 559);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Include.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_Include_2eproto
namespace buffers {
namespace resources {
const ::google::protobuf::EnumDescriptor* Include_ExportAction_descriptor() {
  protobuf_Include_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Include_2eproto::file_level_enum_descriptors[0];
}
bool Include_ExportAction_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Include_ExportAction Include::DONT_EXPORT;
const Include_ExportAction Include::EXPORT_TO_TEMPORARY_DIRECTORY;
const Include_ExportAction Include::EXPORT_TO_WORKING_DIRECTORY;
const Include_ExportAction Include::EXPORT_TO_CUSTOM_DIRECTORY;
const Include_ExportAction Include::ExportAction_MIN;
const Include_ExportAction Include::ExportAction_MAX;
const int Include::ExportAction_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Include::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Include::kIdFieldNumber;
const int Include::kExistsFieldNumber;
const int Include::kSizeFieldNumber;
const int Include::kExportActionFieldNumber;
const int Include::kExportDirectoryFieldNumber;
const int Include::kOverwriteExistingFieldNumber;
const int Include::kFreeAfterExportFieldNumber;
const int Include::kRemoveAtGameEndFieldNumber;
const int Include::kStoreFieldNumber;
const int Include::kFileNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Include::Include()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_Include_2eproto::scc_info_Include.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:buffers.resources.Include)
}
Include::Include(const Include& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  export_directory_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_export_directory()) {
    export_directory_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.export_directory_);
  }
  file_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_file_name()) {
    file_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.file_name_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&store_) -
    reinterpret_cast<char*>(&id_)) + sizeof(store_));
  // @@protoc_insertion_point(copy_constructor:buffers.resources.Include)
}

void Include::SharedCtor() {
  export_directory_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  file_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&store_) -
      reinterpret_cast<char*>(&id_)) + sizeof(store_));
}

Include::~Include() {
  // @@protoc_insertion_point(destructor:buffers.resources.Include)
  SharedDtor();
}

void Include::SharedDtor() {
  export_directory_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  file_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Include::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Include::descriptor() {
  ::protobuf_Include_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Include_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Include& Include::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_Include_2eproto::scc_info_Include.base);
  return *internal_default_instance();
}


void Include::Clear() {
// @@protoc_insertion_point(message_clear_start:buffers.resources.Include)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      export_directory_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      file_name_.ClearNonDefaultToEmptyNoArena();
    }
  }
  if (cached_has_bits & 252u) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&free_after_export_) -
        reinterpret_cast<char*>(&id_)) + sizeof(free_after_export_));
  }
  if (cached_has_bits & 768u) {
    ::memset(&remove_at_game_end_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&store_) -
        reinterpret_cast<char*>(&remove_at_game_end_)) + sizeof(store_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Include::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:buffers.resources.Include)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 2 [(.buffers.gmx) = "GMX_DEPRECATED"];
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

      // optional bool exists = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_exists();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &exists_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 size = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          set_has_size();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &size_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .buffers.resources.Include.ExportAction export_action = 6 [(.buffers.gmx) = "exportAction"];
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::buffers::resources::Include_ExportAction_IsValid(value)) {
            set_export_action(static_cast< ::buffers::resources::Include_ExportAction >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                6, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string export_directory = 7 [(.buffers.gmx) = "exportDir"];
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_export_directory()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->export_directory().data(), static_cast<int>(this->export_directory().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "buffers.resources.Include.export_directory");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool overwrite_existing = 8 [(.buffers.gmx) = "overwrite"];
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {
          set_has_overwrite_existing();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &overwrite_existing_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool free_after_export = 9 [(.buffers.gmx) = "freeData"];
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {
          set_has_free_after_export();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &free_after_export_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool remove_at_game_end = 10 [(.buffers.gmx) = "removeEnd"];
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {
          set_has_remove_at_game_end();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &remove_at_game_end_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool store = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {
          set_has_store();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &store_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string file_name = 12 [(.buffers.file_path) = true, (.buffers.gmx) = "filename"];
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_file_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->file_name().data(), static_cast<int>(this->file_name().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "buffers.resources.Include.file_name");
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
  // @@protoc_insertion_point(parse_success:buffers.resources.Include)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:buffers.resources.Include)
  return false;
#undef DO_
}

void Include::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:buffers.resources.Include)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 id = 2 [(.buffers.gmx) = "GMX_DEPRECATED"];
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->id(), output);
  }

  // optional bool exists = 4;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->exists(), output);
  }

  // optional int32 size = 5;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->size(), output);
  }

  // optional .buffers.resources.Include.ExportAction export_action = 6 [(.buffers.gmx) = "exportAction"];
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      6, this->export_action(), output);
  }

  // optional string export_directory = 7 [(.buffers.gmx) = "exportDir"];
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->export_directory().data(), static_cast<int>(this->export_directory().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Include.export_directory");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->export_directory(), output);
  }

  // optional bool overwrite_existing = 8 [(.buffers.gmx) = "overwrite"];
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->overwrite_existing(), output);
  }

  // optional bool free_after_export = 9 [(.buffers.gmx) = "freeData"];
  if (cached_has_bits & 0x00000080u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(9, this->free_after_export(), output);
  }

  // optional bool remove_at_game_end = 10 [(.buffers.gmx) = "removeEnd"];
  if (cached_has_bits & 0x00000100u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(10, this->remove_at_game_end(), output);
  }

  // optional bool store = 11;
  if (cached_has_bits & 0x00000200u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(11, this->store(), output);
  }

  // optional string file_name = 12 [(.buffers.file_path) = true, (.buffers.gmx) = "filename"];
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->file_name().data(), static_cast<int>(this->file_name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Include.file_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      12, this->file_name(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:buffers.resources.Include)
}

::google::protobuf::uint8* Include::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:buffers.resources.Include)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 id = 2 [(.buffers.gmx) = "GMX_DEPRECATED"];
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->id(), target);
  }

  // optional bool exists = 4;
  if (cached_has_bits & 0x00000020u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->exists(), target);
  }

  // optional int32 size = 5;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->size(), target);
  }

  // optional .buffers.resources.Include.ExportAction export_action = 6 [(.buffers.gmx) = "exportAction"];
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      6, this->export_action(), target);
  }

  // optional string export_directory = 7 [(.buffers.gmx) = "exportDir"];
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->export_directory().data(), static_cast<int>(this->export_directory().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Include.export_directory");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->export_directory(), target);
  }

  // optional bool overwrite_existing = 8 [(.buffers.gmx) = "overwrite"];
  if (cached_has_bits & 0x00000040u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->overwrite_existing(), target);
  }

  // optional bool free_after_export = 9 [(.buffers.gmx) = "freeData"];
  if (cached_has_bits & 0x00000080u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(9, this->free_after_export(), target);
  }

  // optional bool remove_at_game_end = 10 [(.buffers.gmx) = "removeEnd"];
  if (cached_has_bits & 0x00000100u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(10, this->remove_at_game_end(), target);
  }

  // optional bool store = 11;
  if (cached_has_bits & 0x00000200u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(11, this->store(), target);
  }

  // optional string file_name = 12 [(.buffers.file_path) = true, (.buffers.gmx) = "filename"];
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->file_name().data(), static_cast<int>(this->file_name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Include.file_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        12, this->file_name(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:buffers.resources.Include)
  return target;
}

size_t Include::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:buffers.resources.Include)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 255u) {
    // optional string export_directory = 7 [(.buffers.gmx) = "exportDir"];
    if (has_export_directory()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->export_directory());
    }

    // optional string file_name = 12 [(.buffers.file_path) = true, (.buffers.gmx) = "filename"];
    if (has_file_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->file_name());
    }

    // optional int32 id = 2 [(.buffers.gmx) = "GMX_DEPRECATED"];
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 size = 5;
    if (has_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->size());
    }

    // optional .buffers.resources.Include.ExportAction export_action = 6 [(.buffers.gmx) = "exportAction"];
    if (has_export_action()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->export_action());
    }

    // optional bool exists = 4;
    if (has_exists()) {
      total_size += 1 + 1;
    }

    // optional bool overwrite_existing = 8 [(.buffers.gmx) = "overwrite"];
    if (has_overwrite_existing()) {
      total_size += 1 + 1;
    }

    // optional bool free_after_export = 9 [(.buffers.gmx) = "freeData"];
    if (has_free_after_export()) {
      total_size += 1 + 1;
    }

  }
  if (_has_bits_[8 / 32] & 768u) {
    // optional bool remove_at_game_end = 10 [(.buffers.gmx) = "removeEnd"];
    if (has_remove_at_game_end()) {
      total_size += 1 + 1;
    }

    // optional bool store = 11;
    if (has_store()) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Include::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:buffers.resources.Include)
  GOOGLE_DCHECK_NE(&from, this);
  const Include* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Include>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:buffers.resources.Include)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:buffers.resources.Include)
    MergeFrom(*source);
  }
}

void Include::MergeFrom(const Include& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:buffers.resources.Include)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 255u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_export_directory();
      export_directory_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.export_directory_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_file_name();
      file_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.file_name_);
    }
    if (cached_has_bits & 0x00000004u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000008u) {
      size_ = from.size_;
    }
    if (cached_has_bits & 0x00000010u) {
      export_action_ = from.export_action_;
    }
    if (cached_has_bits & 0x00000020u) {
      exists_ = from.exists_;
    }
    if (cached_has_bits & 0x00000040u) {
      overwrite_existing_ = from.overwrite_existing_;
    }
    if (cached_has_bits & 0x00000080u) {
      free_after_export_ = from.free_after_export_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 768u) {
    if (cached_has_bits & 0x00000100u) {
      remove_at_game_end_ = from.remove_at_game_end_;
    }
    if (cached_has_bits & 0x00000200u) {
      store_ = from.store_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Include::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:buffers.resources.Include)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Include::CopyFrom(const Include& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:buffers.resources.Include)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Include::IsInitialized() const {
  return true;
}

void Include::Swap(Include* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Include::InternalSwap(Include* other) {
  using std::swap;
  export_directory_.Swap(&other->export_directory_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  file_name_.Swap(&other->file_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
  swap(size_, other->size_);
  swap(export_action_, other->export_action_);
  swap(exists_, other->exists_);
  swap(overwrite_existing_, other->overwrite_existing_);
  swap(free_after_export_, other->free_after_export_);
  swap(remove_at_game_end_, other->remove_at_game_end_);
  swap(store_, other->store_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Include::GetMetadata() const {
  protobuf_Include_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Include_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace resources
}  // namespace buffers
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::buffers::resources::Include* Arena::CreateMaybeMessage< ::buffers::resources::Include >(Arena* arena) {
  return Arena::CreateInternal< ::buffers::resources::Include >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
