// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGUNSLINGER_GunslingerAnimInstance_generated_h
#error "GunslingerAnimInstance.generated.h already included, missing '#pragma once' in GunslingerAnimInstance.h"
#endif
#define THEGUNSLINGER_GunslingerAnimInstance_generated_h

#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_RPC_WRAPPERS
#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGunslingerAnimInstance(); \
	friend struct Z_Construct_UClass_UGunslingerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UGunslingerAnimInstance, UKillerAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(UGunslingerAnimInstance)


#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUGunslingerAnimInstance(); \
	friend struct Z_Construct_UClass_UGunslingerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UGunslingerAnimInstance, UKillerAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(UGunslingerAnimInstance)


#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGunslingerAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGunslingerAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGunslingerAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGunslingerAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGunslingerAnimInstance(UGunslingerAnimInstance&&); \
	NO_API UGunslingerAnimInstance(const UGunslingerAnimInstance&); \
public:


#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGunslingerAnimInstance(UGunslingerAnimInstance&&); \
	NO_API UGunslingerAnimInstance(const UGunslingerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGunslingerAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGunslingerAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGunslingerAnimInstance)


#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isAiming() { return STRUCT_OFFSET(UGunslingerAnimInstance, _isAiming); } \
	FORCEINLINE static uint32 __PPO___isAimingWarmup() { return STRUCT_OFFSET(UGunslingerAnimInstance, _isAimingWarmup); } \
	FORCEINLINE static uint32 __PPO___isAimingCooldown() { return STRUCT_OFFSET(UGunslingerAnimInstance, _isAimingCooldown); } \
	FORCEINLINE static uint32 __PPO___isAimingReadyToShoot() { return STRUCT_OFFSET(UGunslingerAnimInstance, _isAimingReadyToShoot); } \
	FORCEINLINE static uint32 __PPO___isFiring() { return STRUCT_OFFSET(UGunslingerAnimInstance, _isFiring); } \
	FORCEINLINE static uint32 __PPO___isInMissShotCooldown() { return STRUCT_OFFSET(UGunslingerAnimInstance, _isInMissShotCooldown); } \
	FORCEINLINE static uint32 __PPO___isInSuccessShot() { return STRUCT_OFFSET(UGunslingerAnimInstance, _isInSuccessShot); } \
	FORCEINLINE static uint32 __PPO___isLinked() { return STRUCT_OFFSET(UGunslingerAnimInstance, _isLinked); } \
	FORCEINLINE static uint32 __PPO___isReeling() { return STRUCT_OFFSET(UGunslingerAnimInstance, _isReeling); } \
	FORCEINLINE static uint32 __PPO___isInGunState() { return STRUCT_OFFSET(UGunslingerAnimInstance, _isInGunState); } \
	FORCEINLINE static uint32 __PPO___idleToAimAnimPlayrate() { return STRUCT_OFFSET(UGunslingerAnimInstance, _idleToAimAnimPlayrate); } \
	FORCEINLINE static uint32 __PPO___aimToIdleAnimPlayrate() { return STRUCT_OFFSET(UGunslingerAnimInstance, _aimToIdleAnimPlayrate); } \
	FORCEINLINE static uint32 __PPO___fireAnimPlayRate() { return STRUCT_OFFSET(UGunslingerAnimInstance, _fireAnimPlayRate); } \
	FORCEINLINE static uint32 __PPO___missShotCooldownAnimPlayRate() { return STRUCT_OFFSET(UGunslingerAnimInstance, _missShotCooldownAnimPlayRate); } \
	FORCEINLINE static uint32 __PPO___successShotAnimPlayRate() { return STRUCT_OFFSET(UGunslingerAnimInstance, _successShotAnimPlayRate); } \
	FORCEINLINE static uint32 __PPO___idleToAimAnim() { return STRUCT_OFFSET(UGunslingerAnimInstance, _idleToAimAnim); } \
	FORCEINLINE static uint32 __PPO___aimToIdleAnim() { return STRUCT_OFFSET(UGunslingerAnimInstance, _aimToIdleAnim); } \
	FORCEINLINE static uint32 __PPO___fireAnim() { return STRUCT_OFFSET(UGunslingerAnimInstance, _fireAnim); } \
	FORCEINLINE static uint32 __PPO___missShotCooldownAnim() { return STRUCT_OFFSET(UGunslingerAnimInstance, _missShotCooldownAnim); } \
	FORCEINLINE static uint32 __PPO___successShotAnim() { return STRUCT_OFFSET(UGunslingerAnimInstance, _successShotAnim); } \
	FORCEINLINE static uint32 __PPO___idleToAimAnimDuration() { return STRUCT_OFFSET(UGunslingerAnimInstance, _idleToAimAnimDuration); } \
	FORCEINLINE static uint32 __PPO___aimToIdleAnimDuration() { return STRUCT_OFFSET(UGunslingerAnimInstance, _aimToIdleAnimDuration); } \
	FORCEINLINE static uint32 __PPO___fireAnimDuration() { return STRUCT_OFFSET(UGunslingerAnimInstance, _fireAnimDuration); } \
	FORCEINLINE static uint32 __PPO___missShotCooldownAnimDuration() { return STRUCT_OFFSET(UGunslingerAnimInstance, _missShotCooldownAnimDuration); } \
	FORCEINLINE static uint32 __PPO___successShotAnimDuration() { return STRUCT_OFFSET(UGunslingerAnimInstance, _successShotAnimDuration); }


#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_10_PROLOG
#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_INCLASS \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGUNSLINGER_API UClass* StaticClass<class UGunslingerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_GunslingerAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
