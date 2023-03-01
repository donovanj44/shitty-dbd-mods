// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioBank;
class UObject;
class UAkAudioEvent;
#ifdef DEADBYDAYLIGHT_DBDAudioUtilities_generated_h
#error "DBDAudioUtilities.generated.h already included, missing '#pragma once' in DBDAudioUtilities.h"
#endif
#define DEADBYDAYLIGHT_DBDAudioUtilities_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDBD_LoadPersistentBank); \
	DECLARE_FUNCTION(execDBD_LoadPersistentBankAsync); \
	DECLARE_FUNCTION(execDBD_LoadPersistentBankByAssetPtr); \
	DECLARE_FUNCTION(execDBD_PostUiEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDBD_LoadPersistentBank); \
	DECLARE_FUNCTION(execDBD_LoadPersistentBankAsync); \
	DECLARE_FUNCTION(execDBD_LoadPersistentBankByAssetPtr); \
	DECLARE_FUNCTION(execDBD_PostUiEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDAudioUtilities(); \
	friend struct Z_Construct_UClass_UDBDAudioUtilities_Statics; \
public: \
	DECLARE_CLASS(UDBDAudioUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDAudioUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDBDAudioUtilities(); \
	friend struct Z_Construct_UClass_UDBDAudioUtilities_Statics; \
public: \
	DECLARE_CLASS(UDBDAudioUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDAudioUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDAudioUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDAudioUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDAudioUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDAudioUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDAudioUtilities(UDBDAudioUtilities&&); \
	NO_API UDBDAudioUtilities(const UDBDAudioUtilities&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDAudioUtilities(UDBDAudioUtilities&&); \
	NO_API UDBDAudioUtilities(const UDBDAudioUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDAudioUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDAudioUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDAudioUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDAudioUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDAudioUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
