// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
struct FRandomStream;
class AGenerator;
#ifdef DEADBYDAYLIGHT_GeneratorDrivenActor_generated_h
#error "GeneratorDrivenActor.generated.h already included, missing '#pragma once' in GeneratorDrivenActor.h"
#endif
#define DEADBYDAYLIGHT_GeneratorDrivenActor_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_RPC_WRAPPERS \
	virtual void Multicast_ActivationChecked_Implementation(bool activated, bool isAutoCompleted, int32 generatorId); \
	virtual void Multicast_GeneratorRepairedBySurvivor_Implementation(ADBDPlayer* repairingSurvivor, int32 generatorId); \
 \
	DECLARE_FUNCTION(execAuthority_CheckActivation); \
	DECLARE_FUNCTION(execAuthority_CheckGeneratorRepairedBySurvivor); \
	DECLARE_FUNCTION(execGetSharedTileRandomizer); \
	DECLARE_FUNCTION(execIsActivated); \
	DECLARE_FUNCTION(execIsValidGeneratorId); \
	DECLARE_FUNCTION(execMulticast_ActivationChecked); \
	DECLARE_FUNCTION(execMulticast_GeneratorRepairedBySurvivor); \
	DECLARE_FUNCTION(execOnGeneratorRepairedBySurvivorEvent0); \
	DECLARE_FUNCTION(execOnGeneratorRepairedBySurvivorEvent1); \
	DECLARE_FUNCTION(execOnGeneratorRepairedBySurvivorEvent2); \
	DECLARE_FUNCTION(execOnGeneratorRepairedBySurvivorEvent3); \
	DECLARE_FUNCTION(execOnGeneratorRepairedBySurvivorEvent4); \
	DECLARE_FUNCTION(execOnGeneratorRepairedBySurvivorEvent5); \
	DECLARE_FUNCTION(execOnGeneratorRepairedBySurvivorEvent6); \
	DECLARE_FUNCTION(execOnGeneratorRepairedEvent0); \
	DECLARE_FUNCTION(execOnGeneratorRepairedEvent1); \
	DECLARE_FUNCTION(execOnGeneratorRepairedEvent2); \
	DECLARE_FUNCTION(execOnGeneratorRepairedEvent3); \
	DECLARE_FUNCTION(execOnGeneratorRepairedEvent4); \
	DECLARE_FUNCTION(execOnGeneratorRepairedEvent5); \
	DECLARE_FUNCTION(execOnGeneratorRepairedEvent6); \
	DECLARE_FUNCTION(execSetSpawnedObject);


#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ActivationChecked_Implementation(bool activated, bool isAutoCompleted, int32 generatorId); \
	virtual void Multicast_GeneratorRepairedBySurvivor_Implementation(ADBDPlayer* repairingSurvivor, int32 generatorId); \
 \
	DECLARE_FUNCTION(execAuthority_CheckActivation); \
	DECLARE_FUNCTION(execAuthority_CheckGeneratorRepairedBySurvivor); \
	DECLARE_FUNCTION(execGetSharedTileRandomizer); \
	DECLARE_FUNCTION(execIsActivated); \
	DECLARE_FUNCTION(execIsValidGeneratorId); \
	DECLARE_FUNCTION(execMulticast_ActivationChecked); \
	DECLARE_FUNCTION(execMulticast_GeneratorRepairedBySurvivor); \
	DECLARE_FUNCTION(execOnGeneratorRepairedBySurvivorEvent0); \
	DECLARE_FUNCTION(execOnGeneratorRepairedBySurvivorEvent1); \
	DECLARE_FUNCTION(execOnGeneratorRepairedBySurvivorEvent2); \
	DECLARE_FUNCTION(execOnGeneratorRepairedBySurvivorEvent3); \
	DECLARE_FUNCTION(execOnGeneratorRepairedBySurvivorEvent4); \
	DECLARE_FUNCTION(execOnGeneratorRepairedBySurvivorEvent5); \
	DECLARE_FUNCTION(execOnGeneratorRepairedBySurvivorEvent6); \
	DECLARE_FUNCTION(execOnGeneratorRepairedEvent0); \
	DECLARE_FUNCTION(execOnGeneratorRepairedEvent1); \
	DECLARE_FUNCTION(execOnGeneratorRepairedEvent2); \
	DECLARE_FUNCTION(execOnGeneratorRepairedEvent3); \
	DECLARE_FUNCTION(execOnGeneratorRepairedEvent4); \
	DECLARE_FUNCTION(execOnGeneratorRepairedEvent5); \
	DECLARE_FUNCTION(execOnGeneratorRepairedEvent6); \
	DECLARE_FUNCTION(execSetSpawnedObject);


#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_EVENT_PARMS \
	struct GeneratorDrivenActor_eventMulticast_ActivationChecked_Parms \
	{ \
		bool activated; \
		bool isAutoCompleted; \
		int32 generatorId; \
	}; \
	struct GeneratorDrivenActor_eventMulticast_GeneratorRepairedBySurvivor_Parms \
	{ \
		ADBDPlayer* repairingSurvivor; \
		int32 generatorId; \
	}; \
	struct GeneratorDrivenActor_eventOnActivateGeneratorDrivenActor_Parms \
	{ \
		bool isAutoCompleted; \
		int32 generatorId; \
	}; \
	struct GeneratorDrivenActor_eventOnGeneratorRepairedBySurvivor_Parms \
	{ \
		ADBDPlayer* repairingSurvivor; \
		int32 generatorId; \
	}; \
	struct GeneratorDrivenActor_eventOnInitGeneratorDrivenActor_Parms \
	{ \
		AGenerator* generator; \
		int32 generatorId; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGeneratorDrivenActor(); \
	friend struct Z_Construct_UClass_AGeneratorDrivenActor_Statics; \
public: \
	DECLARE_CLASS(AGeneratorDrivenActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AGeneratorDrivenActor) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAGeneratorDrivenActor(); \
	friend struct Z_Construct_UClass_AGeneratorDrivenActor_Statics; \
public: \
	DECLARE_CLASS(AGeneratorDrivenActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AGeneratorDrivenActor) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGeneratorDrivenActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeneratorDrivenActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeneratorDrivenActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeneratorDrivenActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGeneratorDrivenActor(AGeneratorDrivenActor&&); \
	NO_API AGeneratorDrivenActor(const AGeneratorDrivenActor&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGeneratorDrivenActor(AGeneratorDrivenActor&&); \
	NO_API AGeneratorDrivenActor(const AGeneratorDrivenActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeneratorDrivenActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeneratorDrivenActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGeneratorDrivenActor)


#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___activated() { return STRUCT_OFFSET(AGeneratorDrivenActor, _activated); } \
	FORCEINLINE static uint32 __PPO___generators() { return STRUCT_OFFSET(AGeneratorDrivenActor, _generators); }


#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_11_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AGeneratorDrivenActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_GeneratorDrivenActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
