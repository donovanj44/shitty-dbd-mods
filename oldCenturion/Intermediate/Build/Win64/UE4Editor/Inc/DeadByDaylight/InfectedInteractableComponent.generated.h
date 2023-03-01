// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
class ADBDPlayer;
class AInteractable;
#ifdef DEADBYDAYLIGHT_InfectedInteractableComponent_generated_h
#error "InfectedInteractableComponent.generated.h already included, missing '#pragma once' in InfectedInteractableComponent.h"
#endif
#define DEADBYDAYLIGHT_InfectedInteractableComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_RPC_WRAPPERS \
	virtual void Multicast_DebugDisplayLifetime_Implementation(float remainingLifetime); \
	virtual void Multicast_DestroyComponent_Implementation(); \
	virtual void Multicast_FadeInVomit_Implementation(); \
	virtual void Multicast_FadeOutVomit_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_GetEquippingPlayer); \
	DECLARE_FUNCTION(execAuthority_IsAMaxSicknessSurvivorInteracting); \
	DECLARE_FUNCTION(execAuthority_OnHitWithVomit); \
	DECLARE_FUNCTION(execAuthority_OnOwningInteractableBeginOrEndUse); \
	DECLARE_FUNCTION(execGetOwningInteractable); \
	DECLARE_FUNCTION(execMulticast_DebugDisplayLifetime); \
	DECLARE_FUNCTION(execMulticast_DestroyComponent); \
	DECLARE_FUNCTION(execMulticast_FadeInVomit); \
	DECLARE_FUNCTION(execMulticast_FadeOutVomit); \
	DECLARE_FUNCTION(execSetInteractableMeshAlpha);


#define DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_DebugDisplayLifetime_Implementation(float remainingLifetime); \
	virtual void Multicast_DestroyComponent_Implementation(); \
	virtual void Multicast_FadeInVomit_Implementation(); \
	virtual void Multicast_FadeOutVomit_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_GetEquippingPlayer); \
	DECLARE_FUNCTION(execAuthority_IsAMaxSicknessSurvivorInteracting); \
	DECLARE_FUNCTION(execAuthority_OnHitWithVomit); \
	DECLARE_FUNCTION(execAuthority_OnOwningInteractableBeginOrEndUse); \
	DECLARE_FUNCTION(execGetOwningInteractable); \
	DECLARE_FUNCTION(execMulticast_DebugDisplayLifetime); \
	DECLARE_FUNCTION(execMulticast_DestroyComponent); \
	DECLARE_FUNCTION(execMulticast_FadeInVomit); \
	DECLARE_FUNCTION(execMulticast_FadeOutVomit); \
	DECLARE_FUNCTION(execSetInteractableMeshAlpha);


#define DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_EVENT_PARMS \
	struct InfectedInteractableComponent_eventMulticast_DebugDisplayLifetime_Parms \
	{ \
		float remainingLifetime; \
	}; \
	struct InfectedInteractableComponent_eventOnVomitAlphaUpdate_Parms \
	{ \
		float alpha; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInfectedInteractableComponent(); \
	friend struct Z_Construct_UClass_UInfectedInteractableComponent_Statics; \
public: \
	DECLARE_CLASS(UInfectedInteractableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UInfectedInteractableComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUInfectedInteractableComponent(); \
	friend struct Z_Construct_UClass_UInfectedInteractableComponent_Statics; \
public: \
	DECLARE_CLASS(UInfectedInteractableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UInfectedInteractableComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInfectedInteractableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInfectedInteractableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInfectedInteractableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInfectedInteractableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInfectedInteractableComponent(UInfectedInteractableComponent&&); \
	NO_API UInfectedInteractableComponent(const UInfectedInteractableComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInfectedInteractableComponent(UInfectedInteractableComponent&&); \
	NO_API UInfectedInteractableComponent(const UInfectedInteractableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInfectedInteractableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInfectedInteractableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInfectedInteractableComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VomitAlphaCurve() { return STRUCT_OFFSET(UInfectedInteractableComponent, VomitAlphaCurve); } \
	FORCEINLINE static uint32 __PPO__VomitAlphaParameterName() { return STRUCT_OFFSET(UInfectedInteractableComponent, VomitAlphaParameterName); } \
	FORCEINLINE static uint32 __PPO___vomitAlphaTimeline() { return STRUCT_OFFSET(UInfectedInteractableComponent, _vomitAlphaTimeline); }


#define DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_12_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UInfectedInteractableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_InfectedInteractableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
