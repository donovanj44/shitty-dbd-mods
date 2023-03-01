// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameEventData;
#ifdef DEADBYDAYLIGHT_EndGameComponent_generated_h
#error "EndGameComponent.generated.h already included, missing '#pragma once' in EndGameComponent.h"
#endif
#define DEADBYDAYLIGHT_EndGameComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableEndGameScenario); \
	DECLARE_FUNCTION(execFireEndGameSacrificeScoreEvent); \
	DECLARE_FUNCTION(execGetHasEndGameBegun); \
	DECLARE_FUNCTION(execPauseEndGameTimer); \
	DECLARE_FUNCTION(execStartEndGame_Cheat); \
	DECLARE_FUNCTION(execUnpauseEndGameTimer);


#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableEndGameScenario); \
	DECLARE_FUNCTION(execFireEndGameSacrificeScoreEvent); \
	DECLARE_FUNCTION(execGetHasEndGameBegun); \
	DECLARE_FUNCTION(execPauseEndGameTimer); \
	DECLARE_FUNCTION(execStartEndGame_Cheat); \
	DECLARE_FUNCTION(execUnpauseEndGameTimer);


#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEndGameComponent(); \
	friend struct Z_Construct_UClass_UEndGameComponent_Statics; \
public: \
	DECLARE_CLASS(UEndGameComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UEndGameComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUEndGameComponent(); \
	friend struct Z_Construct_UClass_UEndGameComponent_Statics; \
public: \
	DECLARE_CLASS(UEndGameComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UEndGameComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndGameComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndGameComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGameComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGameComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndGameComponent(UEndGameComponent&&); \
	NO_API UEndGameComponent(const UEndGameComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndGameComponent(UEndGameComponent&&); \
	NO_API UEndGameComponent(const UEndGameComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGameComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGameComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEndGameComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_7_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UEndGameComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EndGameComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
