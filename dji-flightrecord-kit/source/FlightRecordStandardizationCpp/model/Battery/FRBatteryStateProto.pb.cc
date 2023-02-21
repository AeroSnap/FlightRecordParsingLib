// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Battery/FRBatteryStateProto.proto

#include "FRBatteryStateProto.pb.h"

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
class BatteryStateDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<BatteryState>
      _instance;
} _BatteryState_default_instance_;
}  // namespace Standard
}  // namespace DJIFRProto
namespace protobuf_Battery_2fFRBatteryStateProto_2eproto {
void InitDefaultsBatteryStateImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::DJIFRProto::Standard::_BatteryState_default_instance_;
    new (ptr) ::DJIFRProto::Standard::BatteryState();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::DJIFRProto::Standard::BatteryState::InitAsDefaultInstance();
}

void InitDefaultsBatteryState() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsBatteryStateImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, voltage_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, current_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, temperature_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, cellvoltages_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, chargeremaininginpercent_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, lowbatterywarningthreshold_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, seriouslowbatterywarningthreshold_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, index_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, lifetimeremaining_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, designcapacity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, numberofdischarges_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, isinsinglebatterymode_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, fullchargecapacity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, chargeremaining_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::DJIFRProto::Standard::BatteryState)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::DJIFRProto::Standard::_BatteryState_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Battery/FRBatteryStateProto.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
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
      "\n!Battery/FRBatteryStateProto.proto\022\023DJI"
      "FRProto.Standard\"\376\002\n\014BatteryState\022\017\n\007vol"
      "tage\030\001 \001(\005\022\017\n\007current\030\002 \001(\005\022\023\n\013temperatu"
      "re\030\003 \001(\001\022\024\n\014cellVoltages\030\004 \003(\005\022 \n\030charge"
      "RemainingInPercent\030\005 \001(\005\022\"\n\032lowBatteryWa"
      "rningThreshold\030\006 \001(\005\022)\n!seriousLowBatter"
      "yWarningThreshold\030\007 \001(\005\022\r\n\005index\030\010 \001(\005\022\031"
      "\n\021lifetimeRemaining\030\t \001(\005\022\026\n\016designCapac"
      "ity\030\n \001(\005\022\032\n\022numberOfDischarges\030\013 \001(\005\022\035\n"
      "\025isInSingleBatteryMode\030\014 \001(\010\022\032\n\022fullChar"
      "geCapacity\030\r \001(\r\022\027\n\017chargeRemaining\030\016 \001("
      "\rB\r\242\002\nDJIFRProtob\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 464);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Battery/FRBatteryStateProto.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_Battery_2fFRBatteryStateProto_2eproto
namespace DJIFRProto {
namespace Standard {

// ===================================================================

void BatteryState::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BatteryState::kVoltageFieldNumber;
const int BatteryState::kCurrentFieldNumber;
const int BatteryState::kTemperatureFieldNumber;
const int BatteryState::kCellVoltagesFieldNumber;
const int BatteryState::kChargeRemainingInPercentFieldNumber;
const int BatteryState::kLowBatteryWarningThresholdFieldNumber;
const int BatteryState::kSeriousLowBatteryWarningThresholdFieldNumber;
const int BatteryState::kIndexFieldNumber;
const int BatteryState::kLifetimeRemainingFieldNumber;
const int BatteryState::kDesignCapacityFieldNumber;
const int BatteryState::kNumberOfDischargesFieldNumber;
const int BatteryState::kIsInSingleBatteryModeFieldNumber;
const int BatteryState::kFullChargeCapacityFieldNumber;
const int BatteryState::kChargeRemainingFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BatteryState::BatteryState()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_Battery_2fFRBatteryStateProto_2eproto::InitDefaultsBatteryState();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:DJIFRProto.Standard.BatteryState)
}
BatteryState::BatteryState(const BatteryState& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      cellvoltages_(from.cellvoltages_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&voltage_, &from.voltage_,
    static_cast<size_t>(reinterpret_cast<char*>(&chargeremaining_) -
    reinterpret_cast<char*>(&voltage_)) + sizeof(chargeremaining_));
  // @@protoc_insertion_point(copy_constructor:DJIFRProto.Standard.BatteryState)
}

void BatteryState::SharedCtor() {
  ::memset(&voltage_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&chargeremaining_) -
      reinterpret_cast<char*>(&voltage_)) + sizeof(chargeremaining_));
  _cached_size_ = 0;
}

BatteryState::~BatteryState() {
  // @@protoc_insertion_point(destructor:DJIFRProto.Standard.BatteryState)
  SharedDtor();
}

void BatteryState::SharedDtor() {
}

void BatteryState::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BatteryState::descriptor() {
  ::protobuf_Battery_2fFRBatteryStateProto_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Battery_2fFRBatteryStateProto_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const BatteryState& BatteryState::default_instance() {
  ::protobuf_Battery_2fFRBatteryStateProto_2eproto::InitDefaultsBatteryState();
  return *internal_default_instance();
}

BatteryState* BatteryState::New(::google::protobuf::Arena* arena) const {
  BatteryState* n = new BatteryState;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BatteryState::Clear() {
// @@protoc_insertion_point(message_clear_start:DJIFRProto.Standard.BatteryState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cellvoltages_.Clear();
  ::memset(&voltage_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&chargeremaining_) -
      reinterpret_cast<char*>(&voltage_)) + sizeof(chargeremaining_));
  _internal_metadata_.Clear();
}

