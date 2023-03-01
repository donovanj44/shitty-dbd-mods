// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
class UDirectionalLightComponent;
class USkyLightComponent;
class UExponentialHeightFogComponent;
class UPostProcessComponent;
class UObject;
class AActor;
struct FLinearColor;
#ifdef DEADBYDAYLIGHT_BaseSky_generated_h
#error "BaseSky.generated.h already included, missing '#pragma once' in BaseSky.h"
#endif
#define DEADBYDAYLIGHT_BaseSky_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_RPC_WRAPPERS \
	virtual UPostProcessComponent* GetPostprocessComponent_Implementation(); \
	virtual void OnAlphaChanged_Implementation(float newAlpha, AActor* other); \
	virtual void OnFadeBegin_Implementation(AActor* other); \
	virtual void OnFadeEnd_Implementation(AActor* other); \
 \
	DECLARE_FUNCTION(execCopyComponentsSettingsFromSource); \
	DECLARE_FUNCTION(execGetPostprocessComponent); \
	DECLARE_FUNCTION(execOnAlphaChanged); \
	DECLARE_FUNCTION(execOnFadeBegin); \
	DECLARE_FUNCTION(execOnFadeEnd); \
	DECLARE_FUNCTION(execSetCullDistance); \
	DECLARE_FUNCTION(execSetProbesTint);


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UPostProcessComponent* GetPostprocessComponent_Implementation(); \
	virtual void OnAlphaChanged_Implementation(float newAlpha, AActor* other); \
	virtual void OnFadeBegin_Implementation(AActor* other); \
	virtual void OnFadeEnd_Implementation(AActor* other); \
 \
	DECLARE_FUNCTION(execCopyComponentsSettingsFromSource); \
	DECLARE_FUNCTION(execGetPostprocessComponent); \
	DECLARE_FUNCTION(execOnAlphaChanged); \
	DECLARE_FUNCTION(execOnFadeBegin); \
	DECLARE_FUNCTION(execOnFadeEnd); \
	DECLARE_FUNCTION(execSetCullDistance); \
	DECLARE_FUNCTION(execSetProbesTint);


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_EVENT_PARMS \
	struct BaseSky_eventGetPostprocessComponent_Parms \
	{ \
		UPostProcessComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseSky_eventGetPostprocessComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct BaseSky_eventOnAlphaChanged_Parms \
	{ \
		float newAlpha; \
		AActor* other; \
	}; \
	struct BaseSky_eventOnFadeBegin_Parms \
	{ \
		AActor* other; \
	}; \
	struct BaseSky_eventOnFadeEnd_Parms \
	{ \
		AActor* other; \
	}; \
	struct BaseSky_eventToggleDreamworldLighting_Parms \
	{ \
		bool toggleOn; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseSky(); \
	friend struct Z_Construct_UClass_ABaseSky_Statics; \
public: \
	DECLARE_CLASS(ABaseSky, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ABaseSky) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseSky*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABaseSky(); \
	friend struct Z_Construct_UClass_ABaseSky_Statics; \
public: \
	DECLARE_CLASS(ABaseSky, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ABaseSky) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseSky*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseSky(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseSky) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseSky); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseSky); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseSky(ABaseSky&&); \
	NO_API ABaseSky(const ABaseSky&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseSky(ABaseSky&&); \
	NO_API ABaseSky(const ABaseSky&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseSky); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseSky); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseSky)


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AdjustCullDistance() { return STRUCT_OFFSET(ABaseSky, AdjustCullDistance); } \
	FORCEINLINE static uint32 __PPO__EnableIBL() { return STRUCT_OFFSET(ABaseSky, EnableIBL); } \
	FORCEINLINE static uint32 __PPO__IBLContributionMultiplier() { return STRUCT_OFFSET(ABaseSky, IBLContributionMultiplier); } \
	FORCEINLINE static uint32 __PPO__ProbesTintColor() { return STRUCT_OFFSET(ABaseSky, ProbesTintColor); } \
	FORCEINLINE static uint32 __PPO__ProbesSaturationValue() { return STRUCT_OFFSET(ABaseSky, ProbesSaturationValue); }


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_15_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ABaseSky>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_BaseSky_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
