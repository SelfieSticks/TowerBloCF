#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Fizzyo.BreathRecogniser
struct BreathRecogniser_t1947511382;
// Fizzyo.ExhalationCompleteEventArgs
struct ExhalationCompleteEventArgs_t3142753754;
// Fizzyo.ExhalationCompleteEventHandler
struct ExhalationCompleteEventHandler_t745535219;
// Fizzyo.ExhalationStartedEventHandler
struct ExhalationStartedEventHandler_t1372626673;
// Fizzyo.FizzyoAchievements
struct FizzyoAchievements_t2109171980;
// Fizzyo.FizzyoAnalytics
struct FizzyoAnalytics_t2088627586;
// Fizzyo.FizzyoConfigurationProfile
struct FizzyoConfigurationProfile_t3981997750;
// Fizzyo.FizzyoDevice
struct FizzyoDevice_t3291519532;
// Fizzyo.FizzyoUser
struct FizzyoUser_t2963651454;
// Fizzyo.UserData
struct UserData_t4126390532;
// FizzyoHID
struct FizzyoHID_t689815472;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t2869341516;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ALLUSERDATA_T1205080024_H
#define ALLUSERDATA_T1205080024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.AllUserData
struct  AllUserData_t1205080024  : public RuntimeObject
{
public:
	// System.String Fizzyo.AllUserData::accessToken
	String_t* ___accessToken_0;
	// System.String Fizzyo.AllUserData::expiresIn
	String_t* ___expiresIn_1;
	// Fizzyo.UserData Fizzyo.AllUserData::user
	UserData_t4126390532 * ___user_2;

public:
	inline static int32_t get_offset_of_accessToken_0() { return static_cast<int32_t>(offsetof(AllUserData_t1205080024, ___accessToken_0)); }
	inline String_t* get_accessToken_0() const { return ___accessToken_0; }
	inline String_t** get_address_of_accessToken_0() { return &___accessToken_0; }
	inline void set_accessToken_0(String_t* value)
	{
		___accessToken_0 = value;
		Il2CppCodeGenWriteBarrier((&___accessToken_0), value);
	}

	inline static int32_t get_offset_of_expiresIn_1() { return static_cast<int32_t>(offsetof(AllUserData_t1205080024, ___expiresIn_1)); }
	inline String_t* get_expiresIn_1() const { return ___expiresIn_1; }
	inline String_t** get_address_of_expiresIn_1() { return &___expiresIn_1; }
	inline void set_expiresIn_1(String_t* value)
	{
		___expiresIn_1 = value;
		Il2CppCodeGenWriteBarrier((&___expiresIn_1), value);
	}

