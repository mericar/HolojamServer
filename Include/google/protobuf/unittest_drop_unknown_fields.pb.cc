// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_drop_unknown_fields.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/protobuf/unittest_drop_unknown_fields.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace unittest_drop_unknown_fields {

namespace {

const ::google::protobuf::Descriptor* Foo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Foo_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Foo_NestedEnum_descriptor_ = NULL;
const ::google::protobuf::Descriptor* FooWithExtraFields_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FooWithExtraFields_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* FooWithExtraFields_NestedEnum_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/unittest_drop_unknown_fields.proto");
  GOOGLE_CHECK(file != NULL);
  Foo_descriptor_ = file->message_type(0);
  static const int Foo_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Foo, int32_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Foo, enum_value_),
  };
  Foo_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Foo_descriptor_,
      Foo::default_instance_,
      Foo_offsets_,
      -1,
      -1,
      -1,
      sizeof(Foo),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Foo, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Foo, _is_default_instance_));
  Foo_NestedEnum_descriptor_ = Foo_descriptor_->enum_type(0);
  FooWithExtraFields_descriptor_ = file->message_type(1);
  static const int FooWithExtraFields_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooWithExtraFields, int32_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooWithExtraFields, enum_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooWithExtraFields, extra_int32_value_),
  };
  FooWithExtraFields_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      FooWithExtraFields_descriptor_,
      FooWithExtraFields::default_instance_,
      FooWithExtraFields_offsets_,
      -1,
      -1,
      -1,
      sizeof(FooWithExtraFields),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooWithExtraFields, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooWithExtraFields, _is_default_instance_));
  FooWithExtraFields_NestedEnum_descriptor_ = FooWithExtraFields_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Foo_descriptor_, &Foo::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      FooWithExtraFields_descriptor_, &FooWithExtraFields::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto() {
  delete Foo::default_instance_;
  delete Foo_reflection_;
  delete FooWithExtraFields::default_instance_;
  delete FooWithExtraFields_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n2google/protobuf/unittest_drop_unknown_"
    "fields.proto\022\034unittest_drop_unknown_fiel"
    "ds\"\205\001\n\003Foo\022\023\n\013int32_value\030\001 \001(\005\022@\n\nenum_"
    "value\030\002 \001(\0162,.unittest_drop_unknown_fiel"
    "ds.Foo.NestedEnum\"\'\n\nNestedEnum\022\007\n\003FOO\020\000"
    "\022\007\n\003BAR\020\001\022\007\n\003BAZ\020\002\"\307\001\n\022FooWithExtraField"
    "s\022\023\n\013int32_value\030\001 \001(\005\022O\n\nenum_value\030\002 \001"
    "(\0162;.unittest_drop_unknown_fields.FooWit"
    "hExtraFields.NestedEnum\022\031\n\021extra_int32_v"
    "alue\030\003 \001(\005\"0\n\nNestedEnum\022\007\n\003FOO\020\000\022\007\n\003BAR"
    "\020\001\022\007\n\003BAZ\020\002\022\007\n\003QUX\020\003B3\242\002\014DropUnknowns\252\002!"
    "Google.ProtocolBuffers.TestProtosb\006proto"
    "3", 481);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/unittest_drop_unknown_fields.proto", &protobuf_RegisterTypes);
  Foo::default_instance_ = new Foo();
  FooWithExtraFields::default_instance_ = new FooWithExtraFields();
  Foo::default_instance_->InitAsDefaultInstance();
  FooWithExtraFields::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

const ::google::protobuf::EnumDescriptor* Foo_NestedEnum_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Foo_NestedEnum_descriptor_;
}
bool Foo_NestedEnum_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Foo_NestedEnum Foo::FOO;
const Foo_NestedEnum Foo::BAR;
const Foo_NestedEnum Foo::BAZ;
const Foo_NestedEnum Foo::NestedEnum_MIN;
const Foo_NestedEnum Foo::NestedEnum_MAX;
const int Foo::NestedEnum_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Foo::kInt32ValueFieldNumber;
const int Foo::kEnumValueFieldNumber;
#endif  // !_MSC_VER

