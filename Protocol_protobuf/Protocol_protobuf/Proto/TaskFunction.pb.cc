// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "TaskFunction.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace TaskFunction {

namespace {

const ::google::protobuf::Descriptor* TaskCommonFcntion_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TaskCommonFcntion_reflection_ = NULL;
const ::google::protobuf::Descriptor* TaskCommonFcntionAck_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TaskCommonFcntionAck_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_TaskFunction_2eproto() {
  protobuf_AddDesc_TaskFunction_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "TaskFunction.proto");
  GOOGLE_CHECK(file != NULL);
  TaskCommonFcntion_descriptor_ = file->message_type(0);
  static const int TaskCommonFcntion_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskCommonFcntion, task_uuid_),
  };
  TaskCommonFcntion_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TaskCommonFcntion_descriptor_,
      TaskCommonFcntion::default_instance_,
      TaskCommonFcntion_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskCommonFcntion, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskCommonFcntion, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TaskCommonFcntion));
  TaskCommonFcntionAck_descriptor_ = file->message_type(1);
  static const int TaskCommonFcntionAck_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskCommonFcntionAck, task_uuid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskCommonFcntionAck, result_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskCommonFcntionAck, error_number_),
  };
  TaskCommonFcntionAck_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TaskCommonFcntionAck_descriptor_,
      TaskCommonFcntionAck::default_instance_,
      TaskCommonFcntionAck_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskCommonFcntionAck, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskCommonFcntionAck, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TaskCommonFcntionAck));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_TaskFunction_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TaskCommonFcntion_descriptor_, &TaskCommonFcntion::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TaskCommonFcntionAck_descriptor_, &TaskCommonFcntionAck::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_TaskFunction_2eproto() {
  delete TaskCommonFcntion::default_instance_;
  delete TaskCommonFcntion_reflection_;
  delete TaskCommonFcntionAck::default_instance_;
  delete TaskCommonFcntionAck_reflection_;
}

void protobuf_AddDesc_TaskFunction_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::LogExportTask::protobuf_AddDesc_LogExportTask_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022TaskFunction.proto\022\014TaskFunction\032\023LogE"
    "xportTask.proto\"&\n\021TaskCommonFcntion\022\021\n\t"
    "task_uuid\030\001 \002(\014\"O\n\024TaskCommonFcntionAck\022"
    "\021\n\ttask_uuid\030\001 \002(\014\022\016\n\006result\030\002 \002(\010\022\024\n\014er"
    "ror_number\030\003 \001(\003", 176);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "TaskFunction.proto", &protobuf_RegisterTypes);
  TaskCommonFcntion::default_instance_ = new TaskCommonFcntion();
  TaskCommonFcntionAck::default_instance_ = new TaskCommonFcntionAck();
  TaskCommonFcntion::default_instance_->InitAsDefaultInstance();
  TaskCommonFcntionAck::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_TaskFunction_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_TaskFunction_2eproto {
  StaticDescriptorInitializer_TaskFunction_2eproto() {
    protobuf_AddDesc_TaskFunction_2eproto();
  }
} static_descriptor_initializer_TaskFunction_2eproto_;


// ===================================================================

const ::std::string TaskCommonFcntion::_default_task_uuid_;
#ifndef _MSC_VER
const int TaskCommonFcntion::kTaskUuidFieldNumber;
#endif  // !_MSC_VER

TaskCommonFcntion::TaskCommonFcntion()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TaskCommonFcntion::InitAsDefaultInstance() {
}

TaskCommonFcntion::TaskCommonFcntion(const TaskCommonFcntion& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TaskCommonFcntion::SharedCtor() {
  _cached_size_ = 0;
  task_uuid_ = const_cast< ::std::string*>(&_default_task_uuid_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TaskCommonFcntion::~TaskCommonFcntion() {
  SharedDtor();
}

void TaskCommonFcntion::SharedDtor() {
  if (task_uuid_ != &_default_task_uuid_) {
    delete task_uuid_;
  }
  if (this != default_instance_) {
  }
}

void TaskCommonFcntion::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TaskCommonFcntion::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TaskCommonFcntion_descriptor_;
}

const TaskCommonFcntion& TaskCommonFcntion::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_TaskFunction_2eproto();  return *default_instance_;
}

TaskCommonFcntion* TaskCommonFcntion::default_instance_ = NULL;

TaskCommonFcntion* TaskCommonFcntion::New() const {
  return new TaskCommonFcntion;
}

void TaskCommonFcntion::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (task_uuid_ != &_default_task_uuid_) {
        task_uuid_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TaskCommonFcntion::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bytes task_uuid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_task_uuid()));
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

