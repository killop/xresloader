// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dependency.proto

#include "dependency.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_dep_5flevel2_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_dep2_cfg_dep_5flevel2_2eproto;
class dep_cfgDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<dep_cfg> _instance;
} _dep_cfg_default_instance_;
static void InitDefaultsscc_info_dep_cfg_dependency_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_dep_cfg_default_instance_;
    new (ptr) ::dep_cfg();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::dep_cfg::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_dep_cfg_dependency_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_dep_cfg_dependency_2eproto}, {
      &scc_info_dep2_cfg_dep_5flevel2_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_dependency_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_dependency_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_dependency_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_dependency_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::dep_cfg, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::dep_cfg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::dep_cfg, id_),
  PROTOBUF_FIELD_OFFSET(::dep_cfg, name_),
  PROTOBUF_FIELD_OFFSET(::dep_cfg, dep2_),
  2,
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::dep_cfg)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_dep_cfg_default_instance_),
};

const char descriptor_table_protodef_dependency_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\020dependency.proto\032\020xresloader.proto\032\020de"
  "p_level2.proto\"<\n\007dep_cfg\022\n\n\002id\030\001 \001(\r\022\014\n"
  "\004name\030\002 \001(\t\022\027\n\004dep2\030\003 \001(\0132\t.dep2_cfg*\267\002\n"
  "\021game_const_config\022\030\n\023EN_GCC_PERCENT_BAS"
  "E\020\220N\022\034\n\030EN_GCC_RANDOM_RANGE_UNIT\020\n\022 \n\031EN"
  "_GCC_RESOURCE_MAX_LIMIT\020\377\254\342\004\022\027\n\022EN_GCC_L"
  "EVEL_LIMIT\020\347\007\022\034\n\030EN_GCC_SOLDIER_TYPE_MAS"
  "K\020d\022\036\n\031EN_GCC_ACTIVITY_TYPE_MASK\020\350\007\022\035\n\031E"
  "N_GCC_FORMULAR_TYPE_MASK\020\n\022\030\n\023EN_GCC_SCR"
  "EEN_WIDTH\020\360\010\022\031\n\024EN_GCC_SCREEN_HEIGHT\020\200\005\022"
  "\031\n\024EN_GCC_CAMERA_OFFSET\020\214\002\032\002\020\001*Z\n\tcost_t"
  "ype\022\021\n\rEN_CT_UNKNOWN\020\000\022\033\n\013EN_CT_MONEY\020\221N"
  "\032\t\322>\006\351\207\221\345\270\201\022\035\n\rEN_CT_DIAMOND\020\365N\032\t\322>\006\351\222\273\347"
  "\237\263"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_dependency_2eproto_deps[2] = {
  &::descriptor_table_dep_5flevel2_2eproto,
  &::descriptor_table_xresloader_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_dependency_2eproto_sccs[1] = {
  &scc_info_dep_cfg_dependency_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_dependency_2eproto_once;
static bool descriptor_table_dependency_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_dependency_2eproto = {
  &descriptor_table_dependency_2eproto_initialized, descriptor_table_protodef_dependency_2eproto, "dependency.proto", 522,
  &descriptor_table_dependency_2eproto_once, descriptor_table_dependency_2eproto_sccs, descriptor_table_dependency_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_dependency_2eproto::offsets,
  file_level_metadata_dependency_2eproto, 1, file_level_enum_descriptors_dependency_2eproto, file_level_service_descriptors_dependency_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_dependency_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_dependency_2eproto), true);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* game_const_config_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_dependency_2eproto);
  return file_level_enum_descriptors_dependency_2eproto[0];
}
bool game_const_config_IsValid(int value) {
  switch (value) {
    case 10:
    case 100:
    case 268:
    case 640:
    case 999:
    case 1000:
    case 1136:
    case 10000:
    case 9999999:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* cost_type_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_dependency_2eproto);
  return file_level_enum_descriptors_dependency_2eproto[1];
}
bool cost_type_IsValid(int value) {
  switch (value) {
    case 0:
    case 10001:
    case 10101:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void dep_cfg::InitAsDefaultInstance() {
  ::_dep_cfg_default_instance_._instance.get_mutable()->dep2_ = const_cast< ::dep2_cfg*>(
      ::dep2_cfg::internal_default_instance());
}
class dep_cfg::_Internal {
 public:
  using HasBits = decltype(std::declval<dep_cfg>()._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::dep2_cfg& dep2(const dep_cfg* msg);
  static void set_has_dep2(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::dep2_cfg&
dep_cfg::_Internal::dep2(const dep_cfg* msg) {
  return *msg->dep2_;
}
void dep_cfg::clear_dep2() {
  if (dep2_ != nullptr) dep2_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
dep_cfg::dep_cfg()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:dep_cfg)
}
dep_cfg::dep_cfg(const dep_cfg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_name()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from._internal_has_dep2()) {
    dep2_ = new ::dep2_cfg(*from.dep2_);
  } else {
    dep2_ = nullptr;
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:dep_cfg)
}

void dep_cfg::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_dep_cfg_dependency_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&dep2_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&id_) -
      reinterpret_cast<char*>(&dep2_)) + sizeof(id_));
}

dep_cfg::~dep_cfg() {
  // @@protoc_insertion_point(destructor:dep_cfg)
  SharedDtor();
}

void dep_cfg::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete dep2_;
}

void dep_cfg::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const dep_cfg& dep_cfg::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_dep_cfg_dependency_2eproto.base);
  return *internal_default_instance();
}


void dep_cfg::Clear() {
// @@protoc_insertion_point(message_clear_start:dep_cfg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(dep2_ != nullptr);
      dep2_->Clear();
    }
  }
  id_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* dep_cfg::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional uint32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "dep_cfg.name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .dep2_cfg dep2 = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_dep2(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* dep_cfg::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dep_cfg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 id = 1;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_id(), target);
  }

  // optional string name = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "dep_cfg.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  // optional .dep2_cfg dep2 = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::dep2(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dep_cfg)
  return target;
}

size_t dep_cfg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dep_cfg)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string name = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_name());
    }

    // optional .dep2_cfg dep2 = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *dep2_);
    }

    // optional uint32 id = 1;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_id());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void dep_cfg::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:dep_cfg)
  GOOGLE_DCHECK_NE(&from, this);
  const dep_cfg* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<dep_cfg>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:dep_cfg)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:dep_cfg)
    MergeFrom(*source);
  }
}

void dep_cfg::MergeFrom(const dep_cfg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dep_cfg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_dep2()->::dep2_cfg::MergeFrom(from._internal_dep2());
    }
    if (cached_has_bits & 0x00000004u) {
      id_ = from.id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void dep_cfg::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:dep_cfg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void dep_cfg::CopyFrom(const dep_cfg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dep_cfg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool dep_cfg::IsInitialized() const {
  return true;
}

void dep_cfg::InternalSwap(dep_cfg* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(dep2_, other->dep2_);
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata dep_cfg::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::dep_cfg* Arena::CreateMaybeMessage< ::dep_cfg >(Arena* arena) {
  return Arena::CreateInternal< ::dep_cfg >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
