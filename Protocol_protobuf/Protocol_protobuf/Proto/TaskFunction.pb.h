// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TaskFunction.proto

#ifndef PROTOBUF_TaskFunction_2eproto__INCLUDED
#define PROTOBUF_TaskFunction_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "LogExportTask.pb.h"
// @@protoc_insertion_point(includes)

namespace TaskFunction {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_TaskFunction_2eproto();
void protobuf_AssignDesc_TaskFunction_2eproto();
void protobuf_ShutdownFile_TaskFunction_2eproto();

class TaskCommonFcntion;
class TaskCommonFcntionAck;

// ===================================================================

class TaskCommonFcntion : public ::google::protobuf::Message {
 public:
  TaskCommonFcntion();
  virtual ~TaskCommonFcntion();
  
  TaskCommonFcntion(const TaskCommonFcntion& from);
  
  inline TaskCommonFcntion& operator=(const TaskCommonFcntion& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const TaskCommonFcntion& default_instance();
  
  void Swap(TaskCommonFcntion* other);
  
  // implements Message ----------------------------------------------
  
  TaskCommonFcntion* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TaskCommonFcntion& from);
  void MergeFrom(const TaskCommonFcntion& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required bytes task_uuid = 1;
  inline bool has_task_uuid() const;
  inline void clear_task_uuid();
  static const int kTaskUuidFieldNumber = 1;
  inline const ::std::string& task_uuid() const;
  inline void set_task_uuid(const ::std::string& value);
  inline void set_task_uuid(const char* value);
  inline void set_task_uuid(const void* value, size_t size);
  inline ::std::string* mutable_task_uuid();
  
  // @@protoc_insertion_point(class_scope:TaskFunction.TaskCommonFcntion)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* task_uuid_;
  static const ::std::string _default_task_uuid_;
  friend void  protobuf_AddDesc_TaskFunction_2eproto();
  friend void protobuf_AssignDesc_TaskFunction_2eproto();
  friend void protobuf_ShutdownFile_TaskFunction_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static TaskCommonFcntion* default_instance_;
};
// -------------------------------------------------------------------

class TaskCommonFcntionAck : public ::google::protobuf::Message {
 public:
  TaskCommonFcntionAck();
  virtual ~TaskCommonFcntionAck();
  
  TaskCommonFcntionAck(const TaskCommonFcntionAck& from);
  
