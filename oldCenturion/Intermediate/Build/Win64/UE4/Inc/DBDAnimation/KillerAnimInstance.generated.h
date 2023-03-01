// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDANIMATION_KillerAnimInstance_generated_h
#error "KillerAnimInstance.generated.h already included, missing '#pragma once' in KillerAnimInstance.h"
#endif
#define DBDANIMATION_KillerAnimInstance_generated_h

#define DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_RPC_WRAPPERS
#define DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKillerAnimInstance(); \
	friend struct Z_Construct_UClass_UKillerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UKillerAnimInstance, UBaseKillerAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UKillerAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUKillerAnimInstance(); \
	friend struct Z_Construct_UClass_UKillerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UKillerAnimInstance, UBaseKillerAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UKillerAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKillerAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKillerAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKillerAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKillerAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKillerAnimInstance(UKillerAnimInstance&&); \
	NO_API UKillerAnimInstance(const UKillerAnimInstance&); \
public:


#define DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKillerAnimInstance(UKillerAnimInstance&&); \
	NO_API UKillerAnimInstance(const UKillerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKillerAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKillerAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKillerAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___leftHandIKLocationFPV() { return STRUCT_OFFSET(UKillerAnimInstance, _leftHandIKLocationFPV); } \
	FORCEINLINE static uint32 __PPO___rightHandIKLocationFPV() { return STRUCT_OFFSET(UKillerAnimInstance, _rightHandIKLocationFPV); } \
	FORCEINLINE static uint32 __PPO___isAnyMontagePlaying() { return STRUCT_OFFSET(UKillerAnimInstance, _isAnyMontagePlaying); } \
	FORCEINLINE static uint32 __PPO___isCarrying() { return STRUCT_OFFSET(UKillerAnimInstance, _isCarrying); } \
	FORCEINLINE static uint32 __PPO___firstPersonCarryOffset() { return STRUCT_OFFSET(UKillerAnimInstance, _firstPersonCarryOffset); } \
	FORCEINLINE static uint32 __PPO___firstPersonCarryOffsetLookingDown() { return STRUCT_OFFSET(UKillerAnimInstance, _firstPersonCarryOffsetLookingDown); } \
	FORCEINLINE static uint32 __PPO___isInAir() { return STRUCT_OFFSET(UKillerAnimInstance, _isInAir); } \
	FORCEINLINE static uint32 __PPO___isSpectator() { return STRUCT_OFFSET(UKillerAnimInstance, _isSpectator); } \
	FORCEINLINE static uint32 __PPO___isIdle() { return STRUCT_OFFSET(UKillerAnimInstance, _isIdle); } \
	FORCEINLINE static uint32 __PPO___animDirection() { return STRUCT_OFFSET(UKillerAnimInstance, _animDirection); } \
	FORCEINLINE static uint32 __PPO___animSpeed() { return STRUCT_OFFSET(UKillerAnimInstance, _animSpeed); } \
	FORCEINLINE static uint32 __PPO___animPitch() { return STRUCT_OFFSET(UKillerAnimInstance, _animPitch); } \
	FORCEINLINE static uint32 __PPO___animYaw() { return STRUCT_OFFSET(UKillerAnimInstance, _animYaw); } \
	FORCEINLINE static uint32 __PPO___pelvisHeight() { return STRUCT_OFFSET(UKillerAnimInstance, _pelvisHeight); } \
	FORCEINLINE static uint32 __PPO___idleTime() { return STRUCT_OFFSET(UKillerAnimInstance, _idleTime); } \
	FORCEINLINE static uint32 __PPO___directionSwitch() { return STRUCT_OFFSET(UKillerAnimInstance, _directionSwitch); } \
	FORCEINLINE static uint32 __PPO___isAttacking() { return STRUCT_OFFSET(UKillerAnimInstance, _isAttacking); } \
	FORCEINLINE static uint32 __PPO___isPlayingAnyMontage() { return STRUCT_OFFSET(UKillerAnimInstance, _isPlayingAnyMontage); } \
	FORCEINLINE static uint32 __PPO___isKilling() { return STRUCT_OFFSET(UKillerAnimInstance, _isKilling); } \
	FORCEINLINE static uint32 __PPO___leftClearFrontSpaceVector() { return STRUCT_OFFSET(UKillerAnimInstance, _leftClearFrontSpaceVector); } \
	FORCEINLINE static uint32 __PPO___rightClearFrontSpaceVector() { return STRUCT_OFFSET(UKillerAnimInstance, _rightClearFrontSpaceVector); } \
	FORCEINLINE static uint32 __PPO___velocity() { return STRUCT_OFFSET(UKillerAnimInstance, _velocity); } \
	FORCEINLINE static uint32 __PPO___rightFootEffectorLocation() { return STRUCT_OFFSET(UKillerAnimInstance, _rightFootEffectorLocation); } \
	FORCEINLINE static uint32 __PPO___leftFootEffectorLocation() { return STRUCT_OFFSET(UKillerAnimInstance, _leftFootEffectorLocation); } \
	FORCEINLINE static uint32 __PPO___interactionType() { return STRUCT_OFFSET(UKillerAnimInstance, _interactionType); } \
	FORCEINLINE static uint32 __PPO___armIKSensorComponent() { return STRUCT_OFFSET(UKillerAnimInstance, _armIKSensorComponent); } \
	FORCEINLINE static uint32 __PPO___attackState() { return STRUCT_OFFSET(UKillerAnimInstance, _attackState); } \
	FORCEINLINE static uint32 __PPO___forwardVelocity() { return STRUCT_OFFSET(UKillerAnimInstance, _forwardVelocity); } \
	FORCEINLINE static uint32 __PPO___lateralVelocity() { return STRUCT_OFFSET(UKillerAnimInstance, _lateralVelocity); }


#define DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_11_PROLOG
#define DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_INCLASS \
	DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANIMATION_API UClass* StaticClass<class UKillerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnimation_Public_KillerAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
