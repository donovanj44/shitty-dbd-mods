// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTextureCube;
#ifdef DEADBYDAYLIGHT_LightingHelper_generated_h
#error "LightingHelper.generated.h already included, missing '#pragma once' in LightingHelper.h"
#endif
#define DEADBYDAYLIGHT_LightingHelper_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDBD_ModifyExposure); \
	DECLARE_FUNCTION(execGetSourceLevelLightingClass); \
	DECLARE_FUNCTION(execGetTextureCube); \
	DECLARE_FUNCTION(execToggleDreamworldLighting);


#define DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDBD_ModifyExposure); \
	DECLARE_FUNCTION(execGetSourceLevelLightingClass); \
	DECLARE_FUNCTION(execGetTextureCube); \
	DECLARE_FUNCTION(execToggleDreamworldLighting);


#define DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightingHelper(); \
	friend struct Z_Construct_UClass_ULightingHelper_Statics; \
public: \
	DECLARE_CLASS(ULightingHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ULightingHelper)


#define DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULightingHelper(); \
	friend struct Z_Construct_UClass_ULightingHelper_Statics; \
public: \
	DECLARE_CLASS(ULightingHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ULightingHelper)


#define DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULightingHelper(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightingHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightingHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightingHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightingHelper(ULightingHelper&&); \
	NO_API ULightingHelper(const ULightingHelper&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightingHelper(ULightingHelper&&); \
	NO_API ULightingHelper(const ULightingHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightingHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightingHelper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULightingHelper)


#define DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___levelLighting() { return STRUCT_OFFSET(ULightingHelper, _levelLighting); } \
	FORCEINLINE static uint32 __PPO___levelLightingFixed() { return STRUCT_OFFSET(ULightingHelper, _levelLightingFixed); } \
	FORCEINLINE static uint32 __PPO___levelLightingSpawned() { return STRUCT_OFFSET(ULightingHelper, _levelLightingSpawned); } \
	FORCEINLINE static uint32 __PPO___levelLightingWithoutExposure() { return STRUCT_OFFSET(ULightingHelper, _levelLightingWithoutExposure); } \
	FORCEINLINE static uint32 __PPO___adaptiveShadowMapControllersActor() { return STRUCT_OFFSET(ULightingHelper, _adaptiveShadowMapControllersActor); } \
	FORCEINLINE static uint32 __PPO___lightingInterpolator() { return STRUCT_OFFSET(ULightingHelper, _lightingInterpolator); } \
	FORCEINLINE static uint32 __PPO___lightingFactory() { return STRUCT_OFFSET(ULightingHelper, _lightingFactory); } \
	FORCEINLINE static uint32 __PPO___postProcessCache() { return STRUCT_OFFSET(ULightingHelper, _postProcessCache); } \
	FORCEINLINE static uint32 __PPO___bIsDreamworldActive() { return STRUCT_OFFSET(ULightingHelper, _bIsDreamworldActive); }


#define DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ULightingHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_LightingHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
