// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
struct FLinearColor;
struct FVector;
#ifdef DEADBYDAYLIGHT_DBDMathBlueprintLibrary_generated_h
#error "DBDMathBlueprintLibrary.generated.h already included, missing '#pragma once' in DBDMathBlueprintLibrary.h"
#endif
#define DEADBYDAYLIGHT_DBDMathBlueprintLibrary_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTransformToMatrix); \
	DECLARE_FUNCTION(execVectorAbsoluteValue); \
	DECLARE_FUNCTION(execVectorIntersect);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTransformToMatrix); \
	DECLARE_FUNCTION(execVectorAbsoluteValue); \
	DECLARE_FUNCTION(execVectorIntersect);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDMathBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDBDMathBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDBDMathBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDMathBlueprintLibrary)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUDBDMathBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDBDMathBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDBDMathBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDMathBlueprintLibrary)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDMathBlueprintLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDMathBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDMathBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDMathBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDMathBlueprintLibrary(UDBDMathBlueprintLibrary&&); \
	NO_API UDBDMathBlueprintLibrary(const UDBDMathBlueprintLibrary&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDMathBlueprintLibrary(UDBDMathBlueprintLibrary&&); \
	NO_API UDBDMathBlueprintLibrary(const UDBDMathBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDMathBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDMathBlueprintLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDMathBlueprintLibrary)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDMathBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDMathBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