void TaskCommonFcntion::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bytes task_uuid = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->task_uuid(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TaskCommonFcntion::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required bytes task_uuid = 1;
  if (_has_bit(0)) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->task_uuid(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TaskCommonFcntion::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bytes task_uuid = 1;
    if (has_task_uuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->task_uuid());
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

void TaskCommonFcntion::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TaskCommonFcntion* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TaskCommonFcntion*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TaskCommonFcntion::MergeFrom(const TaskCommonFcntion& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_task_uuid(from.task_uuid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TaskCommonFcntion::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TaskCommonFcntion::CopyFrom(const TaskCommonFcntion& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TaskCommonFcntion::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void TaskCommonFcntion::Swap(TaskCommonFcntion* other) {
  if (other != this) {
    std::swap(task_uuid_, other->task_uuid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TaskCommonFcntion::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TaskCommonFcntion_descriptor_;
  metadata.reflection = TaskCommonFcntion_reflection_;
  return metadata;
}


// ===================================================================

const ::std::string TaskCommonFcntionAck::_default_task_uuid_;
#ifndef _MSC_VER
const int TaskCommonFcntionAck::kTaskUuidFieldNumber;
const int TaskCommonFcntionAck::kResultFieldNumber;
const int TaskCommonFcntionAck::kErrorNumberFieldNumber;
#endif  // !_MSC_VER

TaskCommonFcntionAck::TaskCommonFcntionAck()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TaskCommonFcntionAck::InitAsDefaultInstance() {
}

TaskCommonFcntionAck::TaskCommonFcntionAck(const TaskCommonFcntionAck& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TaskCommonFcntionAck::SharedCtor() {
  _cached_size_ = 0;
  task_uuid_ = const_cast< ::std::string*>(&_default_task_uuid_);
  result_ = false;
  error_number_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TaskCommonFcntionAck::~TaskCommonFcntionAck() {
  SharedDtor();
}

void TaskCommonFcntionAck::SharedDtor() {
  if (task_uuid_ != &_default_task_uuid_) {
    delete task_uuid_;
  }
  if (this != default_instance_) {
  }
}

void TaskCommonFcntionAck::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TaskCommonFcntionAck::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TaskCommonFcntionAck_descriptor_;
}

const TaskCommonFcntionAck& TaskCommonFcntionAck::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_TaskFunction_2eproto();  return *default_instance_;
}

TaskCommonFcntionAck* TaskCommonFcntionAck::default_instance_ = NULL;

TaskCommonFcntionAck* TaskCommonFcntionAck::New() const {
  return new TaskCommonFcntionAck;
}

void TaskCommonFcntionAck::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (task_uuid_ != &_default_task_uuid_) {
        task_uuid_->clear();
      }
    }
    result_ = false;
    error_number_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TaskCommonFcntionAck::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bytes task_uuid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_task_uuid()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_result;
        break;
      }
      
      // required bool result = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_result:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &result_)));
          _set_bit(1);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_error_number;
        break;
      }
      
      // optional int64 error_number = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_error_number:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &error_number_)));
          _set_bit(2);
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

void TaskCommonFcntionAck::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bytes task_uuid = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->task_uuid(), output);
  }
  
  // required bool result = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->result(), output);
  }
  
  // optional int64 error_number = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->error_number(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TaskCommonFcntionAck::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required bytes task_uuid = 1;
  if (_has_bit(0)) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->task_uuid(), target);
  }
  
  // required bool result = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->result(), target);
  }
  
  // optional int64 error_number = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->error_number(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TaskCommonFcntionAck::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bytes task_uuid = 1;
    if (has_task_uuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->task_uuid());
    }
    
    // required bool result = 2;
    if (has_result()) {
      total_size += 1 + 1;
    }
    
    // optional int64 error_number = 3;
    if (has_error_number()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->error_number());
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

void TaskCommonFcntionAck::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TaskCommonFcntionAck* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TaskCommonFcntionAck*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TaskCommonFcntionAck::MergeFrom(const TaskCommonFcntionAck& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_task_uuid(from.task_uuid());
    }
    if (from._has_bit(1)) {
      set_result(from.result());
    }
    if (from._has_bit(2)) {
      set_error_number(from.error_number());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TaskCommonFcntionAck::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TaskCommonFcntionAck::CopyFrom(const TaskCommonFcntionAck& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TaskCommonFcntionAck::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void TaskCommonFcntionAck::Swap(TaskCommonFcntionAck* other) {
  if (other != this) {
    std::swap(task_uuid_, other->task_uuid_);
    std::swap(result_, other->result_);
    std::swap(error_number_, other->error_number_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TaskCommonFcntionAck::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TaskCommonFcntionAck_descriptor_;
  metadata.reflection = TaskCommonFcntionAck_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace TaskFunction

// @@protoc_insertion_point(global_scope)
