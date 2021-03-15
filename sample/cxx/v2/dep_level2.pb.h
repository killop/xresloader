// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dep_level2.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dep_5flevel2_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_dep_5flevel2_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_dep_5flevel2_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dep_5flevel2_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_dep_5flevel2_2eproto;
class dep2_cfg;
class dep2_cfgDefaultTypeInternal;
extern dep2_cfgDefaultTypeInternal _dep2_cfg_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::dep2_cfg* Arena::CreateMaybeMessage<::dep2_cfg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class dep2_cfg PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dep2_cfg) */ {
 public:
  inline dep2_cfg() : dep2_cfg(nullptr) {}
  virtual ~dep2_cfg();

  dep2_cfg(const dep2_cfg& from);
  dep2_cfg(dep2_cfg&& from) noexcept
    : dep2_cfg() {
    *this = ::std::move(from);
  }

  inline dep2_cfg& operator=(const dep2_cfg& from) {
    CopyFrom(from);
    return *this;
  }
  inline dep2_cfg& operator=(dep2_cfg&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const dep2_cfg& default_instance();

  static inline const dep2_cfg* internal_default_instance() {
    return reinterpret_cast<const dep2_cfg*>(
               &_dep2_cfg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(dep2_cfg& a, dep2_cfg& b) {
    a.Swap(&b);
  }
  inline void Swap(dep2_cfg* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(dep2_cfg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline dep2_cfg* New() const final {
    return CreateMaybeMessage<dep2_cfg>(nullptr);
  }

  dep2_cfg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<dep2_cfg>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const dep2_cfg& from);
  void MergeFrom(const dep2_cfg& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(dep2_cfg* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "dep2_cfg";
  }
  protected:
  explicit dep2_cfg(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_dep_5flevel2_2eproto);
    return ::descriptor_table_dep_5flevel2_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLevelFieldNumber = 2,
    kIdFieldNumber = 1,
  };
  // optional string level = 2;
  bool has_level() const;
  private:
  bool _internal_has_level() const;
  public:
  void clear_level();
  const std::string& level() const;
  void set_level(const std::string& value);
  void set_level(std::string&& value);
  void set_level(const char* value);
  void set_level(const char* value, size_t size);
  std::string* mutable_level();
  std::string* release_level();
  void set_allocated_level(std::string* level);
  private:
  const std::string& _internal_level() const;
  void _internal_set_level(const std::string& value);
  std::string* _internal_mutable_level();
  public:

  // optional uint32 id = 1;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:dep2_cfg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr level_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  friend struct ::TableStruct_dep_5flevel2_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// dep2_cfg

// optional uint32 id = 1;
inline bool dep2_cfg::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool dep2_cfg::has_id() const {
  return _internal_has_id();
}
inline void dep2_cfg::clear_id() {
  id_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dep2_cfg::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dep2_cfg::id() const {
  // @@protoc_insertion_point(field_get:dep2_cfg.id)
  return _internal_id();
}
inline void dep2_cfg::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  id_ = value;
}
inline void dep2_cfg::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:dep2_cfg.id)
}

// optional string level = 2;
inline bool dep2_cfg::_internal_has_level() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool dep2_cfg::has_level() const {
  return _internal_has_level();
}
inline void dep2_cfg::clear_level() {
  level_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& dep2_cfg::level() const {
  // @@protoc_insertion_point(field_get:dep2_cfg.level)
  return _internal_level();
}
inline void dep2_cfg::set_level(const std::string& value) {
  _internal_set_level(value);
  // @@protoc_insertion_point(field_set:dep2_cfg.level)
}
inline std::string* dep2_cfg::mutable_level() {
  // @@protoc_insertion_point(field_mutable:dep2_cfg.level)
  return _internal_mutable_level();
}
inline const std::string& dep2_cfg::_internal_level() const {
  return level_.Get();
}
inline void dep2_cfg::_internal_set_level(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  level_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void dep2_cfg::set_level(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  level_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:dep2_cfg.level)
}
inline void dep2_cfg::set_level(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  level_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:dep2_cfg.level)
}
inline void dep2_cfg::set_level(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  level_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:dep2_cfg.level)
}
inline std::string* dep2_cfg::_internal_mutable_level() {
  _has_bits_[0] |= 0x00000001u;
  return level_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* dep2_cfg::release_level() {
  // @@protoc_insertion_point(field_release:dep2_cfg.level)
  if (!_internal_has_level()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return level_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void dep2_cfg::set_allocated_level(std::string* level) {
  if (level != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  level_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), level,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:dep2_cfg.level)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_dep_5flevel2_2eproto