	inline static int32_t get_offset_of_user_2() { return static_cast<int32_t>(offsetof(AllUserData_t1205080024, ___user_2)); }
	inline UserData_t4126390532 * get_user_2() const { return ___user_2; }
	inline UserData_t4126390532 ** get_address_of_user_2() { return &___user_2; }
	inline void set_user_2(UserData_t4126390532 * value)
	{
		___user_2 = value;
		Il2CppCodeGenWriteBarrier((&___user_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLUSERDATA_T1205080024_H
#ifndef BREATHRECOGNISER_T1947511382_H
#define BREATHRECOGNISER_T1947511382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.BreathRecogniser
struct  BreathRecogniser_t1947511382  : public RuntimeObject
{
public:
	// System.Single Fizzyo.BreathRecogniser::breathLength
	float ___breathLength_0;
	// System.Int32 Fizzyo.BreathRecogniser::breathCount
	int32_t ___breathCount_1;
	// System.Int32 Fizzyo.BreathRecogniser::goodBreaths
	int32_t ___goodBreaths_2;
	// System.Int32 Fizzyo.BreathRecogniser::badBreaths
	int32_t ___badBreaths_3;
	// System.Single Fizzyo.BreathRecogniser::exhaledVolume
	float ___exhaledVolume_4;
	// System.Boolean Fizzyo.BreathRecogniser::isExhaling
	bool ___isExhaling_5;
	// System.Single Fizzyo.BreathRecogniser::maxPressure
	float ___maxPressure_6;
	// System.Single Fizzyo.BreathRecogniser::maxBreathLength
	float ___maxBreathLength_7;
	// System.Single Fizzyo.BreathRecogniser::minBreathThreshold
	float ___minBreathThreshold_9;
	// System.Single Fizzyo.BreathRecogniser::breathPercentage
	float ___breathPercentage_10;
	// Fizzyo.ExhalationCompleteEventHandler Fizzyo.BreathRecogniser::BreathComplete
	ExhalationCompleteEventHandler_t745535219 * ___BreathComplete_11;
	// Fizzyo.ExhalationStartedEventHandler Fizzyo.BreathRecogniser::BreathStarted
	ExhalationStartedEventHandler_t1372626673 * ___BreathStarted_12;

public:
	inline static int32_t get_offset_of_breathLength_0() { return static_cast<int32_t>(offsetof(BreathRecogniser_t1947511382, ___breathLength_0)); }
	inline float get_breathLength_0() const { return ___breathLength_0; }
	inline float* get_address_of_breathLength_0() { return &___breathLength_0; }
	inline void set_breathLength_0(float value)
	{
		___breathLength_0 = value;
	}

	inline static int32_t get_offset_of_breathCount_1() { return static_cast<int32_t>(offsetof(BreathRecogniser_t1947511382, ___breathCount_1)); }
	inline int32_t get_breathCount_1() const { return ___breathCount_1; }
	inline int32_t* get_address_of_breathCount_1() { return &___breathCount_1; }
	inline void set_breathCount_1(int32_t value)
	{
		___breathCount_1 = value;
	}

	inline static int32_t get_offset_of_goodBreaths_2() { return static_cast<int32_t>(offsetof(BreathRecogniser_t1947511382, ___goodBreaths_2)); }
	inline int32_t get_goodBreaths_2() const { return ___goodBreaths_2; }
	inline int32_t* get_address_of_goodBreaths_2() { return &___goodBreaths_2; }
	inline void set_goodBreaths_2(int32_t value)
	{
		___goodBreaths_2 = value;
	}

	inline static int32_t get_offset_of_badBreaths_3() { return static_cast<int32_t>(offsetof(BreathRecogniser_t1947511382, ___badBreaths_3)); }
	inline int32_t get_badBreaths_3() const { return ___badBreaths_3; }
	inline int32_t* get_address_of_badBreaths_3() { return &___badBreaths_3; }
	inline void set_badBreaths_3(int32_t value)
	{
		___badBreaths_3 = value;
	}

	inline static int32_t get_offset_of_exhaledVolume_4() { return static_cast<int32_t>(offsetof(BreathRecogniser_t1947511382, ___exhaledVolume_4)); }
	inline float get_exhaledVolume_4() const { return ___exhaledVolume_4; }
	inline float* get_address_of_exhaledVolume_4() { return &___exhaledVolume_4; }
	inline void set_exhaledVolume_4(float value)
	{
		___exhaledVolume_4 = value;
	}

	inline static int32_t get_offset_of_isExhaling_5() { return static_cast<int32_t>(offsetof(BreathRecogniser_t1947511382, ___isExhaling_5)); }
	inline bool get_isExhaling_5() const { return ___isExhaling_5; }
	inline bool* get_address_of_isExhaling_5() { return &___isExhaling_5; }
	inline void set_isExhaling_5(bool value)
	{
		___isExhaling_5 = value;
	}

	inline static int32_t get_offset_of_maxPressure_6() { return static_cast<int32_t>(offsetof(BreathRecogniser_t1947511382, ___maxPressure_6)); }
	inline float get_maxPressure_6() const { return ___maxPressure_6; }
	inline float* get_address_of_maxPressure_6() { return &___maxPressure_6; }
	inline void set_maxPressure_6(float value)
	{
		___maxPressure_6 = value;
	}

	inline static int32_t get_offset_of_maxBreathLength_7() { return static_cast<int32_t>(offsetof(BreathRecogniser_t1947511382, ___maxBreathLength_7)); }
	inline float get_maxBreathLength_7() const { return ___maxBreathLength_7; }
	inline float* get_address_of_maxBreathLength_7() { return &___maxBreathLength_7; }
	inline void set_maxBreathLength_7(float value)
	{
		___maxBreathLength_7 = value;
	}

	inline static int32_t get_offset_of_minBreathThreshold_9() { return static_cast<int32_t>(offsetof(BreathRecogniser_t1947511382, ___minBreathThreshold_9)); }
	inline float get_minBreathThreshold_9() const { return ___minBreathThreshold_9; }
	inline float* get_address_of_minBreathThreshold_9() { return &___minBreathThreshold_9; }
	inline void set_minBreathThreshold_9(float value)
	{
		___minBreathThreshold_9 = value;
	}

	inline static int32_t get_offset_of_breathPercentage_10() { return static_cast<int32_t>(offsetof(BreathRecogniser_t1947511382, ___breathPercentage_10)); }
	inline float get_breathPercentage_10() const { return ___breathPercentage_10; }
	inline float* get_address_of_breathPercentage_10() { return &___breathPercentage_10; }
	inline void set_breathPercentage_10(float value)
	{
		___breathPercentage_10 = value;
	}

	inline static int32_t get_offset_of_BreathComplete_11() { return static_cast<int32_t>(offsetof(BreathRecogniser_t1947511382, ___BreathComplete_11)); }
	inline ExhalationCompleteEventHandler_t745535219 * get_BreathComplete_11() const { return ___BreathComplete_11; }
	inline ExhalationCompleteEventHandler_t745535219 ** get_address_of_BreathComplete_11() { return &___BreathComplete_11; }
	inline void set_BreathComplete_11(ExhalationCompleteEventHandler_t745535219 * value)
	{
		___BreathComplete_11 = value;
		Il2CppCodeGenWriteBarrier((&___BreathComplete_11), value);
	}

	inline static int32_t get_offset_of_BreathStarted_12() { return static_cast<int32_t>(offsetof(BreathRecogniser_t1947511382, ___BreathStarted_12)); }
	inline ExhalationStartedEventHandler_t1372626673 * get_BreathStarted_12() const { return ___BreathStarted_12; }
	inline ExhalationStartedEventHandler_t1372626673 ** get_address_of_BreathStarted_12() { return &___BreathStarted_12; }
	inline void set_BreathStarted_12(ExhalationStartedEventHandler_t1372626673 * value)
	{
		___BreathStarted_12 = value;
		Il2CppCodeGenWriteBarrier((&___BreathStarted_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BREATHRECOGNISER_T1947511382_H
#ifndef FIZZYODEVICE_T3291519532_H
#define FIZZYODEVICE_T3291519532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.FizzyoDevice
struct  FizzyoDevice_t3291519532  : public RuntimeObject
{
public:
	// System.Boolean Fizzyo.FizzyoDevice::useRecordedData
	bool ___useRecordedData_0;
	// System.Boolean Fizzyo.FizzyoDevice::loop
	bool ___loop_1;
	// System.String Fizzyo.FizzyoDevice::recordedDataPath
	String_t* ___recordedDataPath_2;
	// System.Single Fizzyo.FizzyoDevice::maxPressureCalibrated
	float ___maxPressureCalibrated_3;
	// System.Single Fizzyo.FizzyoDevice::maxBreathCalibrated
	float ___maxBreathCalibrated_4;
	// System.String Fizzyo.FizzyoDevice::text
	String_t* ___text_5;
	// System.Single Fizzyo.FizzyoDevice::pressure
	float ___pressure_6;
	// FizzyoHID Fizzyo.FizzyoDevice::fizzyoHID
	FizzyoHID_t689815472 * ___fizzyoHID_7;
	// System.Boolean Fizzyo.FizzyoDevice::Calibrated
	bool ___Calibrated_8;

public:
	inline static int32_t get_offset_of_useRecordedData_0() { return static_cast<int32_t>(offsetof(FizzyoDevice_t3291519532, ___useRecordedData_0)); }
	inline bool get_useRecordedData_0() const { return ___useRecordedData_0; }
	inline bool* get_address_of_useRecordedData_0() { return &___useRecordedData_0; }
	inline void set_useRecordedData_0(bool value)
	{
		___useRecordedData_0 = value;
	}

	inline static int32_t get_offset_of_loop_1() { return static_cast<int32_t>(offsetof(FizzyoDevice_t3291519532, ___loop_1)); }
	inline bool get_loop_1() const { return ___loop_1; }
	inline bool* get_address_of_loop_1() { return &___loop_1; }
	inline void set_loop_1(bool value)
	{
		___loop_1 = value;
	}

	inline static int32_t get_offset_of_recordedDataPath_2() { return static_cast<int32_t>(offsetof(FizzyoDevice_t3291519532, ___recordedDataPath_2)); }
	inline String_t* get_recordedDataPath_2() const { return ___recordedDataPath_2; }
	inline String_t** get_address_of_recordedDataPath_2() { return &___recordedDataPath_2; }
	inline void set_recordedDataPath_2(String_t* value)
	{
		___recordedDataPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___recordedDataPath_2), value);
	}

	inline static int32_t get_offset_of_maxPressureCalibrated_3() { return static_cast<int32_t>(offsetof(FizzyoDevice_t3291519532, ___maxPressureCalibrated_3)); }
	inline float get_maxPressureCalibrated_3() const { return ___maxPressureCalibrated_3; }
	inline float* get_address_of_maxPressureCalibrated_3() { return &___maxPressureCalibrated_3; }
	inline void set_maxPressureCalibrated_3(float value)
	{
		___maxPressureCalibrated_3 = value;
	}

	inline static int32_t get_offset_of_maxBreathCalibrated_4() { return static_cast<int32_t>(offsetof(FizzyoDevice_t3291519532, ___maxBreathCalibrated_4)); }
	inline float get_maxBreathCalibrated_4() const { return ___maxBreathCalibrated_4; }
	inline float* get_address_of_maxBreathCalibrated_4() { return &___maxBreathCalibrated_4; }
	inline void set_maxBreathCalibrated_4(float value)
	{
		___maxBreathCalibrated_4 = value;
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(FizzyoDevice_t3291519532, ___text_5)); }
	inline String_t* get_text_5() const { return ___text_5; }
	inline String_t** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(String_t* value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((&___text_5), value);
	}

	inline static int32_t get_offset_of_pressure_6() { return static_cast<int32_t>(offsetof(FizzyoDevice_t3291519532, ___pressure_6)); }
	inline float get_pressure_6() const { return ___pressure_6; }
	inline float* get_address_of_pressure_6() { return &___pressure_6; }
	inline void set_pressure_6(float value)
	{
		___pressure_6 = value;
	}

	inline static int32_t get_offset_of_fizzyoHID_7() { return static_cast<int32_t>(offsetof(FizzyoDevice_t3291519532, ___fizzyoHID_7)); }
	inline FizzyoHID_t689815472 * get_fizzyoHID_7() const { return ___fizzyoHID_7; }
	inline FizzyoHID_t689815472 ** get_address_of_fizzyoHID_7() { return &___fizzyoHID_7; }
	inline void set_fizzyoHID_7(FizzyoHID_t689815472 * value)
	{
		___fizzyoHID_7 = value;
		Il2CppCodeGenWriteBarrier((&___fizzyoHID_7), value);
	}

	inline static int32_t get_offset_of_Calibrated_8() { return static_cast<int32_t>(offsetof(FizzyoDevice_t3291519532, ___Calibrated_8)); }
	inline bool get_Calibrated_8() const { return ___Calibrated_8; }
	inline bool* get_address_of_Calibrated_8() { return &___Calibrated_8; }
	inline void set_Calibrated_8(bool value)
	{
		___Calibrated_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIZZYODEVICE_T3291519532_H
#ifndef USERDATA_T4126390532_H
#define USERDATA_T4126390532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.UserData
struct  UserData_t4126390532  : public RuntimeObject
{
public:
	// System.String Fizzyo.UserData::id
	String_t* ___id_0;
	// System.String Fizzyo.UserData::firstName
	String_t* ___firstName_1;
	// System.String Fizzyo.UserData::lastName
	String_t* ___lastName_2;
	// System.String Fizzyo.UserData::role
	String_t* ___role_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(UserData_t4126390532, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((&___id_0), value);
	}

	inline static int32_t get_offset_of_firstName_1() { return static_cast<int32_t>(offsetof(UserData_t4126390532, ___firstName_1)); }
	inline String_t* get_firstName_1() const { return ___firstName_1; }
	inline String_t** get_address_of_firstName_1() { return &___firstName_1; }
	inline void set_firstName_1(String_t* value)
	{
		___firstName_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstName_1), value);
	}

	inline static int32_t get_offset_of_lastName_2() { return static_cast<int32_t>(offsetof(UserData_t4126390532, ___lastName_2)); }
	inline String_t* get_lastName_2() const { return ___lastName_2; }
	inline String_t** get_address_of_lastName_2() { return &___lastName_2; }
	inline void set_lastName_2(String_t* value)
	{
		___lastName_2 = value;
		Il2CppCodeGenWriteBarrier((&___lastName_2), value);
	}

	inline static int32_t get_offset_of_role_3() { return static_cast<int32_t>(offsetof(UserData_t4126390532, ___role_3)); }
	inline String_t* get_role_3() const { return ___role_3; }
	inline String_t** get_address_of_role_3() { return &___role_3; }
	inline void set_role_3(String_t* value)
	{
		___role_3 = value;
		Il2CppCodeGenWriteBarrier((&___role_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERDATA_T4126390532_H
#ifndef USERTAG_T2530831734_H
#define USERTAG_T2530831734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.UserTag
struct  UserTag_t2530831734  : public RuntimeObject
{
public:
	// System.String Fizzyo.UserTag::gamerTag
	String_t* ___gamerTag_0;

public:
	inline static int32_t get_offset_of_gamerTag_0() { return static_cast<int32_t>(offsetof(UserTag_t2530831734, ___gamerTag_0)); }
	inline String_t* get_gamerTag_0() const { return ___gamerTag_0; }
	inline String_t** get_address_of_gamerTag_0() { return &___gamerTag_0; }
	inline void set_gamerTag_0(String_t* value)
	{
		___gamerTag_0 = value;
		Il2CppCodeGenWriteBarrier((&___gamerTag_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERTAG_T2530831734_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef CALIBRATIONRETURNTYPE_T1835180308_H
#define CALIBRATIONRETURNTYPE_T1835180308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.CalibrationReturnType
struct  CalibrationReturnType_t1835180308 
{
public:
	// System.Int32 Fizzyo.CalibrationReturnType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CalibrationReturnType_t1835180308, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALIBRATIONRETURNTYPE_T1835180308_H
#ifndef TESTHARNESSDATA_T2159594183_H
#define TESTHARNESSDATA_T2159594183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.FizzyoConfigurationProfile/TestHarnessData
struct  TestHarnessData_t2159594183 
{
public:
	// System.Int32 Fizzyo.FizzyoConfigurationProfile/TestHarnessData::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TestHarnessData_t2159594183, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTHARNESSDATA_T2159594183_H
#ifndef FIZZYOREQUESTRETURNTYPE_T1948836839_H
#define FIZZYOREQUESTRETURNTYPE_T1948836839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.FizzyoRequestReturnType
struct  FizzyoRequestReturnType_t1948836839 
{
public:
	// System.Int32 Fizzyo.FizzyoRequestReturnType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FizzyoRequestReturnType_t1948836839, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIZZYOREQUESTRETURNTYPE_T1948836839_H
#ifndef LOGINRETURNTYPE_T3413865398_H
#define LOGINRETURNTYPE_T3413865398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.LoginReturnType
struct  LoginReturnType_t3413865398 
{
public:
	// System.Int32 Fizzyo.LoginReturnType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoginReturnType_t3413865398, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINRETURNTYPE_T3413865398_H
#ifndef USERTAGRETURNTYPE_T1432432491_H
#define USERTAGRETURNTYPE_T1432432491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.UserTagReturnType
struct  UserTagReturnType_t1432432491 
{
public:
	// System.Int32 Fizzyo.UserTagReturnType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserTagReturnType_t1432432491, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERTAGRETURNTYPE_T1432432491_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef FIZZYOUSER_T2963651454_H
#define FIZZYOUSER_T2963651454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.FizzyoUser
struct  FizzyoUser_t2963651454  : public RuntimeObject
{
public:
	// System.String Fizzyo.FizzyoUser::userID
	String_t* ___userID_5;
	// System.String Fizzyo.FizzyoUser::patientRecordId
	String_t* ___patientRecordId_6;
	// System.String Fizzyo.FizzyoUser::token
	String_t* ___token_7;
	// System.Boolean Fizzyo.FizzyoUser::loggedIn
	bool ___loggedIn_8;
	// System.String Fizzyo.FizzyoUser::username
	String_t* ___username_9;
	// System.String Fizzyo.FizzyoUser::testUsername
	String_t* ___testUsername_10;
	// System.String Fizzyo.FizzyoUser::testPassword
	String_t* ___testPassword_11;
	// System.String Fizzyo.FizzyoUser::<UserID>k__BackingField
	String_t* ___U3CUserIDU3Ek__BackingField_12;
	// System.String Fizzyo.FizzyoUser::<AccessToken>k__BackingField
	String_t* ___U3CAccessTokenU3Ek__BackingField_13;
	// System.Boolean Fizzyo.FizzyoUser::userTagSet
	bool ___userTagSet_14;
	// System.Boolean Fizzyo.FizzyoUser::calibrationSet
	bool ___calibrationSet_15;
	// System.Boolean Fizzyo.FizzyoUser::loginInProgress
	bool ___loginInProgress_16;
	// Fizzyo.LoginReturnType Fizzyo.FizzyoUser::loginResult
	int32_t ___loginResult_17;

public:
	inline static int32_t get_offset_of_userID_5() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___userID_5)); }
	inline String_t* get_userID_5() const { return ___userID_5; }
	inline String_t** get_address_of_userID_5() { return &___userID_5; }
	inline void set_userID_5(String_t* value)
	{
		___userID_5 = value;
		Il2CppCodeGenWriteBarrier((&___userID_5), value);
	}

	inline static int32_t get_offset_of_patientRecordId_6() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___patientRecordId_6)); }
	inline String_t* get_patientRecordId_6() const { return ___patientRecordId_6; }
	inline String_t** get_address_of_patientRecordId_6() { return &___patientRecordId_6; }
	inline void set_patientRecordId_6(String_t* value)
	{
		___patientRecordId_6 = value;
		Il2CppCodeGenWriteBarrier((&___patientRecordId_6), value);
	}

	inline static int32_t get_offset_of_token_7() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___token_7)); }
	inline String_t* get_token_7() const { return ___token_7; }
	inline String_t** get_address_of_token_7() { return &___token_7; }
	inline void set_token_7(String_t* value)
	{
		___token_7 = value;
		Il2CppCodeGenWriteBarrier((&___token_7), value);
	}

	inline static int32_t get_offset_of_loggedIn_8() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___loggedIn_8)); }
	inline bool get_loggedIn_8() const { return ___loggedIn_8; }
	inline bool* get_address_of_loggedIn_8() { return &___loggedIn_8; }
	inline void set_loggedIn_8(bool value)
	{
		___loggedIn_8 = value;
	}

	inline static int32_t get_offset_of_username_9() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___username_9)); }
	inline String_t* get_username_9() const { return ___username_9; }
	inline String_t** get_address_of_username_9() { return &___username_9; }
	inline void set_username_9(String_t* value)
	{
		___username_9 = value;
		Il2CppCodeGenWriteBarrier((&___username_9), value);
	}

	inline static int32_t get_offset_of_testUsername_10() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___testUsername_10)); }
	inline String_t* get_testUsername_10() const { return ___testUsername_10; }
	inline String_t** get_address_of_testUsername_10() { return &___testUsername_10; }
	inline void set_testUsername_10(String_t* value)
	{
		___testUsername_10 = value;
		Il2CppCodeGenWriteBarrier((&___testUsername_10), value);
	}

