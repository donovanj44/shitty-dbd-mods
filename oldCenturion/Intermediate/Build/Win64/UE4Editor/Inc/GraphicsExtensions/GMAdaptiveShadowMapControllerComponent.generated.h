// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRAPHICSEXTENSIONS_GMAdaptiveShadowMapControllerComponent_generated_h
#error "GMAdaptiveShadowMapControllerComponent.generated.h already included, missing '#pragma once' in GMAdaptiveShadowMapControllerComponent.h"
#endif
#define GRAPHICSEXTENSIONS_GMAdaptiveShadowMapControllerComponent_generated_h

#define DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_SPARSE_DATA
#define DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDumpDebugInfo); \
	DECLARE_FUNCTION(execGetTileCountX); \
	DECLARE_FUNCTION(execGetTileCountY); \
	DECLARE_FUNCTION(execGetTileSize); \
	DECLARE_FUNCTION(execIsControllerDonePreallocatingTiles); \
	DECLARE_FUNCTION(execRebuildAtlas);


#define DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDumpDebugInfo); \
	DECLARE_FUNCTION(execGetTileCountX); \
	DECLARE_FUNCTION(execGetTileCountY); \
	DECLARE_FUNCTION(execGetTileSize); \
	DECLARE_FUNCTION(execIsControllerDonePreallocatingTiles); \
	DECLARE_FUNCTION(execRebuildAtlas);


#define DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGMAdaptiveShadowMapControllerComponent(); \
	friend struct Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics; \
public: \
	DECLARE_CLASS(UGMAdaptiveShadowMapControllerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GraphicsExtensions"), NO_API) \
	DECLARE_SERIALIZER(UGMAdaptiveShadowMapControllerComponent)


#define DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGMAdaptiveShadowMapControllerComponent(); \
	friend struct Z_Construct_UClass_UGMAdaptiveShadowMapControllerComponent_Statics; \
public: \
	DECLARE_CLASS(UGMAdaptiveShadowMapControllerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GraphicsExtensions"), NO_API) \
	DECLARE_SERIALIZER(UGMAdaptiveShadowMapControllerComponent)


#define DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGMAdaptiveShadowMapControllerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGMAdaptiveShadowMapControllerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGMAdaptiveShadowMapControllerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGMAdaptiveShadowMapControllerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGMAdaptiveShadowMapControllerComponent(UGMAdaptiveShadowMapControllerComponent&&); \
	NO_API UGMAdaptiveShadowMapControllerComponent(const UGMAdaptiveShadowMapControllerComponent&); \
public:


#define DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGMAdaptiveShadowMapControllerComponent(UGMAdaptiveShadowMapControllerComponent&&); \
	NO_API UGMAdaptiveShadowMapControllerComponent(const UGMAdaptiveShadowMapControllerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGMAdaptiveShadowMapControllerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGMAdaptiveShadowMapControllerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGMAdaptiveShadowMapControllerComponent)


#define DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___atlas() { return STRUCT_OFFSET(UGMAdaptiveShadowMapControllerComponent, _atlas); } \
	FORCEINLINE static uint32 __PPO___controller() { return STRUCT_OFFSET(UGMAdaptiveShadowMapControllerComponent, _controller); } \
	FORCEINLINE static uint32 __PPO___shadowMapSources() { return STRUCT_OFFSET(UGMAdaptiveShadowMapControllerComponent, _shadowMapSources); } \
	FORCEINLINE static uint32 __PPO___lightFunctionMaterialInstance() { return STRUCT_OFFSET(UGMAdaptiveShadowMapControllerComponent, _lightFunctionMaterialInstance); }


#define DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_15_PROLOG
#define DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_SPARSE_DATA \
	DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_INCLASS \
	DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_SPARSE_DATA \
	DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAPHICSEXTENSIONS_API UClass* StaticClass<class UGMAdaptiveShadowMapControllerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_GraphicsExtensions_Public_GMAdaptiveShadowMapControllerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
