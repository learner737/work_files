// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "file_mount_search_dir.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace file_mount_search_dir {

namespace {

const ::google::protobuf::Descriptor* SearchDir_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SearchDir_reflection_ = NULL;
const ::google::protobuf::Descriptor* SearchDirAck_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SearchDirAck_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_file_5fmount_5fsearch_5fdir_2eproto() {
  protobuf_AddDesc_file_5fmount_5fsearch_5fdir_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "file_mount_search_dir.proto");
  GOOGLE_CHECK(file != NULL);
  SearchDir_descriptor_ = file->message_type(0);
  static const int SearchDir_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchDir, task_uuid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchDir, task_timeout_second_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchDir, task_handler_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchDir, task_handler_userid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchDir, mount_root_path_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchDir, the_dir_path_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchDir, keywords_),
  };
  SearchDir_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SearchDir_descriptor_,
      SearchDir::default_instance_,
      SearchDir_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchDir, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchDir, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SearchDir));
  SearchDirAck_descriptor_ = file->message_type(1);
  static const int SearchDirAck_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchDirAck, task_uuid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchDirAck, result_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchDirAck, error_number_),
  };
  SearchDirAck_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SearchDirAck_descriptor_,
      SearchDirAck::default_instance_,
      SearchDirAck_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchDirAck, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchDirAck, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SearchDirAck));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_file_5fmount_5fsearch_5fdir_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SearchDir_descriptor_, &SearchDir::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SearchDirAck_descriptor_, &SearchDirAck::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_file_5fmount_5fsearch_5fdir_2eproto() {
  delete SearchDir::default_instance_;
  delete SearchDir_reflection_;
  delete SearchDirAck::default_instance_;
  delete SearchDirAck_reflection_;
}

void protobuf_AddDesc_file_5fmount_5fsearch_5fdir_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::LogExportTask::protobuf_AddDesc_LogExportTask_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033file_mount_search_dir.proto\022\025file_moun"
    "t_search_dir\032\023LogExportTask.proto\"\313\001\n\tSe"
    "archDir\022\021\n\ttask_uuid\030\001 \002(\014\022\033\n\023task_timeo"
    "ut_second\030\002 \002(\005\0220\n\014task_handler\030\003 \002(\0162\032."
    "LogExportTask.TaskHandler\022\033\n\023task_handle"
    "r_userid\030\004 \002(\014\022\027\n\017mount_root_path\030\005 \002(\014\022"
    "\024\n\014the_dir_path\030\006 \002(\014\022\020\n\010keywords\030\007 \002(\014\""
    "G\n\014SearchDirAck\022\021\n\ttask_uuid\030\001 \002(\014\022\016\n\006re"
    "sult\030\002 \002(\010\022\024\n\014error_number\030\003 \001(\003", 352);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "file_mount_search_dir.proto", &protobuf_RegisterTypes);
  SearchDir::default_instance_ = new SearchDir();
  SearchDirAck::default_instance_ = new SearchDirAck();
  SearchDir::default_instance_->InitAsDefaultInstance();
  SearchDirAck::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_file_5fmount_5fsearch_5fdir_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_file_5fmount_5fsearch_5fdir_2eproto {
  StaticDescriptorInitializer_file_5fmount_5fsearch_5fdir_2eproto() {
    protobuf_AddDesc_file_5fmount_5fsearch_5fdir_2eproto();
  }
} static_descriptor_initializer_file_5fmount_5fsearch_5fdir_2eproto_;


// ===================================================================

const ::std::string SearchDir::_default_task_uuid_;
const ::std::string SearchDir::_default_task_handler_userid_;
const ::std::string SearchDir::_default_mount_root_path_;
const ::std::string SearchDir::_default_the_dir_path_;
const ::std::string SearchDir::_default_keywords_;
#ifndef _MSC_VER
const int SearchDir::kTaskUuidFieldNumber;
const int SearchDir::kTaskTimeoutSecondFieldNumber;
const int SearchDir::kTaskHandlerFieldNumber;
const int SearchDir::kTaskHandlerUseridFieldNumber;
const int SearchDir::kMountRootPathFieldNumber;
const int SearchDir::kTheDirPathFieldNumber;
const int SearchDir::kKeywordsFieldNumber;
#endif  // !_MSC_VER

SearchDir::SearchDir()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SearchDir::InitAsDefaultInstance() {
}

