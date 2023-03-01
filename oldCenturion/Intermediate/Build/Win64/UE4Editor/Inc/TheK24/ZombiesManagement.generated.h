// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK24_ZombiesManagement_generated_h
#error "ZombiesManagement.generated.h already included, missing '#pragma once' in ZombiesManagement.h"
#endif
#define THEK24_ZombiesManagement_generated_h

#define DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnIntroComplete);


#define DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnIntroComplete);


#define DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombiesManagement(); \
	friend struct Z_Construct_UClass_AZombiesManagement_Statics; \
public: \
	DECLARE_CLASS(AZombiesManagement, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(AZombiesManagement)


#define DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAZombiesManagement(); \
	friend struct Z_Construct_UClass_AZombiesManagement_Statics; \
public: \
	DECLARE_CLASS(AZombiesManagement, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(AZombiesManagement)


#define DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombiesManagement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombiesManagement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombiesManagement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombiesManagement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombiesManagement(AZombiesManagement&&); \
	NO_API AZombiesManagement(const AZombiesManagement&); \
public:


#define DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombiesManagement(AZombiesManagement&&); \
	NO_API AZombiesManagement(const AZombiesManagement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombiesManagement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombiesManagement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombiesManagement)


#define DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___zombiePool() { return STRUCT_OFFSET(AZombiesManagement, _zombiePool); } \
	FORCEINLINE static uint32 __PPO___zombiesPatrolAreaManager() { return STRUCT_OFFSET(AZombiesManagement, _zombiesPatrolAreaManager); } \
	FORCEINLINE static uint32 __PPO___spawnedZombiesArray() { return STRUCT_OFFSET(AZombiesManagement, _spawnedZombiesArray); } \
	FORCEINLINE static uint32 __PPO___firstZombieSpawnTime() { return STRUCT_OFFSET(AZombiesManagement, _firstZombieSpawnTime); } \
	FORCEINLINE static uint32 __PPO___numberOfZombieToSpawnAtStart() { return STRUCT_OFFSET(AZombiesManagement, _numberOfZombieToSpawnAtStart); } \
	FORCEINLINE static uint32 __PPO___zombieEscapeDoorPoints() { return STRUCT_OFFSET(AZombiesManagement, _zombieEscapeDoorPoints); }


#define DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_12_PROLOG
#define DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_INCLASS \
	DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class AZombiesManagement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_ZombiesManagement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
