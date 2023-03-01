// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef DEADBYDAYLIGHT_ActorSpawner_generated_h
#error "ActorSpawner.generated.h already included, missing '#pragma once' in ActorSpawner.h"
#endif
#define DEADBYDAYLIGHT_ActorSpawner_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_12_DELEGATE \
struct _Script_DeadByDaylight_eventActorSpawnerOnAsyncActorSpawned_Parms \
{ \
	AActor* actorSpawned; \
}; \
static inline void FActorSpawnerOnAsyncActorSpawned_DelegateWrapper(const FMulticastScriptDelegate& ActorSpawnerOnAsyncActorSpawned, AActor* actorSpawned) \
{ \
	_Script_DeadByDaylight_eventActorSpawnerOnAsyncActorSpawned_Parms Parms; \
	Parms.actorSpawned=actorSpawned; \
	ActorSpawnerOnAsyncActorSpawned.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_SpawnActorAsyncEvent); \
	DECLARE_FUNCTION(execAuthorityGetSpawnedActor); \
	DECLARE_FUNCTION(execAuthoritySelect); \
	DECLARE_FUNCTION(execEditorForceSpawnVisualization); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execUseActivatedElement);


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_SpawnActorAsyncEvent); \
	DECLARE_FUNCTION(execAuthorityGetSpawnedActor); \
	DECLARE_FUNCTION(execAuthoritySelect); \
	DECLARE_FUNCTION(execEditorForceSpawnVisualization); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execUseActivatedElement);


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorSpawner(); \
	friend struct Z_Construct_UClass_UActorSpawner_Statics; \
public: \
	DECLARE_CLASS(UActorSpawner, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UActorSpawner) \
	virtual UObject* _getUObject() const override { return const_cast<UActorSpawner*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUActorSpawner(); \
	friend struct Z_Construct_UClass_UActorSpawner_Statics; \
public: \
	DECLARE_CLASS(UActorSpawner, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UActorSpawner) \
	virtual UObject* _getUObject() const override { return const_cast<UActorSpawner*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorSpawner(UActorSpawner&&); \
	NO_API UActorSpawner(const UActorSpawner&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorSpawner(UActorSpawner&&); \
	NO_API UActorSpawner(const UActorSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorSpawner)


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeightInfluenceable() { return STRUCT_OFFSET(UActorSpawner, WeightInfluenceable); } \
	FORCEINLINE static uint32 __PPO__WeightInfluencer() { return STRUCT_OFFSET(UActorSpawner, WeightInfluencer); } \
	FORCEINLINE static uint32 __PPO__Cost() { return STRUCT_OFFSET(UActorSpawner, Cost); } \
	FORCEINLINE static uint32 __PPO___toSpawn() { return STRUCT_OFFSET(UActorSpawner, _toSpawn); } \
	FORCEINLINE static uint32 __PPO___spawnedActorOnAuthority() { return STRUCT_OFFSET(UActorSpawner, _spawnedActorOnAuthority); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_14_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UActorSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ActorSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
