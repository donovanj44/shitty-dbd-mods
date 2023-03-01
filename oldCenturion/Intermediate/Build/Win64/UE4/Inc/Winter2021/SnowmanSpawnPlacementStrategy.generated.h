// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WINTER2021_SnowmanSpawnPlacementStrategy_generated_h
#error "SnowmanSpawnPlacementStrategy.generated.h already included, missing '#pragma once' in SnowmanSpawnPlacementStrategy.h"
#endif
#define WINTER2021_SnowmanSpawnPlacementStrategy_generated_h

#define DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_SPARSE_DATA
#define DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnIntroCompletedOrLevelReadyToPlay);


#define DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnIntroCompletedOrLevelReadyToPlay);


#define DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSnowmanSpawnPlacementStrategy(); \
	friend struct Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics; \
public: \
	DECLARE_CLASS(USnowmanSpawnPlacementStrategy, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Winter2021"), NO_API) \
	DECLARE_SERIALIZER(USnowmanSpawnPlacementStrategy)


#define DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSnowmanSpawnPlacementStrategy(); \
	friend struct Z_Construct_UClass_USnowmanSpawnPlacementStrategy_Statics; \
public: \
	DECLARE_CLASS(USnowmanSpawnPlacementStrategy, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Winter2021"), NO_API) \
	DECLARE_SERIALIZER(USnowmanSpawnPlacementStrategy)


#define DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USnowmanSpawnPlacementStrategy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USnowmanSpawnPlacementStrategy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnowmanSpawnPlacementStrategy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnowmanSpawnPlacementStrategy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USnowmanSpawnPlacementStrategy(USnowmanSpawnPlacementStrategy&&); \
	NO_API USnowmanSpawnPlacementStrategy(const USnowmanSpawnPlacementStrategy&); \
public:


#define DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USnowmanSpawnPlacementStrategy(USnowmanSpawnPlacementStrategy&&); \
	NO_API USnowmanSpawnPlacementStrategy(const USnowmanSpawnPlacementStrategy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnowmanSpawnPlacementStrategy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnowmanSpawnPlacementStrategy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USnowmanSpawnPlacementStrategy)


#define DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___minDistanceFromOtherActiveSnowmen() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _minDistanceFromOtherActiveSnowmen); } \
	FORCEINLINE static uint32 __PPO___minDistanceFromOtherPlayers() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _minDistanceFromOtherPlayers); } \
	FORCEINLINE static uint32 __PPO___minHatchDistance() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _minHatchDistance); } \
	FORCEINLINE static uint32 __PPO___minPalletDistance() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _minPalletDistance); } \
	FORCEINLINE static uint32 __PPO___navmesh_radiusArea() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _navmesh_radiusArea); } \
	FORCEINLINE static uint32 __PPO___navmesh_minimumDistanceFromOriginSpawnPoint() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _navmesh_minimumDistanceFromOriginSpawnPoint); } \
	FORCEINLINE static uint32 __PPO___navmesh_minimumNumberOfNavmeshPointsToBeReady() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _navmesh_minimumNumberOfNavmeshPointsToBeReady); } \
	FORCEINLINE static uint32 __PPO___boxExtentXSize() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _boxExtentXSize); } \
	FORCEINLINE static uint32 __PPO___boxExtentYSize() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _boxExtentYSize); } \
	FORCEINLINE static uint32 __PPO___boxExtentZSize() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _boxExtentZSize); } \
	FORCEINLINE static uint32 __PPO___collisionBoxHalfExtent() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _collisionBoxHalfExtent); } \
	FORCEINLINE static uint32 __PPO___minDistanceFromOtherActiveSnowmenSquared() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _minDistanceFromOtherActiveSnowmenSquared); } \
	FORCEINLINE static uint32 __PPO___minDistanceFromOtherPlayersSquared() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _minDistanceFromOtherPlayersSquared); } \
	FORCEINLINE static uint32 __PPO___minPalletDistanceSquared() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _minPalletDistanceSquared); } \
	FORCEINLINE static uint32 __PPO___minHatchSquaredDistance() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _minHatchSquaredDistance); } \
	FORCEINLINE static uint32 __PPO___spawnPointsTileTypes() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _spawnPointsTileTypes); } \
	FORCEINLINE static uint32 __PPO___spawnPointsGameplayElementTypes() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _spawnPointsGameplayElementTypes); } \
	FORCEINLINE static uint32 __PPO___spawnLocationData() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _spawnLocationData); } \
	FORCEINLINE static uint32 __PPO___hatches() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _hatches); } \
	FORCEINLINE static uint32 __PPO___pallets() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _pallets); } \
	FORCEINLINE static uint32 __PPO___collisionCheckBoxExtents() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _collisionCheckBoxExtents); } \
	FORCEINLINE static uint32 __PPO___downRaycastLength() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _downRaycastLength); } \
	FORCEINLINE static uint32 __PPO___rayCastZOffet() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _rayCastZOffet); } \
	FORCEINLINE static uint32 __PPO___distanceToGroundToleranceSquared() { return STRUCT_OFFSET(USnowmanSpawnPlacementStrategy, _distanceToGroundToleranceSquared); }


#define DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_14_PROLOG
#define DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_SPARSE_DATA \
	DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_INCLASS \
	DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_SPARSE_DATA \
	DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WINTER2021_API UClass* StaticClass<class USnowmanSpawnPlacementStrategy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Winter2021_Public_SnowmanSpawnPlacementStrategy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
