// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Gimbal/FRGimbalModelProto.proto

#include "FRGimbalModelProto.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace DJIFRProto {
namespace Standard {
class GimbalStateDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GimbalState>
      _instance;
} _GimbalState_default_instance_;
}  // namespace Standard
}  // namespace DJIFRProto
namespace protobuf_Gimbal_2fFRGimbalModelProto_2eproto {
void InitDefaultsGimbalStateImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_Common_2fFRCommonModelProto_2eproto::InitDefaultsAttitude();
  {
    void* ptr = &::DJIFRProto::Standard::_GimbalState_default_instance_;
    new (ptr) ::DJIFRProto::Standard::GimbalState();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::DJIFRProto::Standard::GimbalState::InitAsDefaultInstance();
}

void InitDefaultsGimbalState() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsGimbalStateImpl);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::GimbalState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::GimbalState, atitude_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::GimbalState, finetunedroll_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::GimbalState, finetunedpitch_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::GimbalState, finetunedyaw_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::GimbalState, isrollatstop_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::GimbalState, isyawatstop_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::GimbalState, ispitchatstop_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::GimbalState, yawrelativetoaircraftheading_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::GimbalState, mode_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::GimbalState, index_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::DJIFRProto::Standard::GimbalState)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::DJIFRProto::Standard::_GimbalState_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Gimbal/FRGimbalModelProto.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\037Gimbal/FRGimbalModelProto.proto\022\023DJIFR"
      "Proto.Standard\032\037Common/FRCommonModelProt"
      "o.proto\"\250\002\n\013GimbalState\022.\n\007atitude\030\001 \001(\013"
      "2\035.DJIFRProto.Standard.Attitude\022\025\n\rfineT"
      "unedRoll\030\002 \001(\002\022\026\n\016fineTunedPitch\030\003 \001(\002\022\024"
      "\n\014fineTunedYaw\030\004 \001(\002\022\024\n\014isRollAtStop\030\005 \001"
      "(\010\022\023\n\013isYawAtStop\030\006 \001(\010\022\025\n\risPitchAtStop"
      "\030\007 \001(\010\022$\n\034yawRelativeToAircraftHeading\030\010"
      " \001(\001\022-\n\004mode\030\t \001(\0162\037.DJIFRProto.Standard"
      ".GimbalMode\022\r\n\005index\030\n \001(\005*.\n\nGimbalMode"
      "\022\010\n\004Free\020\000\022\007\n\003FPV\020\001\022\r\n\tYawFollow\020\002B\r\242\002\nD"
      "JIFRProtob\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 457);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Gimbal/FRGimbalModelProto.proto", &protobuf_RegisterTypes);
  ::protobuf_Common_2fFRCommonModelProto_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_Gimbal_2fFRGimbalModelProto_2eproto
namespace DJIFRProto {
namespace Standard {
const ::google::protobuf::EnumDescriptor* GimbalMode_descriptor() {
  protobuf_Gimbal_2fFRGimbalModelProto_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Gimbal_2fFRGimbalModelProto_2eproto::file_level_enum_descriptors[0];
}
bool GimbalMode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void GimbalState::InitAsDefaultInstance() {
  ::DJIFRProto::Standard::_GimbalState_default_instance_._instance.get_mutable()->atitude_ = const_cast< ::DJIFRProto::Standard::Attitude*>(
      ::DJIFRProto::Standard::Attitude::internal_default_instance());
}
void GimbalState::clear_atitude() {
  if (GetArenaNoVirtual() == NULL && atitude_ != NULL) {
    delete atitude_;
  }
  atitude_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GimbalState::kAtitudeFieldNumber;
const int GimbalState::kFineTunedRollFieldNumber;
const int GimbalState::kFineTunedPitchFieldNumber;
const int GimbalState::kFineTunedYawFieldNumber;
const int GimbalState::kIsRollAtStopFieldNumber;
const int GimbalState::kIsYawAtStopFieldNumber;
const int GimbalState::kIsPitchAtStopFieldNumber;
const int GimbalState::kYawRelativeToAircraftHeadingFieldNumber;
const int GimbalState::kModeFieldNumber;
const int GimbalState::kIndexFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GimbalState::GimbalState()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_Gimbal_2fFRGimbalModelProto_2eproto::InitDefaultsGimbalState();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:DJIFRProto.Standard.GimbalState)
}
GimbalState::GimbalState(const GimbalState& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_atitude()) {
    atitude_ = new ::DJIFRProto::Standard::Attitude(*from.atitude_);
  } else {
    atitude_ = NULL;
  }
  ::memcpy(&finetunedroll_, &from.finetunedroll_,
    static_cast<size_t>(reinterpret_cast<char*>(&index_) -
    reinterpret_cast<char*>(&finetunedroll_)) + sizeof(index_));
  // @@protoc_insertion_point(copy_constructor:DJIFRProto.Standard.GimbalState)
}

