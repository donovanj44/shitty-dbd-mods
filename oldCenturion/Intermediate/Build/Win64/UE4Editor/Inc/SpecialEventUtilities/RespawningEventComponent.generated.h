// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARespawnableInteractable;
#ifdef SPECIALEVENTUTILITIES_RespawningEventComponent_generated_h
#error "RespawningEventComponent.generated.h already included, missing '#pragma once' in RespawningEventComponent.h"
#endif
#define SPECIALEVENTUTILITIES_RespawningEventComponent_generated_h

#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnIsInteractingWithAnyRespawnableInteractableChanged); \
	DECLARE_FUNCTION(execDBD_ForceRespawnSpecialEventObject);


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnIsInteractingWithAnyRespawnableInteractableChanged); \
	DECLARE_FUNCTION(execDBD_ForceRespawnSpecialEventObject);


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURespawningEventComponent(); \
	friend struct Z_Construct_UClass_URespawningEventComponent_Statics; \
public: \
	DECLARE_CLASS(URespawningEventComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpecialEventUtilities"), NO_API) \
	DECLARE_SERIALIZER(URespawningEventComponent)


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesURespawningEventComponent(); \
	friend struct Z_Construct_UClass_URespawningEventComponent_Statics; \
public: \
	DECLARE_CLASS(URespawningEventComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpecialEventUtilities"), NO_API) \
	DECLARE_SERIALIZER(URespawningEventComponent)


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URespawningEventComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URespawningEventComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URespawningEventComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URespawningEventComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URespawningEventComponent(URespawningEventComponent&&); \
	NO_API URespawningEventComponent(const URespawningEventComponent&); \
public:


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URespawningEventComponent(URespawningEventComponent&&); \
	NO_API URespawningEventComponent(const URespawningEventComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URespawningEventComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URespawningEventComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URespawningEventComponent)


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___respawnableStrategy() { return STRUCT_OFFSET(URespawningEventComponent, _respawnableStrategy); } \
	FORCEINLINE static uint32 __PPO___respawnablePositioner() { return STRUCT_OFFSET(URespawningEventComponent, _respawnablePositioner); }


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_10_PROLOG
#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_INCLASS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPECIALEVENTUTILITIES_API UClass* StaticClass<class URespawningEventComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_SpecialEventUtilities_Public_RespawningEventComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
