// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef DEADBYDAYLIGHT_TileSpawnPoint_generated_h
#error "TileSpawnPoint.generated.h already included, missing '#pragma once' in TileSpawnPoint.h"
#endif
#define DEADBYDAYLIGHT_TileSpawnPoint_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSpawnedObject); \
	DECLARE_FUNCTION(execIsActivated); \
	DECLARE_FUNCTION(execOnRep_SpawnObject); \
	DECLARE_FUNCTION(execSetActivated);


#define DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSpawnedObject); \
	DECLARE_FUNCTION(execIsActivated); \
	DECLARE_FUNCTION(execOnRep_SpawnObject); \
	DECLARE_FUNCTION(execSetActivated);


#define DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTileSpawnPoint(); \
	friend struct Z_Construct_UClass_UTileSpawnPoint_Statics; \
public: \
	DECLARE_CLASS(UTileSpawnPoint, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UTileSpawnPoint) \
	virtual UObject* _getUObject() const override { return const_cast<UTileSpawnPoint*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_spawnedObject=NETFIELD_REP_START, \
		NETFIELD_REP_END=_spawnedObject	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUTileSpawnPoint(); \
	friend struct Z_Construct_UClass_UTileSpawnPoint_Statics; \
public: \
	DECLARE_CLASS(UTileSpawnPoint, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UTileSpawnPoint) \
	virtual UObject* _getUObject() const override { return const_cast<UTileSpawnPoint*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_spawnedObject=NETFIELD_REP_START, \
		NETFIELD_REP_END=_spawnedObject	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileSpawnPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileSpawnPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileSpawnPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileSpawnPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileSpawnPoint(UTileSpawnPoint&&); \
	NO_API UTileSpawnPoint(const UTileSpawnPoint&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileSpawnPoint(UTileSpawnPoint&&); \
	NO_API UTileSpawnPoint(const UTileSpawnPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileSpawnPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileSpawnPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTileSpawnPoint)


#define DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___spawnedObject() { return STRUCT_OFFSET(UTileSpawnPoint, _spawnedObject); } \
	FORCEINLINE static uint32 __PPO__ObjectSpawnModifier() { return STRUCT_OFFSET(UTileSpawnPoint, ObjectSpawnModifier); } \
	FORCEINLINE static uint32 __PPO___spawnPriorityTier() { return STRUCT_OFFSET(UTileSpawnPoint, _spawnPriorityTier); } \
	FORCEINLINE static uint32 __PPO___weightInfluenceable() { return STRUCT_OFFSET(UTileSpawnPoint, _weightInfluenceable); } \
	FORCEINLINE static uint32 __PPO___weightInfluencer() { return STRUCT_OFFSET(UTileSpawnPoint, _weightInfluencer); } \
	FORCEINLINE static uint32 __PPO___activated() { return STRUCT_OFFSET(UTileSpawnPoint, _activated); }


#define DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UTileSpawnPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_TileSpawnPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
