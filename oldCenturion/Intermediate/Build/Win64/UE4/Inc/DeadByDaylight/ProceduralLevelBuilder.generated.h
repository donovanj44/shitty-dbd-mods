// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGenerationParams;
class UObject;
enum class ETileSpawnPointType : uint8;
class AActor;
#ifdef DEADBYDAYLIGHT_ProceduralLevelBuilder_generated_h
#error "ProceduralLevelBuilder.generated.h already included, missing '#pragma once' in ProceduralLevelBuilder.h"
#endif
#define DEADBYDAYLIGHT_ProceduralLevelBuilder_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_RPC_WRAPPERS \
	virtual void Multicast_DebugShareGenerationData_Implementation(FGenerationParams usedParams); \
 \
	DECLARE_FUNCTION(execBuildFromSeed); \
	DECLARE_FUNCTION(execMulticast_DebugShareGenerationData); \
	DECLARE_FUNCTION(execOnMapLevelLoaded); \
	DECLARE_FUNCTION(execSpawnActor); \
	DECLARE_FUNCTION(execStartGenerationOnSyncerReady); \
	DECLARE_FUNCTION(execSyncSeeds);


#define DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_DebugShareGenerationData_Implementation(FGenerationParams usedParams); \
 \
	DECLARE_FUNCTION(execBuildFromSeed); \
	DECLARE_FUNCTION(execMulticast_DebugShareGenerationData); \
	DECLARE_FUNCTION(execOnMapLevelLoaded); \
	DECLARE_FUNCTION(execSpawnActor); \
	DECLARE_FUNCTION(execStartGenerationOnSyncerReady); \
	DECLARE_FUNCTION(execSyncSeeds);


#define DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_EVENT_PARMS \
	struct ProceduralLevelBuilder_eventApplyMist_Parms \
	{ \
		float modifier; \
	}; \
	struct ProceduralLevelBuilder_eventMulticast_DebugShareGenerationData_Parms \
	{ \
		FGenerationParams usedParams; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProceduralLevelBuilder(); \
	friend struct Z_Construct_UClass_AProceduralLevelBuilder_Statics; \
public: \
	DECLARE_CLASS(AProceduralLevelBuilder, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AProceduralLevelBuilder) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_syncer=NETFIELD_REP_START, \
		NETFIELD_REP_END=_syncer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAProceduralLevelBuilder(); \
	friend struct Z_Construct_UClass_AProceduralLevelBuilder_Statics; \
public: \
	DECLARE_CLASS(AProceduralLevelBuilder, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AProceduralLevelBuilder) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_syncer=NETFIELD_REP_START, \
		NETFIELD_REP_END=_syncer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProceduralLevelBuilder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProceduralLevelBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceduralLevelBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceduralLevelBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProceduralLevelBuilder(AProceduralLevelBuilder&&); \
	NO_API AProceduralLevelBuilder(const AProceduralLevelBuilder&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProceduralLevelBuilder(AProceduralLevelBuilder&&); \
	NO_API AProceduralLevelBuilder(const AProceduralLevelBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceduralLevelBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceduralLevelBuilder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProceduralLevelBuilder)


#define DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___tileClass() { return STRUCT_OFFSET(AProceduralLevelBuilder, _tileClass); } \
	FORCEINLINE static uint32 __PPO___mapData() { return STRUCT_OFFSET(AProceduralLevelBuilder, _mapData); } \
	FORCEINLINE static uint32 __PPO___availableTilesLibrary() { return STRUCT_OFFSET(AProceduralLevelBuilder, _availableTilesLibrary); } \
	FORCEINLINE static uint32 __PPO___availableDerivedTileLibrary() { return STRUCT_OFFSET(AProceduralLevelBuilder, _availableDerivedTileLibrary); } \
	FORCEINLINE static uint32 __PPO__DesignTunableClass() { return STRUCT_OFFSET(AProceduralLevelBuilder, DesignTunableClass); } \
	FORCEINLINE static uint32 __PPO___designTunables() { return STRUCT_OFFSET(AProceduralLevelBuilder, _designTunables); } \
	FORCEINLINE static uint32 __PPO___generatedData() { return STRUCT_OFFSET(AProceduralLevelBuilder, _generatedData); } \
	FORCEINLINE static uint32 __PPO___escapeDependencies() { return STRUCT_OFFSET(AProceduralLevelBuilder, _escapeDependencies); } \
	FORCEINLINE static uint32 __PPO___tileMatrix() { return STRUCT_OFFSET(AProceduralLevelBuilder, _tileMatrix); } \
	FORCEINLINE static uint32 __PPO___tileBank() { return STRUCT_OFFSET(AProceduralLevelBuilder, _tileBank); } \
	FORCEINLINE static uint32 __PPO___killerLairSpawner() { return STRUCT_OFFSET(AProceduralLevelBuilder, _killerLairSpawner); } \
	FORCEINLINE static uint32 __PPO___preloadAssetReferences() { return STRUCT_OFFSET(AProceduralLevelBuilder, _preloadAssetReferences); } \
	FORCEINLINE static uint32 __PPO___chestItemAssetReferences() { return STRUCT_OFFSET(AProceduralLevelBuilder, _chestItemAssetReferences); } \
	FORCEINLINE static uint32 __PPO___slasherPawn() { return STRUCT_OFFSET(AProceduralLevelBuilder, _slasherPawn); } \
	FORCEINLINE static uint32 __PPO___tilesThatHaveBeenSpawned() { return STRUCT_OFFSET(AProceduralLevelBuilder, _tilesThatHaveBeenSpawned); } \
	FORCEINLINE static uint32 __PPO___debugProceduralDatas() { return STRUCT_OFFSET(AProceduralLevelBuilder, _debugProceduralDatas); } \
	FORCEINLINE static uint32 __PPO___syncer() { return STRUCT_OFFSET(AProceduralLevelBuilder, _syncer); } \
	FORCEINLINE static uint32 __PPO___blackboardComp() { return STRUCT_OFFSET(AProceduralLevelBuilder, _blackboardComp); } \
	FORCEINLINE static uint32 __PPO___edgeObjectHandlingStrategy() { return STRUCT_OFFSET(AProceduralLevelBuilder, _edgeObjectHandlingStrategy); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_26_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AProceduralLevelBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ProceduralLevelBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
