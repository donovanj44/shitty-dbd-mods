// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UExposerInteriorZoneComponent;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DEADBYDAYLIGHT_CamperStillnessTrackerComponent_generated_h
#error "CamperStillnessTrackerComponent.generated.h already included, missing '#pragma once' in CamperStillnessTrackerComponent.h"
#endif
#define DEADBYDAYLIGHT_CamperStillnessTrackerComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnterInteriorZone); \
	DECLARE_FUNCTION(execExitInteriorZone); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnOverlapEnter); \
	DECLARE_FUNCTION(execOnOverlapExit);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnterInteriorZone); \
	DECLARE_FUNCTION(execExitInteriorZone); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnOverlapEnter); \
	DECLARE_FUNCTION(execOnOverlapExit);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCamperStillnessTrackerComponent(); \
	friend struct Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics; \
public: \
	DECLARE_CLASS(UCamperStillnessTrackerComponent, UStillnessTrackerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCamperStillnessTrackerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCamperStillnessTrackerComponent(); \
	friend struct Z_Construct_UClass_UCamperStillnessTrackerComponent_Statics; \
public: \
	DECLARE_CLASS(UCamperStillnessTrackerComponent, UStillnessTrackerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCamperStillnessTrackerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCamperStillnessTrackerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCamperStillnessTrackerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCamperStillnessTrackerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCamperStillnessTrackerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCamperStillnessTrackerComponent(UCamperStillnessTrackerComponent&&); \
	NO_API UCamperStillnessTrackerComponent(const UCamperStillnessTrackerComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCamperStillnessTrackerComponent(UCamperStillnessTrackerComponent&&); \
	NO_API UCamperStillnessTrackerComponent(const UCamperStillnessTrackerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCamperStillnessTrackerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCamperStillnessTrackerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCamperStillnessTrackerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExposerSpawnTimes() { return STRUCT_OFFSET(UCamperStillnessTrackerComponent, ExposerSpawnTimes); } \
	FORCEINLINE static uint32 __PPO__ExposerDespawnTimes() { return STRUCT_OFFSET(UCamperStillnessTrackerComponent, ExposerDespawnTimes); } \
	FORCEINLINE static uint32 __PPO___exposerInstanceToSpawn() { return STRUCT_OFFSET(UCamperStillnessTrackerComponent, _exposerInstanceToSpawn); } \
	FORCEINLINE static uint32 __PPO___exposerInstances() { return STRUCT_OFFSET(UCamperStillnessTrackerComponent, _exposerInstances); } \
	FORCEINLINE static uint32 __PPO___interiorZone() { return STRUCT_OFFSET(UCamperStillnessTrackerComponent, _interiorZone); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCamperStillnessTrackerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CamperStillnessTrackerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