bool BatteryState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:DJIFRProto.Standard.BatteryState)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 voltage = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &voltage_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 current = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &current_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double temperature = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &temperature_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated int32 cellVoltages = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_cellvoltages())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 34u, input, this->mutable_cellvoltages())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 chargeRemainingInPercent = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &chargeremaininginpercent_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 lowBatteryWarningThreshold = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &lowbatterywarningthreshold_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 seriousLowBatteryWarningThreshold = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &seriouslowbatterywarningthreshold_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 index = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 lifetimeRemaining = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &lifetimeremaining_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 designCapacity = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &designcapacity_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 numberOfDischarges = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &numberofdischarges_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool isInSingleBatteryMode = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isinsinglebatterymode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 fullChargeCapacity = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &fullchargecapacity_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 chargeRemaining = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &chargeremaining_)));
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
  // @@protoc_insertion_point(parse_success:DJIFRProto.Standard.BatteryState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:DJIFRProto.Standard.BatteryState)
  return false;
#undef DO_
}

void BatteryState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:DJIFRProto.Standard.BatteryState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 voltage = 1;
  if (this->voltage() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->voltage(), output);
  }

  // int32 current = 2;
  if (this->current() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->current(), output);
  }

  // double temperature = 3;
  if (this->temperature() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->temperature(), output);
  }

  // repeated int32 cellVoltages = 4;
  if (this->cellvoltages_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(4, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _cellvoltages_cached_byte_size_));
  }
  for (int i = 0, n = this->cellvoltages_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->cellvoltages(i), output);
  }

  // int32 chargeRemainingInPercent = 5;
  if (this->chargeremaininginpercent() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->chargeremaininginpercent(), output);
  }

  // int32 lowBatteryWarningThreshold = 6;
  if (this->lowbatterywarningthreshold() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->lowbatterywarningthreshold(), output);
  }

  // int32 seriousLowBatteryWarningThreshold = 7;
  if (this->seriouslowbatterywarningthreshold() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->seriouslowbatterywarningthreshold(), output);
  }

  // int32 index = 8;
  if (this->index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->index(), output);
  }

  // int32 lifetimeRemaining = 9;
  if (this->lifetimeremaining() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->lifetimeremaining(), output);
  }

  // int32 designCapacity = 10;
  if (this->designcapacity() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->designcapacity(), output);
  }

  // int32 numberOfDischarges = 11;
  if (this->numberofdischarges() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->numberofdischarges(), output);
  }

  // bool isInSingleBatteryMode = 12;
  if (this->isinsinglebatterymode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(12, this->isinsinglebatterymode(), output);
  }

  // uint32 fullChargeCapacity = 13;
  if (this->fullchargecapacity() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->fullchargecapacity(), output);
  }

  // uint32 chargeRemaining = 14;
  if (this->chargeremaining() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->chargeremaining(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:DJIFRProto.Standard.BatteryState)
}

::google::protobuf::uint8* BatteryState::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:DJIFRProto.Standard.BatteryState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 voltage = 1;
  if (this->voltage() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->voltage(), target);
  }

  // int32 current = 2;
  if (this->current() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->current(), target);
  }

  // double temperature = 3;
  if (this->temperature() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->temperature(), target);
  }

  // repeated int32 cellVoltages = 4;
  if (this->cellvoltages_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      4,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _cellvoltages_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->cellvoltages_, target);
  }

  // int32 chargeRemainingInPercent = 5;
  if (this->chargeremaininginpercent() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->chargeremaininginpercent(), target);
  }

  // int32 lowBatteryWarningThreshold = 6;
  if (this->lowbatterywarningthreshold() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->lowbatterywarningthreshold(), target);
  }

  // int32 seriousLowBatteryWarningThreshold = 7;
  if (this->seriouslowbatterywarningthreshold() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->seriouslowbatterywarningthreshold(), target);
  }

  // int32 index = 8;
  if (this->index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->index(), target);
  }

  // int32 lifetimeRemaining = 9;
  if (this->lifetimeremaining() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->lifetimeremaining(), target);
  }

  // int32 designCapacity = 10;
  if (this->designcapacity() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->designcapacity(), target);
  }

  // int32 numberOfDischarges = 11;
  if (this->numberofdischarges() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(11, this->numberofdischarges(), target);
  }

  // bool isInSingleBatteryMode = 12;
  if (this->isinsinglebatterymode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(12, this->isinsinglebatterymode(), target);
  }

  // uint32 fullChargeCapacity = 13;
  if (this->fullchargecapacity() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->fullchargecapacity(), target);
  }

  // uint32 chargeRemaining = 14;
  if (this->chargeremaining() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->chargeremaining(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:DJIFRProto.Standard.BatteryState)
  return target;
}

