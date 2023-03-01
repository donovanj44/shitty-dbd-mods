// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameEventData;
struct FBloodOrbDropParams;
enum class ECamperDamageState : uint8;
#ifdef THEONI_BloodOrbDropperComponent_generated_h
#error "BloodOrbDropperComponent.generated.h already included, missing '#pragma once' in BloodOrbDropperComponent.h"
#endif
#define THEONI_BloodOrbDropperComponent_generated_h

#define DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnCamperCrouched); \
	DECLARE_FUNCTION(execAuthority_OnCamperHooked); \
	DECLARE_FUNCTION(execAuthority_OnCamperUnhooked); \
	DECLARE_FUNCTION(execAuthority_OnDropOrbsGameEvent); \
	DECLARE_FUNCTION(execAuthority_OnOwningCamperDamageStateChanged); \
	DECLARE_FUNCTION(execAuthority_SetPaused); \
	DECLARE_FUNCTION(execDBD_DropBloodOrbs);


#define DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnCamperCrouched); \
	DECLARE_FUNCTION(execAuthority_OnCamperHooked); \
	DECLARE_FUNCTION(execAuthority_OnCamperUnhooked); \
	DECLARE_FUNCTION(execAuthority_OnDropOrbsGameEvent); \
	DECLARE_FUNCTION(execAuthority_OnOwningCamperDamageStateChanged); \
	DECLARE_FUNCTION(execAuthority_SetPaused); \
	DECLARE_FUNCTION(execDBD_DropBloodOrbs);


#define DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBloodOrbDropperComponent(); \
	friend struct Z_Construct_UClass_UBloodOrbDropperComponent_Statics; \
public: \
	DECLARE_CLASS(UBloodOrbDropperComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(UBloodOrbDropperComponent)


#define DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBloodOrbDropperComponent(); \
	friend struct Z_Construct_UClass_UBloodOrbDropperComponent_Statics; \
public: \
	DECLARE_CLASS(UBloodOrbDropperComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(UBloodOrbDropperComponent)


#define DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBloodOrbDropperComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBloodOrbDropperComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBloodOrbDropperComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBloodOrbDropperComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBloodOrbDropperComponent(UBloodOrbDropperComponent&&); \
	NO_API UBloodOrbDropperComponent(const UBloodOrbDropperComponent&); \
public:


#define DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBloodOrbDropperComponent(UBloodOrbDropperComponent&&); \
	NO_API UBloodOrbDropperComponent(const UBloodOrbDropperComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBloodOrbDropperComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBloodOrbDropperComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBloodOrbDropperComponent)


#define DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_10_PROLOG
#define DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_INCLASS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEONI_API UClass* StaticClass<class UBloodOrbDropperComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheOni_Public_BloodOrbDropperComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
