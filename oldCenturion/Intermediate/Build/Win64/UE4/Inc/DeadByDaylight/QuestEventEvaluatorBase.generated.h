// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameEventData;
#ifdef DEADBYDAYLIGHT_QuestEventEvaluatorBase_generated_h
#error "QuestEventEvaluatorBase.generated.h already included, missing '#pragma once' in QuestEventEvaluatorBase.h"
#endif
#define DEADBYDAYLIGHT_QuestEventEvaluatorBase_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGameEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGameEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestEventEvaluatorBase(); \
	friend struct Z_Construct_UClass_UQuestEventEvaluatorBase_Statics; \
public: \
	DECLARE_CLASS(UQuestEventEvaluatorBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UQuestEventEvaluatorBase)


#define DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUQuestEventEvaluatorBase(); \
	friend struct Z_Construct_UClass_UQuestEventEvaluatorBase_Statics; \
public: \
	DECLARE_CLASS(UQuestEventEvaluatorBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UQuestEventEvaluatorBase)


#define DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestEventEvaluatorBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestEventEvaluatorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestEventEvaluatorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestEventEvaluatorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestEventEvaluatorBase(UQuestEventEvaluatorBase&&); \
	NO_API UQuestEventEvaluatorBase(const UQuestEventEvaluatorBase&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestEventEvaluatorBase(UQuestEventEvaluatorBase&&); \
	NO_API UQuestEventEvaluatorBase(const UQuestEventEvaluatorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestEventEvaluatorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestEventEvaluatorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestEventEvaluatorBase)


#define DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___dbdPlayer() { return STRUCT_OFFSET(UQuestEventEvaluatorBase, _dbdPlayer); } \
	FORCEINLINE static uint32 __PPO___evaluatorConditionsClass() { return STRUCT_OFFSET(UQuestEventEvaluatorBase, _evaluatorConditionsClass); } \
	FORCEINLINE static uint32 __PPO___evaluatorConditions() { return STRUCT_OFFSET(UQuestEventEvaluatorBase, _evaluatorConditions); }


#define DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UQuestEventEvaluatorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_QuestEventEvaluatorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
