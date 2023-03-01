// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UGameInstance;
#ifdef COREUTILITIES_CoreUtilities_generated_h
#error "CoreUtilities.generated.h already included, missing '#pragma once' in CoreUtilities.h"
#endif
#define COREUTILITIES_CoreUtilities_generated_h

#define DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_SPARSE_DATA
#define DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGameInstance); \
	DECLARE_FUNCTION(execGetRandomValuesFromArray);


#define DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGameInstance); \
	DECLARE_FUNCTION(execGetRandomValuesFromArray);


#define DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreUtilities(); \
	friend struct Z_Construct_UClass_UCoreUtilities_Statics; \
public: \
	DECLARE_CLASS(UCoreUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUtilities"), NO_API) \
	DECLARE_SERIALIZER(UCoreUtilities)


#define DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCoreUtilities(); \
	friend struct Z_Construct_UClass_UCoreUtilities_Statics; \
public: \
	DECLARE_CLASS(UCoreUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUtilities"), NO_API) \
	DECLARE_SERIALIZER(UCoreUtilities)


#define DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreUtilities(UCoreUtilities&&); \
	NO_API UCoreUtilities(const UCoreUtilities&); \
public:


#define DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreUtilities(UCoreUtilities&&); \
	NO_API UCoreUtilities(const UCoreUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreUtilities)


#define DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_9_PROLOG
#define DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_SPARSE_DATA \
	DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_INCLASS \
	DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_SPARSE_DATA \
	DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COREUTILITIES_API UClass* StaticClass<class UCoreUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_CoreUtilities_Public_CoreUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