  inline TaskCommonFcntionAck& operator=(const TaskCommonFcntionAck& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const TaskCommonFcntionAck& default_instance();
  
  void Swap(TaskCommonFcntionAck* other);
  
  // implements Message ----------------------------------------------
  
  TaskCommonFcntionAck* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TaskCommonFcntionAck& from);
  void MergeFrom(const TaskCommonFcntionAck& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required bytes task_uuid = 1;
  inline bool has_task_uuid() const;
  inline void clear_task_uuid();
  static const int kTaskUuidFieldNumber = 1;
  inline const ::std::string& task_uuid() const;
  inline void set_task_uuid(const ::std::string& value);
  inline void set_task_uuid(const char* value);
  inline void set_task_uuid(const void* value, size_t size);
  inline ::std::string* mutable_task_uuid();
  
  // required bool result = 2;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 2;
  inline bool result() const;
  inline void set_result(bool value);
  
  // optional int64 error_number = 3;
  inline bool has_error_number() const;
  inline void clear_error_number();
  static const int kErrorNumberFieldNumber = 3;
  inline ::google::protobuf::int64 error_number() const;
  inline void set_error_number(::google::protobuf::int64 value);
  
  // @@protoc_insertion_point(class_scope:TaskFunction.TaskCommonFcntionAck)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* task_uuid_;
  static const ::std::string _default_task_uuid_;
  bool result_;
  ::google::protobuf::int64 error_number_;
  friend void  protobuf_AddDesc_TaskFunction_2eproto();
  friend void protobuf_AssignDesc_TaskFunction_2eproto();
  friend void protobuf_ShutdownFile_TaskFunction_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static TaskCommonFcntionAck* default_instance_;
};
// ===================================================================


// ===================================================================

// TaskCommonFcntion

// required bytes task_uuid = 1;
inline bool TaskCommonFcntion::has_task_uuid() const {
  return _has_bit(0);
}
inline void TaskCommonFcntion::clear_task_uuid() {
  if (task_uuid_ != &_default_task_uuid_) {
    task_uuid_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& TaskCommonFcntion::task_uuid() const {
  return *task_uuid_;
}
inline void TaskCommonFcntion::set_task_uuid(const ::std::string& value) {
  _set_bit(0);
  if (task_uuid_ == &_default_task_uuid_) {
    task_uuid_ = new ::std::string;
  }
  task_uuid_->assign(value);
}
inline void TaskCommonFcntion::set_task_uuid(const char* value) {
  _set_bit(0);
  if (task_uuid_ == &_default_task_uuid_) {
    task_uuid_ = new ::std::string;
  }
  task_uuid_->assign(value);
}
inline void TaskCommonFcntion::set_task_uuid(const void* value, size_t size) {
  _set_bit(0);
  if (task_uuid_ == &_default_task_uuid_) {
    task_uuid_ = new ::std::string;
  }
  task_uuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TaskCommonFcntion::mutable_task_uuid() {
  _set_bit(0);
  if (task_uuid_ == &_default_task_uuid_) {
    task_uuid_ = new ::std::string;
  }
  return task_uuid_;
}

// -------------------------------------------------------------------

// TaskCommonFcntionAck

// required bytes task_uuid = 1;
inline bool TaskCommonFcntionAck::has_task_uuid() const {
  return _has_bit(0);
}
inline void TaskCommonFcntionAck::clear_task_uuid() {
  if (task_uuid_ != &_default_task_uuid_) {
    task_uuid_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& TaskCommonFcntionAck::task_uuid() const {
  return *task_uuid_;
}
inline void TaskCommonFcntionAck::set_task_uuid(const ::std::string& value) {
  _set_bit(0);
  if (task_uuid_ == &_default_task_uuid_) {
    task_uuid_ = new ::std::string;
  }
  task_uuid_->assign(value);
}
inline void TaskCommonFcntionAck::set_task_uuid(const char* value) {
  _set_bit(0);
  if (task_uuid_ == &_default_task_uuid_) {
    task_uuid_ = new ::std::string;
  }
  task_uuid_->assign(value);
}
inline void TaskCommonFcntionAck::set_task_uuid(const void* value, size_t size) {
  _set_bit(0);
  if (task_uuid_ == &_default_task_uuid_) {
    task_uuid_ = new ::std::string;
  }
  task_uuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TaskCommonFcntionAck::mutable_task_uuid() {
  _set_bit(0);
  if (task_uuid_ == &_default_task_uuid_) {
    task_uuid_ = new ::std::string;
  }
  return task_uuid_;
}

// required bool result = 2;
inline bool TaskCommonFcntionAck::has_result() const {
  return _has_bit(1);
}
inline void TaskCommonFcntionAck::clear_result() {
  result_ = false;
  _clear_bit(1);
}
inline bool TaskCommonFcntionAck::result() const {
  return result_;
}
inline void TaskCommonFcntionAck::set_result(bool value) {
  _set_bit(1);
  result_ = value;
}

// optional int64 error_number = 3;
inline bool TaskCommonFcntionAck::has_error_number() const {
  return _has_bit(2);
}
inline void TaskCommonFcntionAck::clear_error_number() {
  error_number_ = GOOGLE_LONGLONG(0);
  _clear_bit(2);
}
inline ::google::protobuf::int64 TaskCommonFcntionAck::error_number() const {
  return error_number_;
}
inline void TaskCommonFcntionAck::set_error_number(::google::protobuf::int64 value) {
  _set_bit(2);
  error_number_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace TaskFunction

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_TaskFunction_2eproto__INCLUDED
