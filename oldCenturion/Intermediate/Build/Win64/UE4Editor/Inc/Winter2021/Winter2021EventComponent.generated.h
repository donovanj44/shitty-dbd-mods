// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WINTER2021_Winter2021EventComponent_generated_h
#error "Winter2021EventComponent.generated.h already included, missing '#pragma once' in Winter2021EventComponent.h"
#endif
#define WINTER2021_Winter2021EventComponent_generated_h

#define DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDBD_Winter2021ForceRespawnAllSnowmen); \
	DECLARE_FUNCTION(execDBD_Winter2021RecalculateSpawnPoints); \
	DECLARE_FUNCTION(execDBD_Winter2021ShowSnowmenSpawnCollisionChecks); \
	DECLARE_FUNCTION(execDBD_Winter2021VisualizeCalculatedSpawnData);


#define DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDBD_Winter2021ForceRespawnAllSnowmen); \
	DECLARE_FUNCTION(execDBD_Winter2021RecalculateSpawnPoints); \
	DECLARE_FUNCTION(execDBD_Winter2021ShowSnowmenSpawnCollisionChecks); \
	DECLARE_FUNCTION(execDBD_Winter2021VisualizeCalculatedSpawnData);


#define DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWinter2021EventComponent(); \
	friend struct Z_Construct_UClass_UWinter2021EventComponent_Statics; \
public: \
	DECLARE_CLASS(UWinter2021EventComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Winter2021"), NO_API) \
	DECLARE_SERIALIZER(UWinter2021EventComponent)


#define DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUWinter2021EventComponent(); \
	friend struct Z_Construct_UClass_UWinter2021EventComponent_Statics; \
public: \
	DECLARE_CLASS(UWinter2021EventComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Winter2021"), NO_API) \
	DECLARE_SERIALIZER(UWinter2021EventComponent)


#define DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWinter2021EventComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWinter2021EventComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWinter2021EventComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWinter2021EventComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWinter2021EventComponent(UWinter2021EventComponent&&); \
	NO_API UWinter2021EventComponent(const UWinter2021EventComponent&); \
public:


#define DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWinter2021EventComponent(UWinter2021EventComponent&&); \
	NO_API UWinter2021EventComponent(const UWinter2021EventComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWinter2021EventComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWinter2021EventComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWinter2021EventComponent)


#define DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___numbSnowmenToSpawnAtStart() { return STRUCT_OFFSET(UWinter2021EventComponent, _numbSnowmenToSpawnAtStart); } \
	FORCEINLINE static uint32 __PPO___snowmanSpawnPlacementStrategyClass() { return STRUCT_OFFSET(UWinter2021EventComponent, _snowmanSpawnPlacementStrategyClass); } \
	FORCEINLINE static uint32 __PPO___snowmanClass() { return STRUCT_OFFSET(UWinter2021EventComponent, _snowmanClass); } \
	FORCEINLINE static uint32 __PPO___snowmanSpawnPlacementStrategy() { return STRUCT_OFFSET(UWinter2021EventComponent, _snowmanSpawnPlacementStrategy); } \
	FORCEINLINE static uint32 __PPO___snowmen() { return STRUCT_OFFSET(UWinter2021EventComponent, _snowmen); }


#define DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_11_PROLOG
#define DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_INCLASS \
	DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WINTER2021_API UClass* StaticClass<class UWinter2021EventComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Winter2021_Public_Winter2021EventComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
