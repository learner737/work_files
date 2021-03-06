// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LogExportLogin.proto

#ifndef PROTOBUF_LogExportLogin_2eproto__INCLUDED
#define PROTOBUF_LogExportLogin_2eproto__INCLUDED

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

namespace LogExportLogin {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_LogExportLogin_2eproto();
void protobuf_AssignDesc_LogExportLogin_2eproto();
void protobuf_ShutdownFile_LogExportLogin_2eproto();

class Login;
class LoginAck;
class LoginCMD;
class ChannelBind;
class ChannelBindAck;

// ===================================================================

class Login : public ::google::protobuf::Message {
 public:
  Login();
  virtual ~Login();
  
  Login(const Login& from);
  
  inline Login& operator=(const Login& from) {
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
  static const Login& default_instance();
  
  void Swap(Login* other);
  
  // implements Message ----------------------------------------------
  
  Login* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Login& from);
  void MergeFrom(const Login& from);
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
  
  // required int32 login_type = 1;
  inline bool has_login_type() const;
  inline void clear_login_type();
  static const int kLoginTypeFieldNumber = 1;
  inline ::google::protobuf::int32 login_type() const;
  inline void set_login_type(::google::protobuf::int32 value);
  
  // required bytes login_uuid = 2;
  inline bool has_login_uuid() const;
  inline void clear_login_uuid();
  static const int kLoginUuidFieldNumber = 2;
  inline const ::std::string& login_uuid() const;
  inline void set_login_uuid(const ::std::string& value);
  inline void set_login_uuid(const char* value);
  inline void set_login_uuid(const void* value, size_t size);
  inline ::std::string* mutable_login_uuid();
  
  // @@protoc_insertion_point(class_scope:LogExportLogin.Login)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 login_type_;
  ::std::string* login_uuid_;
  static const ::std::string _default_login_uuid_;
  friend void  protobuf_AddDesc_LogExportLogin_2eproto();
  friend void protobuf_AssignDesc_LogExportLogin_2eproto();
  friend void protobuf_ShutdownFile_LogExportLogin_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
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
  static Login* default_instance_;
};
// -------------------------------------------------------------------

class LoginAck : public ::google::protobuf::Message {
 public:
  LoginAck();
  virtual ~LoginAck();
  
  LoginAck(const LoginAck& from);
  
  inline LoginAck& operator=(const LoginAck& from) {
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
  static const LoginAck& default_instance();
  
  void Swap(LoginAck* other);
  
  // implements Message ----------------------------------------------
  
  LoginAck* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginAck& from);
  void MergeFrom(const LoginAck& from);
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
  
  // required bool result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline bool result() const;
  inline void set_result(bool value);
  
  // optional int64 error_number = 2;
  inline bool has_error_number() const;
  inline void clear_error_number();
  static const int kErrorNumberFieldNumber = 2;
  inline ::google::protobuf::int64 error_number() const;
  inline void set_error_number(::google::protobuf::int64 value);
  
  // @@protoc_insertion_point(class_scope:LogExportLogin.LoginAck)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  bool result_;
  ::google::protobuf::int64 error_number_;
  friend void  protobuf_AddDesc_LogExportLogin_2eproto();
  friend void protobuf_AssignDesc_LogExportLogin_2eproto();
  friend void protobuf_ShutdownFile_LogExportLogin_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
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
  static LoginAck* default_instance_;
};
// -------------------------------------------------------------------

class LoginCMD : public ::google::protobuf::Message {
 public:
  LoginCMD();
  virtual ~LoginCMD();
  
  LoginCMD(const LoginCMD& from);
  
  inline LoginCMD& operator=(const LoginCMD& from) {
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
  static const LoginCMD& default_instance();
  
  void Swap(LoginCMD* other);
  
  // implements Message ----------------------------------------------
  
  LoginCMD* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginCMD& from);
  void MergeFrom(const LoginCMD& from);
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
  
  // required int32 login_type = 1;
  inline bool has_login_type() const;
  inline void clear_login_type();
  static const int kLoginTypeFieldNumber = 1;
  inline ::google::protobuf::int32 login_type() const;
  inline void set_login_type(::google::protobuf::int32 value);
  
  // required bytes login_uuid = 2;
  inline bool has_login_uuid() const;
  inline void clear_login_uuid();
  static const int kLoginUuidFieldNumber = 2;
  inline const ::std::string& login_uuid() const;
  inline void set_login_uuid(const ::std::string& value);
  inline void set_login_uuid(const char* value);
  inline void set_login_uuid(const void* value, size_t size);
  inline ::std::string* mutable_login_uuid();
  
  // required bytes task_uuid = 3;
  inline bool has_task_uuid() const;
  inline void clear_task_uuid();
  static const int kTaskUuidFieldNumber = 3;
  inline const ::std::string& task_uuid() const;
  inline void set_task_uuid(const ::std::string& value);
  inline void set_task_uuid(const char* value);
  inline void set_task_uuid(const void* value, size_t size);
  inline ::std::string* mutable_task_uuid();
  
