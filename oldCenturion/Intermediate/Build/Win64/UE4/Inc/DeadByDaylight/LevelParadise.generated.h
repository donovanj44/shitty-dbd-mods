// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FParadiseData;
#ifdef DEADBYDAYLIGHT_LevelParadise_generated_h
#error "LevelParadise.generated.h already included, missing '#pragma once' in LevelParadise.h"
#endif
#define DEADBYDAYLIGHT_LevelParadise_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInterpolationDone); \
	DECLARE_FUNCTION(execParadiseEntered);


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInterpolationDone); \
	DECLARE_FUNCTION(execParadiseEntered);


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_EVENT_PARMS \
	struct LevelParadise_eventEnterParadise_Parms \
	{ \
		FParadiseData playerData; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelParadise(); \
	friend struct Z_Construct_UClass_ALevelParadise_Statics; \
public: \
	DECLARE_CLASS(ALevelParadise, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ALevelParadise)


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALevelParadise(); \
	friend struct Z_Construct_UClass_ALevelParadise_Statics; \
public: \
	DECLARE_CLASS(ALevelParadise, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ALevelParadise)


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelParadise(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelParadise) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelParadise); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelParadise); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelParadise(ALevelParadise&&); \
	NO_API ALevelParadise(const ALevelParadise&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelParadise(ALevelParadise&&); \
	NO_API ALevelParadise(const ALevelParadise&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelParadise); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelParadise); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALevelParadise)


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___spawnedMainPawn() { return STRUCT_OFFSET(ALevelParadise, _spawnedMainPawn); } \
	FORCEINLINE static uint32 __PPO___runnerComponent() { return STRUCT_OFFSET(ALevelParadise, _runnerComponent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ALevelParadise>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_LevelParadise_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
