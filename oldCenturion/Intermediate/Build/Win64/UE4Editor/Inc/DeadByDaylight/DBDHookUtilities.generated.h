// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
class AMeatHook;
struct FGameplayTag;
#ifdef DEADBYDAYLIGHT_DBDHookUtilities_generated_h
#error "DBDHookUtilities.generated.h already included, missing '#pragma once' in DBDHookUtilities.h"
#endif
#define DEADBYDAYLIGHT_DBDHookUtilities_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execComputeHookStrugglePercent); \
	DECLARE_FUNCTION(execIsFreddyHook); \
	DECLARE_FUNCTION(execIsHagHook); \
	DECLARE_FUNCTION(execIsHookOf); \
	DECLARE_FUNCTION(execIsHuntressHook); \
	DECLARE_FUNCTION(execIsLegionHook); \
	DECLARE_FUNCTION(execIsNurseHook); \
	DECLARE_FUNCTION(execIsPigHook); \
	DECLARE_FUNCTION(execIsWraithHook);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execComputeHookStrugglePercent); \
	DECLARE_FUNCTION(execIsFreddyHook); \
	DECLARE_FUNCTION(execIsHagHook); \
	DECLARE_FUNCTION(execIsHookOf); \
	DECLARE_FUNCTION(execIsHuntressHook); \
	DECLARE_FUNCTION(execIsLegionHook); \
	DECLARE_FUNCTION(execIsNurseHook); \
	DECLARE_FUNCTION(execIsPigHook); \
	DECLARE_FUNCTION(execIsWraithHook);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDHookUtilities(); \
	friend struct Z_Construct_UClass_UDBDHookUtilities_Statics; \
public: \
	DECLARE_CLASS(UDBDHookUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDHookUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDBDHookUtilities(); \
	friend struct Z_Construct_UClass_UDBDHookUtilities_Statics; \
public: \
	DECLARE_CLASS(UDBDHookUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDHookUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDHookUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDHookUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDHookUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDHookUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDHookUtilities(UDBDHookUtilities&&); \
	NO_API UDBDHookUtilities(const UDBDHookUtilities&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDHookUtilities(UDBDHookUtilities&&); \
	NO_API UDBDHookUtilities(const UDBDHookUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDHookUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDHookUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDHookUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDHookUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDHookUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
