// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASlasherPlayer;
class ACamperPlayer;
class AActor;
#ifdef DBDANALYTICS_PulldownAnalytics_generated_h
#error "PulldownAnalytics.generated.h already included, missing '#pragma once' in PulldownAnalytics.h"
#endif
#define DBDANALYTICS_PulldownAnalytics_generated_h

#define DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIncrementPalletDestroy); \
	DECLARE_FUNCTION(execIncrementPalletDrop); \
	DECLARE_FUNCTION(execIncrementPalletSpawned); \
	DECLARE_FUNCTION(execIncrementPalletStun);


#define DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIncrementPalletDestroy); \
	DECLARE_FUNCTION(execIncrementPalletDrop); \
	DECLARE_FUNCTION(execIncrementPalletSpawned); \
	DECLARE_FUNCTION(execIncrementPalletStun);


#define DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPulldownAnalytics(); \
	friend struct Z_Construct_UClass_UPulldownAnalytics_Statics; \
public: \
	DECLARE_CLASS(UPulldownAnalytics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UPulldownAnalytics)


#define DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUPulldownAnalytics(); \
	friend struct Z_Construct_UClass_UPulldownAnalytics_Statics; \
public: \
	DECLARE_CLASS(UPulldownAnalytics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UPulldownAnalytics)


#define DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPulldownAnalytics(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPulldownAnalytics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPulldownAnalytics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPulldownAnalytics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPulldownAnalytics(UPulldownAnalytics&&); \
	NO_API UPulldownAnalytics(const UPulldownAnalytics&); \
public:


#define DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPulldownAnalytics(UPulldownAnalytics&&); \
	NO_API UPulldownAnalytics(const UPulldownAnalytics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPulldownAnalytics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPulldownAnalytics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPulldownAnalytics)


#define DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_10_PROLOG
#define DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_INCLASS \
	DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANALYTICS_API UClass* StaticClass<class UPulldownAnalytics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnalytics_Public_PulldownAnalytics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
