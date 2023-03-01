// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class UBloodOrbAbsorberComponent;
class UBloodOrbVisibilityComponent;
#ifdef THEONI_BloodOrbConfiguratorComponent_generated_h
#error "BloodOrbConfiguratorComponent.generated.h already included, missing '#pragma once' in BloodOrbConfiguratorComponent.h"
#endif
#define THEONI_BloodOrbConfiguratorComponent_generated_h

#define DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_SPARSE_DATA
#define DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_UpdateSurvivorBloodOrbDropperOnCrouchModifier); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execUpdateBloodOrbAttractSpeed); \
	DECLARE_FUNCTION(execUpdateKillerBloodOrbVisiblityRanges); \
	DECLARE_FUNCTION(execUpdateSurvivorBloodOrbVisibilityRange);


#define DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_UpdateSurvivorBloodOrbDropperOnCrouchModifier); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execUpdateBloodOrbAttractSpeed); \
	DECLARE_FUNCTION(execUpdateKillerBloodOrbVisiblityRanges); \
	DECLARE_FUNCTION(execUpdateSurvivorBloodOrbVisibilityRange);


#define DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBloodOrbConfiguratorComponent(); \
	friend struct Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics; \
public: \
	DECLARE_CLASS(UBloodOrbConfiguratorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(UBloodOrbConfiguratorComponent)


#define DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBloodOrbConfiguratorComponent(); \
	friend struct Z_Construct_UClass_UBloodOrbConfiguratorComponent_Statics; \
public: \
	DECLARE_CLASS(UBloodOrbConfiguratorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(UBloodOrbConfiguratorComponent)


#define DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBloodOrbConfiguratorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBloodOrbConfiguratorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBloodOrbConfiguratorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBloodOrbConfiguratorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBloodOrbConfiguratorComponent(UBloodOrbConfiguratorComponent&&); \
	NO_API UBloodOrbConfiguratorComponent(const UBloodOrbConfiguratorComponent&); \
public:


#define DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBloodOrbConfiguratorComponent(UBloodOrbConfiguratorComponent&&); \
	NO_API UBloodOrbConfiguratorComponent(const UBloodOrbConfiguratorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBloodOrbConfiguratorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBloodOrbConfiguratorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBloodOrbConfiguratorComponent)


#define DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___bloodOrbClass() { return STRUCT_OFFSET(UBloodOrbConfiguratorComponent, _bloodOrbClass); } \
	FORCEINLINE static uint32 __PPO___bloodOrbDropGameEvents() { return STRUCT_OFFSET(UBloodOrbConfiguratorComponent, _bloodOrbDropGameEvents); } \
	FORCEINLINE static uint32 __PPO___fadeDuration() { return STRUCT_OFFSET(UBloodOrbConfiguratorComponent, _fadeDuration); } \
	FORCEINLINE static uint32 __PPO___initialFadeOutDelay() { return STRUCT_OFFSET(UBloodOrbConfiguratorComponent, _initialFadeOutDelay); } \
	FORCEINLINE static uint32 __PPO___bloodOrbAuraColor() { return STRUCT_OFFSET(UBloodOrbConfiguratorComponent, _bloodOrbAuraColor); } \
	FORCEINLINE static uint32 __PPO___bloodOrbAttractedAuraColor() { return STRUCT_OFFSET(UBloodOrbConfiguratorComponent, _bloodOrbAttractedAuraColor); } \
	FORCEINLINE static uint32 __PPO___bloodOrbVisibilityRangeInterpolationSpeed() { return STRUCT_OFFSET(UBloodOrbConfiguratorComponent, _bloodOrbVisibilityRangeInterpolationSpeed); } \
	FORCEINLINE static uint32 __PPO___mobileBloodOrbRendererClass() { return STRUCT_OFFSET(UBloodOrbConfiguratorComponent, _mobileBloodOrbRendererClass); }


#define DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_15_PROLOG
#define DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_INCLASS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEONI_API UClass* StaticClass<class UBloodOrbConfiguratorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheOni_Public_BloodOrbConfiguratorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