	inline static int32_t get_offset_of_testPassword_11() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___testPassword_11)); }
	inline String_t* get_testPassword_11() const { return ___testPassword_11; }
	inline String_t** get_address_of_testPassword_11() { return &___testPassword_11; }
	inline void set_testPassword_11(String_t* value)
	{
		___testPassword_11 = value;
		Il2CppCodeGenWriteBarrier((&___testPassword_11), value);
	}

	inline static int32_t get_offset_of_U3CUserIDU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___U3CUserIDU3Ek__BackingField_12)); }
	inline String_t* get_U3CUserIDU3Ek__BackingField_12() const { return ___U3CUserIDU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CUserIDU3Ek__BackingField_12() { return &___U3CUserIDU3Ek__BackingField_12; }
	inline void set_U3CUserIDU3Ek__BackingField_12(String_t* value)
	{
		___U3CUserIDU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserIDU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CAccessTokenU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___U3CAccessTokenU3Ek__BackingField_13)); }
	inline String_t* get_U3CAccessTokenU3Ek__BackingField_13() const { return ___U3CAccessTokenU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CAccessTokenU3Ek__BackingField_13() { return &___U3CAccessTokenU3Ek__BackingField_13; }
	inline void set_U3CAccessTokenU3Ek__BackingField_13(String_t* value)
	{
		___U3CAccessTokenU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAccessTokenU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of_userTagSet_14() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___userTagSet_14)); }
	inline bool get_userTagSet_14() const { return ___userTagSet_14; }
	inline bool* get_address_of_userTagSet_14() { return &___userTagSet_14; }
	inline void set_userTagSet_14(bool value)
	{
		___userTagSet_14 = value;
	}

	inline static int32_t get_offset_of_calibrationSet_15() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___calibrationSet_15)); }
	inline bool get_calibrationSet_15() const { return ___calibrationSet_15; }
	inline bool* get_address_of_calibrationSet_15() { return &___calibrationSet_15; }
	inline void set_calibrationSet_15(bool value)
	{
		___calibrationSet_15 = value;
	}

	inline static int32_t get_offset_of_loginInProgress_16() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___loginInProgress_16)); }
	inline bool get_loginInProgress_16() const { return ___loginInProgress_16; }
	inline bool* get_address_of_loginInProgress_16() { return &___loginInProgress_16; }
	inline void set_loginInProgress_16(bool value)
	{
		___loginInProgress_16 = value;
	}

	inline static int32_t get_offset_of_loginResult_17() { return static_cast<int32_t>(offsetof(FizzyoUser_t2963651454, ___loginResult_17)); }
	inline int32_t get_loginResult_17() const { return ___loginResult_17; }
	inline int32_t* get_address_of_loginResult_17() { return &___loginResult_17; }
	inline void set_loginResult_17(int32_t value)
	{
		___loginResult_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIZZYOUSER_T2963651454_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef EXHALATIONCOMPLETEEVENTHANDLER_T745535219_H
#define EXHALATIONCOMPLETEEVENTHANDLER_T745535219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.ExhalationCompleteEventHandler
struct  ExhalationCompleteEventHandler_t745535219  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXHALATIONCOMPLETEEVENTHANDLER_T745535219_H
#ifndef EXHALATIONSTARTEDEVENTHANDLER_T1372626673_H
#define EXHALATIONSTARTEDEVENTHANDLER_T1372626673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.ExhalationStartedEventHandler
struct  ExhalationStartedEventHandler_t1372626673  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXHALATIONSTARTEDEVENTHANDLER_T1372626673_H
#ifndef FIZZYOCONFIGURATIONPROFILE_T3981997750_H
#define FIZZYOCONFIGURATIONPROFILE_T3981997750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.FizzyoConfigurationProfile
struct  FizzyoConfigurationProfile_t3981997750  : public ScriptableObject_t2528358522
{
public:
	// System.Boolean Fizzyo.FizzyoConfigurationProfile::showLoginAutomatically
	bool ___showLoginAutomatically_4;
	// System.Boolean Fizzyo.FizzyoConfigurationProfile::showSetGamerTagAutomatically
	bool ___showSetGamerTagAutomatically_5;
	// System.Boolean Fizzyo.FizzyoConfigurationProfile::showCalibrateAutomatically
	bool ___showCalibrateAutomatically_6;
	// System.String Fizzyo.FizzyoConfigurationProfile::gameID
	String_t* ___gameID_7;
	// System.String Fizzyo.FizzyoConfigurationProfile::gameSecret
	String_t* ___gameSecret_8;
	// System.String Fizzyo.FizzyoConfigurationProfile::apiPath
	String_t* ___apiPath_9;
	// System.Boolean Fizzyo.FizzyoConfigurationProfile::useTestHarnessData
	bool ___useTestHarnessData_10;
	// Fizzyo.FizzyoConfigurationProfile/TestHarnessData Fizzyo.FizzyoConfigurationProfile::testHarnessDataFile
	int32_t ___testHarnessDataFile_11;

public:
	inline static int32_t get_offset_of_showLoginAutomatically_4() { return static_cast<int32_t>(offsetof(FizzyoConfigurationProfile_t3981997750, ___showLoginAutomatically_4)); }
	inline bool get_showLoginAutomatically_4() const { return ___showLoginAutomatically_4; }
	inline bool* get_address_of_showLoginAutomatically_4() { return &___showLoginAutomatically_4; }
	inline void set_showLoginAutomatically_4(bool value)
	{
		___showLoginAutomatically_4 = value;
	}

	inline static int32_t get_offset_of_showSetGamerTagAutomatically_5() { return static_cast<int32_t>(offsetof(FizzyoConfigurationProfile_t3981997750, ___showSetGamerTagAutomatically_5)); }
	inline bool get_showSetGamerTagAutomatically_5() const { return ___showSetGamerTagAutomatically_5; }
	inline bool* get_address_of_showSetGamerTagAutomatically_5() { return &___showSetGamerTagAutomatically_5; }
	inline void set_showSetGamerTagAutomatically_5(bool value)
	{
		___showSetGamerTagAutomatically_5 = value;
	}

	inline static int32_t get_offset_of_showCalibrateAutomatically_6() { return static_cast<int32_t>(offsetof(FizzyoConfigurationProfile_t3981997750, ___showCalibrateAutomatically_6)); }
	inline bool get_showCalibrateAutomatically_6() const { return ___showCalibrateAutomatically_6; }
	inline bool* get_address_of_showCalibrateAutomatically_6() { return &___showCalibrateAutomatically_6; }
	inline void set_showCalibrateAutomatically_6(bool value)
	{
		___showCalibrateAutomatically_6 = value;
	}

	inline static int32_t get_offset_of_gameID_7() { return static_cast<int32_t>(offsetof(FizzyoConfigurationProfile_t3981997750, ___gameID_7)); }
	inline String_t* get_gameID_7() const { return ___gameID_7; }
	inline String_t** get_address_of_gameID_7() { return &___gameID_7; }
	inline void set_gameID_7(String_t* value)
	{
		___gameID_7 = value;
		Il2CppCodeGenWriteBarrier((&___gameID_7), value);
	}

	inline static int32_t get_offset_of_gameSecret_8() { return static_cast<int32_t>(offsetof(FizzyoConfigurationProfile_t3981997750, ___gameSecret_8)); }
	inline String_t* get_gameSecret_8() const { return ___gameSecret_8; }
	inline String_t** get_address_of_gameSecret_8() { return &___gameSecret_8; }
	inline void set_gameSecret_8(String_t* value)
	{
		___gameSecret_8 = value;
		Il2CppCodeGenWriteBarrier((&___gameSecret_8), value);
	}

	inline static int32_t get_offset_of_apiPath_9() { return static_cast<int32_t>(offsetof(FizzyoConfigurationProfile_t3981997750, ___apiPath_9)); }
	inline String_t* get_apiPath_9() const { return ___apiPath_9; }
	inline String_t** get_address_of_apiPath_9() { return &___apiPath_9; }
	inline void set_apiPath_9(String_t* value)
	{
		___apiPath_9 = value;
		Il2CppCodeGenWriteBarrier((&___apiPath_9), value);
	}

	inline static int32_t get_offset_of_useTestHarnessData_10() { return static_cast<int32_t>(offsetof(FizzyoConfigurationProfile_t3981997750, ___useTestHarnessData_10)); }
	inline bool get_useTestHarnessData_10() const { return ___useTestHarnessData_10; }
	inline bool* get_address_of_useTestHarnessData_10() { return &___useTestHarnessData_10; }
	inline void set_useTestHarnessData_10(bool value)
	{
		___useTestHarnessData_10 = value;
	}

	inline static int32_t get_offset_of_testHarnessDataFile_11() { return static_cast<int32_t>(offsetof(FizzyoConfigurationProfile_t3981997750, ___testHarnessDataFile_11)); }
	inline int32_t get_testHarnessDataFile_11() const { return ___testHarnessDataFile_11; }
	inline int32_t* get_address_of_testHarnessDataFile_11() { return &___testHarnessDataFile_11; }
	inline void set_testHarnessDataFile_11(int32_t value)
	{
		___testHarnessDataFile_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIZZYOCONFIGURATIONPROFILE_T3981997750_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CALIBRATION_T640377563_H
#define CALIBRATION_T640377563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.Calibration
struct  Calibration_t640377563  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Fizzyo.Calibration::breathLength
	float ___breathLength_4;
	// System.Int32 Fizzyo.Calibration::calibrationStep
	int32_t ___calibrationStep_5;
	// System.Int32 Fizzyo.Calibration::requiredSteps
	int32_t ___requiredSteps_6;
	// System.String Fizzyo.Calibration::calibrationStatus
	String_t* ___calibrationStatus_7;
	// UnityEngine.Color Fizzyo.Calibration::calibrationColor
	Color_t2555686324  ___calibrationColor_8;
	// System.Collections.Generic.List`1<System.Single> Fizzyo.Calibration::pressureReadings
	List_1_t2869341516 * ___pressureReadings_9;
	// System.Collections.Generic.List`1<System.Single> Fizzyo.Calibration::avgPressureReadings
	List_1_t2869341516 * ___avgPressureReadings_10;
	// System.Collections.Generic.List`1<System.Single> Fizzyo.Calibration::avgLengths
	List_1_t2869341516 * ___avgLengths_11;
	// System.Single Fizzyo.Calibration::minPressureThreshold
	float ___minPressureThreshold_12;
	// System.Single Fizzyo.Calibration::pressure
	float ___pressure_13;
	// System.Boolean Fizzyo.Calibration::calibrating
	bool ___calibrating_14;
	// System.Boolean Fizzyo.Calibration::calibrationFinished
	bool ___calibrationFinished_15;

public:
	inline static int32_t get_offset_of_breathLength_4() { return static_cast<int32_t>(offsetof(Calibration_t640377563, ___breathLength_4)); }
	inline float get_breathLength_4() const { return ___breathLength_4; }
	inline float* get_address_of_breathLength_4() { return &___breathLength_4; }
	inline void set_breathLength_4(float value)
	{
		___breathLength_4 = value;
	}

	inline static int32_t get_offset_of_calibrationStep_5() { return static_cast<int32_t>(offsetof(Calibration_t640377563, ___calibrationStep_5)); }
	inline int32_t get_calibrationStep_5() const { return ___calibrationStep_5; }
	inline int32_t* get_address_of_calibrationStep_5() { return &___calibrationStep_5; }
	inline void set_calibrationStep_5(int32_t value)
	{
		___calibrationStep_5 = value;
	}

	inline static int32_t get_offset_of_requiredSteps_6() { return static_cast<int32_t>(offsetof(Calibration_t640377563, ___requiredSteps_6)); }
	inline int32_t get_requiredSteps_6() const { return ___requiredSteps_6; }
	inline int32_t* get_address_of_requiredSteps_6() { return &___requiredSteps_6; }
	inline void set_requiredSteps_6(int32_t value)
	{
		___requiredSteps_6 = value;
	}

	inline static int32_t get_offset_of_calibrationStatus_7() { return static_cast<int32_t>(offsetof(Calibration_t640377563, ___calibrationStatus_7)); }
	inline String_t* get_calibrationStatus_7() const { return ___calibrationStatus_7; }
	inline String_t** get_address_of_calibrationStatus_7() { return &___calibrationStatus_7; }
	inline void set_calibrationStatus_7(String_t* value)
	{
		___calibrationStatus_7 = value;
		Il2CppCodeGenWriteBarrier((&___calibrationStatus_7), value);
	}

	inline static int32_t get_offset_of_calibrationColor_8() { return static_cast<int32_t>(offsetof(Calibration_t640377563, ___calibrationColor_8)); }
	inline Color_t2555686324  get_calibrationColor_8() const { return ___calibrationColor_8; }
	inline Color_t2555686324 * get_address_of_calibrationColor_8() { return &___calibrationColor_8; }
	inline void set_calibrationColor_8(Color_t2555686324  value)
	{
		___calibrationColor_8 = value;
	}

	inline static int32_t get_offset_of_pressureReadings_9() { return static_cast<int32_t>(offsetof(Calibration_t640377563, ___pressureReadings_9)); }
	inline List_1_t2869341516 * get_pressureReadings_9() const { return ___pressureReadings_9; }
	inline List_1_t2869341516 ** get_address_of_pressureReadings_9() { return &___pressureReadings_9; }
	inline void set_pressureReadings_9(List_1_t2869341516 * value)
	{
		___pressureReadings_9 = value;
		Il2CppCodeGenWriteBarrier((&___pressureReadings_9), value);
	}

	inline static int32_t get_offset_of_avgPressureReadings_10() { return static_cast<int32_t>(offsetof(Calibration_t640377563, ___avgPressureReadings_10)); }
	inline List_1_t2869341516 * get_avgPressureReadings_10() const { return ___avgPressureReadings_10; }
	inline List_1_t2869341516 ** get_address_of_avgPressureReadings_10() { return &___avgPressureReadings_10; }
	inline void set_avgPressureReadings_10(List_1_t2869341516 * value)
	{
		___avgPressureReadings_10 = value;
		Il2CppCodeGenWriteBarrier((&___avgPressureReadings_10), value);
	}

	inline static int32_t get_offset_of_avgLengths_11() { return static_cast<int32_t>(offsetof(Calibration_t640377563, ___avgLengths_11)); }
	inline List_1_t2869341516 * get_avgLengths_11() const { return ___avgLengths_11; }
	inline List_1_t2869341516 ** get_address_of_avgLengths_11() { return &___avgLengths_11; }
	inline void set_avgLengths_11(List_1_t2869341516 * value)
	{
		___avgLengths_11 = value;
		Il2CppCodeGenWriteBarrier((&___avgLengths_11), value);
	}

	inline static int32_t get_offset_of_minPressureThreshold_12() { return static_cast<int32_t>(offsetof(Calibration_t640377563, ___minPressureThreshold_12)); }
	inline float get_minPressureThreshold_12() const { return ___minPressureThreshold_12; }
	inline float* get_address_of_minPressureThreshold_12() { return &___minPressureThreshold_12; }
	inline void set_minPressureThreshold_12(float value)
	{
		___minPressureThreshold_12 = value;
	}

	inline static int32_t get_offset_of_pressure_13() { return static_cast<int32_t>(offsetof(Calibration_t640377563, ___pressure_13)); }
	inline float get_pressure_13() const { return ___pressure_13; }
	inline float* get_address_of_pressure_13() { return &___pressure_13; }
	inline void set_pressure_13(float value)
	{
		___pressure_13 = value;
	}

	inline static int32_t get_offset_of_calibrating_14() { return static_cast<int32_t>(offsetof(Calibration_t640377563, ___calibrating_14)); }
	inline bool get_calibrating_14() const { return ___calibrating_14; }
	inline bool* get_address_of_calibrating_14() { return &___calibrating_14; }
	inline void set_calibrating_14(bool value)
	{
		___calibrating_14 = value;
	}

	inline static int32_t get_offset_of_calibrationFinished_15() { return static_cast<int32_t>(offsetof(Calibration_t640377563, ___calibrationFinished_15)); }
	inline bool get_calibrationFinished_15() const { return ___calibrationFinished_15; }
	inline bool* get_address_of_calibrationFinished_15() { return &___calibrationFinished_15; }
	inline void set_calibrationFinished_15(bool value)
	{
		___calibrationFinished_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALIBRATION_T640377563_H
#ifndef FIZZYOFRAMEWORK_T2707222705_H
#define FIZZYOFRAMEWORK_T2707222705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fizzyo.FizzyoFramework
struct  FizzyoFramework_t2707222705  : public MonoBehaviour_t3962482529
{
public:
	// Fizzyo.FizzyoConfigurationProfile Fizzyo.FizzyoFramework::FizzyoConfigurationProfile
	FizzyoConfigurationProfile_t3981997750 * ___FizzyoConfigurationProfile_4;
	// Fizzyo.FizzyoUser Fizzyo.FizzyoFramework::<User>k__BackingField
	FizzyoUser_t2963651454 * ___U3CUserU3Ek__BackingField_6;
	// Fizzyo.FizzyoDevice Fizzyo.FizzyoFramework::<Device>k__BackingField
	FizzyoDevice_t3291519532 * ___U3CDeviceU3Ek__BackingField_7;
	// Fizzyo.FizzyoAchievements Fizzyo.FizzyoFramework::<Achievements>k__BackingField
	FizzyoAchievements_t2109171980 * ___U3CAchievementsU3Ek__BackingField_8;
	// Fizzyo.BreathRecogniser Fizzyo.FizzyoFramework::<Recogniser>k__BackingField
	BreathRecogniser_t1947511382 * ___U3CRecogniserU3Ek__BackingField_9;
	// Fizzyo.FizzyoAnalytics Fizzyo.FizzyoFramework::<Analytics>k__BackingField
	FizzyoAnalytics_t2088627586 * ___U3CAnalyticsU3Ek__BackingField_10;
	// System.String Fizzyo.FizzyoFramework::<CallbackScenePath>k__BackingField
	String_t* ___U3CCallbackScenePathU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_FizzyoConfigurationProfile_4() { return static_cast<int32_t>(offsetof(FizzyoFramework_t2707222705, ___FizzyoConfigurationProfile_4)); }
	inline FizzyoConfigurationProfile_t3981997750 * get_FizzyoConfigurationProfile_4() const { return ___FizzyoConfigurationProfile_4; }
	inline FizzyoConfigurationProfile_t3981997750 ** get_address_of_FizzyoConfigurationProfile_4() { return &___FizzyoConfigurationProfile_4; }
	inline void set_FizzyoConfigurationProfile_4(FizzyoConfigurationProfile_t3981997750 * value)
	{
		___FizzyoConfigurationProfile_4 = value;
		Il2CppCodeGenWriteBarrier((&___FizzyoConfigurationProfile_4), value);
	}

	inline static int32_t get_offset_of_U3CUserU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FizzyoFramework_t2707222705, ___U3CUserU3Ek__BackingField_6)); }
	inline FizzyoUser_t2963651454 * get_U3CUserU3Ek__BackingField_6() const { return ___U3CUserU3Ek__BackingField_6; }
	inline FizzyoUser_t2963651454 ** get_address_of_U3CUserU3Ek__BackingField_6() { return &___U3CUserU3Ek__BackingField_6; }
	inline void set_U3CUserU3Ek__BackingField_6(FizzyoUser_t2963651454 * value)
	{
		___U3CUserU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CDeviceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FizzyoFramework_t2707222705, ___U3CDeviceU3Ek__BackingField_7)); }
	inline FizzyoDevice_t3291519532 * get_U3CDeviceU3Ek__BackingField_7() const { return ___U3CDeviceU3Ek__BackingField_7; }
	inline FizzyoDevice_t3291519532 ** get_address_of_U3CDeviceU3Ek__BackingField_7() { return &___U3CDeviceU3Ek__BackingField_7; }
	inline void set_U3CDeviceU3Ek__BackingField_7(FizzyoDevice_t3291519532 * value)
	{
		___U3CDeviceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDeviceU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CAchievementsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(FizzyoFramework_t2707222705, ___U3CAchievementsU3Ek__BackingField_8)); }
	inline FizzyoAchievements_t2109171980 * get_U3CAchievementsU3Ek__BackingField_8() const { return ___U3CAchievementsU3Ek__BackingField_8; }
	inline FizzyoAchievements_t2109171980 ** get_address_of_U3CAchievementsU3Ek__BackingField_8() { return &___U3CAchievementsU3Ek__BackingField_8; }
	inline void set_U3CAchievementsU3Ek__BackingField_8(FizzyoAchievements_t2109171980 * value)
	{
		___U3CAchievementsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAchievementsU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CRecogniserU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(FizzyoFramework_t2707222705, ___U3CRecogniserU3Ek__BackingField_9)); }
	inline BreathRecogniser_t1947511382 * get_U3CRecogniserU3Ek__BackingField_9() const { return ___U3CRecogniserU3Ek__BackingField_9; }
	inline BreathRecogniser_t1947511382 ** get_address_of_U3CRecogniserU3Ek__BackingField_9() { return &___U3CRecogniserU3Ek__BackingField_9; }
	inline void set_U3CRecogniserU3Ek__BackingField_9(BreathRecogniser_t1947511382 * value)
	{
		___U3CRecogniserU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRecogniserU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_U3CAnalyticsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(FizzyoFramework_t2707222705, ___U3CAnalyticsU3Ek__BackingField_10)); }
	inline FizzyoAnalytics_t2088627586 * get_U3CAnalyticsU3Ek__BackingField_10() const { return ___U3CAnalyticsU3Ek__BackingField_10; }
	inline FizzyoAnalytics_t2088627586 ** get_address_of_U3CAnalyticsU3Ek__BackingField_10() { return &___U3CAnalyticsU3Ek__BackingField_10; }
	inline void set_U3CAnalyticsU3Ek__BackingField_10(FizzyoAnalytics_t2088627586 * value)
	{
		___U3CAnalyticsU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAnalyticsU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CCallbackScenePathU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FizzyoFramework_t2707222705, ___U3CCallbackScenePathU3Ek__BackingField_12)); }
	inline String_t* get_U3CCallbackScenePathU3Ek__BackingField_12() const { return ___U3CCallbackScenePathU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CCallbackScenePathU3Ek__BackingField_12() { return &___U3CCallbackScenePathU3Ek__BackingField_12; }
	inline void set_U3CCallbackScenePathU3Ek__BackingField_12(String_t* value)
	{
		___U3CCallbackScenePathU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCallbackScenePathU3Ek__BackingField_12), value);
	}
};

