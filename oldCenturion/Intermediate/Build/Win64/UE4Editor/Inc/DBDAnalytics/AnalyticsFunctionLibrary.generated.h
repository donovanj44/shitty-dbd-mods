// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EKillerTutorialSections : uint8;
enum class ESurvivorTutorialSections : uint8;
#ifdef DBDANALYTICS_AnalyticsFunctionLibrary_generated_h
#error "AnalyticsFunctionLibrary.generated.h already included, missing '#pragma once' in AnalyticsFunctionLibrary.h"
#endif
#define DBDANALYTICS_AnalyticsFunctionLibrary_generated_h

#define DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndKillerTutorialSectionAnalytics); \
	DECLARE_FUNCTION(execEndSurvivorTutorialSectionAnalytics); \
	DECLARE_FUNCTION(execIncrementHookSpawned); \
	DECLARE_FUNCTION(execStartKillerTutorialSectionAnalytics); \
	DECLARE_FUNCTION(execStartSurvivorTutorialSectionAnalytics);


#define DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndKillerTutorialSectionAnalytics); \
	DECLARE_FUNCTION(execEndSurvivorTutorialSectionAnalytics); \
	DECLARE_FUNCTION(execIncrementHookSpawned); \
	DECLARE_FUNCTION(execStartKillerTutorialSectionAnalytics); \
	DECLARE_FUNCTION(execStartSurvivorTutorialSectionAnalytics);


#define DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnalyticsFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAnalyticsFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnalyticsFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UAnalyticsFunctionLibrary)


#define DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUAnalyticsFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAnalyticsFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnalyticsFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UAnalyticsFunctionLibrary)


#define DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnalyticsFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnalyticsFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnalyticsFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnalyticsFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnalyticsFunctionLibrary(UAnalyticsFunctionLibrary&&); \
	NO_API UAnalyticsFunctionLibrary(const UAnalyticsFunctionLibrary&); \
public:


#define DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnalyticsFunctionLibrary(UAnalyticsFunctionLibrary&&); \
	NO_API UAnalyticsFunctionLibrary(const UAnalyticsFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnalyticsFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnalyticsFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnalyticsFunctionLibrary)


#define DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_10_PROLOG
#define DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_INCLASS \
	DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANALYTICS_API UClass* StaticClass<class UAnalyticsFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnalytics_Public_AnalyticsFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
