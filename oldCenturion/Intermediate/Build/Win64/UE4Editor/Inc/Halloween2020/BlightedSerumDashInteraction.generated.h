// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlightedSerumCollisionInteraction;
class UBlightedSerumCooldownInteraction;
#ifdef HALLOWEEN2020_BlightedSerumDashInteraction_generated_h
#error "BlightedSerumDashInteraction.generated.h already included, missing '#pragma once' in BlightedSerumDashInteraction.h"
#endif
#define HALLOWEEN2020_BlightedSerumDashInteraction_generated_h

#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_SPARSE_DATA
#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCollisionInteraction); \
	DECLARE_FUNCTION(execSetCooldownInteraction);


#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCollisionInteraction); \
	DECLARE_FUNCTION(execSetCooldownInteraction);


#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlightedSerumDashInteraction(); \
	friend struct Z_Construct_UClass_UBlightedSerumDashInteraction_Statics; \
public: \
	DECLARE_CLASS(UBlightedSerumDashInteraction, UInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Halloween2020"), NO_API) \
	DECLARE_SERIALIZER(UBlightedSerumDashInteraction)


#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBlightedSerumDashInteraction(); \
	friend struct Z_Construct_UClass_UBlightedSerumDashInteraction_Statics; \
public: \
	DECLARE_CLASS(UBlightedSerumDashInteraction, UInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Halloween2020"), NO_API) \
	DECLARE_SERIALIZER(UBlightedSerumDashInteraction)


#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlightedSerumDashInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlightedSerumDashInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlightedSerumDashInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlightedSerumDashInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlightedSerumDashInteraction(UBlightedSerumDashInteraction&&); \
	NO_API UBlightedSerumDashInteraction(const UBlightedSerumDashInteraction&); \
public:


#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlightedSerumDashInteraction(UBlightedSerumDashInteraction&&); \
	NO_API UBlightedSerumDashInteraction(const UBlightedSerumDashInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlightedSerumDashInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlightedSerumDashInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlightedSerumDashInteraction)


#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___cooldownInteraction() { return STRUCT_OFFSET(UBlightedSerumDashInteraction, _cooldownInteraction); } \
	FORCEINLINE static uint32 __PPO___collisionInteraction() { return STRUCT_OFFSET(UBlightedSerumDashInteraction, _collisionInteraction); } \
	FORCEINLINE static uint32 __PPO___dashSpeedCurve() { return STRUCT_OFFSET(UBlightedSerumDashInteraction, _dashSpeedCurve); } \
	FORCEINLINE static uint32 __PPO___lookAngleToTurnRateCurveController() { return STRUCT_OFFSET(UBlightedSerumDashInteraction, _lookAngleToTurnRateCurveController); } \
	FORCEINLINE static uint32 __PPO___lookAngleToTurnRateCurveMouse() { return STRUCT_OFFSET(UBlightedSerumDashInteraction, _lookAngleToTurnRateCurveMouse); } \
	FORCEINLINE static uint32 __PPO___dashDuration() { return STRUCT_OFFSET(UBlightedSerumDashInteraction, _dashDuration); } \
	FORCEINLINE static uint32 __PPO___vectorInterpToSpeed() { return STRUCT_OFFSET(UBlightedSerumDashInteraction, _vectorInterpToSpeed); } \
	FORCEINLINE static uint32 __PPO___wallDashAccelerationMultiplier() { return STRUCT_OFFSET(UBlightedSerumDashInteraction, _wallDashAccelerationMultiplier); } \
	FORCEINLINE static uint32 __PPO___cameraPitchRecenterTime() { return STRUCT_OFFSET(UBlightedSerumDashInteraction, _cameraPitchRecenterTime); } \
	FORCEINLINE static uint32 __PPO___lookAngleTurnRateModifier() { return STRUCT_OFFSET(UBlightedSerumDashInteraction, _lookAngleTurnRateModifier); } \
	FORCEINLINE static uint32 __PPO___wallDashCollisionRadius() { return STRUCT_OFFSET(UBlightedSerumDashInteraction, _wallDashCollisionRadius); } \
	FORCEINLINE static uint32 __PPO___wallDashCollisionHeight() { return STRUCT_OFFSET(UBlightedSerumDashInteraction, _wallDashCollisionHeight); } \
	FORCEINLINE static uint32 __PPO___wallDashCollisionRange() { return STRUCT_OFFSET(UBlightedSerumDashInteraction, _wallDashCollisionRange); }


#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_10_PROLOG
#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_SPARSE_DATA \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_INCLASS \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_SPARSE_DATA \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HALLOWEEN2020_API UClass* StaticClass<class UBlightedSerumDashInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Halloween2020_Public_BlightedSerumDashInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