struct FizzyoFramework_t2707222705_StaticFields
{
public:
	// Fizzyo.FizzyoFramework Fizzyo.FizzyoFramework::_instance
	FizzyoFramework_t2707222705 * ____instance_5;
	// System.Boolean Fizzyo.FizzyoFramework::applicationIsQuitting
	bool ___applicationIsQuitting_11;

public:
	inline static int32_t get_offset_of__instance_5() { return static_cast<int32_t>(offsetof(FizzyoFramework_t2707222705_StaticFields, ____instance_5)); }
	inline FizzyoFramework_t2707222705 * get__instance_5() const { return ____instance_5; }
	inline FizzyoFramework_t2707222705 ** get_address_of__instance_5() { return &____instance_5; }
	inline void set__instance_5(FizzyoFramework_t2707222705 * value)
	{
		____instance_5 = value;
		Il2CppCodeGenWriteBarrier((&____instance_5), value);
	}

	inline static int32_t get_offset_of_applicationIsQuitting_11() { return static_cast<int32_t>(offsetof(FizzyoFramework_t2707222705_StaticFields, ___applicationIsQuitting_11)); }
	inline bool get_applicationIsQuitting_11() const { return ___applicationIsQuitting_11; }
	inline bool* get_address_of_applicationIsQuitting_11() { return &___applicationIsQuitting_11; }
	inline void set_applicationIsQuitting_11(bool value)
	{
		___applicationIsQuitting_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIZZYOFRAMEWORK_T2707222705_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4900 = { sizeof (ExhalationCompleteEventHandler_t745535219), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4901 = { sizeof (ExhalationStartedEventHandler_t1372626673), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4902 = { sizeof (BreathRecogniser_t1947511382), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4902[13] = 
{
	BreathRecogniser_t1947511382::get_offset_of_breathLength_0(),
	BreathRecogniser_t1947511382::get_offset_of_breathCount_1(),
	BreathRecogniser_t1947511382::get_offset_of_goodBreaths_2(),
	BreathRecogniser_t1947511382::get_offset_of_badBreaths_3(),
	BreathRecogniser_t1947511382::get_offset_of_exhaledVolume_4(),
	BreathRecogniser_t1947511382::get_offset_of_isExhaling_5(),
	BreathRecogniser_t1947511382::get_offset_of_maxPressure_6(),
	BreathRecogniser_t1947511382::get_offset_of_maxBreathLength_7(),
	0,
	BreathRecogniser_t1947511382::get_offset_of_minBreathThreshold_9(),
	BreathRecogniser_t1947511382::get_offset_of_breathPercentage_10(),
	BreathRecogniser_t1947511382::get_offset_of_BreathComplete_11(),
	BreathRecogniser_t1947511382::get_offset_of_BreathStarted_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4903 = { sizeof (Calibration_t640377563), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4903[12] = 
{
	Calibration_t640377563::get_offset_of_breathLength_4(),
	Calibration_t640377563::get_offset_of_calibrationStep_5(),
	Calibration_t640377563::get_offset_of_requiredSteps_6(),
	Calibration_t640377563::get_offset_of_calibrationStatus_7(),
	Calibration_t640377563::get_offset_of_calibrationColor_8(),
	Calibration_t640377563::get_offset_of_pressureReadings_9(),
	Calibration_t640377563::get_offset_of_avgPressureReadings_10(),
	Calibration_t640377563::get_offset_of_avgLengths_11(),
	Calibration_t640377563::get_offset_of_minPressureThreshold_12(),
	Calibration_t640377563::get_offset_of_pressure_13(),
	Calibration_t640377563::get_offset_of_calibrating_14(),
	Calibration_t640377563::get_offset_of_calibrationFinished_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4904 = { sizeof (FizzyoConfigurationProfile_t3981997750), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4904[8] = 
{
	FizzyoConfigurationProfile_t3981997750::get_offset_of_showLoginAutomatically_4(),
	FizzyoConfigurationProfile_t3981997750::get_offset_of_showSetGamerTagAutomatically_5(),
	FizzyoConfigurationProfile_t3981997750::get_offset_of_showCalibrateAutomatically_6(),
	FizzyoConfigurationProfile_t3981997750::get_offset_of_gameID_7(),
	FizzyoConfigurationProfile_t3981997750::get_offset_of_gameSecret_8(),
	FizzyoConfigurationProfile_t3981997750::get_offset_of_apiPath_9(),
	FizzyoConfigurationProfile_t3981997750::get_offset_of_useTestHarnessData_10(),
	FizzyoConfigurationProfile_t3981997750::get_offset_of_testHarnessDataFile_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4905 = { sizeof (TestHarnessData_t2159594183)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4905[4] = 
{
	TestHarnessData_t2159594183::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4906 = { sizeof (FizzyoDevice_t3291519532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4906[9] = 
{
	FizzyoDevice_t3291519532::get_offset_of_useRecordedData_0(),
	FizzyoDevice_t3291519532::get_offset_of_loop_1(),
	FizzyoDevice_t3291519532::get_offset_of_recordedDataPath_2(),
	FizzyoDevice_t3291519532::get_offset_of_maxPressureCalibrated_3(),
	FizzyoDevice_t3291519532::get_offset_of_maxBreathCalibrated_4(),
	FizzyoDevice_t3291519532::get_offset_of_text_5(),
	FizzyoDevice_t3291519532::get_offset_of_pressure_6(),
	FizzyoDevice_t3291519532::get_offset_of_fizzyoHID_7(),
	FizzyoDevice_t3291519532::get_offset_of_Calibrated_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4907 = { sizeof (FizzyoRequestReturnType_t1948836839)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4907[4] = 
{
	FizzyoRequestReturnType_t1948836839::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4908 = { sizeof (FizzyoFramework_t2707222705), -1, sizeof(FizzyoFramework_t2707222705_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4908[9] = 
{
	FizzyoFramework_t2707222705::get_offset_of_FizzyoConfigurationProfile_4(),
	FizzyoFramework_t2707222705_StaticFields::get_offset_of__instance_5(),
	FizzyoFramework_t2707222705::get_offset_of_U3CUserU3Ek__BackingField_6(),
	FizzyoFramework_t2707222705::get_offset_of_U3CDeviceU3Ek__BackingField_7(),
	FizzyoFramework_t2707222705::get_offset_of_U3CAchievementsU3Ek__BackingField_8(),
	FizzyoFramework_t2707222705::get_offset_of_U3CRecogniserU3Ek__BackingField_9(),
	FizzyoFramework_t2707222705::get_offset_of_U3CAnalyticsU3Ek__BackingField_10(),
	FizzyoFramework_t2707222705_StaticFields::get_offset_of_applicationIsQuitting_11(),
	FizzyoFramework_t2707222705::get_offset_of_U3CCallbackScenePathU3Ek__BackingField_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4909 = { sizeof (AllUserData_t1205080024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4909[3] = 
{
	AllUserData_t1205080024::get_offset_of_accessToken_0(),
	AllUserData_t1205080024::get_offset_of_expiresIn_1(),
	AllUserData_t1205080024::get_offset_of_user_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4910 = { sizeof (UserData_t4126390532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4910[4] = 
{
	UserData_t4126390532::get_offset_of_id_0(),
	UserData_t4126390532::get_offset_of_firstName_1(),
	UserData_t4126390532::get_offset_of_lastName_2(),
	UserData_t4126390532::get_offset_of_role_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4911 = { sizeof (UserTag_t2530831734), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4911[1] = 
{
	UserTag_t2530831734::get_offset_of_gamerTag_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4912 = { sizeof (LoginReturnType_t3413865398)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4912[4] = 
{
	LoginReturnType_t3413865398::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4913 = { sizeof (UserTagReturnType_t1432432491)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4913[5] = 
{
	UserTagReturnType_t1432432491::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4914 = { sizeof (CalibrationReturnType_t1835180308)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4914[4] = 
{
	CalibrationReturnType_t1835180308::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4915 = { sizeof (FizzyoUser_t2963651454), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4915[18] = 
{
	0,
	0,
	0,
	0,
	0,
	FizzyoUser_t2963651454::get_offset_of_userID_5(),
	FizzyoUser_t2963651454::get_offset_of_patientRecordId_6(),
	FizzyoUser_t2963651454::get_offset_of_token_7(),
	FizzyoUser_t2963651454::get_offset_of_loggedIn_8(),
	FizzyoUser_t2963651454::get_offset_of_username_9(),
	FizzyoUser_t2963651454::get_offset_of_testUsername_10(),
	FizzyoUser_t2963651454::get_offset_of_testPassword_11(),
	FizzyoUser_t2963651454::get_offset_of_U3CUserIDU3Ek__BackingField_12(),
	FizzyoUser_t2963651454::get_offset_of_U3CAccessTokenU3Ek__BackingField_13(),
	FizzyoUser_t2963651454::get_offset_of_userTagSet_14(),
	FizzyoUser_t2963651454::get_offset_of_calibrationSet_15(),
	FizzyoUser_t2963651454::get_offset_of_loginInProgress_16(),
	FizzyoUser_t2963651454::get_offset_of_loginResult_17(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
