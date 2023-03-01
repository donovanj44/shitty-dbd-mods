// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEHUNTRESS_HatchetLauncher_generated_h
#error "HatchetLauncher.generated.h already included, missing '#pragma once' in HatchetLauncher.h"
#endif
#define THEHUNTRESS_HatchetLauncher_generated_h

#define DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLaunchedHatchetFullyCharged);


#define DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLaunchedHatchetFullyCharged);


#define DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHatchetLauncher(); \
	friend struct Z_Construct_UClass_UHatchetLauncher_Statics; \
public: \
	DECLARE_CLASS(UHatchetLauncher, UKillerProjectileLauncher, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheHuntress"), NO_API) \
	DECLARE_SERIALIZER(UHatchetLauncher)


#define DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUHatchetLauncher(); \
	friend struct Z_Construct_UClass_UHatchetLauncher_Statics; \
public: \
	DECLARE_CLASS(UHatchetLauncher, UKillerProjectileLauncher, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheHuntress"), NO_API) \
	DECLARE_SERIALIZER(UHatchetLauncher)


#define DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHatchetLauncher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHatchetLauncher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHatchetLauncher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHatchetLauncher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHatchetLauncher(UHatchetLauncher&&); \
	NO_API UHatchetLauncher(const UHatchetLauncher&); \
public:


#define DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHatchetLauncher(UHatchetLauncher&&); \
	NO_API UHatchetLauncher(const UHatchetLauncher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHatchetLauncher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHatchetLauncher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHatchetLauncher)


#define DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___angleOffset() { return STRUCT_OFFSET(UHatchetLauncher, _angleOffset); } \
	FORCEINLINE static uint32 __PPO___angleOffsetCurve() { return STRUCT_OFFSET(UHatchetLauncher, _angleOffsetCurve); } \
	FORCEINLINE static uint32 __PPO___speedCurve() { return STRUCT_OFFSET(UHatchetLauncher, _speedCurve); } \
	FORCEINLINE static uint32 __PPO___hatchetSpeedWhenThrowFullyCharged() { return STRUCT_OFFSET(UHatchetLauncher, _hatchetSpeedWhenThrowFullyCharged); } \
	FORCEINLINE static uint32 __PPO___hatchetPitchCurve() { return STRUCT_OFFSET(UHatchetLauncher, _hatchetPitchCurve); } \
	FORCEINLINE static uint32 __PPO___hatchetMinAngleOffset() { return STRUCT_OFFSET(UHatchetLauncher, _hatchetMinAngleOffset); } \
	FORCEINLINE static uint32 __PPO___hatchetMaxAngleOffset() { return STRUCT_OFFSET(UHatchetLauncher, _hatchetMaxAngleOffset); } \
	FORCEINLINE static uint32 __PPO___hatchetMinSpeed() { return STRUCT_OFFSET(UHatchetLauncher, _hatchetMinSpeed); } \
	FORCEINLINE static uint32 __PPO___hatchetMaxSpeed() { return STRUCT_OFFSET(UHatchetLauncher, _hatchetMaxSpeed); } \
	FORCEINLINE static uint32 __PPO___hatchetLaunchPitchMin() { return STRUCT_OFFSET(UHatchetLauncher, _hatchetLaunchPitchMin); } \
	FORCEINLINE static uint32 __PPO___hatchetLaunchPitchMax() { return STRUCT_OFFSET(UHatchetLauncher, _hatchetLaunchPitchMax); }


#define DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_10_PROLOG
#define DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_INCLASS \
	DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEHUNTRESS_API UClass* StaticClass<class UHatchetLauncher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheHuntress_Public_HatchetLauncher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
