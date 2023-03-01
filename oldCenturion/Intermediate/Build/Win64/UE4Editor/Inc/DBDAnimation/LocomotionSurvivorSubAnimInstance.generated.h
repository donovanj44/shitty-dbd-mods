// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDANIMATION_LocomotionSurvivorSubAnimInstance_generated_h
#error "LocomotionSurvivorSubAnimInstance.generated.h already included, missing '#pragma once' in LocomotionSurvivorSubAnimInstance.h"
#endif
#define DBDANIMATION_LocomotionSurvivorSubAnimInstance_generated_h

#define DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_RPC_WRAPPERS
#define DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocomotionSurvivorSubAnimInstance(); \
	friend struct Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics; \
public: \
	DECLARE_CLASS(ULocomotionSurvivorSubAnimInstance, UBaseSurvivorAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(ULocomotionSurvivorSubAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_INCLASS \
private: \
	static void StaticRegisterNativesULocomotionSurvivorSubAnimInstance(); \
	friend struct Z_Construct_UClass_ULocomotionSurvivorSubAnimInstance_Statics; \
public: \
	DECLARE_CLASS(ULocomotionSurvivorSubAnimInstance, UBaseSurvivorAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(ULocomotionSurvivorSubAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocomotionSurvivorSubAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocomotionSurvivorSubAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocomotionSurvivorSubAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocomotionSurvivorSubAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocomotionSurvivorSubAnimInstance(ULocomotionSurvivorSubAnimInstance&&); \
	NO_API ULocomotionSurvivorSubAnimInstance(const ULocomotionSurvivorSubAnimInstance&); \
public:


#define DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocomotionSurvivorSubAnimInstance(ULocomotionSurvivorSubAnimInstance&&); \
	NO_API ULocomotionSurvivorSubAnimInstance(const ULocomotionSurvivorSubAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocomotionSurvivorSubAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocomotionSurvivorSubAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULocomotionSurvivorSubAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isRecoveringWhileCrawling() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _isRecoveringWhileCrawling); } \
	FORCEINLINE static uint32 __PPO___isTenacityPerkActive() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _isTenacityPerkActive); } \
	FORCEINLINE static uint32 __PPO___wasStandingResetTime() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _wasStandingResetTime); } \
	FORCEINLINE static uint32 __PPO___wasRunningResetTime() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _wasRunningResetTime); } \
	FORCEINLINE static uint32 __PPO___wasCrouchingResetTime() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _wasCrouchingResetTime); } \
	FORCEINLINE static uint32 __PPO___wasMovingResetTime() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _wasMovingResetTime); } \
	FORCEINLINE static uint32 __PPO___isIdle() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _isIdle); } \
	FORCEINLINE static uint32 __PPO___recentlyIdleCooldownTime() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _recentlyIdleCooldownTime); } \
	FORCEINLINE static uint32 __PPO___recentlyNotIdleCooldownTime() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _recentlyNotIdleCooldownTime); } \
	FORCEINLINE static uint32 __PPO___wasIdleRecently() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _wasIdleRecently); } \
	FORCEINLINE static uint32 __PPO___idleInterupt() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _idleInterupt); } \
	FORCEINLINE static uint32 __PPO___isAgainstSmallKiller() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _isAgainstSmallKiller); } \
	FORCEINLINE static uint32 __PPO___isMoving() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _isMoving); } \
	FORCEINLINE static uint32 __PPO___wasRunning() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _wasRunning); } \
	FORCEINLINE static uint32 __PPO___isRunning() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _isRunning); } \
	FORCEINLINE static uint32 __PPO___wasCrouching() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _wasCrouching); } \
	FORCEINLINE static uint32 __PPO___isCrouching() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _isCrouching); } \
	FORCEINLINE static uint32 __PPO___wasStanding() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _wasStanding); } \
	FORCEINLINE static uint32 __PPO___isStanding() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _isStanding); } \
	FORCEINLINE static uint32 __PPO___isCrawling() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _isCrawling); } \
	FORCEINLINE static uint32 __PPO___isDead() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _isDead); } \
	FORCEINLINE static uint32 __PPO___walkAnimSpeed() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _walkAnimSpeed); } \
	FORCEINLINE static uint32 __PPO___walkAnimStartOffset() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _walkAnimStartOffset); } \
	FORCEINLINE static uint32 __PPO___walkAnimPlayRateMultiplier() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _walkAnimPlayRateMultiplier); } \
	FORCEINLINE static uint32 __PPO___wasLastDamageSourceDeepWounds() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _wasLastDamageSourceDeepWounds); } \
	FORCEINLINE static uint32 __PPO___isStrafing() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _isStrafing); } \
	FORCEINLINE static uint32 __PPO___isUsingDeadHard() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _isUsingDeadHard); } \
	FORCEINLINE static uint32 __PPO___direction() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _direction); } \
	FORCEINLINE static uint32 __PPO___isUsingAimItem() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _isUsingAimItem); } \
	FORCEINLINE static uint32 __PPO___isBeingCarried() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _isBeingCarried); } \
	FORCEINLINE static uint32 __PPO___isInDeathBed() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _isInDeathBed); } \
	FORCEINLINE static uint32 __PPO___aimOffsetPitch() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _aimOffsetPitch); } \
	FORCEINLINE static uint32 __PPO___turn180Active() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _turn180Active); } \
	FORCEINLINE static uint32 __PPO___turningRight() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _turningRight); } \
	FORCEINLINE static uint32 __PPO___start180Active() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _start180Active); } \
	FORCEINLINE static uint32 __PPO___aimOffsetYawInterpolated() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _aimOffsetYawInterpolated); } \
	FORCEINLINE static uint32 __PPO___allowLookAt() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _allowLookAt); } \
	FORCEINLINE static uint32 __PPO___isDrasticAimOffsetYawChangeDetected() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _isDrasticAimOffsetYawChangeDetected); } \
	FORCEINLINE static uint32 __PPO___aimOffsetYawClampValue() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _aimOffsetYawClampValue); } \
	FORCEINLINE static uint32 __PPO___maxParadiseWalkCycleOffSet() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _maxParadiseWalkCycleOffSet); } \
	FORCEINLINE static uint32 __PPO___minParadiseWalkPlayRateMultiplier() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _minParadiseWalkPlayRateMultiplier); } \
	FORCEINLINE static uint32 __PPO___turn180DetectionPrecision() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _turn180DetectionPrecision); } \
	FORCEINLINE static uint32 __PPO___turn180DetectionDeadZone() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _turn180DetectionDeadZone); } \
	FORCEINLINE static uint32 __PPO___turn180PrevVelocitiesCacheDuration() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _turn180PrevVelocitiesCacheDuration); } \
	FORCEINLINE static uint32 __PPO___minDurationBetweenTurn180Detection() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _minDurationBetweenTurn180Detection); } \
	FORCEINLINE static uint32 __PPO___start180DetectionPrecision() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _start180DetectionPrecision); } \
	FORCEINLINE static uint32 __PPO___idleDurationFor180StartDetection() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _idleDurationFor180StartDetection); } \
	FORCEINLINE static uint32 __PPO___durationBeforeStart180Reset() { return STRUCT_OFFSET(ULocomotionSurvivorSubAnimInstance, _durationBeforeStart180Reset); }


#define DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_6_PROLOG
#define DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_INCLASS \
	DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANIMATION_API UClass* StaticClass<class ULocomotionSurvivorSubAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnimation_Public_LocomotionSurvivorSubAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