SearchDir::SearchDir(const SearchDir& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SearchDir::SharedCtor() {
  _cached_size_ = 0;
  task_uuid_ = const_cast< ::std::string*>(&_default_task_uuid_);
  task_timeout_second_ = 0;
  task_handler_ = 1;
  task_handler_userid_ = const_cast< ::std::string*>(&_default_task_handler_userid_);
  mount_root_path_ = const_cast< ::std::string*>(&_default_mount_root_path_);
  the_dir_path_ = const_cast< ::std::string*>(&_default_the_dir_path_);
  keywords_ = const_cast< ::std::string*>(&_default_keywords_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SearchDir::~SearchDir() {
  SharedDtor();
}

void SearchDir::SharedDtor() {
  if (task_uuid_ != &_default_task_uuid_) {
    delete task_uuid_;
  }
  if (task_handler_userid_ != &_default_task_handler_userid_) {
    delete task_handler_userid_;
  }
  if (mount_root_path_ != &_default_mount_root_path_) {
    delete mount_root_path_;
  }
  if (the_dir_path_ != &_default_the_dir_path_) {
    delete the_dir_path_;
  }
  if (keywords_ != &_default_keywords_) {
    delete keywords_;
  }
  if (this != default_instance_) {
  }
}

void SearchDir::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SearchDir::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SearchDir_descriptor_;
}

const SearchDir& SearchDir::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_file_5fmount_5fsearch_5fdir_2eproto();  return *default_instance_;
}

SearchDir* SearchDir::default_instance_ = NULL;

SearchDir* SearchDir::New() const {
  return new SearchDir;
}

void SearchDir::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (task_uuid_ != &_default_task_uuid_) {
        task_uuid_->clear();
      }
    }
    task_timeout_second_ = 0;
    task_handler_ = 1;
    if (_has_bit(3)) {
      if (task_handler_userid_ != &_default_task_handler_userid_) {
        task_handler_userid_->clear();
      }
    }
    if (_has_bit(4)) {
      if (mount_root_path_ != &_default_mount_root_path_) {
        mount_root_path_->clear();
      }
    }
    if (_has_bit(5)) {
      if (the_dir_path_ != &_default_the_dir_path_) {
        the_dir_path_->clear();
      }
    }
    if (_has_bit(6)) {
      if (keywords_ != &_default_keywords_) {
        keywords_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SearchDir::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_task_timeout_second;
        break;
      }
      
      // required int32 task_timeout_second = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_task_timeout_second:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &task_timeout_second_)));
          _set_bit(1);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_task_handler;
        break;
      }
      
      // required .LogExportTask.TaskHandler task_handler = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_task_handler:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (LogExportTask::TaskHandler_IsValid(value)) {
            set_task_handler(static_cast< LogExportTask::TaskHandler >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_task_handler_userid;
        break;
      }
      
      // required bytes task_handler_userid = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_task_handler_userid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_task_handler_userid()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_mount_root_path;
        break;
      }
      
      // required bytes mount_root_path = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_mount_root_path:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_mount_root_path()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_the_dir_path;
        break;
      }
      
      // required bytes the_dir_path = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_the_dir_path:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_the_dir_path()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_keywords;
        break;
      }
      
      // required bytes keywords = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_keywords:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_keywords()));
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

void SearchDir::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bytes task_uuid = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->task_uuid(), output);
  }
  
  // required int32 task_timeout_second = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->task_timeout_second(), output);
  }
  
  // required .LogExportTask.TaskHandler task_handler = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->task_handler(), output);
  }
  
  // required bytes task_handler_userid = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      4, this->task_handler_userid(), output);
  }
  
  // required bytes mount_root_path = 5;
  if (_has_bit(4)) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      5, this->mount_root_path(), output);
  }
  
  // required bytes the_dir_path = 6;
  if (_has_bit(5)) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      6, this->the_dir_path(), output);
  }
  
  // required bytes keywords = 7;
  if (_has_bit(6)) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      7, this->keywords(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SearchDir::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required bytes task_uuid = 1;
  if (_has_bit(0)) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->task_uuid(), target);
  }
  
  // required int32 task_timeout_second = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->task_timeout_second(), target);
  }
  
  // required .LogExportTask.TaskHandler task_handler = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->task_handler(), target);
  }
  
  // required bytes task_handler_userid = 4;
  if (_has_bit(3)) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->task_handler_userid(), target);
  }
  
  // required bytes mount_root_path = 5;
  if (_has_bit(4)) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        5, this->mount_root_path(), target);
  }
  
  // required bytes the_dir_path = 6;
  if (_has_bit(5)) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        6, this->the_dir_path(), target);
  }
  
  // required bytes keywords = 7;
  if (_has_bit(6)) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        7, this->keywords(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SearchDir::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bytes task_uuid = 1;
    if (has_task_uuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->task_uuid());
    }
    
    // required int32 task_timeout_second = 2;
    if (has_task_timeout_second()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->task_timeout_second());
    }
    
    // required .LogExportTask.TaskHandler task_handler = 3;
    if (has_task_handler()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->task_handler());
    }
    
    // required bytes task_handler_userid = 4;
    if (has_task_handler_userid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->task_handler_userid());
    }
    
    // required bytes mount_root_path = 5;
    if (has_mount_root_path()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->mount_root_path());
    }
    
    // required bytes the_dir_path = 6;
    if (has_the_dir_path()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->the_dir_path());
    }
    
    // required bytes keywords = 7;
    if (has_keywords()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->keywords());
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

