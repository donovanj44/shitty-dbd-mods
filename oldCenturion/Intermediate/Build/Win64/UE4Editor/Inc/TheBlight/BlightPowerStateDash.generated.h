// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEBLIGHT_BlightPowerStateDash_generated_h
#error "BlightPowerStateDash.generated.h already included, missing '#pragma once' in BlightPowerStateDash.h"
#endif
#define THEBLIGHT_BlightPowerStateDash_generated_h

#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_RPC_WRAPPERS
#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlightPowerStateDash(); \
	friend struct Z_Construct_UClass_UBlightPowerStateDash_Statics; \
public: \
	DECLARE_CLASS(UBlightPowerStateDash, UBlightPowerState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheBlight"), NO_API) \
	DECLARE_SERIALIZER(UBlightPowerStateDash) \
	virtual UObject* _getUObject() const override { return const_cast<UBlightPowerStateDash*>(this); }


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBlightPowerStateDash(); \
	friend struct Z_Construct_UClass_UBlightPowerStateDash_Statics; \
public: \
	DECLARE_CLASS(UBlightPowerStateDash, UBlightPowerState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheBlight"), NO_API) \
	DECLARE_SERIALIZER(UBlightPowerStateDash) \
	virtual UObject* _getUObject() const override { return const_cast<UBlightPowerStateDash*>(this); }


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlightPowerStateDash(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlightPowerStateDash) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlightPowerStateDash); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlightPowerStateDash); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlightPowerStateDash(UBlightPowerStateDash&&); \
	NO_API UBlightPowerStateDash(const UBlightPowerStateDash&); \
public:


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlightPowerStateDash(UBlightPowerStateDash&&); \
	NO_API UBlightPowerStateDash(const UBlightPowerStateDash&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlightPowerStateDash); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlightPowerStateDash); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlightPowerStateDash)


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___vectorInterpToSpeed() { return STRUCT_OFFSET(UBlightPowerStateDash, _vectorInterpToSpeed); } \
	FORCEINLINE static uint32 __PPO___noDashTimeLimitSpeedCurve() { return STRUCT_OFFSET(UBlightPowerStateDash, _noDashTimeLimitSpeedCurve); } \
	FORCEINLINE static uint32 __PPO___lookAngleToTurnRateCurveController() { return STRUCT_OFFSET(UBlightPowerStateDash, _lookAngleToTurnRateCurveController); } \
	FORCEINLINE static uint32 __PPO___lookAngleToTurnRateCurveMouse() { return STRUCT_OFFSET(UBlightPowerStateDash, _lookAngleToTurnRateCurveMouse); } \
	FORCEINLINE static uint32 __PPO___lookAngleToMaxTurnRateCurveMouse() { return STRUCT_OFFSET(UBlightPowerStateDash, _lookAngleToMaxTurnRateCurveMouse); }


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_10_PROLOG
#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_INCLASS \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEBLIGHT_API UClass* StaticClass<class UBlightPowerStateDash>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheBlight_Public_BlightPowerStateDash_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
