// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef DEADBYDAYLIGHT_StateTagUtilities_generated_h
#error "StateTagUtilities.generated.h already included, missing '#pragma once' in StateTagUtilities.h"
#endif
#define DEADBYDAYLIGHT_StateTagUtilities_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddStateTagToPlayer); \
	DECLARE_FUNCTION(execCurrentInteractionHasAnyStateTag); \
	DECLARE_FUNCTION(execCurrentInteractionHasStateTag); \
	DECLARE_FUNCTION(execHasAnyStateTag); \
	DECLARE_FUNCTION(execHasStateTag); \
	DECLARE_FUNCTION(execRemoveStateTagToPlayer);


#define DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddStateTagToPlayer); \
	DECLARE_FUNCTION(execCurrentInteractionHasAnyStateTag); \
	DECLARE_FUNCTION(execCurrentInteractionHasStateTag); \
	DECLARE_FUNCTION(execHasAnyStateTag); \
	DECLARE_FUNCTION(execHasStateTag); \
	DECLARE_FUNCTION(execRemoveStateTagToPlayer);


#define DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTagUtilities(); \
	friend struct Z_Construct_UClass_UStateTagUtilities_Statics; \
public: \
	DECLARE_CLASS(UStateTagUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UStateTagUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUStateTagUtilities(); \
	friend struct Z_Construct_UClass_UStateTagUtilities_Statics; \
public: \
	DECLARE_CLASS(UStateTagUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UStateTagUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateTagUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTagUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTagUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTagUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateTagUtilities(UStateTagUtilities&&); \
	NO_API UStateTagUtilities(const UStateTagUtilities&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateTagUtilities(UStateTagUtilities&&); \
	NO_API UStateTagUtilities(const UStateTagUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTagUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTagUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStateTagUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UStateTagUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_StateTagUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
