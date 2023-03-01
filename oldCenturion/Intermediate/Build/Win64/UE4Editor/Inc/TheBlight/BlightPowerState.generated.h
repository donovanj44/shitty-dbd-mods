// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEBLIGHT_BlightPowerState_generated_h
#error "BlightPowerState.generated.h already included, missing '#pragma once' in BlightPowerState.h"
#endif
#define THEBLIGHT_BlightPowerState_generated_h

#define DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStateDuration);


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStateDuration);


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlightPowerState(); \
	friend struct Z_Construct_UClass_UBlightPowerState_Statics; \
public: \
	DECLARE_CLASS(UBlightPowerState, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TheBlight"), NO_API) \
	DECLARE_SERIALIZER(UBlightPowerState)


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBlightPowerState(); \
	friend struct Z_Construct_UClass_UBlightPowerState_Statics; \
public: \
	DECLARE_CLASS(UBlightPowerState, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TheBlight"), NO_API) \
	DECLARE_SERIALIZER(UBlightPowerState)


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlightPowerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlightPowerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlightPowerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlightPowerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlightPowerState(UBlightPowerState&&); \
	NO_API UBlightPowerState(const UBlightPowerState&); \
public:


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlightPowerState(UBlightPowerState&&); \
	NO_API UBlightPowerState(const UBlightPowerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlightPowerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlightPowerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlightPowerState)


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___stateSpeedCurve() { return STRUCT_OFFSET(UBlightPowerState, _stateSpeedCurve); } \
	FORCEINLINE static uint32 __PPO___stateDuration() { return STRUCT_OFFSET(UBlightPowerState, _stateDuration); } \
	FORCEINLINE static uint32 __PPO___cameraPitchRecenterTime() { return STRUCT_OFFSET(UBlightPowerState, _cameraPitchRecenterTime); } \
	FORCEINLINE static uint32 __PPO___wallDashCollisionRadius() { return STRUCT_OFFSET(UBlightPowerState, _wallDashCollisionRadius); } \
	FORCEINLINE static uint32 __PPO___wallDashCollisionHeight() { return STRUCT_OFFSET(UBlightPowerState, _wallDashCollisionHeight); } \
	FORCEINLINE static uint32 __PPO___wallDashCollisionRange() { return STRUCT_OFFSET(UBlightPowerState, _wallDashCollisionRange); } \
	FORCEINLINE static uint32 __PPO___playerCanCancelEarly() { return STRUCT_OFFSET(UBlightPowerState, _playerCanCancelEarly); } \
	FORCEINLINE static uint32 __PPO___displayCollisionIndicator() { return STRUCT_OFFSET(UBlightPowerState, _displayCollisionIndicator); }


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_10_PROLOG
#define DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_INCLASS \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEBLIGHT_API UClass* StaticClass<class UBlightPowerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheBlight_Public_BlightPowerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
