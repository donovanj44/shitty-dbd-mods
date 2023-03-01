// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IConditionReceiver;
class UPerk;
class UDoesPerkHaveToken;
struct FGameplayTagContainer;
class UIsPlayerPerformingInteraction;
#ifdef DBDCOMPETENCE_DBDConditionFactory_generated_h
#error "DBDConditionFactory.generated.h already included, missing '#pragma once' in DBDConditionFactory.h"
#endif
#define DBDCOMPETENCE_DBDConditionFactory_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDoesPerkHaveToken); \
	DECLARE_FUNCTION(execIsPlayerPerformingInteraction);


#define DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoesPerkHaveToken); \
	DECLARE_FUNCTION(execIsPlayerPerformingInteraction);


#define DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDConditionFactory(); \
	friend struct Z_Construct_UClass_UDBDConditionFactory_Statics; \
public: \
	DECLARE_CLASS(UDBDConditionFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UDBDConditionFactory)


#define DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDBDConditionFactory(); \
	friend struct Z_Construct_UClass_UDBDConditionFactory_Statics; \
public: \
	DECLARE_CLASS(UDBDConditionFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UDBDConditionFactory)


#define DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDConditionFactory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDConditionFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDConditionFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDConditionFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDConditionFactory(UDBDConditionFactory&&); \
	NO_API UDBDConditionFactory(const UDBDConditionFactory&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDConditionFactory(UDBDConditionFactory&&); \
	NO_API UDBDConditionFactory(const UDBDConditionFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDConditionFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDConditionFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDConditionFactory)


#define DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_13_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UDBDConditionFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_DBDConditionFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
