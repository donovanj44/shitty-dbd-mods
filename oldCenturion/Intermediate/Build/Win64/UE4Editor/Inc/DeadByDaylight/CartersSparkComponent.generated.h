// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class UInteractionDefinition;
#ifdef DEADBYDAYLIGHT_CartersSparkComponent_generated_h
#error "CartersSparkComponent.generated.h already included, missing '#pragma once' in CartersSparkComponent.h"
#endif
#define DEADBYDAYLIGHT_CartersSparkComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_RPC_WRAPPERS \
	virtual bool Multicast_OnShockTherapyCooldownCheatEntered_Validate(); \
	virtual void Multicast_OnShockTherapyCooldownCheatEntered_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_AddTotallyInsaneSurvivor); \
	DECLARE_FUNCTION(execAuthority_RegisterToGameEvents); \
	DECLARE_FUNCTION(execGetStaticBlastCooldownPercentElapsed); \
	DECLARE_FUNCTION(execIsShockTherapyOnCooldown); \
	DECLARE_FUNCTION(execIsStaticBlastOnCooldown); \
	DECLARE_FUNCTION(execMulticast_OnShockTherapyCooldownCheatEntered); \
	DECLARE_FUNCTION(execOnRequestAndBeginInteraction); \
	DECLARE_FUNCTION(execTriggerShockTherapyCooldown); \
	DECLARE_FUNCTION(execTriggerStaticBlastCooldown);


#define DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Multicast_OnShockTherapyCooldownCheatEntered_Validate(); \
	virtual void Multicast_OnShockTherapyCooldownCheatEntered_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_AddTotallyInsaneSurvivor); \
	DECLARE_FUNCTION(execAuthority_RegisterToGameEvents); \
	DECLARE_FUNCTION(execGetStaticBlastCooldownPercentElapsed); \
	DECLARE_FUNCTION(execIsShockTherapyOnCooldown); \
	DECLARE_FUNCTION(execIsStaticBlastOnCooldown); \
	DECLARE_FUNCTION(execMulticast_OnShockTherapyCooldownCheatEntered); \
	DECLARE_FUNCTION(execOnRequestAndBeginInteraction); \
	DECLARE_FUNCTION(execTriggerShockTherapyCooldown); \
	DECLARE_FUNCTION(execTriggerStaticBlastCooldown);


#define DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_EVENT_PARMS
#define DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCartersSparkComponent(); \
	friend struct Z_Construct_UClass_UCartersSparkComponent_Statics; \
public: \
	DECLARE_CLASS(UCartersSparkComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCartersSparkComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCartersSparkComponent(); \
	friend struct Z_Construct_UClass_UCartersSparkComponent_Statics; \
public: \
	DECLARE_CLASS(UCartersSparkComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCartersSparkComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCartersSparkComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCartersSparkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCartersSparkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCartersSparkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCartersSparkComponent(UCartersSparkComponent&&); \
	NO_API UCartersSparkComponent(const UCartersSparkComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCartersSparkComponent(UCartersSparkComponent&&); \
	NO_API UCartersSparkComponent(const UCartersSparkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCartersSparkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCartersSparkComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCartersSparkComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___staticBlastEnabled() { return STRUCT_OFFSET(UCartersSparkComponent, _staticBlastEnabled); } \
	FORCEINLINE static uint32 __PPO___totallyInsanePlayers() { return STRUCT_OFFSET(UCartersSparkComponent, _totallyInsanePlayers); } \
	FORCEINLINE static uint32 __PPO___owningPlayer() { return STRUCT_OFFSET(UCartersSparkComponent, _owningPlayer); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCartersSparkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CartersSparkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
