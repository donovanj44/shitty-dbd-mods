// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EArmIkMode : uint8;
#ifdef DBDANIMATION_ArmIKSurvivorSubAnimInstance_generated_h
#error "ArmIKSurvivorSubAnimInstance.generated.h already included, missing '#pragma once' in ArmIKSurvivorSubAnimInstance.h"
#endif
#define DBDANIMATION_ArmIKSurvivorSubAnimInstance_generated_h

#define DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMode);


#define DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMode);


#define DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArmIKSurvivorSubAnimInstance(); \
	friend struct Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UArmIKSurvivorSubAnimInstance, UBaseSurvivorAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UArmIKSurvivorSubAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUArmIKSurvivorSubAnimInstance(); \
	friend struct Z_Construct_UClass_UArmIKSurvivorSubAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UArmIKSurvivorSubAnimInstance, UBaseSurvivorAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UArmIKSurvivorSubAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArmIKSurvivorSubAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArmIKSurvivorSubAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArmIKSurvivorSubAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArmIKSurvivorSubAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArmIKSurvivorSubAnimInstance(UArmIKSurvivorSubAnimInstance&&); \
	NO_API UArmIKSurvivorSubAnimInstance(const UArmIKSurvivorSubAnimInstance&); \
public:


#define DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArmIKSurvivorSubAnimInstance(UArmIKSurvivorSubAnimInstance&&); \
	NO_API UArmIKSurvivorSubAnimInstance(const UArmIKSurvivorSubAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArmIKSurvivorSubAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArmIKSurvivorSubAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UArmIKSurvivorSubAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___rightWristUpRotation() { return STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _rightWristUpRotation); } \
	FORCEINLINE static uint32 __PPO___leftWristUpRotation() { return STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _leftWristUpRotation); } \
	FORCEINLINE static uint32 __PPO___localWristYawRange() { return STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _localWristYawRange); } \
	FORCEINLINE static uint32 __PPO___localWristPitchRange() { return STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _localWristPitchRange); } \
	FORCEINLINE static uint32 __PPO___armInterpolationSpeed() { return STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _armInterpolationSpeed); } \
	FORCEINLINE static uint32 __PPO___handInterpolationSpeed() { return STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _handInterpolationSpeed); } \
	FORCEINLINE static uint32 __PPO___alphaLerpTime() { return STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _alphaLerpTime); } \
	FORCEINLINE static uint32 __PPO___reachPadding() { return STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _reachPadding); } \
	FORCEINLINE static uint32 __PPO___rightArmIKAlpha() { return STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _rightArmIKAlpha); } \
	FORCEINLINE static uint32 __PPO___leftArmIKAlpha() { return STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _leftArmIKAlpha); } \
	FORCEINLINE static uint32 __PPO___armIkMode() { return STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _armIkMode); } \
	FORCEINLINE static uint32 __PPO___rightDetectionFan() { return STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _rightDetectionFan); } \
	FORCEINLINE static uint32 __PPO___leftDetectionFan() { return STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _leftDetectionFan); } \
	FORCEINLINE static uint32 __PPO___meshComponent() { return STRUCT_OFFSET(UArmIKSurvivorSubAnimInstance, _meshComponent); }


#define DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_12_PROLOG
#define DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_INCLASS \
	DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANIMATION_API UClass* StaticClass<class UArmIKSurvivorSubAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnimation_Public_ArmIKSurvivorSubAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
