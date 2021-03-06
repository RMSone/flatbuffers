// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_CAR_DYNAMIC_API_SAMPLES_H_
#define FLATBUFFERS_GENERATED_CAR_DYNAMIC_API_SAMPLES_H_

#include "flatbuffers/flatbuffers.h"


namespace dynamic_api_samples {

struct Engine;
struct Dealership;
struct Car;

enum Color {
  Color_WHITE = 0,
  Color_YELLOW = 1,
  Color_ORANGE = 2,
  Color_PURPLE = 3,
  Color_BLUE = 4,
  Color_GREEN = 5,
  Color_BROWN = 6,
  Color_SILVER = 7,
  Color_BLACK = 8
};

inline const char **EnumNamesColor() {
  static const char *names[] = { "WHITE", "YELLOW", "ORANGE", "PURPLE", "BLUE", "GREEN", "BROWN", "SILVER", "BLACK", nullptr };
  return names;
}

inline const char *EnumNameColor(Color e) { return EnumNamesColor()[e]; }

enum EngineCylinder {
  EngineCylinder_THREE_CYLINDERS = 0,
  EngineCylinder_FOUR_CYLINDERS = 1,
  EngineCylinder_FIVE_CYLINDERS = 2,
  EngineCylinder_SIX_CYLINDERS = 3,
  EngineCylinder_EIGHT_CYLINDERS = 4
};

inline const char **EnumNamesEngineCylinder() {
  static const char *names[] = { "THREE_CYLINDERS", "FOUR_CYLINDERS", "FIVE_CYLINDERS", "SIX_CYLINDERS", "EIGHT_CYLINDERS", nullptr };
  return names;
}

inline const char *EnumNameEngineCylinder(EngineCylinder e) { return EnumNamesEngineCylinder()[e]; }

enum EngineCylinderOrientation {
  EngineCylinderOrientation_INLINE = 0,
  EngineCylinderOrientation_V_SERIES = 1,
  EngineCylinderOrientation_OPPOSING = 2
};

inline const char **EnumNamesEngineCylinderOrientation() {
  static const char *names[] = { "INLINE", "V_SERIES", "OPPOSING", nullptr };
  return names;
}

inline const char *EnumNameEngineCylinderOrientation(EngineCylinderOrientation e) { return EnumNamesEngineCylinderOrientation()[e]; }

enum GasType {
  GasType_E85 = 0,
  GasType_OCTANE_STANDARD = 1,
  GasType_OCTANE_MIDGRADE = 2,
  GasType_OCTANE_PREMIUM = 3,
  GasType_DIESEL = 4,
  GasType_COMPRESSED_NATURAL_GAS = 5
};

inline const char **EnumNamesGasType() {
  static const char *names[] = { "E85", "OCTANE_STANDARD", "OCTANE_MIDGRADE", "OCTANE_PREMIUM", "DIESEL", "COMPRESSED_NATURAL_GAS", nullptr };
  return names;
}

inline const char *EnumNameGasType(GasType e) { return EnumNamesGasType()[e]; }

struct Engine FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  uint32_t EngineId() const { return GetField<uint32_t>(4, 0); }
  const flatbuffers::String *Manufacturer() const { return GetPointer<const flatbuffers::String *>(6); }
  int32_t Size() const { return GetField<int32_t>(8, 0); }
  EngineCylinderOrientation EngineCylinderOrientationVal() const { return static_cast<EngineCylinderOrientation>(GetField<int8_t>(10, 0)); }
  EngineCylinder EngineCylinderVal() const { return static_cast<EngineCylinder>(GetField<int8_t>(12, 0)); }
  GasType GasTypeVal() const { return static_cast<GasType>(GetField<int8_t>(14, 0)); }
  uint8_t IsFourStroke() const { return GetField<uint8_t>(16, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, 4 /* EngineId */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* Manufacturer */) &&
           verifier.Verify(Manufacturer()) &&
           VerifyField<int32_t>(verifier, 8 /* Size */) &&
           VerifyField<int8_t>(verifier, 10 /* EngineCylinderOrientationVal */) &&
           VerifyField<int8_t>(verifier, 12 /* EngineCylinderVal */) &&
           VerifyField<int8_t>(verifier, 14 /* GasTypeVal */) &&
           VerifyField<uint8_t>(verifier, 16 /* IsFourStroke */) &&
           verifier.EndTable();
  }
};