Foo::Foo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:unittest_drop_unknown_fields.Foo)
}

void Foo::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Foo::Foo(const Foo& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:unittest_drop_unknown_fields.Foo)
}

void Foo::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  int32_value_ = 0;
  enum_value_ = 0;
}

Foo::~Foo() {
  // @@protoc_insertion_point(destructor:unittest_drop_unknown_fields.Foo)
  SharedDtor();
}

void Foo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Foo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Foo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Foo_descriptor_;
}

const Foo& Foo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto();
  return *default_instance_;
}

Foo* Foo::default_instance_ = NULL;

Foo* Foo::New(::google::protobuf::Arena* arena) const {
  Foo* n = new Foo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Foo::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Foo*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(int32_value_, enum_value_);

#undef ZR_HELPER_
#undef ZR_

}

bool Foo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:unittest_drop_unknown_fields.Foo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 int32_value = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &int32_value_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_enum_value;
        break;
      }

      // optional .unittest_drop_unknown_fields.Foo.NestedEnum enum_value = 2;
      case 2: {
        if (tag == 16) {
         parse_enum_value:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_enum_value(static_cast< ::unittest_drop_unknown_fields::Foo_NestedEnum >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:unittest_drop_unknown_fields.Foo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:unittest_drop_unknown_fields.Foo)
  return false;
#undef DO_
}

void Foo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:unittest_drop_unknown_fields.Foo)
  // optional int32 int32_value = 1;
  if (this->int32_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->int32_value(), output);
  }

  // optional .unittest_drop_unknown_fields.Foo.NestedEnum enum_value = 2;
  if (this->enum_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->enum_value(), output);
  }

  // @@protoc_insertion_point(serialize_end:unittest_drop_unknown_fields.Foo)
}

::google::protobuf::uint8* Foo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:unittest_drop_unknown_fields.Foo)
  // optional int32 int32_value = 1;
  if (this->int32_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->int32_value(), target);
  }

  // optional .unittest_drop_unknown_fields.Foo.NestedEnum enum_value = 2;
  if (this->enum_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->enum_value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:unittest_drop_unknown_fields.Foo)
  return target;
}

int Foo::ByteSize() const {
  int total_size = 0;

  // optional int32 int32_value = 1;
  if (this->int32_value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->int32_value());
  }

  // optional .unittest_drop_unknown_fields.Foo.NestedEnum enum_value = 2;
  if (this->enum_value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->enum_value());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Foo::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Foo* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Foo>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Foo::MergeFrom(const Foo& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.int32_value() != 0) {
    set_int32_value(from.int32_value());
  }
  if (from.enum_value() != 0) {
    set_enum_value(from.enum_value());
  }
}

