// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: game.proto

#include "game.pb.h"

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

namespace protobuf_treenode_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_treenode_2eproto ::google::protobuf::internal::SCCInfo<12> scc_info_TreeNode;
}  // namespace protobuf_treenode_2eproto
namespace buffers {
class GameDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Game>
      _instance;
} _Game_default_instance_;
}  // namespace buffers
namespace protobuf_game_2eproto {
static void InitDefaultsGame() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::buffers::_Game_default_instance_;
    new (ptr) ::buffers::Game();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::buffers::Game::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Game =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsGame}, {
      &protobuf_treenode_2eproto::scc_info_TreeNode.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Game.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::Game, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::Game, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::buffers::Game, root_),
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::buffers::Game)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::buffers::_Game_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "game.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\ngame.proto\022\007buffers\032\016treenode.proto\"\'\n"
      "\004Game\022\037\n\004root\030\001 \001(\0132\021.buffers.TreeNode"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 78);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "game.proto", &protobuf_RegisterTypes);
  ::protobuf_treenode_2eproto::AddDescriptors();
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
}  // namespace protobuf_game_2eproto
namespace buffers {

// ===================================================================

void Game::InitAsDefaultInstance() {
  ::buffers::_Game_default_instance_._instance.get_mutable()->root_ = const_cast< ::buffers::TreeNode*>(
      ::buffers::TreeNode::internal_default_instance());
}
void Game::clear_root() {
  if (root_ != NULL) root_->Clear();
  clear_has_root();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Game::kRootFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Game::Game()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_game_2eproto::scc_info_Game.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:buffers.Game)
}
Game::Game(const Game& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_root()) {
    root_ = new ::buffers::TreeNode(*from.root_);
  } else {
    root_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:buffers.Game)
}

void Game::SharedCtor() {
  root_ = NULL;
}

Game::~Game() {
  // @@protoc_insertion_point(destructor:buffers.Game)
  SharedDtor();
}

void Game::SharedDtor() {
  if (this != internal_default_instance()) delete root_;
}

void Game::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Game::descriptor() {
  ::protobuf_game_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_game_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Game& Game::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_game_2eproto::scc_info_Game.base);
  return *internal_default_instance();
}


void Game::Clear() {
// @@protoc_insertion_point(message_clear_start:buffers.Game)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(root_ != NULL);
    root_->Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Game::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:buffers.Game)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .buffers.TreeNode root = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_root()));
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
  // @@protoc_insertion_point(parse_success:buffers.Game)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:buffers.Game)
  return false;
#undef DO_
}

void Game::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:buffers.Game)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .buffers.TreeNode root = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_root(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:buffers.Game)
}

::google::protobuf::uint8* Game::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:buffers.Game)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .buffers.TreeNode root = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_root(), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:buffers.Game)
  return target;
}

size_t Game::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:buffers.Game)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // optional .buffers.TreeNode root = 1;
  if (has_root()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *root_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Game::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:buffers.Game)
  GOOGLE_DCHECK_NE(&from, this);
  const Game* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Game>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:buffers.Game)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:buffers.Game)
    MergeFrom(*source);
  }
}

void Game::MergeFrom(const Game& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:buffers.Game)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_root()) {
    mutable_root()->::buffers::TreeNode::MergeFrom(from.root());
  }
}

void Game::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:buffers.Game)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Game::CopyFrom(const Game& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:buffers.Game)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Game::IsInitialized() const {
  return true;
}

void Game::Swap(Game* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Game::InternalSwap(Game* other) {
  using std::swap;
  swap(root_, other->root_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Game::GetMetadata() const {
  protobuf_game_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_game_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace buffers
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::buffers::Game* Arena::CreateMaybeMessage< ::buffers::Game >(Arena* arena) {
  return Arena::CreateInternal< ::buffers::Game >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
