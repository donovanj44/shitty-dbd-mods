// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayNotificationData;
class ADBDPlayer;
enum class EStatusEffectType : uint8;
#ifdef DEADBYDAYLIGHT_StatusEffect_generated_h
#error "StatusEffect.generated.h already included, missing '#pragma once' in StatusEffect.h"
#endif
#define DEADBYDAYLIGHT_StatusEffect_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_RPC_WRAPPERS \
	virtual void Authority_EndSelf_Implementation(); \
	virtual bool GetShouldDisplay_Implementation() const; \
	virtual void Multicast_SetRemainingLifetime_Implementation(float lifetime); \
	virtual void Multicast_SetRemainingLifetimeInitialized_Implementation(bool remainingLifetimeInitialized); \
	virtual void OnShouldDisplayChanged_Implementation(bool currentValue); \
	virtual void OnShouldOriginatingPlayerChange_Implementation(); \
	virtual bool ShouldDisplayStatusEffectIcon_Implementation() const; \
 \
	DECLARE_FUNCTION(execAuthority_EndSelf); \
	DECLARE_FUNCTION(execAuthority_OnOriginatingPlayerEndPlay); \
	DECLARE_FUNCTION(execAuthority_RemoveSelf); \
	DECLARE_FUNCTION(execAuthority_SetRemainingLifetime); \
	DECLARE_FUNCTION(execBroadcastGameEventNotification); \
	DECLARE_FUNCTION(execBroadcastOriginatorGameEventNotification); \
	DECLARE_FUNCTION(execFireActiveStatusEffectEvent); \
	DECLARE_FUNCTION(execGetCustomParam); \
	DECLARE_FUNCTION(execGetLifetimeDuration); \
	DECLARE_FUNCTION(execGetOriginatingPlayer); \
	DECLARE_FUNCTION(execGetShouldDisplay); \
	DECLARE_FUNCTION(execGetStatusEffectCooldownRate); \
	DECLARE_FUNCTION(execGetStatusEffectType); \
	DECLARE_FUNCTION(execInitializeLifetime); \
	DECLARE_FUNCTION(execIsInOriginatorRange); \
	DECLARE_FUNCTION(execIsKillerInOriginatorRange); \
	DECLARE_FUNCTION(execIsOriginatorAlive); \
	DECLARE_FUNCTION(execIsOriginatorHooked); \
	DECLARE_FUNCTION(execMulticast_SetRemainingLifetime); \
	DECLARE_FUNCTION(execMulticast_SetRemainingLifetimeInitialized); \
	DECLARE_FUNCTION(execOnRep_ModifierData); \
	DECLARE_FUNCTION(execOnRep_ShouldDisplay); \
	DECLARE_FUNCTION(execOnRep_ShouldOriginatingPlayerChange); \
	DECLARE_FUNCTION(execOnRep_StatusInitializationData); \
	DECLARE_FUNCTION(execOnShouldDisplayChanged); \
	DECLARE_FUNCTION(execOnShouldOriginatingPlayerChange); \
	DECLARE_FUNCTION(execSetShouldDisplay); \
	DECLARE_FUNCTION(execSetStatusEffectIconPercentage); \
	DECLARE_FUNCTION(execShouldDisplayStatusEffectIcon);


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Authority_EndSelf_Implementation(); \
	virtual bool GetShouldDisplay_Implementation() const; \
	virtual void Multicast_SetRemainingLifetime_Implementation(float lifetime); \
	virtual void Multicast_SetRemainingLifetimeInitialized_Implementation(bool remainingLifetimeInitialized); \
	virtual void OnShouldDisplayChanged_Implementation(bool currentValue); \
	virtual void OnShouldOriginatingPlayerChange_Implementation(); \
	virtual bool ShouldDisplayStatusEffectIcon_Implementation() const; \
 \
	DECLARE_FUNCTION(execAuthority_EndSelf); \
	DECLARE_FUNCTION(execAuthority_OnOriginatingPlayerEndPlay); \
	DECLARE_FUNCTION(execAuthority_RemoveSelf); \
	DECLARE_FUNCTION(execAuthority_SetRemainingLifetime); \
	DECLARE_FUNCTION(execBroadcastGameEventNotification); \
	DECLARE_FUNCTION(execBroadcastOriginatorGameEventNotification); \
	DECLARE_FUNCTION(execFireActiveStatusEffectEvent); \
	DECLARE_FUNCTION(execGetCustomParam); \
	DECLARE_FUNCTION(execGetLifetimeDuration); \
	DECLARE_FUNCTION(execGetOriginatingPlayer); \
	DECLARE_FUNCTION(execGetShouldDisplay); \
	DECLARE_FUNCTION(execGetStatusEffectCooldownRate); \
	DECLARE_FUNCTION(execGetStatusEffectType); \
	DECLARE_FUNCTION(execInitializeLifetime); \
	DECLARE_FUNCTION(execIsInOriginatorRange); \
	DECLARE_FUNCTION(execIsKillerInOriginatorRange); \
	DECLARE_FUNCTION(execIsOriginatorAlive); \
	DECLARE_FUNCTION(execIsOriginatorHooked); \
	DECLARE_FUNCTION(execMulticast_SetRemainingLifetime); \
	DECLARE_FUNCTION(execMulticast_SetRemainingLifetimeInitialized); \
	DECLARE_FUNCTION(execOnRep_ModifierData); \
	DECLARE_FUNCTION(execOnRep_ShouldDisplay); \
	DECLARE_FUNCTION(execOnRep_ShouldOriginatingPlayerChange); \
	DECLARE_FUNCTION(execOnRep_StatusInitializationData); \
	DECLARE_FUNCTION(execOnShouldDisplayChanged); \
	DECLARE_FUNCTION(execOnShouldOriginatingPlayerChange); \
	DECLARE_FUNCTION(execSetShouldDisplay); \
	DECLARE_FUNCTION(execSetStatusEffectIconPercentage); \
	DECLARE_FUNCTION(execShouldDisplayStatusEffectIcon);


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_EVENT_PARMS \
	struct StatusEffect_eventGetShouldDisplay_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		StatusEffect_eventGetShouldDisplay_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct StatusEffect_eventMulticast_SetRemainingLifetime_Parms \
	{ \
		float lifetime; \
	}; \
	struct StatusEffect_eventMulticast_SetRemainingLifetimeInitialized_Parms \
	{ \
		bool remainingLifetimeInitialized; \
	}; \
	struct StatusEffect_eventOnShouldDisplayChanged_Parms \
	{ \
		bool currentValue; \
	}; \
	struct StatusEffect_eventShouldDisplayStatusEffectIcon_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		StatusEffect_eventShouldDisplayStatusEffectIcon_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatusEffect(); \
	friend struct Z_Construct_UClass_UStatusEffect_Statics; \