struct EngineBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_EngineId(uint32_t EngineId) { fbb_.AddElement<uint32_t>(4, EngineId, 0); }
  void add_Manufacturer(flatbuffers::Offset<flatbuffers::String> Manufacturer) { fbb_.AddOffset(6, Manufacturer); }
  void add_Size(int32_t Size) { fbb_.AddElement<int32_t>(8, Size, 0); }
  void add_EngineCylinderOrientationVal(EngineCylinderOrientation EngineCylinderOrientationVal) { fbb_.AddElement<int8_t>(10, static_cast<int8_t>(EngineCylinderOrientationVal), 0); }
  void add_EngineCylinderVal(EngineCylinder EngineCylinderVal) { fbb_.AddElement<int8_t>(12, static_cast<int8_t>(EngineCylinderVal), 0); }
  void add_GasTypeVal(GasType GasTypeVal) { fbb_.AddElement<int8_t>(14, static_cast<int8_t>(GasTypeVal), 0); }
  void add_IsFourStroke(uint8_t IsFourStroke) { fbb_.AddElement<uint8_t>(16, IsFourStroke, 0); }
  EngineBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  EngineBuilder &operator=(const EngineBuilder &);
  flatbuffers::Offset<Engine> Finish() {
    auto o = flatbuffers::Offset<Engine>(fbb_.EndTable(start_, 7));
    return o;
  }
};

inline flatbuffers::Offset<Engine> CreateEngine(flatbuffers::FlatBufferBuilder &_fbb,
   uint32_t EngineId = 0,
   flatbuffers::Offset<flatbuffers::String> Manufacturer = 0,
   int32_t Size = 0,
   EngineCylinderOrientation EngineCylinderOrientationVal = EngineCylinderOrientation_INLINE,
   EngineCylinder EngineCylinderVal = EngineCylinder_THREE_CYLINDERS,
   GasType GasTypeVal = GasType_E85,
   uint8_t IsFourStroke = 0) {
  EngineBuilder builder_(_fbb);
  builder_.add_Size(Size);
  builder_.add_Manufacturer(Manufacturer);
  builder_.add_EngineId(EngineId);
  builder_.add_IsFourStroke(IsFourStroke);
  builder_.add_GasTypeVal(GasTypeVal);
  builder_.add_EngineCylinderVal(EngineCylinderVal);
  builder_.add_EngineCylinderOrientationVal(EngineCylinderOrientationVal);
  return builder_.Finish();
}

struct Dealership FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  uint32_t DealershipId() const { return GetField<uint32_t>(4, 0); }
  const flatbuffers::String *DealerName() const { return GetPointer<const flatbuffers::String *>(6); }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *SalesPeople() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(8); }
  const flatbuffers::Vector<int32_t> *HoursOfOperation() const { return GetPointer<const flatbuffers::Vector<int32_t> *>(10); }
  const flatbuffers::String *AddressLine1() const { return GetPointer<const flatbuffers::String *>(12); }
  const flatbuffers::String *AddressLine2() const { return GetPointer<const flatbuffers::String *>(14); }
  const flatbuffers::String *AddressCity() const { return GetPointer<const flatbuffers::String *>(16); }
  const flatbuffers::String *AddressState() const { return GetPointer<const flatbuffers::String *>(18); }
  const flatbuffers::String *AddressZipcode() const { return GetPointer<const flatbuffers::String *>(20); }
  const flatbuffers::String *AddressZip4() const { return GetPointer<const flatbuffers::String *>(22); }
  const flatbuffers::String *DealershipPhone() const { return GetPointer<const flatbuffers::String *>(24); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, 4 /* DealershipId */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* DealerName */) &&
           verifier.Verify(DealerName()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 8 /* SalesPeople */) &&
           verifier.Verify(SalesPeople()) &&
           verifier.VerifyVectorOfStrings(SalesPeople()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 10 /* HoursOfOperation */) &&
           verifier.Verify(HoursOfOperation()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 12 /* AddressLine1 */) &&
           verifier.Verify(AddressLine1()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 14 /* AddressLine2 */) &&
           verifier.Verify(AddressLine2()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 16 /* AddressCity */) &&
           verifier.Verify(AddressCity()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 18 /* AddressState */) &&
           verifier.Verify(AddressState()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 20 /* AddressZipcode */) &&
           verifier.Verify(AddressZipcode()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 22 /* AddressZip4 */) &&
           verifier.Verify(AddressZip4()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 24 /* DealershipPhone */) &&
           verifier.Verify(DealershipPhone()) &&
           verifier.EndTable();
  }
};

