// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDANIMATION_AimOffsetSurvivorSubAnimInstance_generated_h
#error "AimOffsetSurvivorSubAnimInstance.generated.h already included, missing '#pragma once' in AimOffsetSurvivorSubAnimInstance.h"
#endif
#define DBDANIMATION_AimOffsetSurvivorSubAnimInstance_generated_h

#define DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_RPC_WRAPPERS
#define DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAimOffsetSurvivorSubAnimInstance(); \
	friend struct Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UAimOffsetSurvivorSubAnimInstance, UBaseSurvivorAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UAimOffsetSurvivorSubAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUAimOffsetSurvivorSubAnimInstance(); \
	friend struct Z_Construct_UClass_UAimOffsetSurvivorSubAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UAimOffsetSurvivorSubAnimInstance, UBaseSurvivorAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UAimOffsetSurvivorSubAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAimOffsetSurvivorSubAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAimOffsetSurvivorSubAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAimOffsetSurvivorSubAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimOffsetSurvivorSubAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAimOffsetSurvivorSubAnimInstance(UAimOffsetSurvivorSubAnimInstance&&); \
	NO_API UAimOffsetSurvivorSubAnimInstance(const UAimOffsetSurvivorSubAnimInstance&); \
public:


#define DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAimOffsetSurvivorSubAnimInstance(UAimOffsetSurvivorSubAnimInstance&&); \
	NO_API UAimOffsetSurvivorSubAnimInstance(const UAimOffsetSurvivorSubAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAimOffsetSurvivorSubAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimOffsetSurvivorSubAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAimOffsetSurvivorSubAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___pitch() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _pitch); } \
	FORCEINLINE static uint32 __PPO___yaw() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yaw); } \
	FORCEINLINE static uint32 __PPO___yawInterpolated() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawInterpolated); } \
	FORCEINLINE static uint32 __PPO___allowLookAt() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _allowLookAt); } \
	FORCEINLINE static uint32 __PPO___isUsingAimItem() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _isUsingAimItem); } \
	FORCEINLINE static uint32 __PPO___isInjured() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _isInjured); } \
	FORCEINLINE static uint32 __PPO___isCrawling() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _isCrawling); } \
	FORCEINLINE static uint32 __PPO___isIdle() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _isIdle); } \
	FORCEINLINE static uint32 __PPO___isDrasticYawChangeDetected() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _isDrasticYawChangeDetected); } \
	FORCEINLINE static uint32 __PPO___yawInterpolationSpeed() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawInterpolationSpeed); } \
	FORCEINLINE static uint32 __PPO___yawDeadzoneStart() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawDeadzoneStart); } \
	FORCEINLINE static uint32 __PPO___yawClampValue() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawClampValue); } \
	FORCEINLINE static uint32 __PPO___yawDrasticChangeUpperLimit() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawDrasticChangeUpperLimit); } \
	FORCEINLINE static uint32 __PPO___yawDrasticChangeLowerLimit() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawDrasticChangeLowerLimit); } \
	FORCEINLINE static uint32 __PPO___yawDrasticChangeInterpolationSpeed() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawDrasticChangeInterpolationSpeed); } \
	FORCEINLINE static uint32 __PPO___yawInterpolateEaseIn() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawInterpolateEaseIn); } \
	FORCEINLINE static uint32 __PPO___yawInterpolateEaseOut() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawInterpolateEaseOut); } \
	FORCEINLINE static uint32 __PPO___yawInterpolationEaseInLength() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawInterpolationEaseInLength); } \
	FORCEINLINE static uint32 __PPO___yawInterpolationEaseOutDistance() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawInterpolationEaseOutDistance); } \
	FORCEINLINE static uint32 __PPO___isYawInDeadZone() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _isYawInDeadZone); } \
	FORCEINLINE static uint32 __PPO___currentTargetYaw() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _currentTargetYaw); } \
	FORCEINLINE static uint32 __PPO___yawAcceleration() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawAcceleration); } \
	FORCEINLINE static uint32 __PPO___yawAccelerationTime() { return STRUCT_OFFSET(UAimOffsetSurvivorSubAnimInstance, _yawAccelerationTime); }


#define DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_8_PROLOG
#define DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_INCLASS \
	DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANIMATION_API UClass* StaticClass<class UAimOffsetSurvivorSubAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnimation_Public_AimOffsetSurvivorSubAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