  // @@protoc_insertion_point(class_scope:LogExportLogin.LoginCMD)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 login_type_;
  ::std::string* login_uuid_;
  static const ::std::string _default_login_uuid_;
  ::std::string* task_uuid_;
  static const ::std::string _default_task_uuid_;
  friend void  protobuf_AddDesc_LogExportLogin_2eproto();
  friend void protobuf_AssignDesc_LogExportLogin_2eproto();
  friend void protobuf_ShutdownFile_LogExportLogin_2eproto();
  
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
  static LoginCMD* default_instance_;
};
// -------------------------------------------------------------------

class ChannelBind : public ::google::protobuf::Message {
 public:
  ChannelBind();
  virtual ~ChannelBind();
  
  ChannelBind(const ChannelBind& from);
  
  inline ChannelBind& operator=(const ChannelBind& from) {
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
  static const ChannelBind& default_instance();
  
  void Swap(ChannelBind* other);
  
  // implements Message ----------------------------------------------
  
  ChannelBind* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ChannelBind& from);
  void MergeFrom(const ChannelBind& from);
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
  
  // required int64 signature = 1;
  inline bool has_signature() const;
  inline void clear_signature();
  static const int kSignatureFieldNumber = 1;
  inline ::google::protobuf::int64 signature() const;
  inline void set_signature(::google::protobuf::int64 value);
  
  // @@protoc_insertion_point(class_scope:LogExportLogin.ChannelBind)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int64 signature_;
  friend void  protobuf_AddDesc_LogExportLogin_2eproto();
  friend void protobuf_AssignDesc_LogExportLogin_2eproto();
  friend void protobuf_ShutdownFile_LogExportLogin_2eproto();
  
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
  static ChannelBind* default_instance_;
};
// -------------------------------------------------------------------

class ChannelBindAck : public ::google::protobuf::Message {
 public:
  ChannelBindAck();
  virtual ~ChannelBindAck();
  
  ChannelBindAck(const ChannelBindAck& from);
  
  inline ChannelBindAck& operator=(const ChannelBindAck& from) {
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
  static const ChannelBindAck& default_instance();
  
  void Swap(ChannelBindAck* other);
  
  // implements Message ----------------------------------------------
  
  ChannelBindAck* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ChannelBindAck& from);
  void MergeFrom(const ChannelBindAck& from);
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
  
  // required bool result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline bool result() const;
  inline void set_result(bool value);
  
  // optional int64 error_number = 2;
  inline bool has_error_number() const;
  inline void clear_error_number();
  static const int kErrorNumberFieldNumber = 2;
  inline ::google::protobuf::int64 error_number() const;
  inline void set_error_number(::google::protobuf::int64 value);
  
