// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_import_public_lite.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/protobuf/unittest_import_public_lite.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace protobuf_unittest_import {

void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto() {
  delete PublicImportMessageLite::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  PublicImportMessageLite::default_instance_ = new PublicImportMessageLite();
  PublicImportMessageLite::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto_once_);
void protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto_once_,
                 &protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int PublicImportMessageLite::kEFieldNumber;
#endif  // !_MSC_VER

PublicImportMessageLite::PublicImportMessageLite()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protobuf_unittest_import.PublicImportMessageLite)
}

void PublicImportMessageLite::InitAsDefaultInstance() {
}

PublicImportMessageLite::PublicImportMessageLite(const PublicImportMessageLite& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protobuf_unittest_import.PublicImportMessageLite)
}

void PublicImportMessageLite::SharedCtor() {
  _cached_size_ = 0;
  e_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PublicImportMessageLite::~PublicImportMessageLite() {
  // @@protoc_insertion_point(destructor:protobuf_unittest_import.PublicImportMessageLite)
  SharedDtor();
}

void PublicImportMessageLite::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void PublicImportMessageLite::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PublicImportMessageLite& PublicImportMessageLite::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto();
#endif
  return *default_instance_;
}

PublicImportMessageLite* PublicImportMessageLite::default_instance_ = NULL;

PublicImportMessageLite* PublicImportMessageLite::New(::google::protobuf::Arena* arena) const {
  PublicImportMessageLite* n = new PublicImportMessageLite;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PublicImportMessageLite::Clear() {
  e_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->clear();
}

bool PublicImportMessageLite::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:protobuf_unittest_import.PublicImportMessageLite)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 e = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &e_)));
          set_has_e();
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protobuf_unittest_import.PublicImportMessageLite)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protobuf_unittest_import.PublicImportMessageLite)
  return false;
#undef DO_
}

void PublicImportMessageLite::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protobuf_unittest_import.PublicImportMessageLite)
  // optional int32 e = 1;
  if (has_e()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->e(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:protobuf_unittest_import.PublicImportMessageLite)
}

int PublicImportMessageLite::ByteSize() const {
  int total_size = 0;

  // optional int32 e = 1;
  if (has_e()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->e());
  }

  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PublicImportMessageLite::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PublicImportMessageLite*>(&from));
}

void PublicImportMessageLite::MergeFrom(const PublicImportMessageLite& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_e()) {
      set_e(from.e());
    }
  }
  mutable_unknown_fields()->append(from.unknown_fields());
}

void PublicImportMessageLite::CopyFrom(const PublicImportMessageLite& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PublicImportMessageLite::IsInitialized() const {

  return true;
}

void PublicImportMessageLite::Swap(PublicImportMessageLite* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PublicImportMessageLite::InternalSwap(PublicImportMessageLite* other) {
  std::swap(e_, other->e_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.swap(other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string PublicImportMessageLite::GetTypeName() const {
  return "protobuf_unittest_import.PublicImportMessageLite";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PublicImportMessageLite

// optional int32 e = 1;
bool PublicImportMessageLite::has_e() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PublicImportMessageLite::set_has_e() {
  _has_bits_[0] |= 0x00000001u;
}
void PublicImportMessageLite::clear_has_e() {
  _has_bits_[0] &= ~0x00000001u;
}
void PublicImportMessageLite::clear_e() {
  e_ = 0;
  clear_has_e();
}
 ::google::protobuf::int32 PublicImportMessageLite::e() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest_import.PublicImportMessageLite.e)
  return e_;
}
 void PublicImportMessageLite::set_e(::google::protobuf::int32 value) {
  set_has_e();
  e_ = value;
  // @@protoc_insertion_point(field_set:protobuf_unittest_import.PublicImportMessageLite.e)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf_unittest_import

// @@protoc_insertion_point(global_scope)
