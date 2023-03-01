// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSpawnInfo;
class UPaperTileMap;
#ifdef DEADBYDAYLIGHT_DBDClientSyncer_generated_h
#error "DBDClientSyncer.generated.h already included, missing '#pragma once' in DBDClientSyncer.h"
#endif
#define DEADBYDAYLIGHT_DBDClientSyncer_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_RPC_WRAPPERS \
	virtual void Multicast_SyncActorToSpawnLocally_Implementation(TArray<FSpawnInfo> const& spawnInfos, int16 startIndex); \
	virtual void Multicast_SyncFinalLocallySpawnCount_Implementation(int16 numLocal); \
	virtual void Multicast_SyncSeed_Implementation(int32 seed, UPaperTileMap* tileMap, int32 generationPlayerCount, const FString& premadeMap); \
 \
	DECLARE_FUNCTION(execMulticast_SyncActorToSpawnLocally); \
	DECLARE_FUNCTION(execMulticast_SyncFinalLocallySpawnCount); \
	DECLARE_FUNCTION(execMulticast_SyncSeed);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SyncActorToSpawnLocally_Implementation(TArray<FSpawnInfo> const& spawnInfos, int16 startIndex); \
	virtual void Multicast_SyncFinalLocallySpawnCount_Implementation(int16 numLocal); \
	virtual void Multicast_SyncSeed_Implementation(int32 seed, UPaperTileMap* tileMap, int32 generationPlayerCount, const FString& premadeMap); \
 \
	DECLARE_FUNCTION(execMulticast_SyncActorToSpawnLocally); \
	DECLARE_FUNCTION(execMulticast_SyncFinalLocallySpawnCount); \
	DECLARE_FUNCTION(execMulticast_SyncSeed);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_EVENT_PARMS \
	struct DBDClientSyncer_eventMulticast_SyncActorToSpawnLocally_Parms \
	{ \
		TArray<FSpawnInfo> spawnInfos; \
		int16 startIndex; \
	}; \
	struct DBDClientSyncer_eventMulticast_SyncFinalLocallySpawnCount_Parms \
	{ \
		int16 numLocal; \
	}; \
	struct DBDClientSyncer_eventMulticast_SyncSeed_Parms \
	{ \
		int32 seed; \
		UPaperTileMap* tileMap; \
		int32 generationPlayerCount; \
		FString premadeMap; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDClientSyncer(); \
	friend struct Z_Construct_UClass_ADBDClientSyncer_Statics; \
public: \
	DECLARE_CLASS(ADBDClientSyncer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDClientSyncer)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_INCLASS \
private: \
	static void StaticRegisterNativesADBDClientSyncer(); \
	friend struct Z_Construct_UClass_ADBDClientSyncer_Statics; \
public: \
	DECLARE_CLASS(ADBDClientSyncer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDClientSyncer)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDClientSyncer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDClientSyncer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDClientSyncer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDClientSyncer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDClientSyncer(ADBDClientSyncer&&); \
	NO_API ADBDClientSyncer(const ADBDClientSyncer&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDClientSyncer(ADBDClientSyncer&&); \
	NO_API ADBDClientSyncer(const ADBDClientSyncer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDClientSyncer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDClientSyncer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDClientSyncer)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___actorsToSpawnLocally() { return STRUCT_OFFSET(ADBDClientSyncer, _actorsToSpawnLocally); } \
	FORCEINLINE static uint32 __PPO___currentQueue() { return STRUCT_OFFSET(ADBDClientSyncer, _currentQueue); } \
	FORCEINLINE static uint32 __PPO___tileMap() { return STRUCT_OFFSET(ADBDClientSyncer, _tileMap); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDClientSyncer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDClientSyncer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
