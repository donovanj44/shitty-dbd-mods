// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class UObject;
class UActiveGasCloudTrackerComponent;
class UGassedStatusEffect;
#ifdef THECLOWN_TheClownUtilities_generated_h
#error "TheClownUtilities.generated.h already included, missing '#pragma once' in TheClownUtilities.h"
#endif
#define THECLOWN_TheClownUtilities_generated_h

#define DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanBeGassed); \
	DECLARE_FUNCTION(execGetActiveGasCloudTrackerComponent); \
	DECLARE_FUNCTION(execGetGassedStatusEffect); \
	DECLARE_FUNCTION(execIsAffectedByAntidote); \
	DECLARE_FUNCTION(execIsGassed);


#define DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanBeGassed); \
	DECLARE_FUNCTION(execGetActiveGasCloudTrackerComponent); \
	DECLARE_FUNCTION(execGetGassedStatusEffect); \
	DECLARE_FUNCTION(execIsAffectedByAntidote); \
	DECLARE_FUNCTION(execIsGassed);


#define DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTheClownUtilities(); \
	friend struct Z_Construct_UClass_UTheClownUtilities_Statics; \
public: \
	DECLARE_CLASS(UTheClownUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheClown"), NO_API) \
	DECLARE_SERIALIZER(UTheClownUtilities)


#define DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUTheClownUtilities(); \
	friend struct Z_Construct_UClass_UTheClownUtilities_Statics; \
public: \
	DECLARE_CLASS(UTheClownUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheClown"), NO_API) \
	DECLARE_SERIALIZER(UTheClownUtilities)


#define DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTheClownUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTheClownUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTheClownUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTheClownUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTheClownUtilities(UTheClownUtilities&&); \
	NO_API UTheClownUtilities(const UTheClownUtilities&); \
public:


#define DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTheClownUtilities(UTheClownUtilities&&); \
	NO_API UTheClownUtilities(const UTheClownUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTheClownUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTheClownUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTheClownUtilities)


#define DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_11_PROLOG
#define DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_INCLASS \
	DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THECLOWN_API UClass* StaticClass<class UTheClownUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheClown_Public_TheClownUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