struct DealershipBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_DealershipId(uint32_t DealershipId) { fbb_.AddElement<uint32_t>(4, DealershipId, 0); }
  void add_DealerName(flatbuffers::Offset<flatbuffers::String> DealerName) { fbb_.AddOffset(6, DealerName); }
  void add_SalesPeople(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> SalesPeople) { fbb_.AddOffset(8, SalesPeople); }
  void add_HoursOfOperation(flatbuffers::Offset<flatbuffers::Vector<int32_t>> HoursOfOperation) { fbb_.AddOffset(10, HoursOfOperation); }
  void add_AddressLine1(flatbuffers::Offset<flatbuffers::String> AddressLine1) { fbb_.AddOffset(12, AddressLine1); }
  void add_AddressLine2(flatbuffers::Offset<flatbuffers::String> AddressLine2) { fbb_.AddOffset(14, AddressLine2); }
  void add_AddressCity(flatbuffers::Offset<flatbuffers::String> AddressCity) { fbb_.AddOffset(16, AddressCity); }
  void add_AddressState(flatbuffers::Offset<flatbuffers::String> AddressState) { fbb_.AddOffset(18, AddressState); }
  void add_AddressZipcode(flatbuffers::Offset<flatbuffers::String> AddressZipcode) { fbb_.AddOffset(20, AddressZipcode); }
  void add_AddressZip4(flatbuffers::Offset<flatbuffers::String> AddressZip4) { fbb_.AddOffset(22, AddressZip4); }
  void add_DealershipPhone(flatbuffers::Offset<flatbuffers::String> DealershipPhone) { fbb_.AddOffset(24, DealershipPhone); }
  DealershipBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  DealershipBuilder &operator=(const DealershipBuilder &);
  flatbuffers::Offset<Dealership> Finish() {
    auto o = flatbuffers::Offset<Dealership>(fbb_.EndTable(start_, 11));
    return o;
  }
};

inline flatbuffers::Offset<Dealership> CreateDealership(flatbuffers::FlatBufferBuilder &_fbb,
   uint32_t DealershipId = 0,
   flatbuffers::Offset<flatbuffers::String> DealerName = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> SalesPeople = 0,
   flatbuffers::Offset<flatbuffers::Vector<int32_t>> HoursOfOperation = 0,
   flatbuffers::Offset<flatbuffers::String> AddressLine1 = 0,
   flatbuffers::Offset<flatbuffers::String> AddressLine2 = 0,
   flatbuffers::Offset<flatbuffers::String> AddressCity = 0,
   flatbuffers::Offset<flatbuffers::String> AddressState = 0,
   flatbuffers::Offset<flatbuffers::String> AddressZipcode = 0,
   flatbuffers::Offset<flatbuffers::String> AddressZip4 = 0,
   flatbuffers::Offset<flatbuffers::String> DealershipPhone = 0) {
  DealershipBuilder builder_(_fbb);
  builder_.add_DealershipPhone(DealershipPhone);
  builder_.add_AddressZip4(AddressZip4);
  builder_.add_AddressZipcode(AddressZipcode);
  builder_.add_AddressState(AddressState);
  builder_.add_AddressCity(AddressCity);
  builder_.add_AddressLine2(AddressLine2);
  builder_.add_AddressLine1(AddressLine1);
  builder_.add_HoursOfOperation(HoursOfOperation);
  builder_.add_SalesPeople(SalesPeople);
  builder_.add_DealerName(DealerName);
  builder_.add_DealershipId(DealershipId);
  return builder_.Finish();
}

struct Car FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  uint32_t CarId() const { return GetField<uint32_t>(4, 0); }
  const flatbuffers::String *Make() const { return GetPointer<const flatbuffers::String *>(6); }
  const flatbuffers::String *Model() const { return GetPointer<const flatbuffers::String *>(8); }
  int32_t YearBuilt() const { return GetField<int32_t>(10, 0); }
  int32_t WarrantyLength() const { return GetField<int32_t>(12, 0); }
  const flatbuffers::Vector<flatbuffers::Offset<Dealership>> *Dealerships() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Dealership>> *>(14); }
  Color CarColor() const { return static_cast<Color>(GetField<int8_t>(16, 7)); }
  const Engine *CarEngine() const { return GetPointer<const Engine *>(18); }
  float TankSizeGallons() const { return GetField<float>(20, 0); }
  double OdometerAtTimeOfSale() const { return GetField<double>(22, 0); }
  const flatbuffers::Vector<double> *RecommendedServiceIntervals() const { return GetPointer<const flatbuffers::Vector<double> *>(24); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, 4 /* CarId */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* Make */) &&
           verifier.Verify(Make()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 8 /* Model */) &&
           verifier.Verify(Model()) &&
           VerifyField<int32_t>(verifier, 10 /* YearBuilt */) &&
           VerifyField<int32_t>(verifier, 12 /* WarrantyLength */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 14 /* Dealerships */) &&
           verifier.Verify(Dealerships()) &&
           verifier.VerifyVectorOfTables(Dealerships()) &&
           VerifyField<int8_t>(verifier, 16 /* CarColor */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 18 /* CarEngine */) &&
           verifier.VerifyTable(CarEngine()) &&
           VerifyField<float>(verifier, 20 /* TankSizeGallons */) &&
           VerifyField<double>(verifier, 22 /* OdometerAtTimeOfSale */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 24 /* RecommendedServiceIntervals */) &&
           verifier.Verify(RecommendedServiceIntervals()) &&
           verifier.EndTable();
  }
};