void GimbalState::SharedCtor() {
  ::memset(&atitude_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&index_) -
      reinterpret_cast<char*>(&atitude_)) + sizeof(index_));
  _cached_size_ = 0;
}

GimbalState::~GimbalState() {
  // @@protoc_insertion_point(destructor:DJIFRProto.Standard.GimbalState)
  SharedDtor();
}

void GimbalState::SharedDtor() {
  if (this != internal_default_instance()) delete atitude_;
}

void GimbalState::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GimbalState::descriptor() {
  ::protobuf_Gimbal_2fFRGimbalModelProto_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Gimbal_2fFRGimbalModelProto_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GimbalState& GimbalState::default_instance() {
  ::protobuf_Gimbal_2fFRGimbalModelProto_2eproto::InitDefaultsGimbalState();
  return *internal_default_instance();
}

GimbalState* GimbalState::New(::google::protobuf::Arena* arena) const {
  GimbalState* n = new GimbalState;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GimbalState::Clear() {
// @@protoc_insertion_point(message_clear_start:DJIFRProto.Standard.GimbalState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && atitude_ != NULL) {
    delete atitude_;
  }
  atitude_ = NULL;
  ::memset(&finetunedroll_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&index_) -
      reinterpret_cast<char*>(&finetunedroll_)) + sizeof(index_));
  _internal_metadata_.Clear();
}