public: \
	DECLARE_CLASS(UStatusEffect, UGameplayModifierContainer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UStatusEffect) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ModifierData=NETFIELD_REP_START, \
		ShouldDisplay, \
		_statusInitializationData, \
		NETFIELD_REP_END=_statusInitializationData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUStatusEffect(); \
	friend struct Z_Construct_UClass_UStatusEffect_Statics; \
public: \
	DECLARE_CLASS(UStatusEffect, UGameplayModifierContainer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UStatusEffect) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ModifierData=NETFIELD_REP_START, \
		ShouldDisplay, \
		_statusInitializationData, \
		NETFIELD_REP_END=_statusInitializationData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatusEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatusEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatusEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatusEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatusEffect(UStatusEffect&&); \
	NO_API UStatusEffect(const UStatusEffect&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatusEffect(UStatusEffect&&); \
	NO_API UStatusEffect(const UStatusEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatusEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatusEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatusEffect)


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ModifierData() { return STRUCT_OFFSET(UStatusEffect, ModifierData); } \
	FORCEINLINE static uint32 __PPO__ShouldDisplay() { return STRUCT_OFFSET(UStatusEffect, ShouldDisplay); } \
	FORCEINLINE static uint32 __PPO__CustomParam() { return STRUCT_OFFSET(UStatusEffect, CustomParam); } \
	FORCEINLINE static uint32 __PPO___removeOnRemainingLifetimeEnded() { return STRUCT_OFFSET(UStatusEffect, _removeOnRemainingLifetimeEnded); } \
	FORCEINLINE static uint32 __PPO__BroadcastAsStatusEffectWhenApplicable() { return STRUCT_OFFSET(UStatusEffect, BroadcastAsStatusEffectWhenApplicable); } \
	FORCEINLINE static uint32 __PPO__BroadcastAsStatusEffectByActivationTimer() { return STRUCT_OFFSET(UStatusEffect, BroadcastAsStatusEffectByActivationTimer); } \
	FORCEINLINE static uint32 __PPO__BroadcastAsStatusEffectWhenLifeRemains() { return STRUCT_OFFSET(UStatusEffect, BroadcastAsStatusEffectWhenLifeRemains); } \
	FORCEINLINE static uint32 __PPO__BroadcastAsStatusEffectByFunction() { return STRUCT_OFFSET(UStatusEffect, BroadcastAsStatusEffectByFunction); } \
	FORCEINLINE static uint32 __PPO__BroadcastAsStatusEffectAlways() { return STRUCT_OFFSET(UStatusEffect, BroadcastAsStatusEffectAlways); } \
	FORCEINLINE static uint32 __PPO__BroadcastOriginatorGameEventNotificationWhenFirstApplicable() { return STRUCT_OFFSET(UStatusEffect, BroadcastOriginatorGameEventNotificationWhenFirstApplicable); } \
	FORCEINLINE static uint32 __PPO___statusInitializationData() { return STRUCT_OFFSET(UStatusEffect, _statusInitializationData); } \
	FORCEINLINE static uint32 __PPO___nonStackingEffects() { return STRUCT_OFFSET(UStatusEffect, _nonStackingEffects); }


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_15_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UStatusEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_StatusEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
