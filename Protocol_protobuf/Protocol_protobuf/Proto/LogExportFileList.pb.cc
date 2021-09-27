// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "LogExportFileList.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace LogExportFileList {

namespace {

const ::google::protobuf::Descriptor* FileListAck_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FileListAck_reflection_ = NULL;
const ::google::protobuf::Descriptor* FileInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FileInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_LogExportFileList_2eproto() {
  protobuf_AddDesc_LogExportFileList_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "LogExportFileList.proto");
  GOOGLE_CHECK(file != NULL);
  FileListAck_descriptor_ = file->message_type(0);
  static const int FileListAck_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileListAck, task_uuid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileListAck, result_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileListAck, error_number_msg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileListAck, error_number_node_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileListAck, files_),
  };
  FileListAck_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FileListAck_descriptor_,
      FileListAck::default_instance_,
      FileListAck_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileListAck, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileListAck, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FileListAck));
  FileInfo_descriptor_ = file->message_type(1);
  static const int FileInfo_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileInfo, filetype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileInfo, fileindex_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileInfo, filename_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileInfo, filesize_byte_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileInfo, lastupdatetime_),
  };
  FileInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FileInfo_descriptor_,
      FileInfo::default_instance_,
      FileInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FileInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_LogExportFileList_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FileListAck_descriptor_, &FileListAck::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FileInfo_descriptor_, &FileInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_LogExportFileList_2eproto() {
  delete FileListAck::default_instance_;
  delete FileListAck_reflection_;
  delete FileInfo::default_instance_;
  delete FileInfo_reflection_;
}

void protobuf_AddDesc_LogExportFileList_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027LogExportFileList.proto\022\021LogExportFile"
    "List\"\221\001\n\013FileListAck\022\021\n\ttask_uuid\030\001 \002(\014\022"
    "\016\n\006result\030\002 \002(\010\022\030\n\020error_number_msg\030\003 \001("
    "\003\022\031\n\021error_number_node\030\004 \001(\003\022*\n\005files\030\005 "
    "\003(\0132\033.LogExportFileList.FileInfo\"p\n\010File"
    "Info\022\020\n\010filetype\030\001 \002(\005\022\021\n\tfileindex\030\002 \002("
    "\003\022\020\n\010filename\030\003 \002(\014\022\025\n\rfilesize_byte\030\004 \002"
    "(\003\022\026\n\016lastupdatetime\030\005 \002(\014", 306);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "LogExportFileList.proto", &protobuf_RegisterTypes);
  FileListAck::default_instance_ = new FileListAck();
  FileInfo::default_instance_ = new FileInfo();
  FileListAck::default_instance_->InitAsDefaultInstance();
  FileInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_LogExportFileList_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_LogExportFileList_2eproto {
  StaticDescriptorInitializer_LogExportFileList_2eproto() {
    protobuf_AddDesc_LogExportFileList_2eproto();
  }
} static_descriptor_initializer_LogExportFileList_2eproto_;


// ===================================================================

const ::std::string FileListAck::_default_task_uuid_;
#ifndef _MSC_VER
const int FileListAck::kTaskUuidFieldNumber;
const int FileListAck::kResultFieldNumber;
const int FileListAck::kErrorNumberMsgFieldNumber;
const int FileListAck::kErrorNumberNodeFieldNumber;
const int FileListAck::kFilesFieldNumber;
#endif  // !_MSC_VER

FileListAck::FileListAck()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void FileListAck::InitAsDefaultInstance() {
}

FileListAck::FileListAck(const FileListAck& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void FileListAck::SharedCtor() {
  _cached_size_ = 0;
  task_uuid_ = const_cast< ::std::string*>(&_default_task_uuid_);
  result_ = false;
  error_number_msg_ = GOOGLE_LONGLONG(0);
  error_number_node_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FileListAck::~FileListAck() {
  SharedDtor();
}

void FileListAck::SharedDtor() {
  if (task_uuid_ != &_default_task_uuid_) {
    delete task_uuid_;
  }
  if (this != default_instance_) {
  }
}

void FileListAck::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FileListAck::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FileListAck_descriptor_;
}

const FileListAck& FileListAck::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_LogExportFileList_2eproto();  return *default_instance_;
}

