// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message_workgroup.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "message_workgroup.pb.h"

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

namespace rpc {

namespace {

const ::google::protobuf::Descriptor* WorkGroupsListRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  WorkGroupsListRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* WorkGroupsListResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  WorkGroupsListResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_message_5fworkgroup_2eproto() {
  protobuf_AddDesc_message_5fworkgroup_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "message_workgroup.proto");
  GOOGLE_CHECK(file != NULL);
  WorkGroupsListRequest_descriptor_ = file->message_type(0);
  static const int WorkGroupsListRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkGroupsListRequest, session_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkGroupsListRequest, filter_),
  };
  WorkGroupsListRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      WorkGroupsListRequest_descriptor_,
      WorkGroupsListRequest::default_instance_,
      WorkGroupsListRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkGroupsListRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkGroupsListRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(WorkGroupsListRequest));
  WorkGroupsListResponse_descriptor_ = file->message_type(1);
  static const int WorkGroupsListResponse_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkGroupsListResponse, error_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkGroupsListResponse, workgroup_info_list_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkGroupsListResponse, last_event_id_),
  };
  WorkGroupsListResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      WorkGroupsListResponse_descriptor_,
      WorkGroupsListResponse::default_instance_,
      WorkGroupsListResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkGroupsListResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WorkGroupsListResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(WorkGroupsListResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_message_5fworkgroup_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    WorkGroupsListRequest_descriptor_, &WorkGroupsListRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    WorkGroupsListResponse_descriptor_, &WorkGroupsListResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_message_5fworkgroup_2eproto() {
  delete WorkGroupsListRequest::default_instance_;
  delete WorkGroupsListRequest_reflection_;
  delete WorkGroupsListResponse::default_instance_;
  delete WorkGroupsListResponse_reflection_;
}

void protobuf_AddDesc_message_5fworkgroup_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::rpc::protobuf_AddDesc_message_5fcommon_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027message_workgroup.proto\022\003rpc\032\024message_"
    "common.proto\"H\n\025WorkGroupsListRequest\022\022\n"
    "\nsession_id\030\001 \001(\t\022\033\n\006filter\030\002 \001(\0162\013.rpc."
    "Filter\"t\n\026WorkGroupsListResponse\022\022\n\nerro"
    "r_code\030\001 \001(\005\022/\n\023workgroup_info_list\030\002 \003("
    "\0132\022.rpc.WorkGroupInfo\022\025\n\rlast_event_id\030\003"
    " \001(\003B\002H\001", 248);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "message_workgroup.proto", &protobuf_RegisterTypes);
  WorkGroupsListRequest::default_instance_ = new WorkGroupsListRequest();
  WorkGroupsListResponse::default_instance_ = new WorkGroupsListResponse();
  WorkGroupsListRequest::default_instance_->InitAsDefaultInstance();
  WorkGroupsListResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_message_5fworkgroup_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_message_5fworkgroup_2eproto {
  StaticDescriptorInitializer_message_5fworkgroup_2eproto() {
    protobuf_AddDesc_message_5fworkgroup_2eproto();
  }
} static_descriptor_initializer_message_5fworkgroup_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int WorkGroupsListRequest::kSessionIdFieldNumber;
const int WorkGroupsListRequest::kFilterFieldNumber;
#endif  // !_MSC_VER

WorkGroupsListRequest::WorkGroupsListRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:rpc.WorkGroupsListRequest)
}

void WorkGroupsListRequest::InitAsDefaultInstance() {
}

WorkGroupsListRequest::WorkGroupsListRequest(const WorkGroupsListRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:rpc.WorkGroupsListRequest)
}

void WorkGroupsListRequest::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  session_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  filter_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WorkGroupsListRequest::~WorkGroupsListRequest() {
  // @@protoc_insertion_point(destructor:rpc.WorkGroupsListRequest)
  SharedDtor();
}

void WorkGroupsListRequest::SharedDtor() {
  if (session_id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete session_id_;
  }
  if (this != default_instance_) {
  }
}

void WorkGroupsListRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WorkGroupsListRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WorkGroupsListRequest_descriptor_;
}

const WorkGroupsListRequest& WorkGroupsListRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_5fworkgroup_2eproto();
  return *default_instance_;
}

WorkGroupsListRequest* WorkGroupsListRequest::default_instance_ = NULL;

WorkGroupsListRequest* WorkGroupsListRequest::New() const {
  return new WorkGroupsListRequest;
}

void WorkGroupsListRequest::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_session_id()) {
      if (session_id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        session_id_->clear();
      }
    }
    filter_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool WorkGroupsListRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:rpc.WorkGroupsListRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string session_id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_session_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->session_id().data(), this->session_id().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "session_id");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_filter;
        break;
      }

      // optional .rpc.Filter filter = 2;
      case 2: {
        if (tag == 16) {
         parse_filter:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::rpc::Filter_IsValid(value)) {
            set_filter(static_cast< ::rpc::Filter >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:rpc.WorkGroupsListRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:rpc.WorkGroupsListRequest)
  return false;
#undef DO_
}

void WorkGroupsListRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:rpc.WorkGroupsListRequest)
  // optional string session_id = 1;
  if (has_session_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->session_id().data(), this->session_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "session_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->session_id(), output);
  }

  // optional .rpc.Filter filter = 2;
  if (has_filter()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->filter(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:rpc.WorkGroupsListRequest)
}

::google::protobuf::uint8* WorkGroupsListRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:rpc.WorkGroupsListRequest)
  // optional string session_id = 1;
  if (has_session_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->session_id().data(), this->session_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "session_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->session_id(), target);
  }

  // optional .rpc.Filter filter = 2;
  if (has_filter()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->filter(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:rpc.WorkGroupsListRequest)
  return target;
}

int WorkGroupsListRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string session_id = 1;
    if (has_session_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->session_id());
    }

    // optional .rpc.Filter filter = 2;
    if (has_filter()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->filter());
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

void WorkGroupsListRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const WorkGroupsListRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const WorkGroupsListRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void WorkGroupsListRequest::MergeFrom(const WorkGroupsListRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_session_id()) {
      set_session_id(from.session_id());
    }
    if (from.has_filter()) {
      set_filter(from.filter());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void WorkGroupsListRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WorkGroupsListRequest::CopyFrom(const WorkGroupsListRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WorkGroupsListRequest::IsInitialized() const {

  return true;
}

void WorkGroupsListRequest::Swap(WorkGroupsListRequest* other) {
  if (other != this) {
    std::swap(session_id_, other->session_id_);
    std::swap(filter_, other->filter_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata WorkGroupsListRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = WorkGroupsListRequest_descriptor_;
  metadata.reflection = WorkGroupsListRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int WorkGroupsListResponse::kErrorCodeFieldNumber;
const int WorkGroupsListResponse::kWorkgroupInfoListFieldNumber;
const int WorkGroupsListResponse::kLastEventIdFieldNumber;
#endif  // !_MSC_VER

WorkGroupsListResponse::WorkGroupsListResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:rpc.WorkGroupsListResponse)
}

void WorkGroupsListResponse::InitAsDefaultInstance() {
}

WorkGroupsListResponse::WorkGroupsListResponse(const WorkGroupsListResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:rpc.WorkGroupsListResponse)
}

void WorkGroupsListResponse::SharedCtor() {
  _cached_size_ = 0;
  error_code_ = 0;
  last_event_id_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WorkGroupsListResponse::~WorkGroupsListResponse() {
  // @@protoc_insertion_point(destructor:rpc.WorkGroupsListResponse)
  SharedDtor();
}

void WorkGroupsListResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void WorkGroupsListResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WorkGroupsListResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WorkGroupsListResponse_descriptor_;
}

const WorkGroupsListResponse& WorkGroupsListResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_5fworkgroup_2eproto();
  return *default_instance_;
}

WorkGroupsListResponse* WorkGroupsListResponse::default_instance_ = NULL;

WorkGroupsListResponse* WorkGroupsListResponse::New() const {
  return new WorkGroupsListResponse;
}

void WorkGroupsListResponse::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<WorkGroupsListResponse*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(last_event_id_, error_code_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  workgroup_info_list_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool WorkGroupsListResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:rpc.WorkGroupsListResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 error_code = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &error_code_)));
          set_has_error_code();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_workgroup_info_list;
        break;
      }

      // repeated .rpc.WorkGroupInfo workgroup_info_list = 2;
      case 2: {
        if (tag == 18) {
         parse_workgroup_info_list:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_workgroup_info_list()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_workgroup_info_list;
        if (input->ExpectTag(24)) goto parse_last_event_id;
        break;
      }

      // optional int64 last_event_id = 3;
      case 3: {
        if (tag == 24) {
         parse_last_event_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &last_event_id_)));
          set_has_last_event_id();
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:rpc.WorkGroupsListResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:rpc.WorkGroupsListResponse)
  return false;
#undef DO_
}

void WorkGroupsListResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:rpc.WorkGroupsListResponse)
  // optional int32 error_code = 1;
  if (has_error_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->error_code(), output);
  }

  // repeated .rpc.WorkGroupInfo workgroup_info_list = 2;
  for (int i = 0; i < this->workgroup_info_list_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->workgroup_info_list(i), output);
  }

  // optional int64 last_event_id = 3;
  if (has_last_event_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->last_event_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:rpc.WorkGroupsListResponse)
}

::google::protobuf::uint8* WorkGroupsListResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:rpc.WorkGroupsListResponse)
  // optional int32 error_code = 1;
  if (has_error_code()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->error_code(), target);
  }

  // repeated .rpc.WorkGroupInfo workgroup_info_list = 2;
  for (int i = 0; i < this->workgroup_info_list_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->workgroup_info_list(i), target);
  }

  // optional int64 last_event_id = 3;
  if (has_last_event_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->last_event_id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:rpc.WorkGroupsListResponse)
  return target;
}

int WorkGroupsListResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 error_code = 1;
    if (has_error_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->error_code());
    }

    // optional int64 last_event_id = 3;
    if (has_last_event_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->last_event_id());
    }

  }
  // repeated .rpc.WorkGroupInfo workgroup_info_list = 2;
  total_size += 1 * this->workgroup_info_list_size();
  for (int i = 0; i < this->workgroup_info_list_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->workgroup_info_list(i));
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

void WorkGroupsListResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const WorkGroupsListResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const WorkGroupsListResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void WorkGroupsListResponse::MergeFrom(const WorkGroupsListResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  workgroup_info_list_.MergeFrom(from.workgroup_info_list_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_error_code()) {
      set_error_code(from.error_code());
    }
    if (from.has_last_event_id()) {
      set_last_event_id(from.last_event_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void WorkGroupsListResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WorkGroupsListResponse::CopyFrom(const WorkGroupsListResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WorkGroupsListResponse::IsInitialized() const {

  return true;
}

void WorkGroupsListResponse::Swap(WorkGroupsListResponse* other) {
  if (other != this) {
    std::swap(error_code_, other->error_code_);
    workgroup_info_list_.Swap(&other->workgroup_info_list_);
    std::swap(last_event_id_, other->last_event_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata WorkGroupsListResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = WorkGroupsListResponse_descriptor_;
  metadata.reflection = WorkGroupsListResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace rpc

// @@protoc_insertion_point(global_scope)
