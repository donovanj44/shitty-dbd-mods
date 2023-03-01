// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystemComponent;
class UMaterialInstanceDynamic;
struct FTransform;
class UMeshComponent;
struct FLinearColor;
#ifdef DEADBYDAYLIGHT_DBDMaterialBlueprintLibrary_generated_h
#error "DBDMaterialBlueprintLibrary.generated.h already included, missing '#pragma once' in DBDMaterialBlueprintLibrary.h"
#endif
#define DEADBYDAYLIGHT_DBDMaterialBlueprintLibrary_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstanceForParticleSystem); \
	DECLARE_FUNCTION(execSetTransformParameterInverseValueOnMaterialDynamic); \
	DECLARE_FUNCTION(execSetTransformParameterValueOnMaterialDynamic); \
	DECLARE_FUNCTION(execSetTransformParameterValueOnMeshComponent); \
	DECLARE_FUNCTION(execSetVectorParameterValueOnMeshComponent);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstanceForParticleSystem); \
	DECLARE_FUNCTION(execSetTransformParameterInverseValueOnMaterialDynamic); \
	DECLARE_FUNCTION(execSetTransformParameterValueOnMaterialDynamic); \
	DECLARE_FUNCTION(execSetTransformParameterValueOnMeshComponent); \
	DECLARE_FUNCTION(execSetVectorParameterValueOnMeshComponent);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDMaterialBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDBDMaterialBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDBDMaterialBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDMaterialBlueprintLibrary)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDBDMaterialBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDBDMaterialBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDBDMaterialBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDMaterialBlueprintLibrary)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDMaterialBlueprintLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDMaterialBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDMaterialBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDMaterialBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDMaterialBlueprintLibrary(UDBDMaterialBlueprintLibrary&&); \
	NO_API UDBDMaterialBlueprintLibrary(const UDBDMaterialBlueprintLibrary&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDMaterialBlueprintLibrary(UDBDMaterialBlueprintLibrary&&); \
	NO_API UDBDMaterialBlueprintLibrary(const UDBDMaterialBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDMaterialBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDMaterialBlueprintLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDMaterialBlueprintLibrary)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDMaterialBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDMaterialBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