void SearchDir::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SearchDir* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SearchDir*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SearchDir::MergeFrom(const SearchDir& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_task_uuid(from.task_uuid());
    }
    if (from._has_bit(1)) {
      set_task_timeout_second(from.task_timeout_second());
    }
    if (from._has_bit(2)) {
      set_task_handler(from.task_handler());
    }
    if (from._has_bit(3)) {
      set_task_handler_userid(from.task_handler_userid());
    }
    if (from._has_bit(4)) {
      set_mount_root_path(from.mount_root_path());
    }
    if (from._has_bit(5)) {
      set_the_dir_path(from.the_dir_path());
    }
    if (from._has_bit(6)) {
      set_keywords(from.keywords());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SearchDir::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SearchDir::CopyFrom(const SearchDir& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SearchDir::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000007f) != 0x0000007f) return false;
  
  return true;
}

void SearchDir::Swap(SearchDir* other) {
  if (other != this) {
    std::swap(task_uuid_, other->task_uuid_);
    std::swap(task_timeout_second_, other->task_timeout_second_);
    std::swap(task_handler_, other->task_handler_);
    std::swap(task_handler_userid_, other->task_handler_userid_);
    std::swap(mount_root_path_, other->mount_root_path_);
    std::swap(the_dir_path_, other->the_dir_path_);
    std::swap(keywords_, other->keywords_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SearchDir::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SearchDir_descriptor_;
  metadata.reflection = SearchDir_reflection_;
  return metadata;
}


// ===================================================================

const ::std::string SearchDirAck::_default_task_uuid_;
#ifndef _MSC_VER
const int SearchDirAck::kTaskUuidFieldNumber;
const int SearchDirAck::kResultFieldNumber;
const int SearchDirAck::kErrorNumberFieldNumber;
#endif  // !_MSC_VER

SearchDirAck::SearchDirAck()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SearchDirAck::InitAsDefaultInstance() {
}

SearchDirAck::SearchDirAck(const SearchDirAck& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SearchDirAck::SharedCtor() {
  _cached_size_ = 0;
  task_uuid_ = const_cast< ::std::string*>(&_default_task_uuid_);
  result_ = false;
  error_number_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SearchDirAck::~SearchDirAck() {
  SharedDtor();
}

void SearchDirAck::SharedDtor() {
  if (task_uuid_ != &_default_task_uuid_) {
    delete task_uuid_;
  }
  if (this != default_instance_) {
  }
}

void SearchDirAck::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SearchDirAck::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SearchDirAck_descriptor_;
}

const SearchDirAck& SearchDirAck::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_file_5fmount_5fsearch_5fdir_2eproto();  return *default_instance_;
}

SearchDirAck* SearchDirAck::default_instance_ = NULL;

SearchDirAck* SearchDirAck::New() const {
  return new SearchDirAck;
}

void SearchDirAck::Clear() {
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

bool SearchDirAck::MergePartialFromCodedStream(
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

void SearchDirAck::SerializeWithCachedSizes(
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

::google::protobuf::uint8* SearchDirAck::SerializeWithCachedSizesToArray(
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

int SearchDirAck::ByteSize() const {
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

void SearchDirAck::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SearchDirAck* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SearchDirAck*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SearchDirAck::MergeFrom(const SearchDirAck& from) {
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

void SearchDirAck::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SearchDirAck::CopyFrom(const SearchDirAck& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SearchDirAck::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void SearchDirAck::Swap(SearchDirAck* other) {
  if (other != this) {
    std::swap(task_uuid_, other->task_uuid_);
    std::swap(result_, other->result_);
    std::swap(error_number_, other->error_number_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SearchDirAck::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SearchDirAck_descriptor_;
  metadata.reflection = SearchDirAck_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace file_mount_search_dir

// @@protoc_insertion_point(global_scope)
