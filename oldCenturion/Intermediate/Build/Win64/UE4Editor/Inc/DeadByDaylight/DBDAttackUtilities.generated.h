// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EAttackType : uint8;
#ifdef DEADBYDAYLIGHT_DBDAttackUtilities_generated_h
#error "DBDAttackUtilities.generated.h already included, missing '#pragma once' in DBDAttackUtilities.h"
#endif
#define DEADBYDAYLIGHT_DBDAttackUtilities_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentAttackSubstateRemainingTime); \
	DECLARE_FUNCTION(execGetCurrentAttackType);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentAttackSubstateRemainingTime); \
	DECLARE_FUNCTION(execGetCurrentAttackType);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDAttackUtilities(); \
	friend struct Z_Construct_UClass_UDBDAttackUtilities_Statics; \
public: \
	DECLARE_CLASS(UDBDAttackUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDAttackUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUDBDAttackUtilities(); \
	friend struct Z_Construct_UClass_UDBDAttackUtilities_Statics; \
public: \
	DECLARE_CLASS(UDBDAttackUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDAttackUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDAttackUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDAttackUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDAttackUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDAttackUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDAttackUtilities(UDBDAttackUtilities&&); \
	NO_API UDBDAttackUtilities(const UDBDAttackUtilities&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDAttackUtilities(UDBDAttackUtilities&&); \
	NO_API UDBDAttackUtilities(const UDBDAttackUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDAttackUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDAttackUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDAttackUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDAttackUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