void Foo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Foo::CopyFrom(const Foo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Foo::IsInitialized() const {

  return true;
}

void Foo::Swap(Foo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Foo::InternalSwap(Foo* other) {
  std::swap(int32_value_, other->int32_value_);
  std::swap(enum_value_, other->enum_value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Foo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Foo_descriptor_;
  metadata.reflection = Foo_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Foo

// optional int32 int32_value = 1;
void Foo::clear_int32_value() {
  int32_value_ = 0;
}
 ::google::protobuf::int32 Foo::int32_value() const {
  // @@protoc_insertion_point(field_get:unittest_drop_unknown_fields.Foo.int32_value)
  return int32_value_;
}
 void Foo::set_int32_value(::google::protobuf::int32 value) {
  
  int32_value_ = value;
  // @@protoc_insertion_point(field_set:unittest_drop_unknown_fields.Foo.int32_value)
}

// optional .unittest_drop_unknown_fields.Foo.NestedEnum enum_value = 2;
void Foo::clear_enum_value() {
  enum_value_ = 0;
}
 ::unittest_drop_unknown_fields::Foo_NestedEnum Foo::enum_value() const {
  // @@protoc_insertion_point(field_get:unittest_drop_unknown_fields.Foo.enum_value)
  return static_cast< ::unittest_drop_unknown_fields::Foo_NestedEnum >(enum_value_);
}
 void Foo::set_enum_value(::unittest_drop_unknown_fields::Foo_NestedEnum value) {
  
  enum_value_ = value;
  // @@protoc_insertion_point(field_set:unittest_drop_unknown_fields.Foo.enum_value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

const ::google::protobuf::EnumDescriptor* FooWithExtraFields_NestedEnum_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FooWithExtraFields_NestedEnum_descriptor_;
}
bool FooWithExtraFields_NestedEnum_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const FooWithExtraFields_NestedEnum FooWithExtraFields::FOO;
const FooWithExtraFields_NestedEnum FooWithExtraFields::BAR;
const FooWithExtraFields_NestedEnum FooWithExtraFields::BAZ;
const FooWithExtraFields_NestedEnum FooWithExtraFields::QUX;
const FooWithExtraFields_NestedEnum FooWithExtraFields::NestedEnum_MIN;
const FooWithExtraFields_NestedEnum FooWithExtraFields::NestedEnum_MAX;
const int FooWithExtraFields::NestedEnum_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int FooWithExtraFields::kInt32ValueFieldNumber;
const int FooWithExtraFields::kEnumValueFieldNumber;
const int FooWithExtraFields::kExtraInt32ValueFieldNumber;
#endif  // !_MSC_VER

FooWithExtraFields::FooWithExtraFields()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:unittest_drop_unknown_fields.FooWithExtraFields)
}

void FooWithExtraFields::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

FooWithExtraFields::FooWithExtraFields(const FooWithExtraFields& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:unittest_drop_unknown_fields.FooWithExtraFields)
}

void FooWithExtraFields::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  int32_value_ = 0;
  enum_value_ = 0;
  extra_int32_value_ = 0;
}

FooWithExtraFields::~FooWithExtraFields() {
  // @@protoc_insertion_point(destructor:unittest_drop_unknown_fields.FooWithExtraFields)
  SharedDtor();
}

void FooWithExtraFields::SharedDtor() {
  if (this != default_instance_) {
  }
}

void FooWithExtraFields::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FooWithExtraFields::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FooWithExtraFields_descriptor_;
}

const FooWithExtraFields& FooWithExtraFields::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto();
  return *default_instance_;
}

FooWithExtraFields* FooWithExtraFields::default_instance_ = NULL;

FooWithExtraFields* FooWithExtraFields::New(::google::protobuf::Arena* arena) const {
  FooWithExtraFields* n = new FooWithExtraFields;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FooWithExtraFields::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<FooWithExtraFields*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(int32_value_, extra_int32_value_);

#undef ZR_HELPER_
#undef ZR_

}

bool FooWithExtraFields::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:unittest_drop_unknown_fields.FooWithExtraFields)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 int32_value = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &int32_value_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_enum_value;
        break;
      }

      // optional .unittest_drop_unknown_fields.FooWithExtraFields.NestedEnum enum_value = 2;
      case 2: {
        if (tag == 16) {
         parse_enum_value:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_enum_value(static_cast< ::unittest_drop_unknown_fields::FooWithExtraFields_NestedEnum >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_extra_int32_value;
        break;
      }

      // optional int32 extra_int32_value = 3;
      case 3: {
        if (tag == 24) {
         parse_extra_int32_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &extra_int32_value_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:unittest_drop_unknown_fields.FooWithExtraFields)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:unittest_drop_unknown_fields.FooWithExtraFields)
  return false;
#undef DO_
}

void FooWithExtraFields::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:unittest_drop_unknown_fields.FooWithExtraFields)
  // optional int32 int32_value = 1;
  if (this->int32_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->int32_value(), output);
  }

  // optional .unittest_drop_unknown_fields.FooWithExtraFields.NestedEnum enum_value = 2;
  if (this->enum_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->enum_value(), output);
  }

  // optional int32 extra_int32_value = 3;
  if (this->extra_int32_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->extra_int32_value(), output);
  }

  // @@protoc_insertion_point(serialize_end:unittest_drop_unknown_fields.FooWithExtraFields)
}