size_t BatteryState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:DJIFRProto.Standard.BatteryState)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated int32 cellVoltages = 4;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int32Size(this->cellvoltages_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _cellvoltages_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // int32 voltage = 1;
  if (this->voltage() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->voltage());
  }

  // int32 current = 2;
  if (this->current() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->current());
  }

  // double temperature = 3;
  if (this->temperature() != 0) {
    total_size += 1 + 8;
  }

  // int32 chargeRemainingInPercent = 5;
  if (this->chargeremaininginpercent() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->chargeremaininginpercent());
  }

  // int32 lowBatteryWarningThreshold = 6;
  if (this->lowbatterywarningthreshold() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->lowbatterywarningthreshold());
  }

  // int32 seriousLowBatteryWarningThreshold = 7;
  if (this->seriouslowbatterywarningthreshold() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->seriouslowbatterywarningthreshold());
  }

  // int32 index = 8;
  if (this->index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->index());
  }

  // int32 lifetimeRemaining = 9;
  if (this->lifetimeremaining() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->lifetimeremaining());
  }

  // int32 designCapacity = 10;
  if (this->designcapacity() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->designcapacity());
  }

  // int32 numberOfDischarges = 11;
  if (this->numberofdischarges() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->numberofdischarges());
  }

  // bool isInSingleBatteryMode = 12;
  if (this->isinsinglebatterymode() != 0) {
    total_size += 1 + 1;
  }

  // uint32 fullChargeCapacity = 13;
  if (this->fullchargecapacity() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->fullchargecapacity());
  }

  // uint32 chargeRemaining = 14;
  if (this->chargeremaining() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->chargeremaining());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BatteryState::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:DJIFRProto.Standard.BatteryState)
  GOOGLE_DCHECK_NE(&from, this);
  const BatteryState* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const BatteryState>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:DJIFRProto.Standard.BatteryState)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:DJIFRProto.Standard.BatteryState)
    MergeFrom(*source);
  }
}

void BatteryState::MergeFrom(const BatteryState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:DJIFRProto.Standard.BatteryState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cellvoltages_.MergeFrom(from.cellvoltages_);
  if (from.voltage() != 0) {
    set_voltage(from.voltage());
  }
  if (from.current() != 0) {
    set_current(from.current());
  }
  if (from.temperature() != 0) {
    set_temperature(from.temperature());
  }
  if (from.chargeremaininginpercent() != 0) {
    set_chargeremaininginpercent(from.chargeremaininginpercent());
  }
  if (from.lowbatterywarningthreshold() != 0) {
    set_lowbatterywarningthreshold(from.lowbatterywarningthreshold());
  }
  if (from.seriouslowbatterywarningthreshold() != 0) {
    set_seriouslowbatterywarningthreshold(from.seriouslowbatterywarningthreshold());
  }
  if (from.index() != 0) {
    set_index(from.index());
  }
  if (from.lifetimeremaining() != 0) {
    set_lifetimeremaining(from.lifetimeremaining());
  }
  if (from.designcapacity() != 0) {
    set_designcapacity(from.designcapacity());
  }
  if (from.numberofdischarges() != 0) {
    set_numberofdischarges(from.numberofdischarges());
  }
  if (from.isinsinglebatterymode() != 0) {
    set_isinsinglebatterymode(from.isinsinglebatterymode());
  }
  if (from.fullchargecapacity() != 0) {
    set_fullchargecapacity(from.fullchargecapacity());
  }
  if (from.chargeremaining() != 0) {
    set_chargeremaining(from.chargeremaining());
  }
}

void BatteryState::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:DJIFRProto.Standard.BatteryState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BatteryState::CopyFrom(const BatteryState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:DJIFRProto.Standard.BatteryState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BatteryState::IsInitialized() const {
  return true;
}

void BatteryState::Swap(BatteryState* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BatteryState::InternalSwap(BatteryState* other) {
  using std::swap;
  cellvoltages_.InternalSwap(&other->cellvoltages_);
  swap(voltage_, other->voltage_);
  swap(current_, other->current_);
  swap(temperature_, other->temperature_);
  swap(chargeremaininginpercent_, other->chargeremaininginpercent_);
  swap(lowbatterywarningthreshold_, other->lowbatterywarningthreshold_);
  swap(seriouslowbatterywarningthreshold_, other->seriouslowbatterywarningthreshold_);
  swap(index_, other->index_);
  swap(lifetimeremaining_, other->lifetimeremaining_);
  swap(designcapacity_, other->designcapacity_);
  swap(numberofdischarges_, other->numberofdischarges_);
  swap(isinsinglebatterymode_, other->isinsinglebatterymode_);
  swap(fullchargecapacity_, other->fullchargecapacity_);
  swap(chargeremaining_, other->chargeremaining_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BatteryState::GetMetadata() const {
  protobuf_Battery_2fFRBatteryStateProto_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Battery_2fFRBatteryStateProto_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Standard
}  // namespace DJIFRProto

// @@protoc_insertion_point(global_scope)