bool GimbalState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:DJIFRProto.Standard.GimbalState)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .DJIFRProto.Standard.Attitude atitude = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_atitude()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float fineTunedRoll = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &finetunedroll_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float fineTunedPitch = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(29u /* 29 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &finetunedpitch_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float fineTunedYaw = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(37u /* 37 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &finetunedyaw_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool isRollAtStop = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isrollatstop_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool isYawAtStop = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isyawatstop_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool isPitchAtStop = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &ispitchatstop_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double yawRelativeToAircraftHeading = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(65u /* 65 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &yawrelativetoaircraftheading_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .DJIFRProto.Standard.GimbalMode mode = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_mode(static_cast< ::DJIFRProto::Standard::GimbalMode >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 index = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:DJIFRProto.Standard.GimbalState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:DJIFRProto.Standard.GimbalState)
  return false;
#undef DO_
}

void GimbalState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:DJIFRProto.Standard.GimbalState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .DJIFRProto.Standard.Attitude atitude = 1;
  if (this->has_atitude()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->atitude_, output);
  }

  // float fineTunedRoll = 2;
  if (this->finetunedroll() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->finetunedroll(), output);
  }

  // float fineTunedPitch = 3;
  if (this->finetunedpitch() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->finetunedpitch(), output);
  }

  // float fineTunedYaw = 4;
  if (this->finetunedyaw() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->finetunedyaw(), output);
  }

  // bool isRollAtStop = 5;
  if (this->isrollatstop() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->isrollatstop(), output);
  }

  // bool isYawAtStop = 6;
  if (this->isyawatstop() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->isyawatstop(), output);
  }

  // bool isPitchAtStop = 7;
  if (this->ispitchatstop() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->ispitchatstop(), output);
  }

  // double yawRelativeToAircraftHeading = 8;
  if (this->yawrelativetoaircraftheading() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->yawrelativetoaircraftheading(), output);
  }

  // .DJIFRProto.Standard.GimbalMode mode = 9;
  if (this->mode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      9, this->mode(), output);
  }

  // int32 index = 10;
  if (this->index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->index(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:DJIFRProto.Standard.GimbalState)
}

::google::protobuf::uint8* GimbalState::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:DJIFRProto.Standard.GimbalState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .DJIFRProto.Standard.Attitude atitude = 1;
  if (this->has_atitude()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, *this->atitude_, deterministic, target);
  }

  // float fineTunedRoll = 2;
  if (this->finetunedroll() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->finetunedroll(), target);
  }

  // float fineTunedPitch = 3;
  if (this->finetunedpitch() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->finetunedpitch(), target);
  }

  // float fineTunedYaw = 4;
  if (this->finetunedyaw() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->finetunedyaw(), target);
  }

  // bool isRollAtStop = 5;
  if (this->isrollatstop() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->isrollatstop(), target);
  }

  // bool isYawAtStop = 6;
  if (this->isyawatstop() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->isyawatstop(), target);
  }

  // bool isPitchAtStop = 7;
  if (this->ispitchatstop() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->ispitchatstop(), target);
  }

  // double yawRelativeToAircraftHeading = 8;
  if (this->yawrelativetoaircraftheading() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->yawrelativetoaircraftheading(), target);
  }

  // .DJIFRProto.Standard.GimbalMode mode = 9;
  if (this->mode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      9, this->mode(), target);
  }

  // int32 index = 10;
  if (this->index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->index(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:DJIFRProto.Standard.GimbalState)
  return target;
}

size_t GimbalState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:DJIFRProto.Standard.GimbalState)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .DJIFRProto.Standard.Attitude atitude = 1;
  if (this->has_atitude()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *this->atitude_);
  }

  // float fineTunedRoll = 2;
  if (this->finetunedroll() != 0) {
    total_size += 1 + 4;
  }

  // float fineTunedPitch = 3;
  if (this->finetunedpitch() != 0) {
    total_size += 1 + 4;
  }

  // float fineTunedYaw = 4;
  if (this->finetunedyaw() != 0) {
    total_size += 1 + 4;
  }

  // bool isRollAtStop = 5;
  if (this->isrollatstop() != 0) {
    total_size += 1 + 1;
  }

  // bool isYawAtStop = 6;
  if (this->isyawatstop() != 0) {
    total_size += 1 + 1;
  }

  // bool isPitchAtStop = 7;
  if (this->ispitchatstop() != 0) {
    total_size += 1 + 1;
  }

  // double yawRelativeToAircraftHeading = 8;
  if (this->yawrelativetoaircraftheading() != 0) {
    total_size += 1 + 8;
  }

  // .DJIFRProto.Standard.GimbalMode mode = 9;
  if (this->mode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->mode());
  }

  // int32 index = 10;
  if (this->index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->index());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GimbalState::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:DJIFRProto.Standard.GimbalState)
  GOOGLE_DCHECK_NE(&from, this);
  const GimbalState* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GimbalState>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:DJIFRProto.Standard.GimbalState)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:DJIFRProto.Standard.GimbalState)
    MergeFrom(*source);
  }
}

void GimbalState::MergeFrom(const GimbalState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:DJIFRProto.Standard.GimbalState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_atitude()) {
    mutable_atitude()->::DJIFRProto::Standard::Attitude::MergeFrom(from.atitude());
  }
  if (from.finetunedroll() != 0) {
    set_finetunedroll(from.finetunedroll());
  }
  if (from.finetunedpitch() != 0) {
    set_finetunedpitch(from.finetunedpitch());
  }
  if (from.finetunedyaw() != 0) {
    set_finetunedyaw(from.finetunedyaw());
  }
  if (from.isrollatstop() != 0) {
    set_isrollatstop(from.isrollatstop());
  }
  if (from.isyawatstop() != 0) {
    set_isyawatstop(from.isyawatstop());
  }
  if (from.ispitchatstop() != 0) {
    set_ispitchatstop(from.ispitchatstop());
  }
  if (from.yawrelativetoaircraftheading() != 0) {
    set_yawrelativetoaircraftheading(from.yawrelativetoaircraftheading());
  }
  if (from.mode() != 0) {
    set_mode(from.mode());
  }
  if (from.index() != 0) {
    set_index(from.index());
  }
}

void GimbalState::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:DJIFRProto.Standard.GimbalState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GimbalState::CopyFrom(const GimbalState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:DJIFRProto.Standard.GimbalState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GimbalState::IsInitialized() const {
  return true;
}

void GimbalState::Swap(GimbalState* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GimbalState::InternalSwap(GimbalState* other) {
  using std::swap;
  swap(atitude_, other->atitude_);
  swap(finetunedroll_, other->finetunedroll_);
  swap(finetunedpitch_, other->finetunedpitch_);
  swap(finetunedyaw_, other->finetunedyaw_);
  swap(isrollatstop_, other->isrollatstop_);
  swap(isyawatstop_, other->isyawatstop_);
  swap(ispitchatstop_, other->ispitchatstop_);
  swap(yawrelativetoaircraftheading_, other->yawrelativetoaircraftheading_);
  swap(mode_, other->mode_);
  swap(index_, other->index_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GimbalState::GetMetadata() const {
  protobuf_Gimbal_2fFRGimbalModelProto_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Gimbal_2fFRGimbalModelProto_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Standard
}  // namespace DJIFRProto

// @@protoc_insertion_point(global_scope)