::google::protobuf::uint8* FooWithExtraFields::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:unittest_drop_unknown_fields.FooWithExtraFields)
  // optional int32 int32_value = 1;
  if (this->int32_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->int32_value(), target);
  }

  // optional .unittest_drop_unknown_fields.FooWithExtraFields.NestedEnum enum_value = 2;
  if (this->enum_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->enum_value(), target);
  }

  // optional int32 extra_int32_value = 3;
  if (this->extra_int32_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->extra_int32_value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:unittest_drop_unknown_fields.FooWithExtraFields)
  return target;
}

int FooWithExtraFields::ByteSize() const {
  int total_size = 0;

  // optional int32 int32_value = 1;
  if (this->int32_value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->int32_value());
  }

  // optional .unittest_drop_unknown_fields.FooWithExtraFields.NestedEnum enum_value = 2;
  if (this->enum_value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->enum_value());
  }

  // optional int32 extra_int32_value = 3;
  if (this->extra_int32_value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->extra_int32_value());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FooWithExtraFields::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const FooWithExtraFields* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const FooWithExtraFields>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FooWithExtraFields::MergeFrom(const FooWithExtraFields& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.int32_value() != 0) {
    set_int32_value(from.int32_value());
  }
  if (from.enum_value() != 0) {
    set_enum_value(from.enum_value());
  }
  if (from.extra_int32_value() != 0) {
    set_extra_int32_value(from.extra_int32_value());
  }
}

void FooWithExtraFields::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FooWithExtraFields::CopyFrom(const FooWithExtraFields& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FooWithExtraFields::IsInitialized() const {

  return true;
}

void FooWithExtraFields::Swap(FooWithExtraFields* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FooWithExtraFields::InternalSwap(FooWithExtraFields* other) {
  std::swap(int32_value_, other->int32_value_);
  std::swap(enum_value_, other->enum_value_);
  std::swap(extra_int32_value_, other->extra_int32_value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FooWithExtraFields::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FooWithExtraFields_descriptor_;
  metadata.reflection = FooWithExtraFields_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FooWithExtraFields

// optional int32 int32_value = 1;
void FooWithExtraFields::clear_int32_value() {
  int32_value_ = 0;
}
 ::google::protobuf::int32 FooWithExtraFields::int32_value() const {
  // @@protoc_insertion_point(field_get:unittest_drop_unknown_fields.FooWithExtraFields.int32_value)
  return int32_value_;
}
 void FooWithExtraFields::set_int32_value(::google::protobuf::int32 value) {
  
  int32_value_ = value;
  // @@protoc_insertion_point(field_set:unittest_drop_unknown_fields.FooWithExtraFields.int32_value)
}

// optional .unittest_drop_unknown_fields.FooWithExtraFields.NestedEnum enum_value = 2;
void FooWithExtraFields::clear_enum_value() {
  enum_value_ = 0;
}
 ::unittest_drop_unknown_fields::FooWithExtraFields_NestedEnum FooWithExtraFields::enum_value() const {
  // @@protoc_insertion_point(field_get:unittest_drop_unknown_fields.FooWithExtraFields.enum_value)
  return static_cast< ::unittest_drop_unknown_fields::FooWithExtraFields_NestedEnum >(enum_value_);
}
 void FooWithExtraFields::set_enum_value(::unittest_drop_unknown_fields::FooWithExtraFields_NestedEnum value) {
  
  enum_value_ = value;
  // @@protoc_insertion_point(field_set:unittest_drop_unknown_fields.FooWithExtraFields.enum_value)
}

// optional int32 extra_int32_value = 3;
void FooWithExtraFields::clear_extra_int32_value() {
  extra_int32_value_ = 0;
}
 ::google::protobuf::int32 FooWithExtraFields::extra_int32_value() const {
  // @@protoc_insertion_point(field_get:unittest_drop_unknown_fields.FooWithExtraFields.extra_int32_value)
  return extra_int32_value_;
}
 void FooWithExtraFields::set_extra_int32_value(::google::protobuf::int32 value) {
  
  extra_int32_value_ = value;
  // @@protoc_insertion_point(field_set:unittest_drop_unknown_fields.FooWithExtraFields.extra_int32_value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace unittest_drop_unknown_fields

// @@protoc_insertion_point(global_scope)
