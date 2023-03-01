// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FLinearColor;
struct FLightingChannels;
class UTexture;
struct FVector;
#ifdef GFXUTILITIES_BatchMeshCommands_generated_h
#error "BatchMeshCommands.generated.h already included, missing '#pragma once' in BatchMeshCommands.h"
#endif
#define GFXUTILITIES_BatchMeshCommands_generated_h

#define DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_SPARSE_DATA
#define DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBatchSetComponentTickEnabled); \
	DECLARE_FUNCTION(execBatchSetSkipComponentAndChildrenTransformUpdate); \
	DECLARE_FUNCTION(execBatchSetVisibility); \
	DECLARE_FUNCTION(execCopyFirstScalarParameter); \
	DECLARE_FUNCTION(execResetMaterials); \
	DECLARE_FUNCTION(execSetAllToSameMaterial); \
	DECLARE_FUNCTION(execSetCastCinematicShadows); \
	DECLARE_FUNCTION(execSetColourParameter); \
	DECLARE_FUNCTION(execSetCustomDepthStencilValue); \
	DECLARE_FUNCTION(execSetLightingChannelForAllMeshes); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetReceivesDecals); \
	DECLARE_FUNCTION(execSetRenderInCustomColourNoDepth); \
	DECLARE_FUNCTION(execSetRenderInCustomDepth); \
	DECLARE_FUNCTION(execSetRenderInMainPass); \
	DECLARE_FUNCTION(execSetScalarParameter); \
	DECLARE_FUNCTION(execSetStencilIntegerScalarParameter); \
	DECLARE_FUNCTION(execSetTextureParameter); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execUpdateMaterials);


#define DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBatchSetComponentTickEnabled); \
	DECLARE_FUNCTION(execBatchSetSkipComponentAndChildrenTransformUpdate); \
	DECLARE_FUNCTION(execBatchSetVisibility); \
	DECLARE_FUNCTION(execCopyFirstScalarParameter); \
	DECLARE_FUNCTION(execResetMaterials); \
	DECLARE_FUNCTION(execSetAllToSameMaterial); \
	DECLARE_FUNCTION(execSetCastCinematicShadows); \
	DECLARE_FUNCTION(execSetColourParameter); \
	DECLARE_FUNCTION(execSetCustomDepthStencilValue); \
	DECLARE_FUNCTION(execSetLightingChannelForAllMeshes); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetReceivesDecals); \
	DECLARE_FUNCTION(execSetRenderInCustomColourNoDepth); \
	DECLARE_FUNCTION(execSetRenderInCustomDepth); \
	DECLARE_FUNCTION(execSetRenderInMainPass); \
	DECLARE_FUNCTION(execSetScalarParameter); \
	DECLARE_FUNCTION(execSetStencilIntegerScalarParameter); \
	DECLARE_FUNCTION(execSetTextureParameter); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execUpdateMaterials);


#define DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBatchMeshCommands(); \
	friend struct Z_Construct_UClass_UBatchMeshCommands_Statics; \
public: \
	DECLARE_CLASS(UBatchMeshCommands, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GFXUtilities"), NO_API) \
	DECLARE_SERIALIZER(UBatchMeshCommands)


#define DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBatchMeshCommands(); \
	friend struct Z_Construct_UClass_UBatchMeshCommands_Statics; \
public: \
	DECLARE_CLASS(UBatchMeshCommands, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GFXUtilities"), NO_API) \
	DECLARE_SERIALIZER(UBatchMeshCommands)


#define DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBatchMeshCommands(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBatchMeshCommands) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBatchMeshCommands); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBatchMeshCommands); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBatchMeshCommands(UBatchMeshCommands&&); \
	NO_API UBatchMeshCommands(const UBatchMeshCommands&); \
public:


#define DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBatchMeshCommands(UBatchMeshCommands&&); \
	NO_API UBatchMeshCommands(const UBatchMeshCommands&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBatchMeshCommands); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBatchMeshCommands); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBatchMeshCommands)


#define DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Groups() { return STRUCT_OFFSET(UBatchMeshCommands, Groups); } \
	FORCEINLINE static uint32 __PPO__TargetMeshes() { return STRUCT_OFFSET(UBatchMeshCommands, TargetMeshes); } \
	FORCEINLINE static uint32 __PPO___materialGroupName() { return STRUCT_OFFSET(UBatchMeshCommands, _materialGroupName); }


#define DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_14_PROLOG
#define DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_SPARSE_DATA \
	DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_INCLASS \
	DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_SPARSE_DATA \
	DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GFXUTILITIES_API UClass* StaticClass<class UBatchMeshCommands>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_GFXUtilities_Public_BatchMeshCommands_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