  // @@protoc_insertion_point(class_scope:LogExportLogin.ChannelBindAck)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  bool result_;
  ::google::protobuf::int64 error_number_;
  friend void  protobuf_AddDesc_LogExportLogin_2eproto();
  friend void protobuf_AssignDesc_LogExportLogin_2eproto();
  friend void protobuf_ShutdownFile_LogExportLogin_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
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
  static ChannelBindAck* default_instance_;
};
// ===================================================================


// ===================================================================

// Login

// required int32 login_type = 1;
inline bool Login::has_login_type() const {
  return _has_bit(0);
}
inline void Login::clear_login_type() {
  login_type_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 Login::login_type() const {
  return login_type_;
}
inline void Login::set_login_type(::google::protobuf::int32 value) {
  _set_bit(0);
  login_type_ = value;
}

// required bytes login_uuid = 2;
inline bool Login::has_login_uuid() const {
  return _has_bit(1);
}
inline void Login::clear_login_uuid() {
  if (login_uuid_ != &_default_login_uuid_) {
    login_uuid_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& Login::login_uuid() const {
  return *login_uuid_;
}
inline void Login::set_login_uuid(const ::std::string& value) {
  _set_bit(1);
  if (login_uuid_ == &_default_login_uuid_) {
    login_uuid_ = new ::std::string;
  }
  login_uuid_->assign(value);
}
inline void Login::set_login_uuid(const char* value) {
  _set_bit(1);
  if (login_uuid_ == &_default_login_uuid_) {
    login_uuid_ = new ::std::string;
  }
  login_uuid_->assign(value);
}
inline void Login::set_login_uuid(const void* value, size_t size) {
  _set_bit(1);
  if (login_uuid_ == &_default_login_uuid_) {
    login_uuid_ = new ::std::string;
  }
  login_uuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Login::mutable_login_uuid() {
  _set_bit(1);
  if (login_uuid_ == &_default_login_uuid_) {
    login_uuid_ = new ::std::string;
  }
  return login_uuid_;
}

// -------------------------------------------------------------------

// LoginAck

// required bool result = 1;
inline bool LoginAck::has_result() const {
  return _has_bit(0);
}
inline void LoginAck::clear_result() {
  result_ = false;
  _clear_bit(0);
}
inline bool LoginAck::result() const {
  return result_;
}
inline void LoginAck::set_result(bool value) {
  _set_bit(0);
  result_ = value;
}

// optional int64 error_number = 2;
inline bool LoginAck::has_error_number() const {
  return _has_bit(1);
}
inline void LoginAck::clear_error_number() {
  error_number_ = GOOGLE_LONGLONG(0);
  _clear_bit(1);
}
inline ::google::protobuf::int64 LoginAck::error_number() const {
  return error_number_;
}
inline void LoginAck::set_error_number(::google::protobuf::int64 value) {
  _set_bit(1);
  error_number_ = value;
}

// -------------------------------------------------------------------

// LoginCMD

// required int32 login_type = 1;
inline bool LoginCMD::has_login_type() const {
  return _has_bit(0);
}
inline void LoginCMD::clear_login_type() {
  login_type_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 LoginCMD::login_type() const {
  return login_type_;
}
inline void LoginCMD::set_login_type(::google::protobuf::int32 value) {
  _set_bit(0);
  login_type_ = value;
}

// required bytes login_uuid = 2;
inline bool LoginCMD::has_login_uuid() const {
  return _has_bit(1);
}
inline void LoginCMD::clear_login_uuid() {
  if (login_uuid_ != &_default_login_uuid_) {
    login_uuid_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& LoginCMD::login_uuid() const {
  return *login_uuid_;
}
inline void LoginCMD::set_login_uuid(const ::std::string& value) {
  _set_bit(1);
  if (login_uuid_ == &_default_login_uuid_) {
    login_uuid_ = new ::std::string;
  }
  login_uuid_->assign(value);
}
inline void LoginCMD::set_login_uuid(const char* value) {
  _set_bit(1);
  if (login_uuid_ == &_default_login_uuid_) {
    login_uuid_ = new ::std::string;
  }
  login_uuid_->assign(value);
}
inline void LoginCMD::set_login_uuid(const void* value, size_t size) {
  _set_bit(1);
  if (login_uuid_ == &_default_login_uuid_) {
    login_uuid_ = new ::std::string;
  }
  login_uuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginCMD::mutable_login_uuid() {
  _set_bit(1);
  if (login_uuid_ == &_default_login_uuid_) {
    login_uuid_ = new ::std::string;
  }
  return login_uuid_;
}

// required bytes task_uuid = 3;
inline bool LoginCMD::has_task_uuid() const {
  return _has_bit(2);
}
inline void LoginCMD::clear_task_uuid() {
  if (task_uuid_ != &_default_task_uuid_) {
    task_uuid_->clear();
  }
  _clear_bit(2);
}
inline const ::std::string& LoginCMD::task_uuid() const {
  return *task_uuid_;
}
inline void LoginCMD::set_task_uuid(const ::std::string& value) {
  _set_bit(2);
  if (task_uuid_ == &_default_task_uuid_) {
    task_uuid_ = new ::std::string;
  }
  task_uuid_->assign(value);
}
inline void LoginCMD::set_task_uuid(const char* value) {
  _set_bit(2);
  if (task_uuid_ == &_default_task_uuid_) {
    task_uuid_ = new ::std::string;
  }
  task_uuid_->assign(value);
}
inline void LoginCMD::set_task_uuid(const void* value, size_t size) {
  _set_bit(2);
  if (task_uuid_ == &_default_task_uuid_) {
    task_uuid_ = new ::std::string;
  }
  task_uuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginCMD::mutable_task_uuid() {
  _set_bit(2);
  if (task_uuid_ == &_default_task_uuid_) {
    task_uuid_ = new ::std::string;
  }
  return task_uuid_;
}

// -------------------------------------------------------------------

// ChannelBind

// required int64 signature = 1;
inline bool ChannelBind::has_signature() const {
  return _has_bit(0);
}
inline void ChannelBind::clear_signature() {
  signature_ = GOOGLE_LONGLONG(0);
  _clear_bit(0);
}
inline ::google::protobuf::int64 ChannelBind::signature() const {
  return signature_;
}
inline void ChannelBind::set_signature(::google::protobuf::int64 value) {
  _set_bit(0);
  signature_ = value;
}

// -------------------------------------------------------------------

// ChannelBindAck

// required bool result = 1;
inline bool ChannelBindAck::has_result() const {
  return _has_bit(0);
}
inline void ChannelBindAck::clear_result() {
  result_ = false;
  _clear_bit(0);
}
inline bool ChannelBindAck::result() const {
  return result_;
}
inline void ChannelBindAck::set_result(bool value) {
  _set_bit(0);
  result_ = value;
}

// optional int64 error_number = 2;
inline bool ChannelBindAck::has_error_number() const {
  return _has_bit(1);
}
inline void ChannelBindAck::clear_error_number() {
  error_number_ = GOOGLE_LONGLONG(0);
  _clear_bit(1);
}
inline ::google::protobuf::int64 ChannelBindAck::error_number() const {
  return error_number_;
}
inline void ChannelBindAck::set_error_number(::google::protobuf::int64 value) {
  _set_bit(1);
  error_number_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace LogExportLogin

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_LogExportLogin_2eproto__INCLUDED
