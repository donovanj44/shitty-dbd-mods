// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UMaterialInterface;
enum class ESpawnerStrategyType : uint8;
class UDecalSpawner;
struct FVector;
struct FRotator;
class UDBDDecalComponent;
#ifdef DEADBYDAYLIGHT_DecalSpawnerCollection_generated_h
#error "DecalSpawnerCollection.generated.h already included, missing '#pragma once' in DecalSpawnerCollection.h"
#endif
#define DEADBYDAYLIGHT_DecalSpawnerCollection_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateDecalSpawner); \
	DECLARE_FUNCTION(execReleaseDecalSpawner); \
	DECLARE_FUNCTION(execSpawnDecalAtLocation);


#define DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateDecalSpawner); \
	DECLARE_FUNCTION(execReleaseDecalSpawner); \
	DECLARE_FUNCTION(execSpawnDecalAtLocation);


#define DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDecalSpawnerCollection(); \
	friend struct Z_Construct_UClass_UDecalSpawnerCollection_Statics; \
public: \
	DECLARE_CLASS(UDecalSpawnerCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDecalSpawnerCollection)


#define DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDecalSpawnerCollection(); \
	friend struct Z_Construct_UClass_UDecalSpawnerCollection_Statics; \
public: \
	DECLARE_CLASS(UDecalSpawnerCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDecalSpawnerCollection)


#define DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDecalSpawnerCollection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDecalSpawnerCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDecalSpawnerCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDecalSpawnerCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDecalSpawnerCollection(UDecalSpawnerCollection&&); \
	NO_API UDecalSpawnerCollection(const UDecalSpawnerCollection&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDecalSpawnerCollection(UDecalSpawnerCollection&&); \
	NO_API UDecalSpawnerCollection(const UDecalSpawnerCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDecalSpawnerCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDecalSpawnerCollection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDecalSpawnerCollection)


#define DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___decalSpawners() { return STRUCT_OFFSET(UDecalSpawnerCollection, _decalSpawners); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDecalSpawnerCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DecalSpawnerCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
