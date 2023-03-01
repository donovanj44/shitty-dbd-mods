// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IConditionReceiver;
class UAndModifierCondition;
class UEventDrivenModifierCondition;
class UObject;
class URangeBasedCondition;
class UTimerObject;
class UIsTimerDoneCondition;
class UNotModifierCondition;
class UOrModifierCondition;
#ifdef COMPETENCE_ConditionFactory_generated_h
#error "ConditionFactory.generated.h already included, missing '#pragma once' in ConditionFactory.h"
#endif
#define COMPETENCE_ConditionFactory_generated_h

#define DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_SPARSE_DATA
#define DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnd); \
	DECLARE_FUNCTION(execCreateAndReceiveConditionForBP); \
	DECLARE_FUNCTION(execCreateAndReceiveConditionWithSubjectForBP); \
	DECLARE_FUNCTION(execCreateRangeBasedCondition); \
	DECLARE_FUNCTION(execCreateRangeBasedConditionWithSubject); \
	DECLARE_FUNCTION(execIsTimerDone); \
	DECLARE_FUNCTION(execNot); \
	DECLARE_FUNCTION(execOr);


#define DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnd); \
	DECLARE_FUNCTION(execCreateAndReceiveConditionForBP); \
	DECLARE_FUNCTION(execCreateAndReceiveConditionWithSubjectForBP); \
	DECLARE_FUNCTION(execCreateRangeBasedCondition); \
	DECLARE_FUNCTION(execCreateRangeBasedConditionWithSubject); \
	DECLARE_FUNCTION(execIsTimerDone); \
	DECLARE_FUNCTION(execNot); \
	DECLARE_FUNCTION(execOr);


#define DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConditionFactory(); \
	friend struct Z_Construct_UClass_UConditionFactory_Statics; \
public: \
	DECLARE_CLASS(UConditionFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Competence"), NO_API) \
	DECLARE_SERIALIZER(UConditionFactory)


#define DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUConditionFactory(); \
	friend struct Z_Construct_UClass_UConditionFactory_Statics; \
public: \
	DECLARE_CLASS(UConditionFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Competence"), NO_API) \
	DECLARE_SERIALIZER(UConditionFactory)


#define DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConditionFactory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConditionFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConditionFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConditionFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConditionFactory(UConditionFactory&&); \
	NO_API UConditionFactory(const UConditionFactory&); \
public:


#define DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConditionFactory(UConditionFactory&&); \
	NO_API UConditionFactory(const UConditionFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConditionFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConditionFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConditionFactory)


#define DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_Competence_Public_ConditionFactory_h_17_PROLOG
#define DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_SPARSE_DATA \
	DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_RPC_WRAPPERS \
	DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_INCLASS \
	DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_SPARSE_DATA \
	DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Competence_Public_ConditionFactory_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPETENCE_API UClass* StaticClass<class UConditionFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Competence_Public_ConditionFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