struct CarBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_CarId(uint32_t CarId) { fbb_.AddElement<uint32_t>(4, CarId, 0); }
  void add_Make(flatbuffers::Offset<flatbuffers::String> Make) { fbb_.AddOffset(6, Make); }
  void add_Model(flatbuffers::Offset<flatbuffers::String> Model) { fbb_.AddOffset(8, Model); }
  void add_YearBuilt(int32_t YearBuilt) { fbb_.AddElement<int32_t>(10, YearBuilt, 0); }
  void add_WarrantyLength(int32_t WarrantyLength) { fbb_.AddElement<int32_t>(12, WarrantyLength, 0); }
  void add_Dealerships(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Dealership>>> Dealerships) { fbb_.AddOffset(14, Dealerships); }
  void add_CarColor(Color CarColor) { fbb_.AddElement<int8_t>(16, static_cast<int8_t>(CarColor), 7); }
  void add_CarEngine(flatbuffers::Offset<Engine> CarEngine) { fbb_.AddOffset(18, CarEngine); }
  void add_TankSizeGallons(float TankSizeGallons) { fbb_.AddElement<float>(20, TankSizeGallons, 0); }
  void add_OdometerAtTimeOfSale(double OdometerAtTimeOfSale) { fbb_.AddElement<double>(22, OdometerAtTimeOfSale, 0); }
  void add_RecommendedServiceIntervals(flatbuffers::Offset<flatbuffers::Vector<double>> RecommendedServiceIntervals) { fbb_.AddOffset(24, RecommendedServiceIntervals); }
  CarBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  CarBuilder &operator=(const CarBuilder &);
  flatbuffers::Offset<Car> Finish() {
    auto o = flatbuffers::Offset<Car>(fbb_.EndTable(start_, 11));
    return o;
  }
};

inline flatbuffers::Offset<Car> CreateCar(flatbuffers::FlatBufferBuilder &_fbb,
   uint32_t CarId = 0,
   flatbuffers::Offset<flatbuffers::String> Make = 0,
   flatbuffers::Offset<flatbuffers::String> Model = 0,
   int32_t YearBuilt = 0,
   int32_t WarrantyLength = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Dealership>>> Dealerships = 0,
   Color CarColor = Color_SILVER,
   flatbuffers::Offset<Engine> CarEngine = 0,
   float TankSizeGallons = 0,
   double OdometerAtTimeOfSale = 0,
   flatbuffers::Offset<flatbuffers::Vector<double>> RecommendedServiceIntervals = 0) {
  CarBuilder builder_(_fbb);
  builder_.add_OdometerAtTimeOfSale(OdometerAtTimeOfSale);
  builder_.add_RecommendedServiceIntervals(RecommendedServiceIntervals);
  builder_.add_TankSizeGallons(TankSizeGallons);
  builder_.add_CarEngine(CarEngine);
  builder_.add_Dealerships(Dealerships);
  builder_.add_WarrantyLength(WarrantyLength);
  builder_.add_YearBuilt(YearBuilt);
  builder_.add_Model(Model);
  builder_.add_Make(Make);
  builder_.add_CarId(CarId);
  builder_.add_CarColor(CarColor);
  return builder_.Finish();
}

inline const Car *GetCar(const void *buf) { return flatbuffers::GetRoot<Car>(buf); }

inline bool VerifyCarBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<Car>(); }

inline void FinishCarBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<Car> root) { fbb.Finish(root, "_CAR"); }

inline bool CarBufferHasIdentifier(const void *buf) { return flatbuffers::BufferHasIdentifier(buf, "_CAR"); }

}  // namespace dynamic_api_samples

#endif  // FLATBUFFERS_GENERATED_CAR_DYNAMIC_API_SAMPLES_H_
