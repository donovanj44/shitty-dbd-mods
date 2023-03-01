// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_SlasherAnimInstance_generated_h
#error "SlasherAnimInstance.generated.h already included, missing '#pragma once' in SlasherAnimInstance.h"
#endif
#define DEADBYDAYLIGHT_SlasherAnimInstance_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_22_DELEGATE \
static inline void FSlasherAnimInstanceOnFootTrapped_DelegateWrapper(const FMulticastScriptDelegate& SlasherAnimInstanceOnFootTrapped) \
{ \
	SlasherAnimInstanceOnFootTrapped.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallOnFootTrapped); \
	DECLARE_FUNCTION(execSetIsCrouched);


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallOnFootTrapped); \
	DECLARE_FUNCTION(execSetIsCrouched);


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlasherAnimInstance(); \
	friend struct Z_Construct_UClass_USlasherAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USlasherAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(USlasherAnimInstance)


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUSlasherAnimInstance(); \
	friend struct Z_Construct_UClass_USlasherAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USlasherAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(USlasherAnimInstance)


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlasherAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlasherAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlasherAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlasherAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlasherAnimInstance(USlasherAnimInstance&&); \
	NO_API USlasherAnimInstance(const USlasherAnimInstance&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlasherAnimInstance(USlasherAnimInstance&&); \
	NO_API USlasherAnimInstance(const USlasherAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlasherAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlasherAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USlasherAnimInstance)


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isCrouched() { return STRUCT_OFFSET(USlasherAnimInstance, _isCrouched); } \
	FORCEINLINE static uint32 __PPO___isRevvingChainsaw() { return STRUCT_OFFSET(USlasherAnimInstance, _isRevvingChainsaw); } \
	FORCEINLINE static uint32 __PPO___isAttackSuccessMontagePlaying() { return STRUCT_OFFSET(USlasherAnimInstance, _isAttackSuccessMontagePlaying); } \
	FORCEINLINE static uint32 __PPO___isCamOn() { return STRUCT_OFFSET(USlasherAnimInstance, _isCamOn); } \
	FORCEINLINE static uint32 __PPO___isAttacking() { return STRUCT_OFFSET(USlasherAnimInstance, _isAttacking); } \
	FORCEINLINE static uint32 __PPO___isAnyMontagePlaying() { return STRUCT_OFFSET(USlasherAnimInstance, _isAnyMontagePlaying); } \
	FORCEINLINE static uint32 __PPO___isFrenzy() { return STRUCT_OFFSET(USlasherAnimInstance, _isFrenzy); } \
	FORCEINLINE static uint32 __PPO___isFrenzyCD() { return STRUCT_OFFSET(USlasherAnimInstance, _isFrenzyCD); } \
	FORCEINLINE static uint32 __PPO___isInParadise() { return STRUCT_OFFSET(USlasherAnimInstance, _isInParadise); } \
	FORCEINLINE static uint32 __PPO___enableArmOverrideTier3() { return STRUCT_OFFSET(USlasherAnimInstance, _enableArmOverrideTier3); } \
	FORCEINLINE static uint32 __PPO___isRingingBell() { return STRUCT_OFFSET(USlasherAnimInstance, _isRingingBell); } \
	FORCEINLINE static uint32 __PPO___isCarrying() { return STRUCT_OFFSET(USlasherAnimInstance, _isCarrying); } \
	FORCEINLINE static uint32 __PPO___firstPersonCarryOffset() { return STRUCT_OFFSET(USlasherAnimInstance, _firstPersonCarryOffset); } \
	FORCEINLINE static uint32 __PPO___firstPersonCarryOffsetLookingDown() { return STRUCT_OFFSET(USlasherAnimInstance, _firstPersonCarryOffsetLookingDown); } \
	FORCEINLINE static uint32 __PPO___isPassivePhaseWalking() { return STRUCT_OFFSET(USlasherAnimInstance, _isPassivePhaseWalking); } \
	FORCEINLINE static uint32 __PPO___isActivePhaseWalking() { return STRUCT_OFFSET(USlasherAnimInstance, _isActivePhaseWalking); } \
	FORCEINLINE static uint32 __PPO___isInAir() { return STRUCT_OFFSET(USlasherAnimInstance, _isInAir); } \
	FORCEINLINE static uint32 __PPO___isVaultingToFall() { return STRUCT_OFFSET(USlasherAnimInstance, _isVaultingToFall); } \
	FORCEINLINE static uint32 __PPO___isSpectator() { return STRUCT_OFFSET(USlasherAnimInstance, _isSpectator); } \
	FORCEINLINE static uint32 __PPO___firstPersonView() { return STRUCT_OFFSET(USlasherAnimInstance, _firstPersonView); } \
	FORCEINLINE static uint32 __PPO___isIdle() { return STRUCT_OFFSET(USlasherAnimInstance, _isIdle); } \
	FORCEINLINE static uint32 __PPO___validSlasher() { return STRUCT_OFFSET(USlasherAnimInstance, _validSlasher); } \
	FORCEINLINE static uint32 __PPO___animDirection() { return STRUCT_OFFSET(USlasherAnimInstance, _animDirection); } \
	FORCEINLINE static uint32 __PPO___animSpeed() { return STRUCT_OFFSET(USlasherAnimInstance, _animSpeed); } \
	FORCEINLINE static uint32 __PPO___animPitch() { return STRUCT_OFFSET(USlasherAnimInstance, _animPitch); } \
	FORCEINLINE static uint32 __PPO___animTurning() { return STRUCT_OFFSET(USlasherAnimInstance, _animTurning); } \
	FORCEINLINE static uint32 __PPO___animYaw() { return STRUCT_OFFSET(USlasherAnimInstance, _animYaw); } \
	FORCEINLINE static uint32 __PPO___pelvisHeight() { return STRUCT_OFFSET(USlasherAnimInstance, _pelvisHeight); } \
	FORCEINLINE static uint32 __PPO___idleTime() { return STRUCT_OFFSET(USlasherAnimInstance, _idleTime); } \
	FORCEINLINE static uint32 __PPO___directionSwitch() { return STRUCT_OFFSET(USlasherAnimInstance, _directionSwitch); } \
	FORCEINLINE static uint32 __PPO___leftClearFrontSpaceVector() { return STRUCT_OFFSET(USlasherAnimInstance, _leftClearFrontSpaceVector); } \
	FORCEINLINE static uint32 __PPO___rightClearFrontSpaceVector() { return STRUCT_OFFSET(USlasherAnimInstance, _rightClearFrontSpaceVector); } \
	FORCEINLINE static uint32 __PPO___velocity() { return STRUCT_OFFSET(USlasherAnimInstance, _velocity); } \
	FORCEINLINE static uint32 __PPO___rightFootEffectorLocation() { return STRUCT_OFFSET(USlasherAnimInstance, _rightFootEffectorLocation); } \
	FORCEINLINE static uint32 __PPO___leftFootEffectorLocation() { return STRUCT_OFFSET(USlasherAnimInstance, _leftFootEffectorLocation); } \
	FORCEINLINE static uint32 __PPO___meshRotation() { return STRUCT_OFFSET(USlasherAnimInstance, _meshRotation); } \
	FORCEINLINE static uint32 __PPO___attackSuccessAnimations() { return STRUCT_OFFSET(USlasherAnimInstance, _attackSuccessAnimations); } \
	FORCEINLINE static uint32 __PPO___camOnAnimations() { return STRUCT_OFFSET(USlasherAnimInstance, _camOnAnimations); } \
	FORCEINLINE static uint32 __PPO___mySlasher() { return STRUCT_OFFSET(USlasherAnimInstance, _mySlasher); } \
	FORCEINLINE static uint32 __PPO___isVaultingToFallState() { return STRUCT_OFFSET(USlasherAnimInstance, _isVaultingToFallState); } \
	FORCEINLINE static uint32 __PPO___interactionType() { return STRUCT_OFFSET(USlasherAnimInstance, _interactionType); } \
	FORCEINLINE static uint32 __PPO___demogorgonPortalPlacerState() { return STRUCT_OFFSET(USlasherAnimInstance, _demogorgonPortalPlacerState); } \
	FORCEINLINE static uint32 __PPO___demogorgonTeleportDuration() { return STRUCT_OFFSET(USlasherAnimInstance, _demogorgonTeleportDuration); } \
	FORCEINLINE static uint32 __PPO___demogorgonChargedAttackStateComponent() { return STRUCT_OFFSET(USlasherAnimInstance, _demogorgonChargedAttackStateComponent); } \
	FORCEINLINE static uint32 __PPO___isDemogorgonCharging() { return STRUCT_OFFSET(USlasherAnimInstance, _isDemogorgonCharging); } \
	FORCEINLINE static uint32 __PPO___demogorgonChargingPercent() { return STRUCT_OFFSET(USlasherAnimInstance, _demogorgonChargingPercent); } \
	FORCEINLINE static uint32 __PPO___oniAttackState() { return STRUCT_OFFSET(USlasherAnimInstance, _oniAttackState); } \
	FORCEINLINE static uint32 __PPO___isOniCharging() { return STRUCT_OFFSET(USlasherAnimInstance, _isOniCharging); } \
	FORCEINLINE static uint32 __PPO___oniAttackType() { return STRUCT_OFFSET(USlasherAnimInstance, _oniAttackType); } \
	FORCEINLINE static uint32 __PPO___oniChargeDuration() { return STRUCT_OFFSET(USlasherAnimInstance, _oniChargeDuration); } \
	FORCEINLINE static uint32 __PPO___previousAttackSubstate() { return STRUCT_OFFSET(USlasherAnimInstance, _previousAttackSubstate); } \
	FORCEINLINE static uint32 __PPO___attackSubstate() { return STRUCT_OFFSET(USlasherAnimInstance, _attackSubstate); } \
	FORCEINLINE static uint32 __PPO___evilWithinComponent() { return STRUCT_OFFSET(USlasherAnimInstance, _evilWithinComponent); } \
	FORCEINLINE static uint32 __PPO___frenzyComponent() { return STRUCT_OFFSET(USlasherAnimInstance, _frenzyComponent); } \
	FORCEINLINE static uint32 __PPO___phaseWalkingComponent() { return STRUCT_OFFSET(USlasherAnimInstance, _phaseWalkingComponent); } \
	FORCEINLINE static uint32 __PPO___armIKSensorComponent() { return STRUCT_OFFSET(USlasherAnimInstance, _armIKSensorComponent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_24_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class USlasherAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_SlasherAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
