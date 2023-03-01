// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDANIMATION_LegIKSurvivorSubAnimInstance_generated_h
#error "LegIKSurvivorSubAnimInstance.generated.h already included, missing '#pragma once' in LegIKSurvivorSubAnimInstance.h"
#endif
#define DBDANIMATION_LegIKSurvivorSubAnimInstance_generated_h

#define DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_RPC_WRAPPERS
#define DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULegIKSurvivorSubAnimInstance(); \
	friend struct Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics; \
public: \
	DECLARE_CLASS(ULegIKSurvivorSubAnimInstance, UBaseSurvivorAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(ULegIKSurvivorSubAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULegIKSurvivorSubAnimInstance(); \
	friend struct Z_Construct_UClass_ULegIKSurvivorSubAnimInstance_Statics; \
public: \
	DECLARE_CLASS(ULegIKSurvivorSubAnimInstance, UBaseSurvivorAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(ULegIKSurvivorSubAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULegIKSurvivorSubAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULegIKSurvivorSubAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULegIKSurvivorSubAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULegIKSurvivorSubAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULegIKSurvivorSubAnimInstance(ULegIKSurvivorSubAnimInstance&&); \
	NO_API ULegIKSurvivorSubAnimInstance(const ULegIKSurvivorSubAnimInstance&); \
public:


#define DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULegIKSurvivorSubAnimInstance(ULegIKSurvivorSubAnimInstance&&); \
	NO_API ULegIKSurvivorSubAnimInstance(const ULegIKSurvivorSubAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULegIKSurvivorSubAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULegIKSurvivorSubAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULegIKSurvivorSubAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___leftFootOffset() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _leftFootOffset); } \
	FORCEINLINE static uint32 __PPO___rightFootOffset() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _rightFootOffset); } \
	FORCEINLINE static uint32 __PPO___pelvisOffset() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _pelvisOffset); } \
	FORCEINLINE static uint32 __PPO___isIdle() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _isIdle); } \
	FORCEINLINE static uint32 __PPO___isCrouched() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _isCrouched); } \
	FORCEINLINE static uint32 __PPO___rightFootDeltaRotator() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _rightFootDeltaRotator); } \
	FORCEINLINE static uint32 __PPO___leftFootDeltaRotator() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _leftFootDeltaRotator); } \
	FORCEINLINE static uint32 __PPO__AnimCollection() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, AnimCollection); } \
	FORCEINLINE static uint32 __PPO___floorJoint() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _floorJoint); } \
	FORCEINLINE static uint32 __PPO___pelvisOffsetTreshold() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _pelvisOffsetTreshold); } \
	FORCEINLINE static uint32 __PPO___pelvisOffsetRange() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _pelvisOffsetRange); } \
	FORCEINLINE static uint32 __PPO___pelvisOffsetRangeCrouched() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _pelvisOffsetRangeCrouched); } \
	FORCEINLINE static uint32 __PPO___pelvisOffsetInterpolationSpeed() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _pelvisOffsetInterpolationSpeed); } \
	FORCEINLINE static uint32 __PPO___footOffsetRange() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _footOffsetRange); } \
	FORCEINLINE static uint32 __PPO___footOffsetRangeCrouched() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _footOffsetRangeCrouched); } \
	FORCEINLINE static uint32 __PPO___footOffsetInterpolationSpeed() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _footOffsetInterpolationSpeed); } \
	FORCEINLINE static uint32 __PPO___footPitchDeltaRange() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _footPitchDeltaRange); } \
	FORCEINLINE static uint32 __PPO___leftFootGroundDetector() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _leftFootGroundDetector); } \
	FORCEINLINE static uint32 __PPO___rightFootGroundDetector() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _rightFootGroundDetector); } \
	FORCEINLINE static uint32 __PPO__maxLocalHeightForPlanting() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, maxLocalHeightForPlanting); } \
	FORCEINLINE static uint32 __PPO___locomotionPredictor() { return STRUCT_OFFSET(ULegIKSurvivorSubAnimInstance, _locomotionPredictor); }


#define DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_13_PROLOG
#define DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_INCLASS \
	DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANIMATION_API UClass* StaticClass<class ULegIKSurvivorSubAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnimation_Public_LegIKSurvivorSubAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
