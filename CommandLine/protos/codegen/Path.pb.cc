// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Path.proto

#include "Path.pb.h"

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

namespace protobuf_Path_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_Path_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Path_Point;
}  // namespace protobuf_Path_2eproto
namespace buffers {
namespace resources {
class Path_PointDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Path_Point>
      _instance;
} _Path_Point_default_instance_;
class PathDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Path>
      _instance;
} _Path_default_instance_;
}  // namespace resources
}  // namespace buffers
namespace protobuf_Path_2eproto {
static void InitDefaultsPath_Point() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::buffers::resources::_Path_Point_default_instance_;
    new (ptr) ::buffers::resources::Path_Point();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::buffers::resources::Path_Point::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Path_Point =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsPath_Point}, {}};

static void InitDefaultsPath() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::buffers::resources::_Path_default_instance_;
    new (ptr) ::buffers::resources::Path();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::buffers::resources::Path::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Path =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsPath}, {
      &protobuf_Path_2eproto::scc_info_Path_Point.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Path_Point.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Path.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Path_Point, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Path_Point, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Path_Point, x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Path_Point, y_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Path_Point, speed_),
  0,
  1,
  2,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Path, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Path, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Path, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Path, background_room_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Path, hsnap_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Path, vsnap_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Path, smooth_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Path, closed_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Path, precision_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::resources::Path, points_),
  1,
  0,
  2,
  3,
  4,
  5,
  6,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::buffers::resources::Path_Point)},
  { 11, 24, sizeof(::buffers::resources::Path)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::buffers::resources::_Path_Point_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::buffers::resources::_Path_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "Path.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\nPath.proto\022\021buffers.resources\032\roptions"
      ".proto\"\317\002\n\004Path\022\036\n\002id\030\002 \001(\005B\022\222\265\030\016GMX_DEP"
      "RECATED\022*\n\024background_room_name\030\003 \001(\tB\014\232"
      "\265\030\010backroom\022\r\n\005hsnap\030\004 \001(\005\022\r\n\005vsnap\030\005 \001("
      "\005\022\030\n\006smooth\030\006 \001(\010B\010\222\265\030\004kind\022\016\n\006closed\030\007 "
      "\001(\010\022\021\n\tprecision\030\010 \001(\005\022\?\n\006points\030\t \003(\0132\035"
      ".buffers.resources.Path.PointB\020\222\265\030\014point"
      "s/point\032_\n\005Point\022\032\n\001x\030\001 \001(\005B\017\222\265\030\013GMX_SPL"
      "IT/0\022\032\n\001y\030\002 \001(\005B\017\222\265\030\013GMX_SPLIT/1\022\036\n\005spee"
      "d\030\003 \001(\005B\017\222\265\030\013GMX_SPLIT/2"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 384);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Path.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_Path_2eproto
namespace buffers {
namespace resources {

// ===================================================================

void Path_Point::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Path_Point::kXFieldNumber;
const int Path_Point::kYFieldNumber;
const int Path_Point::kSpeedFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Path_Point::Path_Point()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_Path_2eproto::scc_info_Path_Point.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:buffers.resources.Path.Point)
}
Path_Point::Path_Point(const Path_Point& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&speed_) -
    reinterpret_cast<char*>(&x_)) + sizeof(speed_));
  // @@protoc_insertion_point(copy_constructor:buffers.resources.Path.Point)
}

void Path_Point::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&speed_) -
      reinterpret_cast<char*>(&x_)) + sizeof(speed_));
}

Path_Point::~Path_Point() {
  // @@protoc_insertion_point(destructor:buffers.resources.Path.Point)
  SharedDtor();
}

void Path_Point::SharedDtor() {
}

void Path_Point::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Path_Point::descriptor() {
  ::protobuf_Path_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Path_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Path_Point& Path_Point::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_Path_2eproto::scc_info_Path_Point.base);
  return *internal_default_instance();
}


void Path_Point::Clear() {
// @@protoc_insertion_point(message_clear_start:buffers.resources.Path.Point)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    ::memset(&x_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&speed_) -
        reinterpret_cast<char*>(&x_)) + sizeof(speed_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Path_Point::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:buffers.resources.Path.Point)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 x = 1 [(.buffers.gmx) = "GMX_SPLIT/0"];
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_x();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 y = 2 [(.buffers.gmx) = "GMX_SPLIT/1"];
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_y();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 speed = 3 [(.buffers.gmx) = "GMX_SPLIT/2"];
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_speed();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &speed_)));
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
  // @@protoc_insertion_point(parse_success:buffers.resources.Path.Point)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:buffers.resources.Path.Point)
  return false;
#undef DO_
}

void Path_Point::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:buffers.resources.Path.Point)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 x = 1 [(.buffers.gmx) = "GMX_SPLIT/0"];
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->x(), output);
  }

  // optional int32 y = 2 [(.buffers.gmx) = "GMX_SPLIT/1"];
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->y(), output);
  }

  // optional int32 speed = 3 [(.buffers.gmx) = "GMX_SPLIT/2"];
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->speed(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:buffers.resources.Path.Point)
}

