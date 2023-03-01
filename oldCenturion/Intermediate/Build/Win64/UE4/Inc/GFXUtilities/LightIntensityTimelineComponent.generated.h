// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULightComponent;
class UMaterialHelper;
class UCurveFloat;
#ifdef GFXUTILITIES_LightIntensityTimelineComponent_generated_h
#error "LightIntensityTimelineComponent.generated.h already included, missing '#pragma once' in LightIntensityTimelineComponent.h"
#endif
#define GFXUTILITIES_LightIntensityTimelineComponent_generated_h

#define DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_13_DELEGATE \
static inline void FLightIntensityTimelineComponentOnTimelineFinished_DelegateWrapper(const FMulticastScriptDelegate& LightIntensityTimelineComponentOnTimelineFinished) \
{ \
	LightIntensityTimelineComponentOnTimelineFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_SPARSE_DATA
#define DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddLight); \
	DECLARE_FUNCTION(execAddMaterialHelper); \
	DECLARE_FUNCTION(execDeactivateTick); \
	DECLARE_FUNCTION(execRegisterForTick); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetLightCurve); \
	DECLARE_FUNCTION(execSetLightToMaxValue); \
	DECLARE_FUNCTION(execSetMaxLength); \
	DECLARE_FUNCTION(execSetMinLength); \
	DECLARE_FUNCTION(execSetRandomizeLength);


#define DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddLight); \
	DECLARE_FUNCTION(execAddMaterialHelper); \
	DECLARE_FUNCTION(execDeactivateTick); \
	DECLARE_FUNCTION(execRegisterForTick); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetLightCurve); \
	DECLARE_FUNCTION(execSetLightToMaxValue); \
	DECLARE_FUNCTION(execSetMaxLength); \
	DECLARE_FUNCTION(execSetMinLength); \
	DECLARE_FUNCTION(execSetRandomizeLength);


#define DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightIntensityTimelineComponent(); \
	friend struct Z_Construct_UClass_ULightIntensityTimelineComponent_Statics; \
public: \
	DECLARE_CLASS(ULightIntensityTimelineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GFXUtilities"), NO_API) \
	DECLARE_SERIALIZER(ULightIntensityTimelineComponent)


#define DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesULightIntensityTimelineComponent(); \
	friend struct Z_Construct_UClass_ULightIntensityTimelineComponent_Statics; \
public: \
	DECLARE_CLASS(ULightIntensityTimelineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GFXUtilities"), NO_API) \
	DECLARE_SERIALIZER(ULightIntensityTimelineComponent)


#define DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULightIntensityTimelineComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightIntensityTimelineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightIntensityTimelineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightIntensityTimelineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightIntensityTimelineComponent(ULightIntensityTimelineComponent&&); \
	NO_API ULightIntensityTimelineComponent(const ULightIntensityTimelineComponent&); \
public:


#define DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightIntensityTimelineComponent(ULightIntensityTimelineComponent&&); \
	NO_API ULightIntensityTimelineComponent(const ULightIntensityTimelineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightIntensityTimelineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightIntensityTimelineComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULightIntensityTimelineComponent)


#define DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_15_PROLOG
#define DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_SPARSE_DATA \
	DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_INCLASS \
	DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_SPARSE_DATA \
	DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GFXUTILITIES_API UClass* StaticClass<class ULightIntensityTimelineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_GFXUtilities_Public_LightIntensityTimelineComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
