// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UExponentialHeightFogComponent;
class ULightComponent;
class USkyLightComponent;
#ifdef DEADBYDAYLIGHT_LightingInterpolator_generated_h
#error "LightingInterpolator.generated.h already included, missing '#pragma once' in LightingInterpolator.h"
#endif
#define DEADBYDAYLIGHT_LightingInterpolator_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_11_DELEGATE \
static inline void FLightingInterpolatorOnInterpolationDone_DelegateWrapper(const FMulticastScriptDelegate& LightingInterpolatorOnInterpolationDone) \
{ \
	LightingInterpolatorOnInterpolationDone.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLerpHeightFog); \
	DECLARE_FUNCTION(execLerpLight); \
	DECLARE_FUNCTION(execLerpSkylight);


#define DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLerpHeightFog); \
	DECLARE_FUNCTION(execLerpLight); \
	DECLARE_FUNCTION(execLerpSkylight);


#define DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightingInterpolator(); \
	friend struct Z_Construct_UClass_ULightingInterpolator_Statics; \
public: \
	DECLARE_CLASS(ULightingInterpolator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ULightingInterpolator)


#define DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULightingInterpolator(); \
	friend struct Z_Construct_UClass_ULightingInterpolator_Statics; \
public: \
	DECLARE_CLASS(ULightingInterpolator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ULightingInterpolator)


#define DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULightingInterpolator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightingInterpolator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightingInterpolator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightingInterpolator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightingInterpolator(ULightingInterpolator&&); \
	NO_API ULightingInterpolator(const ULightingInterpolator&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightingInterpolator(ULightingInterpolator&&); \
	NO_API ULightingInterpolator(const ULightingInterpolator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightingInterpolator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightingInterpolator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULightingInterpolator)


#define DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___targetLighting() { return STRUCT_OFFSET(ULightingInterpolator, _targetLighting); }


#define DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ULightingInterpolator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_LightingInterpolator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