FileListAck* FileListAck::default_instance_ = NULL;

FileListAck* FileListAck::New() const {
  return new FileListAck;
}

void FileListAck::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (task_uuid_ != &_default_task_uuid_) {
        task_uuid_->clear();
      }
    }
    result_ = false;
    error_number_msg_ = GOOGLE_LONGLONG(0);
    error_number_node_ = GOOGLE_LONGLONG(0);
  }
  files_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FileListAck::MergePartialFromCodedStream(
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
        if (input->ExpectTag(24)) goto parse_error_number_msg;
        break;
      }
      
      // optional int64 error_number_msg = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_error_number_msg:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &error_number_msg_)));
          _set_bit(2);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_error_number_node;
        break;
      }
      
      // optional int64 error_number_node = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_error_number_node:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &error_number_node_)));
          _set_bit(3);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_files;
        break;
      }
      
      // repeated .LogExportFileList.FileInfo files = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_files:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_files()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_files;
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

void FileListAck::SerializeWithCachedSizes(
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
  
  // optional int64 error_number_msg = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->error_number_msg(), output);
  }
  
  // optional int64 error_number_node = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->error_number_node(), output);
  }
  
  // repeated .LogExportFileList.FileInfo files = 5;
  for (int i = 0; i < this->files_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->files(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* FileListAck::SerializeWithCachedSizesToArray(
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
  
  // optional int64 error_number_msg = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->error_number_msg(), target);
  }
  
  // optional int64 error_number_node = 4;
  if (_has_bit(3)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->error_number_node(), target);
  }
  
  // repeated .LogExportFileList.FileInfo files = 5;
  for (int i = 0; i < this->files_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->files(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int FileListAck::ByteSize() const {
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
    
    // optional int64 error_number_msg = 3;
    if (has_error_number_msg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->error_number_msg());
    }
    
    // optional int64 error_number_node = 4;
    if (has_error_number_node()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->error_number_node());
    }
    
  }
  // repeated .LogExportFileList.FileInfo files = 5;
  total_size += 1 * this->files_size();
  for (int i = 0; i < this->files_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->files(i));
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

void FileListAck::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FileListAck* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FileListAck*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FileListAck::MergeFrom(const FileListAck& from) {
  GOOGLE_CHECK_NE(&from, this);
  files_.MergeFrom(from.files_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_task_uuid(from.task_uuid());
    }
    if (from._has_bit(1)) {
      set_result(from.result());
    }
    if (from._has_bit(2)) {
      set_error_number_msg(from.error_number_msg());
    }
    if (from._has_bit(3)) {
      set_error_number_node(from.error_number_node());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FileListAck::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FileListAck::CopyFrom(const FileListAck& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FileListAck::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  for (int i = 0; i < files_size(); i++) {
    if (!this->files(i).IsInitialized()) return false;
  }
  return true;
}

void FileListAck::Swap(FileListAck* other) {
  if (other != this) {
    std::swap(task_uuid_, other->task_uuid_);
    std::swap(result_, other->result_);
    std::swap(error_number_msg_, other->error_number_msg_);
    std::swap(error_number_node_, other->error_number_node_);
    files_.Swap(&other->files_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FileListAck::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FileListAck_descriptor_;
  metadata.reflection = FileListAck_reflection_;
  return metadata;
}


// ===================================================================

const ::std::string FileInfo::_default_filename_;
const ::std::string FileInfo::_default_lastupdatetime_;
#ifndef _MSC_VER
const int FileInfo::kFiletypeFieldNumber;
const int FileInfo::kFileindexFieldNumber;
const int FileInfo::kFilenameFieldNumber;
const int FileInfo::kFilesizeByteFieldNumber;
const int FileInfo::kLastupdatetimeFieldNumber;
#endif  // !_MSC_VER

FileInfo::FileInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void FileInfo::InitAsDefaultInstance() {
}

FileInfo::FileInfo(const FileInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void FileInfo::SharedCtor() {
  _cached_size_ = 0;
  filetype_ = 0;
  fileindex_ = GOOGLE_LONGLONG(0);
  filename_ = const_cast< ::std::string*>(&_default_filename_);
  filesize_byte_ = GOOGLE_LONGLONG(0);
  lastupdatetime_ = const_cast< ::std::string*>(&_default_lastupdatetime_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FileInfo::~FileInfo() {
  SharedDtor();
}

void FileInfo::SharedDtor() {
  if (filename_ != &_default_filename_) {
    delete filename_;
  }
  if (lastupdatetime_ != &_default_lastupdatetime_) {
    delete lastupdatetime_;
  }
  if (this != default_instance_) {
  }
}

void FileInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FileInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FileInfo_descriptor_;
}

const FileInfo& FileInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_LogExportFileList_2eproto();  return *default_instance_;
}

FileInfo* FileInfo::default_instance_ = NULL;

FileInfo* FileInfo::New() const {
  return new FileInfo;
}

void FileInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    filetype_ = 0;
    fileindex_ = GOOGLE_LONGLONG(0);
    if (_has_bit(2)) {
      if (filename_ != &_default_filename_) {
        filename_->clear();
      }
    }
    filesize_byte_ = GOOGLE_LONGLONG(0);
    if (_has_bit(4)) {
      if (lastupdatetime_ != &_default_lastupdatetime_) {
        lastupdatetime_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FileInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 filetype = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &filetype_)));
          _set_bit(0);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_fileindex;
        break;
      }
      
      // required int64 fileindex = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_fileindex:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &fileindex_)));
          _set_bit(1);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_filename;
        break;
      }
      
      // required bytes filename = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_filename:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_filename()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_filesize_byte;
        break;
      }
      
      // required int64 filesize_byte = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_filesize_byte:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &filesize_byte_)));
          _set_bit(3);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_lastupdatetime;
        break;
      }
      
      // required bytes lastupdatetime = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_lastupdatetime:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_lastupdatetime()));
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

void FileInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 filetype = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->filetype(), output);
  }
  
  // required int64 fileindex = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->fileindex(), output);
  }
  
  // required bytes filename = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      3, this->filename(), output);
  }
  
  // required int64 filesize_byte = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->filesize_byte(), output);
  }
  
  // required bytes lastupdatetime = 5;
  if (_has_bit(4)) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      5, this->lastupdatetime(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* FileInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 filetype = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->filetype(), target);
  }
  
  // required int64 fileindex = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->fileindex(), target);
  }
  
  // required bytes filename = 3;
  if (_has_bit(2)) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->filename(), target);
  }
  
  // required int64 filesize_byte = 4;
  if (_has_bit(3)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->filesize_byte(), target);
  }
  
  // required bytes lastupdatetime = 5;
  if (_has_bit(4)) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        5, this->lastupdatetime(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int FileInfo::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 filetype = 1;
    if (has_filetype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->filetype());
    }
    
    // required int64 fileindex = 2;
    if (has_fileindex()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->fileindex());
    }
    
    // required bytes filename = 3;
    if (has_filename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->filename());
    }
    
    // required int64 filesize_byte = 4;
    if (has_filesize_byte()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->filesize_byte());
    }
    
    // required bytes lastupdatetime = 5;
    if (has_lastupdatetime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->lastupdatetime());
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

void FileInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FileInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FileInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FileInfo::MergeFrom(const FileInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_filetype(from.filetype());
    }
    if (from._has_bit(1)) {
      set_fileindex(from.fileindex());
    }
    if (from._has_bit(2)) {
      set_filename(from.filename());
    }
    if (from._has_bit(3)) {
      set_filesize_byte(from.filesize_byte());
    }
    if (from._has_bit(4)) {
      set_lastupdatetime(from.lastupdatetime());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FileInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FileInfo::CopyFrom(const FileInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FileInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;
  
  return true;
}

void FileInfo::Swap(FileInfo* other) {
  if (other != this) {
    std::swap(filetype_, other->filetype_);
    std::swap(fileindex_, other->fileindex_);
    std::swap(filename_, other->filename_);
    std::swap(filesize_byte_, other->filesize_byte_);
    std::swap(lastupdatetime_, other->lastupdatetime_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FileInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FileInfo_descriptor_;
  metadata.reflection = FileInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace LogExportFileList

// @@protoc_insertion_point(global_scope)