// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVector;
class AActor;
class UNavigationQueryFilter;
class UNavigationPath;
class UActorComponent;
#ifdef DEADBYDAYLIGHT_DBDAIUtilities_generated_h
#error "DBDAIUtilities.generated.h already included, missing '#pragma once' in DBDAIUtilities.h"
#endif
#define DEADBYDAYLIGHT_DBDAIUtilities_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawDebugAINavigation); \
	DECLARE_FUNCTION(execDrawDebugAINavigationFilter); \
	DECLARE_FUNCTION(execDrawDebugAIPerception); \
	DECLARE_FUNCTION(execFindPathWithAgentRadiusToActorSynchronously); \
	DECLARE_FUNCTION(execSetCanEverAffectNavigation);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawDebugAINavigation); \
	DECLARE_FUNCTION(execDrawDebugAINavigationFilter); \
	DECLARE_FUNCTION(execDrawDebugAIPerception); \
	DECLARE_FUNCTION(execFindPathWithAgentRadiusToActorSynchronously); \
	DECLARE_FUNCTION(execSetCanEverAffectNavigation);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDAIUtilities(); \
	friend struct Z_Construct_UClass_UDBDAIUtilities_Statics; \
public: \
	DECLARE_CLASS(UDBDAIUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDAIUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDBDAIUtilities(); \
	friend struct Z_Construct_UClass_UDBDAIUtilities_Statics; \
public: \
	DECLARE_CLASS(UDBDAIUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDAIUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDAIUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDAIUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDAIUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDAIUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDAIUtilities(UDBDAIUtilities&&); \
	NO_API UDBDAIUtilities(const UDBDAIUtilities&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDAIUtilities(UDBDAIUtilities&&); \
	NO_API UDBDAIUtilities(const UDBDAIUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDAIUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDAIUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDAIUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_14_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDAIUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDAIUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
