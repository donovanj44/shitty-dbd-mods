// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
class ASlasherPlayer;
#ifdef DBDANALYTICS_PigAnalytics_generated_h
#error "PigAnalytics.generated.h already included, missing '#pragma once' in PigAnalytics.h"
#endif
#define DBDANALYTICS_PigAnalytics_generated_h

#define DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIncrementRBTKilledCount); \
	DECLARE_FUNCTION(execIncrementRBTTimerActived); \
	DECLARE_FUNCTION(execOnRBTAttached_Analytics); \
	DECLARE_FUNCTION(execRecordRBTSearch);


#define DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIncrementRBTKilledCount); \
	DECLARE_FUNCTION(execIncrementRBTTimerActived); \
	DECLARE_FUNCTION(execOnRBTAttached_Analytics); \
	DECLARE_FUNCTION(execRecordRBTSearch);


#define DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPigAnalytics(); \
	friend struct Z_Construct_UClass_UPigAnalytics_Statics; \
public: \
	DECLARE_CLASS(UPigAnalytics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UPigAnalytics)


#define DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPigAnalytics(); \
	friend struct Z_Construct_UClass_UPigAnalytics_Statics; \
public: \
	DECLARE_CLASS(UPigAnalytics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UPigAnalytics)


#define DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPigAnalytics(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPigAnalytics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPigAnalytics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPigAnalytics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPigAnalytics(UPigAnalytics&&); \
	NO_API UPigAnalytics(const UPigAnalytics&); \
public:


#define DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPigAnalytics(UPigAnalytics&&); \
	NO_API UPigAnalytics(const UPigAnalytics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPigAnalytics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPigAnalytics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPigAnalytics)


#define DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_9_PROLOG
#define DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_INCLASS \
	DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANALYTICS_API UClass* StaticClass<class UPigAnalytics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnalytics_Public_PigAnalytics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