::google::protobuf::uint8* Path_Point::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:buffers.resources.Path.Point)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 x = 1 [(.buffers.gmx) = "GMX_SPLIT/0"];
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->x(), target);
  }

  // optional int32 y = 2 [(.buffers.gmx) = "GMX_SPLIT/1"];
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->y(), target);
  }

  // optional int32 speed = 3 [(.buffers.gmx) = "GMX_SPLIT/2"];
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->speed(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:buffers.resources.Path.Point)
  return target;
}

size_t Path_Point::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:buffers.resources.Path.Point)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional int32 x = 1 [(.buffers.gmx) = "GMX_SPLIT/0"];
    if (has_x()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->x());
    }

    // optional int32 y = 2 [(.buffers.gmx) = "GMX_SPLIT/1"];
    if (has_y()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->y());
    }

    // optional int32 speed = 3 [(.buffers.gmx) = "GMX_SPLIT/2"];
    if (has_speed()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->speed());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Path_Point::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:buffers.resources.Path.Point)
  GOOGLE_DCHECK_NE(&from, this);
  const Path_Point* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Path_Point>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:buffers.resources.Path.Point)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:buffers.resources.Path.Point)
    MergeFrom(*source);
  }
}

void Path_Point::MergeFrom(const Path_Point& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:buffers.resources.Path.Point)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      x_ = from.x_;
    }
    if (cached_has_bits & 0x00000002u) {
      y_ = from.y_;
    }
    if (cached_has_bits & 0x00000004u) {
      speed_ = from.speed_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Path_Point::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:buffers.resources.Path.Point)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Path_Point::CopyFrom(const Path_Point& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:buffers.resources.Path.Point)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Path_Point::IsInitialized() const {
  return true;
}

void Path_Point::Swap(Path_Point* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Path_Point::InternalSwap(Path_Point* other) {
  using std::swap;
  swap(x_, other->x_);
  swap(y_, other->y_);
  swap(speed_, other->speed_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Path_Point::GetMetadata() const {
  protobuf_Path_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Path_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Path::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Path::kIdFieldNumber;
const int Path::kBackgroundRoomNameFieldNumber;
const int Path::kHsnapFieldNumber;
const int Path::kVsnapFieldNumber;
const int Path::kSmoothFieldNumber;
const int Path::kClosedFieldNumber;
const int Path::kPrecisionFieldNumber;
const int Path::kPointsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Path::Path()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_Path_2eproto::scc_info_Path.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:buffers.resources.Path)
}
Path::Path(const Path& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      points_(from.points_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  background_room_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_background_room_name()) {
    background_room_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.background_room_name_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&precision_) -
    reinterpret_cast<char*>(&id_)) + sizeof(precision_));
  // @@protoc_insertion_point(copy_constructor:buffers.resources.Path)
}

void Path::SharedCtor() {
  background_room_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&precision_) -
      reinterpret_cast<char*>(&id_)) + sizeof(precision_));
}

Path::~Path() {
  // @@protoc_insertion_point(destructor:buffers.resources.Path)
  SharedDtor();
}

void Path::SharedDtor() {
  background_room_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Path::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Path::descriptor() {
  ::protobuf_Path_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Path_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Path& Path::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_Path_2eproto::scc_info_Path.base);
  return *internal_default_instance();
}


void Path::Clear() {
// @@protoc_insertion_point(message_clear_start:buffers.resources.Path)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  points_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    background_room_name_.ClearNonDefaultToEmptyNoArena();
  }
  if (cached_has_bits & 126u) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&precision_) -
        reinterpret_cast<char*>(&id_)) + sizeof(precision_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Path::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:buffers.resources.Path)
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

      // optional string background_room_name = 3 [(.buffers.gmx_id) = "backroom"];
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_background_room_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->background_room_name().data(), static_cast<int>(this->background_room_name().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "buffers.resources.Path.background_room_name");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 hsnap = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_hsnap();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &hsnap_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 vsnap = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          set_has_vsnap();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &vsnap_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool smooth = 6 [(.buffers.gmx) = "kind"];
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {
          set_has_smooth();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &smooth_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool closed = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {
          set_has_closed();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &closed_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 precision = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {
          set_has_precision();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &precision_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .buffers.resources.Path.Point points = 9 [(.buffers.gmx) = "points/point"];
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_points()));
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
  // @@protoc_insertion_point(parse_success:buffers.resources.Path)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:buffers.resources.Path)
  return false;
#undef DO_
}

