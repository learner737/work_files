// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "HeartBeat.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace HeartBeat {

namespace {

const ::google::protobuf::Descriptor* HeartBeatInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HeartBeatInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_HeartBeat_2eproto() {
  protobuf_AddDesc_HeartBeat_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "HeartBeat.proto");
  GOOGLE_CHECK(file != NULL);
  HeartBeatInfo_descriptor_ = file->message_type(0);
  static const int HeartBeatInfo_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartBeatInfo, value_),
  };
  HeartBeatInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      HeartBeatInfo_descriptor_,
      HeartBeatInfo::default_instance_,
      HeartBeatInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartBeatInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartBeatInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(HeartBeatInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_HeartBeat_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    HeartBeatInfo_descriptor_, &HeartBeatInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_HeartBeat_2eproto() {
  delete HeartBeatInfo::default_instance_;
  delete HeartBeatInfo_reflection_;
}

void protobuf_AddDesc_HeartBeat_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017HeartBeat.proto\022\tHeartBeat\"\036\n\rHeartBea"
    "tInfo\022\r\n\005value\030\001 \001(\014", 60);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "HeartBeat.proto", &protobuf_RegisterTypes);
  HeartBeatInfo::default_instance_ = new HeartBeatInfo();
  HeartBeatInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_HeartBeat_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_HeartBeat_2eproto {
  StaticDescriptorInitializer_HeartBeat_2eproto() {
    protobuf_AddDesc_HeartBeat_2eproto();
  }
} static_descriptor_initializer_HeartBeat_2eproto_;


// ===================================================================

const ::std::string HeartBeatInfo::_default_value_;
#ifndef _MSC_VER
const int HeartBeatInfo::kValueFieldNumber;
#endif  // !_MSC_VER

HeartBeatInfo::HeartBeatInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void HeartBeatInfo::InitAsDefaultInstance() {
}

HeartBeatInfo::HeartBeatInfo(const HeartBeatInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void HeartBeatInfo::SharedCtor() {
  _cached_size_ = 0;
  value_ = const_cast< ::std::string*>(&_default_value_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HeartBeatInfo::~HeartBeatInfo() {
  SharedDtor();
}

void HeartBeatInfo::SharedDtor() {
  if (value_ != &_default_value_) {
    delete value_;
  }
  if (this != default_instance_) {
  }
}

void HeartBeatInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HeartBeatInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HeartBeatInfo_descriptor_;
}

const HeartBeatInfo& HeartBeatInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_HeartBeat_2eproto();  return *default_instance_;
}

HeartBeatInfo* HeartBeatInfo::default_instance_ = NULL;

HeartBeatInfo* HeartBeatInfo::New() const {
  return new HeartBeatInfo;
}

void HeartBeatInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (value_ != &_default_value_) {
        value_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool HeartBeatInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes value = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_value()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void HeartBeatInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional bytes value = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->value(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* HeartBeatInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional bytes value = 1;
  if (_has_bit(0)) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->value(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int HeartBeatInfo::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bytes value = 1;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->value());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HeartBeatInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const HeartBeatInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const HeartBeatInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void HeartBeatInfo::MergeFrom(const HeartBeatInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_value(from.value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void HeartBeatInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HeartBeatInfo::CopyFrom(const HeartBeatInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HeartBeatInfo::IsInitialized() const {
  
  return true;
}

void HeartBeatInfo::Swap(HeartBeatInfo* other) {
  if (other != this) {
    std::swap(value_, other->value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata HeartBeatInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HeartBeatInfo_descriptor_;
  metadata.reflection = HeartBeatInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace HeartBeat

// @@protoc_insertion_point(global_scope)
