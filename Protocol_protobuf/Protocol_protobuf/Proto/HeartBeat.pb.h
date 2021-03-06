// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HeartBeat.proto

#ifndef PROTOBUF_HeartBeat_2eproto__INCLUDED
#define PROTOBUF_HeartBeat_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace HeartBeat {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_HeartBeat_2eproto();
void protobuf_AssignDesc_HeartBeat_2eproto();
void protobuf_ShutdownFile_HeartBeat_2eproto();

class HeartBeatInfo;

// ===================================================================

class HeartBeatInfo : public ::google::protobuf::Message {
 public:
  HeartBeatInfo();
  virtual ~HeartBeatInfo();
  
  HeartBeatInfo(const HeartBeatInfo& from);
  
  inline HeartBeatInfo& operator=(const HeartBeatInfo& from) {
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
  static const HeartBeatInfo& default_instance();
  
  void Swap(HeartBeatInfo* other);
  
  // implements Message ----------------------------------------------
  
  HeartBeatInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HeartBeatInfo& from);
  void MergeFrom(const HeartBeatInfo& from);
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
  
  // optional bytes value = 1;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 1;
  inline const ::std::string& value() const;
  inline void set_value(const ::std::string& value);
  inline void set_value(const char* value);
  inline void set_value(const void* value, size_t size);
  inline ::std::string* mutable_value();
  
  // @@protoc_insertion_point(class_scope:HeartBeat.HeartBeatInfo)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* value_;
  static const ::std::string _default_value_;
  friend void  protobuf_AddDesc_HeartBeat_2eproto();
  friend void protobuf_AssignDesc_HeartBeat_2eproto();
  friend void protobuf_ShutdownFile_HeartBeat_2eproto();
  
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
  static HeartBeatInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// HeartBeatInfo

// optional bytes value = 1;
inline bool HeartBeatInfo::has_value() const {
  return _has_bit(0);
}
inline void HeartBeatInfo::clear_value() {
  if (value_ != &_default_value_) {
    value_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& HeartBeatInfo::value() const {
  return *value_;
}
inline void HeartBeatInfo::set_value(const ::std::string& value) {
  _set_bit(0);
  if (value_ == &_default_value_) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void HeartBeatInfo::set_value(const char* value) {
  _set_bit(0);
  if (value_ == &_default_value_) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void HeartBeatInfo::set_value(const void* value, size_t size) {
  _set_bit(0);
  if (value_ == &_default_value_) {
    value_ = new ::std::string;
  }
  value_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HeartBeatInfo::mutable_value() {
  _set_bit(0);
  if (value_ == &_default_value_) {
    value_ = new ::std::string;
  }
  return value_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace HeartBeat

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_HeartBeat_2eproto__INCLUDED
