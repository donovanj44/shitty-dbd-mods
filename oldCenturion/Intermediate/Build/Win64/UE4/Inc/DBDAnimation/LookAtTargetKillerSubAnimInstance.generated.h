// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DBDANIMATION_LookAtTargetKillerSubAnimInstance_generated_h
#error "LookAtTargetKillerSubAnimInstance.generated.h already included, missing '#pragma once' in LookAtTargetKillerSubAnimInstance.h"
#endif
#define DBDANIMATION_LookAtTargetKillerSubAnimInstance_generated_h

#define DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnChaseEnded); \
	DECLARE_FUNCTION(execOnChaseStarted);


#define DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnChaseEnded); \
	DECLARE_FUNCTION(execOnChaseStarted);


#define DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULookAtTargetKillerSubAnimInstance(); \
	friend struct Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics; \
public: \
	DECLARE_CLASS(ULookAtTargetKillerSubAnimInstance, UBaseKillerAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(ULookAtTargetKillerSubAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_INCLASS \
private: \
	static void StaticRegisterNativesULookAtTargetKillerSubAnimInstance(); \
	friend struct Z_Construct_UClass_ULookAtTargetKillerSubAnimInstance_Statics; \
public: \
	DECLARE_CLASS(ULookAtTargetKillerSubAnimInstance, UBaseKillerAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(ULookAtTargetKillerSubAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULookAtTargetKillerSubAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULookAtTargetKillerSubAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULookAtTargetKillerSubAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULookAtTargetKillerSubAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULookAtTargetKillerSubAnimInstance(ULookAtTargetKillerSubAnimInstance&&); \
	NO_API ULookAtTargetKillerSubAnimInstance(const ULookAtTargetKillerSubAnimInstance&); \
public:


#define DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULookAtTargetKillerSubAnimInstance(ULookAtTargetKillerSubAnimInstance&&); \
	NO_API ULookAtTargetKillerSubAnimInstance(const ULookAtTargetKillerSubAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULookAtTargetKillerSubAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULookAtTargetKillerSubAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULookAtTargetKillerSubAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___maxDistanceForTargetDetection() { return STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _maxDistanceForTargetDetection); } \
	FORCEINLINE static uint32 __PPO___headSocket() { return STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _headSocket); } \
	FORCEINLINE static uint32 __PPO___rootSocket() { return STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _rootSocket); } \
	FORCEINLINE static uint32 __PPO___preferredMinLookAtTime() { return STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _preferredMinLookAtTime); } \
	FORCEINLINE static uint32 __PPO___distanceScoreFactor() { return STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _distanceScoreFactor); } \
	FORCEINLINE static uint32 __PPO___angleScoreFactor() { return STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _angleScoreFactor); } \
	FORCEINLINE static uint32 __PPO___sameTargetScoreFactor() { return STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _sameTargetScoreFactor); } \
	FORCEINLINE static uint32 __PPO___yawToTarget() { return STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _yawToTarget); } \
	FORCEINLINE static uint32 __PPO___pitchToTarget() { return STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _pitchToTarget); } \
	FORCEINLINE static uint32 __PPO___hasVisibleTarget() { return STRUCT_OFFSET(ULookAtTargetKillerSubAnimInstance, _hasVisibleTarget); }


#define DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_8_PROLOG
#define DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_INCLASS \
	DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANIMATION_API UClass* StaticClass<class ULookAtTargetKillerSubAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnimation_Public_LookAtTargetKillerSubAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
