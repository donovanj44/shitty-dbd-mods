// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWakerObject;
#ifdef DBDANIMATION_WakerObjectAnimInstance_generated_h
#error "WakerObjectAnimInstance.generated.h already included, missing '#pragma once' in WakerObjectAnimInstance.h"
#endif
#define DBDANIMATION_WakerObjectAnimInstance_generated_h

#define DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWakerObject); \
	DECLARE_FUNCTION(execGetWakerObjectCharge); \
	DECLARE_FUNCTION(execGetWakerObjectChargeComplete); \
	DECLARE_FUNCTION(execGetWakerObjectStarted); \
	DECLARE_FUNCTION(execResetReappearTimer);


#define DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWakerObject); \
	DECLARE_FUNCTION(execGetWakerObjectCharge); \
	DECLARE_FUNCTION(execGetWakerObjectChargeComplete); \
	DECLARE_FUNCTION(execGetWakerObjectStarted); \
	DECLARE_FUNCTION(execResetReappearTimer);


#define DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_EVENT_PARMS
#define DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWakerObjectAnimInstance(); \
	friend struct Z_Construct_UClass_UWakerObjectAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UWakerObjectAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UWakerObjectAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUWakerObjectAnimInstance(); \
	friend struct Z_Construct_UClass_UWakerObjectAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UWakerObjectAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UWakerObjectAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWakerObjectAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWakerObjectAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWakerObjectAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWakerObjectAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWakerObjectAnimInstance(UWakerObjectAnimInstance&&); \
	NO_API UWakerObjectAnimInstance(const UWakerObjectAnimInstance&); \
public:


#define DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWakerObjectAnimInstance(UWakerObjectAnimInstance&&); \
	NO_API UWakerObjectAnimInstance(const UWakerObjectAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWakerObjectAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWakerObjectAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWakerObjectAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___reappearTimerCooldown() { return STRUCT_OFFSET(UWakerObjectAnimInstance, _reappearTimerCooldown); } \
	FORCEINLINE static uint32 __PPO___wakeUpCharge() { return STRUCT_OFFSET(UWakerObjectAnimInstance, _wakeUpCharge); } \
	FORCEINLINE static uint32 __PPO___chargeStarted() { return STRUCT_OFFSET(UWakerObjectAnimInstance, _chargeStarted); } \
	FORCEINLINE static uint32 __PPO___interactionComplete() { return STRUCT_OFFSET(UWakerObjectAnimInstance, _interactionComplete); } \
	FORCEINLINE static uint32 __PPO___outEnd() { return STRUCT_OFFSET(UWakerObjectAnimInstance, _outEnd); } \
	FORCEINLINE static uint32 __PPO___reset() { return STRUCT_OFFSET(UWakerObjectAnimInstance, _reset); } \
	FORCEINLINE static uint32 __PPO___inEnd() { return STRUCT_OFFSET(UWakerObjectAnimInstance, _inEnd); } \
	FORCEINLINE static uint32 __PPO___wakerObjectStarted() { return STRUCT_OFFSET(UWakerObjectAnimInstance, _wakerObjectStarted); } \
	FORCEINLINE static uint32 __PPO___respawnEnd() { return STRUCT_OFFSET(UWakerObjectAnimInstance, _respawnEnd); } \
	FORCEINLINE static uint32 __PPO___cancelEnd() { return STRUCT_OFFSET(UWakerObjectAnimInstance, _cancelEnd); }


#define DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_8_PROLOG \
	DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_INCLASS \
	DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANIMATION_API UClass* StaticClass<class UWakerObjectAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnimation_Public_WakerObjectAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
