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
#ifdef DBDANALYTICS_ClosetAnalytics_generated_h
#error "ClosetAnalytics.generated.h already included, missing '#pragma once' in ClosetAnalytics.h"
#endif
#define DBDANALYTICS_ClosetAnalytics_generated_h

#define DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIncrementClosetEnter); \
	DECLARE_FUNCTION(execRecordClosetSearchFail); \
	DECLARE_FUNCTION(execRecordClosetSearchSuccess);


#define DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIncrementClosetEnter); \
	DECLARE_FUNCTION(execRecordClosetSearchFail); \
	DECLARE_FUNCTION(execRecordClosetSearchSuccess);


#define DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClosetAnalytics(); \
	friend struct Z_Construct_UClass_UClosetAnalytics_Statics; \
public: \
	DECLARE_CLASS(UClosetAnalytics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UClosetAnalytics)


#define DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUClosetAnalytics(); \
	friend struct Z_Construct_UClass_UClosetAnalytics_Statics; \
public: \
	DECLARE_CLASS(UClosetAnalytics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UClosetAnalytics)


#define DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClosetAnalytics(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClosetAnalytics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClosetAnalytics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClosetAnalytics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClosetAnalytics(UClosetAnalytics&&); \
	NO_API UClosetAnalytics(const UClosetAnalytics&); \
public:


#define DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClosetAnalytics(UClosetAnalytics&&); \
	NO_API UClosetAnalytics(const UClosetAnalytics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClosetAnalytics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClosetAnalytics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClosetAnalytics)


#define DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_9_PROLOG
#define DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_INCLASS \
	DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANALYTICS_API UClass* StaticClass<class UClosetAnalytics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnalytics_Public_ClosetAnalytics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