void Path::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:buffers.resources.Path)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 id = 2 [(.buffers.gmx) = "GMX_DEPRECATED"];
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->id(), output);
  }

  // optional string background_room_name = 3 [(.buffers.gmx_id) = "backroom"];
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->background_room_name().data(), static_cast<int>(this->background_room_name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Path.background_room_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->background_room_name(), output);
  }

  // optional int32 hsnap = 4;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->hsnap(), output);
  }

  // optional int32 vsnap = 5;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->vsnap(), output);
  }

  // optional bool smooth = 6 [(.buffers.gmx) = "kind"];
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->smooth(), output);
  }

  // optional bool closed = 7;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->closed(), output);
  }

  // optional int32 precision = 8;
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->precision(), output);
  }

  // repeated .buffers.resources.Path.Point points = 9 [(.buffers.gmx) = "points/point"];
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->points_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9,
      this->points(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:buffers.resources.Path)
}

::google::protobuf::uint8* Path::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:buffers.resources.Path)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 id = 2 [(.buffers.gmx) = "GMX_DEPRECATED"];
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->id(), target);
  }

  // optional string background_room_name = 3 [(.buffers.gmx_id) = "backroom"];
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->background_room_name().data(), static_cast<int>(this->background_room_name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "buffers.resources.Path.background_room_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->background_room_name(), target);
  }

  // optional int32 hsnap = 4;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->hsnap(), target);
  }

  // optional int32 vsnap = 5;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->vsnap(), target);
  }

  // optional bool smooth = 6 [(.buffers.gmx) = "kind"];
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->smooth(), target);
  }

  // optional bool closed = 7;
  if (cached_has_bits & 0x00000020u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->closed(), target);
  }

  // optional int32 precision = 8;
  if (cached_has_bits & 0x00000040u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->precision(), target);
  }

  // repeated .buffers.resources.Path.Point points = 9 [(.buffers.gmx) = "points/point"];
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->points_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        9, this->points(static_cast<int>(i)), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:buffers.resources.Path)
  return target;
}

size_t Path::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:buffers.resources.Path)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated .buffers.resources.Path.Point points = 9 [(.buffers.gmx) = "points/point"];
  {
    unsigned int count = static_cast<unsigned int>(this->points_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->points(static_cast<int>(i)));
    }
  }

  if (_has_bits_[0 / 32] & 127u) {
    // optional string background_room_name = 3 [(.buffers.gmx_id) = "backroom"];
    if (has_background_room_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->background_room_name());
    }

    // optional int32 id = 2 [(.buffers.gmx) = "GMX_DEPRECATED"];
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 hsnap = 4;
    if (has_hsnap()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->hsnap());
    }

    // optional int32 vsnap = 5;
    if (has_vsnap()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->vsnap());
    }

    // optional bool smooth = 6 [(.buffers.gmx) = "kind"];
    if (has_smooth()) {
      total_size += 1 + 1;
    }

    // optional bool closed = 7;
    if (has_closed()) {
      total_size += 1 + 1;
    }

    // optional int32 precision = 8;
    if (has_precision()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->precision());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Path::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:buffers.resources.Path)
  GOOGLE_DCHECK_NE(&from, this);
  const Path* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Path>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:buffers.resources.Path)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:buffers.resources.Path)
    MergeFrom(*source);
  }
}

void Path::MergeFrom(const Path& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:buffers.resources.Path)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  points_.MergeFrom(from.points_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 127u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_background_room_name();
      background_room_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.background_room_name_);
    }
    if (cached_has_bits & 0x00000002u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000004u) {
      hsnap_ = from.hsnap_;
    }
    if (cached_has_bits & 0x00000008u) {
      vsnap_ = from.vsnap_;
    }
    if (cached_has_bits & 0x00000010u) {
      smooth_ = from.smooth_;
    }
    if (cached_has_bits & 0x00000020u) {
      closed_ = from.closed_;
    }
    if (cached_has_bits & 0x00000040u) {
      precision_ = from.precision_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Path::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:buffers.resources.Path)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Path::CopyFrom(const Path& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:buffers.resources.Path)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Path::IsInitialized() const {
  return true;
}

void Path::Swap(Path* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Path::InternalSwap(Path* other) {
  using std::swap;
  CastToBase(&points_)->InternalSwap(CastToBase(&other->points_));
  background_room_name_.Swap(&other->background_room_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
  swap(hsnap_, other->hsnap_);
  swap(vsnap_, other->vsnap_);
  swap(smooth_, other->smooth_);
  swap(closed_, other->closed_);
  swap(precision_, other->precision_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Path::GetMetadata() const {
  protobuf_Path_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Path_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace resources
}  // namespace buffers
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::buffers::resources::Path_Point* Arena::CreateMaybeMessage< ::buffers::resources::Path_Point >(Arena* arena) {
  return Arena::CreateInternal< ::buffers::resources::Path_Point >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::buffers::resources::Path* Arena::CreateMaybeMessage< ::buffers::resources::Path >(Arena* arena) {
  return Arena::CreateInternal< ::buffers::resources::Path >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
