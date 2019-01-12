// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Script.proto

#ifndef PROTOBUF_INCLUDED_Script_2eproto
#define PROTOBUF_INCLUDED_Script_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_Script_2eproto 

namespace protobuf_Script_2eproto {
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
}  // namespace protobuf_Script_2eproto
namespace buffers {
namespace resources {
class Script;
class ScriptDefaultTypeInternal;
extern ScriptDefaultTypeInternal _Script_default_instance_;
}  // namespace resources
}  // namespace buffers
namespace google {
namespace protobuf {
template<> ::buffers::resources::Script* Arena::CreateMaybeMessage<::buffers::resources::Script>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace buffers {
namespace resources {

// ===================================================================

class Script : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:buffers.resources.Script) */ {
 public:
  Script();
  virtual ~Script();

  Script(const Script& from);

  inline Script& operator=(const Script& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Script(Script&& from) noexcept
    : Script() {
    *this = ::std::move(from);
  }

  inline Script& operator=(Script&& from) noexcept {
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
  static const Script& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Script* internal_default_instance() {
    return reinterpret_cast<const Script*>(
               &_Script_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Script* other);
  friend void swap(Script& a, Script& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Script* New() const final {
    return CreateMaybeMessage<Script>(NULL);
  }

  Script* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Script>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Script& from);
  void MergeFrom(const Script& from);
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
  void InternalSwap(Script* other);
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

  // optional string code = 3;
  bool has_code() const;
  void clear_code();
  static const int kCodeFieldNumber = 3;
  const ::std::string& code() const;
  void set_code(const ::std::string& value);
  #if LANG_CXX11
  void set_code(::std::string&& value);
  #endif
  void set_code(const char* value);
  void set_code(const char* value, size_t size);
  ::std::string* mutable_code();
  ::std::string* release_code();
  void set_allocated_code(::std::string* code);

  // optional int32 id = 2;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:buffers.resources.Script)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_code();
  void clear_has_code();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr code_;
  ::google::protobuf::int32 id_;
  friend struct ::protobuf_Script_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Script

// optional int32 id = 2;
inline bool Script::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Script::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Script::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Script::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Script::id() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Script.id)
  return id_;
}
inline void Script::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:buffers.resources.Script.id)
}

// optional string code = 3;
inline bool Script::has_code() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Script::set_has_code() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Script::clear_has_code() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Script::clear_code() {
  code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_code();
}
inline const ::std::string& Script::code() const {
  // @@protoc_insertion_point(field_get:buffers.resources.Script.code)
  return code_.GetNoArena();
}
inline void Script::set_code(const ::std::string& value) {
  set_has_code();
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:buffers.resources.Script.code)
}
#if LANG_CXX11
inline void Script::set_code(::std::string&& value) {
  set_has_code();
  code_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:buffers.resources.Script.code)
}
#endif
inline void Script::set_code(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_code();
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:buffers.resources.Script.code)
}
inline void Script::set_code(const char* value, size_t size) {
  set_has_code();
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:buffers.resources.Script.code)
}
inline ::std::string* Script::mutable_code() {
  set_has_code();
  // @@protoc_insertion_point(field_mutable:buffers.resources.Script.code)
  return code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Script::release_code() {
  // @@protoc_insertion_point(field_release:buffers.resources.Script.code)
  if (!has_code()) {
    return NULL;
  }
  clear_has_code();
  return code_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Script::set_allocated_code(::std::string* code) {
  if (code != NULL) {
    set_has_code();
  } else {
    clear_has_code();
  }
  code_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), code);
  // @@protoc_insertion_point(field_set_allocated:buffers.resources.Script.code)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace resources
}  // namespace buffers

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_Script_2eproto
