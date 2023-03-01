// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
class UPrimitiveComponent;
struct FHitResult;
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_TriggerableWorldObjectComponent_generated_h
#error "TriggerableWorldObjectComponent.generated.h already included, missing '#pragma once' in TriggerableWorldObjectComponent.h"
#endif
#define DEADBYDAYLIGHT_TriggerableWorldObjectComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_13_DELEGATE \
static inline void FTriggerableWorldObjectComponentOnTriggerReset_DelegateWrapper(const FMulticastScriptDelegate& TriggerableWorldObjectComponentOnTriggerReset) \
{ \
	TriggerableWorldObjectComponentOnTriggerReset.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_12_DELEGATE \
struct _Script_DeadByDaylight_eventTriggerableWorldObjectComponentOnTriggered_Parms \
{ \
	AActor* Instigator; \
	FVector Location; \
}; \
static inline void FTriggerableWorldObjectComponentOnTriggered_DelegateWrapper(const FMulticastScriptDelegate& TriggerableWorldObjectComponentOnTriggered, AActor* Instigator, FVector Location) \
{ \
	_Script_DeadByDaylight_eventTriggerableWorldObjectComponentOnTriggered_Parms Parms; \
	Parms.Instigator=Instigator; \
	Parms.Location=Location; \
	TriggerableWorldObjectComponentOnTriggered.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_RPC_WRAPPERS \
	virtual bool CanPlayerTriggerConditional_Implementation(ADBDPlayer* player); \
	virtual bool CanPlayerTriggerGuaranteed_Implementation(ADBDPlayer* player); \
	virtual void GetConditionalModifiers_Implementation(ADBDPlayer* player, float& outAdditive, float& outMultiplicative); \
	virtual void Multicast_OnTriggered_Implementation(AActor* instigator, FVector triggerLocation); \
	virtual void Multicast_OnTriggerReset_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_ConditionalVolumeBeginOverlap); \
	DECLARE_FUNCTION(execAuthority_ConditionalVolumeEndOverlap); \
	DECLARE_FUNCTION(execAuthority_GuaranteedVolumeOverlap); \
	DECLARE_FUNCTION(execAuthority_ResetTrigger); \
	DECLARE_FUNCTION(execAuthority_Trigger); \
	DECLARE_FUNCTION(execCanPlayerTriggerConditional); \
	DECLARE_FUNCTION(execCanPlayerTriggerGuaranteed); \
	DECLARE_FUNCTION(execGetConditionalModifiers); \
	DECLARE_FUNCTION(execMulticast_OnTriggered); \
	DECLARE_FUNCTION(execMulticast_OnTriggerReset); \
	DECLARE_FUNCTION(execSetConditionalTriggerVolume); \
	DECLARE_FUNCTION(execSetGuaranteedTriggerVolume);


#define DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanPlayerTriggerConditional_Implementation(ADBDPlayer* player); \
	virtual bool CanPlayerTriggerGuaranteed_Implementation(ADBDPlayer* player); \
	virtual void GetConditionalModifiers_Implementation(ADBDPlayer* player, float& outAdditive, float& outMultiplicative); \
	virtual void Multicast_OnTriggered_Implementation(AActor* instigator, FVector triggerLocation); \
	virtual void Multicast_OnTriggerReset_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_ConditionalVolumeBeginOverlap); \
	DECLARE_FUNCTION(execAuthority_ConditionalVolumeEndOverlap); \
	DECLARE_FUNCTION(execAuthority_GuaranteedVolumeOverlap); \
	DECLARE_FUNCTION(execAuthority_ResetTrigger); \
	DECLARE_FUNCTION(execAuthority_Trigger); \
	DECLARE_FUNCTION(execCanPlayerTriggerConditional); \
	DECLARE_FUNCTION(execCanPlayerTriggerGuaranteed); \
	DECLARE_FUNCTION(execGetConditionalModifiers); \
	DECLARE_FUNCTION(execMulticast_OnTriggered); \
	DECLARE_FUNCTION(execMulticast_OnTriggerReset); \
	DECLARE_FUNCTION(execSetConditionalTriggerVolume); \
	DECLARE_FUNCTION(execSetGuaranteedTriggerVolume);


#define DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_EVENT_PARMS \
	struct TriggerableWorldObjectComponent_eventCanPlayerTriggerConditional_Parms \
	{ \
		ADBDPlayer* player; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerableWorldObjectComponent_eventCanPlayerTriggerConditional_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerableWorldObjectComponent_eventCanPlayerTriggerGuaranteed_Parms \
	{ \
		ADBDPlayer* player; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerableWorldObjectComponent_eventCanPlayerTriggerGuaranteed_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerableWorldObjectComponent_eventGetConditionalModifiers_Parms \
	{ \
		ADBDPlayer* player; \
		float outAdditive; \
		float outMultiplicative; \
	}; \
	struct TriggerableWorldObjectComponent_eventMulticast_OnTriggered_Parms \
	{ \
		AActor* instigator; \
		FVector triggerLocation; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerableWorldObjectComponent(); \
	friend struct Z_Construct_UClass_UTriggerableWorldObjectComponent_Statics; \
public: \
	DECLARE_CLASS(UTriggerableWorldObjectComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UTriggerableWorldObjectComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerableWorldObjectComponent(); \
	friend struct Z_Construct_UClass_UTriggerableWorldObjectComponent_Statics; \
public: \
	DECLARE_CLASS(UTriggerableWorldObjectComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UTriggerableWorldObjectComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerableWorldObjectComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerableWorldObjectComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerableWorldObjectComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerableWorldObjectComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerableWorldObjectComponent(UTriggerableWorldObjectComponent&&); \
	NO_API UTriggerableWorldObjectComponent(const UTriggerableWorldObjectComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerableWorldObjectComponent(UTriggerableWorldObjectComponent&&); \
	NO_API UTriggerableWorldObjectComponent(const UTriggerableWorldObjectComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerableWorldObjectComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerableWorldObjectComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTriggerableWorldObjectComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___triggerResetTime() { return STRUCT_OFFSET(UTriggerableWorldObjectComponent, _triggerResetTime); } \
	FORCEINLINE static uint32 __PPO___randomChance() { return STRUCT_OFFSET(UTriggerableWorldObjectComponent, _randomChance); } \
	FORCEINLINE static uint32 __PPO___rollFrequency() { return STRUCT_OFFSET(UTriggerableWorldObjectComponent, _rollFrequency); } \
	FORCEINLINE static uint32 __PPO___conditionalTriggerVolume() { return STRUCT_OFFSET(UTriggerableWorldObjectComponent, _conditionalTriggerVolume); } \
	FORCEINLINE static uint32 __PPO___conditionalVolumeOverlappingPlayers() { return STRUCT_OFFSET(UTriggerableWorldObjectComponent, _conditionalVolumeOverlappingPlayers); } \
	FORCEINLINE static uint32 __PPO___guaranteedTriggerVolume() { return STRUCT_OFFSET(UTriggerableWorldObjectComponent, _guaranteedTriggerVolume); }


#define DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_15_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UTriggerableWorldObjectComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_TriggerableWorldObjectComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
