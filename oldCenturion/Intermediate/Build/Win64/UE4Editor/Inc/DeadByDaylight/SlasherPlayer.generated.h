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
enum class EAttackType : uint8;
enum class EKillerAbilities : uint8;
enum class EStunType : uint8;
enum class EAttackZoneSet : uint8;
class UChaserCharacterComponent;
enum class ESlasherGuidedAction : uint8;
struct FRotator;
struct FVector;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FDateTime;
class USlasherTREmitterComponent;
class AActor;
class USceneComponent;
#ifdef DEADBYDAYLIGHT_SlasherPlayer_generated_h
#error "SlasherPlayer.generated.h already included, missing '#pragma once' in SlasherPlayer.h"
#endif
#define DEADBYDAYLIGHT_SlasherPlayer_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_48_DELEGATE \
struct _Script_DeadByDaylight_eventSlasherPlayerOnStalkModeChangedEvent_Parms \
{ \
	bool isInStalkMode; \
}; \
static inline void FSlasherPlayerOnStalkModeChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& SlasherPlayerOnStalkModeChangedEvent, bool isInStalkMode) \
{ \
	_Script_DeadByDaylight_eventSlasherPlayerOnStalkModeChangedEvent_Parms Parms; \
	Parms.isInStalkMode=isInStalkMode ? true : false; \
	SlasherPlayerOnStalkModeChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_47_DELEGATE \
static inline void FSlasherPlayerOnOffensiveAction_DelegateWrapper(const FMulticastScriptDelegate& SlasherPlayerOnOffensiveAction) \
{ \
	SlasherPlayerOnOffensiveAction.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_RPC_WRAPPERS \
	virtual bool CanAttack_BP_Implementation(const EAttackType attackType) const; \
	virtual bool CanGainRage_Implementation() const; \
	virtual bool CanPerformKillerAbility_Implementation(EKillerAbilities killerAbility) const; \
	virtual bool CanSlashAttack_BP_Implementation() const; \
	virtual bool Client_RequestStun_Validate(EStunType , ADBDPlayer* ); \
	virtual void Client_RequestStun_Implementation(EStunType stunType, ADBDPlayer* stunner); \
	virtual FVector GetPlayerDropOffPoint_Implementation() const; \
	virtual bool IsCloaking_Implementation() const; \
	virtual bool IsCrouchAvailable_BP_Implementation(); \
	virtual bool IsImmuneToObservingPlayerDetection_Implementation(const ADBDPlayer* observingPlayer) const; \
	virtual bool IsUncloaking_Implementation() const; \
	virtual bool Local_CancelAttack_Implementation(); \
	virtual void Multicast_DisplayAttackZones_Implementation(bool display); \
	virtual void Multicast_MergeLockOnDamageZones_Implementation(bool enable); \
	virtual void Multicast_SetAttackDetectionZoneSet_Implementation(EAttackZoneSet attackZoneSet); \
	virtual bool Multicast_SetGuidedAction_Validate(ESlasherGuidedAction ); \
	virtual void Multicast_SetGuidedAction_Implementation(ESlasherGuidedAction action); \
	virtual void OnKillerAbilityBeginActivate_Implementation(EKillerAbilities killerAbility); \
	virtual void OnKillerAbilityBeginDeactivate_Implementation(EKillerAbilities killerAbility, bool forced); \
	virtual void OnKillerAbilityEndActivate_Implementation(EKillerAbilities killerAbility); \
	virtual void OnKillerAbilityEndDeactivate_Implementation(EKillerAbilities killerAbility, bool forced); \
	virtual void OnKillerAbilityUpdateActivate_Implementation(EKillerAbilities killerAbility, float percent); \
	virtual bool Server_SendAttackInput_Validate(bool ); \
	virtual void Server_SendAttackInput_Implementation(bool pressed); \
	virtual bool ShouldApplyBloodlustSpeedModifier_Implementation() const; \
	virtual void SpawnSlasherPower_Implementation(); \
	virtual void UpdateRageTierEffect_Implementation(int32 previousTier, int32 currentTier); \
 \
	DECLARE_FUNCTION(execActionKillerPressed); \
	DECLARE_FUNCTION(execActionKillerReleased); \
	DECLARE_FUNCTION(execAttackInputPressed); \
	DECLARE_FUNCTION(execAttackInputReleased); \
	DECLARE_FUNCTION(execAuthority_AllowKilling); \
	DECLARE_FUNCTION(execAuthority_AttemptEscapeCarry); \
	DECLARE_FUNCTION(execAuthority_HandleKillerInterruptingSurvivor); \
	DECLARE_FUNCTION(execAuthority_SetInStalkMode); \
	DECLARE_FUNCTION(execBroadcastOffensiveAction); \
	DECLARE_FUNCTION(execBroadcastOnInstantTeleport); \
	DECLARE_FUNCTION(execCanAffectLocalPlayer); \
	DECLARE_FUNCTION(execCanAttack); \
	DECLARE_FUNCTION(execCanAttack_BP); \
	DECLARE_FUNCTION(execCancelAttackByInput); \
	DECLARE_FUNCTION(execCanEscapeCarry); \
	DECLARE_FUNCTION(execCanGainRage); \
	DECLARE_FUNCTION(execCanPerformKillerAbility); \
	DECLARE_FUNCTION(execCanPickupSurvivor); \
	DECLARE_FUNCTION(execCanSlashAttack_BP); \
	DECLARE_FUNCTION(execClient_RequestStun); \
	DECLARE_FUNCTION(execDBD_AllowKilling); \
	DECLARE_FUNCTION(execDBD_DisplayAttackZones); \
	DECLARE_FUNCTION(execDBD_MergeLockOnDamageZones); \
	DECLARE_FUNCTION(execDBD_SetAttackZones); \
	DECLARE_FUNCTION(execDecrementInterruptBlock); \
	DECLARE_FUNCTION(execGetAnimDirection); \
	DECLARE_FUNCTION(execGetBlindedPercent); \
	DECLARE_FUNCTION(execGetCarriedCamper); \
	DECLARE_FUNCTION(execGetChaserCharacterComponent); \
	DECLARE_FUNCTION(execGetCurrentRotationYaw); \
	DECLARE_FUNCTION(execGetDifferenceBetweenIdleNeutralAndCurrentRotationYaw); \
	DECLARE_FUNCTION(execGetGuidedAction); \
	DECLARE_FUNCTION(execGetIdleNeutralRotationYaw); \
	DECLARE_FUNCTION(execGetIsAttacking); \
	DECLARE_FUNCTION(execGetLightIntensity); \
	DECLARE_FUNCTION(execGetLookRotation); \
	DECLARE_FUNCTION(execGetObsessionTarget); \
	DECLARE_FUNCTION(execGetPlayerDropOffPoint); \
	DECLARE_FUNCTION(execGetPresenceTag); \
	DECLARE_FUNCTION(execGetRageTier); \
	DECLARE_FUNCTION(execGetSlasherAnimGameplayTags); \
	DECLARE_FUNCTION(execGetStalkTierWalkSpeedMultiplier); \
	DECLARE_FUNCTION(execGetStealthRatio); \
	DECLARE_FUNCTION(execGetStillnessStartTime); \
	DECLARE_FUNCTION(execGetSurvivorBeingKilled); \
	DECLARE_FUNCTION(execGetTerrorRadiusEmitter); \
	DECLARE_FUNCTION(execHasKillerAbility); \
	DECLARE_FUNCTION(execHasPreLevelGenerationModifier); \
	DECLARE_FUNCTION(execIncrementInterruptBlock); \
	DECLARE_FUNCTION(execIsAllowedToKill); \
	DECLARE_FUNCTION(execIsASurvivorInTerrorRadius); \
	DECLARE_FUNCTION(execIsCarrying); \
	DECLARE_FUNCTION(execIsChainBlinking); \
	DECLARE_FUNCTION(execIsChainsawSprinting); \
	DECLARE_FUNCTION(execIsChargingBlink); \
	DECLARE_FUNCTION(execIsCloaking); \
	DECLARE_FUNCTION(execIsCrouchAvailable_BP); \
	DECLARE_FUNCTION(execIsHooking); \
	DECLARE_FUNCTION(execIsIdling); \
	DECLARE_FUNCTION(execIsImmuneToObservingPlayerDetection); \
	DECLARE_FUNCTION(execIsInBlinkCooldown); \
	DECLARE_FUNCTION(execIsInterruptBlocked); \
	DECLARE_FUNCTION(execIsKilling); \
	DECLARE_FUNCTION(execIsOfferingAllowingKill); \
	DECLARE_FUNCTION(execIsUncloaking); \
	DECLARE_FUNCTION(execIsWalkLocked); \
	DECLARE_FUNCTION(execLocal_CancelAttack); \
	DECLARE_FUNCTION(execMulticast_DisplayAttackZones); \
	DECLARE_FUNCTION(execMulticast_MergeLockOnDamageZones); \
	DECLARE_FUNCTION(execMulticast_SetAttackDetectionZoneSet); \
	DECLARE_FUNCTION(execMulticast_SetGuidedAction); \
	DECLARE_FUNCTION(execOnAttackFinish); \
	DECLARE_FUNCTION(execOnAttackStart); \
	DECLARE_FUNCTION(execOnDropCamperEnd); \
	DECLARE_FUNCTION(execOnKillerAbilityBeginActivate); \
	DECLARE_FUNCTION(execOnKillerAbilityBeginDeactivate); \
	DECLARE_FUNCTION(execOnKillerAbilityEndActivate); \
	DECLARE_FUNCTION(execOnKillerAbilityEndDeactivate); \
	DECLARE_FUNCTION(execOnKillerAbilityUpdateActivate); \
	DECLARE_FUNCTION(execOnLoudNoiseIndicatorDestroyed); \
	DECLARE_FUNCTION(execOnLoudNoiseTriggered); \
	DECLARE_FUNCTION(execOnSurvivorKilled); \
	DECLARE_FUNCTION(execOnSurvivorsLeftChanged); \
	DECLARE_FUNCTION(execResetNeutralIdleRotationYaw); \
	DECLARE_FUNCTION(execServer_SendAttackInput); \
	DECLARE_FUNCTION(execSetAttackZonePivot); \
	DECLARE_FUNCTION(execSetCarriedCamper); \
	DECLARE_FUNCTION(execSetChainsawSprinting); \
	DECLARE_FUNCTION(execSetGuidedAction); \
	DECLARE_FUNCTION(execSetIsHookingSurvivor); \
	DECLARE_FUNCTION(execSetIsKilling); \
	DECLARE_FUNCTION(execSetLightIntensity); \
	DECLARE_FUNCTION(execSetStalkTierWalkSpeedMultiplier); \
	DECLARE_FUNCTION(execSetSurvivorBeingKilled); \
	DECLARE_FUNCTION(execShouldApplyBloodlustSpeedModifier); \
	DECLARE_FUNCTION(execShouldTurnInPlace); \
	DECLARE_FUNCTION(execShouldTurnInPlaceLeft); \
	DECLARE_FUNCTION(execShouldTurnInPlaceRight); \
	DECLARE_FUNCTION(execSpawnSlasherPower); \
	DECLARE_FUNCTION(execUpdateRageTierEffect); \
	DECLARE_FUNCTION(execWasRecentlyCloaked);


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanAttack_BP_Implementation(const EAttackType attackType) const; \
	virtual bool CanGainRage_Implementation() const; \
	virtual bool CanPerformKillerAbility_Implementation(EKillerAbilities killerAbility) const; \
	virtual bool CanSlashAttack_BP_Implementation() const; \
	virtual bool Client_RequestStun_Validate(EStunType , ADBDPlayer* ); \
	virtual void Client_RequestStun_Implementation(EStunType stunType, ADBDPlayer* stunner); \
	virtual FVector GetPlayerDropOffPoint_Implementation() const; \
	virtual bool IsCloaking_Implementation() const; \
	virtual bool IsCrouchAvailable_BP_Implementation(); \
	virtual bool IsImmuneToObservingPlayerDetection_Implementation(const ADBDPlayer* observingPlayer) const; \
	virtual bool IsUncloaking_Implementation() const; \
	virtual bool Local_CancelAttack_Implementation(); \
	virtual void Multicast_DisplayAttackZones_Implementation(bool display); \
	virtual void Multicast_MergeLockOnDamageZones_Implementation(bool enable); \
	virtual void Multicast_SetAttackDetectionZoneSet_Implementation(EAttackZoneSet attackZoneSet); \
	virtual bool Multicast_SetGuidedAction_Validate(ESlasherGuidedAction ); \
	virtual void Multicast_SetGuidedAction_Implementation(ESlasherGuidedAction action); \
	virtual void OnKillerAbilityBeginActivate_Implementation(EKillerAbilities killerAbility); \
	virtual void OnKillerAbilityBeginDeactivate_Implementation(EKillerAbilities killerAbility, bool forced); \
	virtual void OnKillerAbilityEndActivate_Implementation(EKillerAbilities killerAbility); \
	virtual void OnKillerAbilityEndDeactivate_Implementation(EKillerAbilities killerAbility, bool forced); \
	virtual void OnKillerAbilityUpdateActivate_Implementation(EKillerAbilities killerAbility, float percent); \
	virtual bool Server_SendAttackInput_Validate(bool ); \
	virtual void Server_SendAttackInput_Implementation(bool pressed); \
	virtual bool ShouldApplyBloodlustSpeedModifier_Implementation() const; \
	virtual void SpawnSlasherPower_Implementation(); \
	virtual void UpdateRageTierEffect_Implementation(int32 previousTier, int32 currentTier); \
 \
	DECLARE_FUNCTION(execActionKillerPressed); \
	DECLARE_FUNCTION(execActionKillerReleased); \
	DECLARE_FUNCTION(execAttackInputPressed); \
	DECLARE_FUNCTION(execAttackInputReleased); \
	DECLARE_FUNCTION(execAuthority_AllowKilling); \
	DECLARE_FUNCTION(execAuthority_AttemptEscapeCarry); \
	DECLARE_FUNCTION(execAuthority_HandleKillerInterruptingSurvivor); \
	DECLARE_FUNCTION(execAuthority_SetInStalkMode); \
	DECLARE_FUNCTION(execBroadcastOffensiveAction); \
	DECLARE_FUNCTION(execBroadcastOnInstantTeleport); \
	DECLARE_FUNCTION(execCanAffectLocalPlayer); \
	DECLARE_FUNCTION(execCanAttack); \
	DECLARE_FUNCTION(execCanAttack_BP); \
	DECLARE_FUNCTION(execCancelAttackByInput); \
	DECLARE_FUNCTION(execCanEscapeCarry); \
	DECLARE_FUNCTION(execCanGainRage); \
	DECLARE_FUNCTION(execCanPerformKillerAbility); \
	DECLARE_FUNCTION(execCanPickupSurvivor); \
	DECLARE_FUNCTION(execCanSlashAttack_BP); \
	DECLARE_FUNCTION(execClient_RequestStun); \
	DECLARE_FUNCTION(execDBD_AllowKilling); \
	DECLARE_FUNCTION(execDBD_DisplayAttackZones); \
	DECLARE_FUNCTION(execDBD_MergeLockOnDamageZones); \
	DECLARE_FUNCTION(execDBD_SetAttackZones); \
	DECLARE_FUNCTION(execDecrementInterruptBlock); \
	DECLARE_FUNCTION(execGetAnimDirection); \
	DECLARE_FUNCTION(execGetBlindedPercent); \
	DECLARE_FUNCTION(execGetCarriedCamper); \
	DECLARE_FUNCTION(execGetChaserCharacterComponent); \
	DECLARE_FUNCTION(execGetCurrentRotationYaw); \
	DECLARE_FUNCTION(execGetDifferenceBetweenIdleNeutralAndCurrentRotationYaw); \
	DECLARE_FUNCTION(execGetGuidedAction); \
	DECLARE_FUNCTION(execGetIdleNeutralRotationYaw); \
	DECLARE_FUNCTION(execGetIsAttacking); \
	DECLARE_FUNCTION(execGetLightIntensity); \
	DECLARE_FUNCTION(execGetLookRotation); \
	DECLARE_FUNCTION(execGetObsessionTarget); \
	DECLARE_FUNCTION(execGetPlayerDropOffPoint); \
	DECLARE_FUNCTION(execGetPresenceTag); \
	DECLARE_FUNCTION(execGetRageTier); \
	DECLARE_FUNCTION(execGetSlasherAnimGameplayTags); \
	DECLARE_FUNCTION(execGetStalkTierWalkSpeedMultiplier); \
	DECLARE_FUNCTION(execGetStealthRatio); \
	DECLARE_FUNCTION(execGetStillnessStartTime); \
	DECLARE_FUNCTION(execGetSurvivorBeingKilled); \
	DECLARE_FUNCTION(execGetTerrorRadiusEmitter); \
	DECLARE_FUNCTION(execHasKillerAbility); \
	DECLARE_FUNCTION(execHasPreLevelGenerationModifier); \
	DECLARE_FUNCTION(execIncrementInterruptBlock); \
	DECLARE_FUNCTION(execIsAllowedToKill); \
	DECLARE_FUNCTION(execIsASurvivorInTerrorRadius); \
	DECLARE_FUNCTION(execIsCarrying); \
	DECLARE_FUNCTION(execIsChainBlinking); \
	DECLARE_FUNCTION(execIsChainsawSprinting); \
	DECLARE_FUNCTION(execIsChargingBlink); \
	DECLARE_FUNCTION(execIsCloaking); \
	DECLARE_FUNCTION(execIsCrouchAvailable_BP); \
	DECLARE_FUNCTION(execIsHooking); \
	DECLARE_FUNCTION(execIsIdling); \
	DECLARE_FUNCTION(execIsImmuneToObservingPlayerDetection); \
	DECLARE_FUNCTION(execIsInBlinkCooldown); \
	DECLARE_FUNCTION(execIsInterruptBlocked); \
	DECLARE_FUNCTION(execIsKilling); \
	DECLARE_FUNCTION(execIsOfferingAllowingKill); \
	DECLARE_FUNCTION(execIsUncloaking); \
	DECLARE_FUNCTION(execIsWalkLocked); \
	DECLARE_FUNCTION(execLocal_CancelAttack); \
	DECLARE_FUNCTION(execMulticast_DisplayAttackZones); \
	DECLARE_FUNCTION(execMulticast_MergeLockOnDamageZones); \
	DECLARE_FUNCTION(execMulticast_SetAttackDetectionZoneSet); \
	DECLARE_FUNCTION(execMulticast_SetGuidedAction); \
	DECLARE_FUNCTION(execOnAttackFinish); \
	DECLARE_FUNCTION(execOnAttackStart); \
	DECLARE_FUNCTION(execOnDropCamperEnd); \
	DECLARE_FUNCTION(execOnKillerAbilityBeginActivate); \
	DECLARE_FUNCTION(execOnKillerAbilityBeginDeactivate); \
	DECLARE_FUNCTION(execOnKillerAbilityEndActivate); \
	DECLARE_FUNCTION(execOnKillerAbilityEndDeactivate); \
	DECLARE_FUNCTION(execOnKillerAbilityUpdateActivate); \
	DECLARE_FUNCTION(execOnLoudNoiseIndicatorDestroyed); \
	DECLARE_FUNCTION(execOnLoudNoiseTriggered); \
	DECLARE_FUNCTION(execOnSurvivorKilled); \
	DECLARE_FUNCTION(execOnSurvivorsLeftChanged); \
	DECLARE_FUNCTION(execResetNeutralIdleRotationYaw); \
	DECLARE_FUNCTION(execServer_SendAttackInput); \
	DECLARE_FUNCTION(execSetAttackZonePivot); \
	DECLARE_FUNCTION(execSetCarriedCamper); \
	DECLARE_FUNCTION(execSetChainsawSprinting); \
	DECLARE_FUNCTION(execSetGuidedAction); \
	DECLARE_FUNCTION(execSetIsHookingSurvivor); \
	DECLARE_FUNCTION(execSetIsKilling); \
	DECLARE_FUNCTION(execSetLightIntensity); \
	DECLARE_FUNCTION(execSetStalkTierWalkSpeedMultiplier); \
	DECLARE_FUNCTION(execSetSurvivorBeingKilled); \
	DECLARE_FUNCTION(execShouldApplyBloodlustSpeedModifier); \
	DECLARE_FUNCTION(execShouldTurnInPlace); \
	DECLARE_FUNCTION(execShouldTurnInPlaceLeft); \
	DECLARE_FUNCTION(execShouldTurnInPlaceRight); \
	DECLARE_FUNCTION(execSpawnSlasherPower); \
	DECLARE_FUNCTION(execUpdateRageTierEffect); \
	DECLARE_FUNCTION(execWasRecentlyCloaked);


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_EVENT_PARMS \
	struct SlasherPlayer_eventCanAttack_BP_Parms \
	{ \
		EAttackType attackType; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SlasherPlayer_eventCanAttack_BP_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SlasherPlayer_eventCanGainRage_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SlasherPlayer_eventCanGainRage_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SlasherPlayer_eventCanPerformKillerAbility_Parms \
	{ \
		EKillerAbilities killerAbility; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SlasherPlayer_eventCanPerformKillerAbility_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SlasherPlayer_eventCanSlashAttack_BP_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SlasherPlayer_eventCanSlashAttack_BP_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SlasherPlayer_eventClient_RequestStun_Parms \
	{ \
		EStunType stunType; \
		ADBDPlayer* stunner; \
	}; \
	struct SlasherPlayer_eventDisplayAttackZones_Parms \
	{ \
		bool display; \
	}; \
	struct SlasherPlayer_eventGetCharacterCustomAnimTags_Parms \
	{ \
		TArray<FName> ReturnValue; \
	}; \
	struct SlasherPlayer_eventGetPlayerDropOffPoint_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SlasherPlayer_eventGetPlayerDropOffPoint_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct SlasherPlayer_eventIsCloaking_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SlasherPlayer_eventIsCloaking_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SlasherPlayer_eventIsCrouchAvailable_BP_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SlasherPlayer_eventIsCrouchAvailable_BP_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SlasherPlayer_eventIsImmuneToObservingPlayerDetection_Parms \
	{ \
		const ADBDPlayer* observingPlayer; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SlasherPlayer_eventIsImmuneToObservingPlayerDetection_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SlasherPlayer_eventIsUncloaking_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SlasherPlayer_eventIsUncloaking_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SlasherPlayer_eventLocal_CancelAttack_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SlasherPlayer_eventLocal_CancelAttack_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SlasherPlayer_eventMergeLockOnDamageZones_Parms \
	{ \
		bool enable; \
	}; \
	struct SlasherPlayer_eventMulticast_DisplayAttackZones_Parms \
	{ \
		bool display; \
	}; \
	struct SlasherPlayer_eventMulticast_MergeLockOnDamageZones_Parms \
	{ \
		bool enable; \
	}; \
	struct SlasherPlayer_eventMulticast_SetAttackDetectionZoneSet_Parms \
	{ \
		EAttackZoneSet attackZoneSet; \
	}; \
	struct SlasherPlayer_eventMulticast_SetGuidedAction_Parms \
	{ \
		ESlasherGuidedAction action; \
	}; \
	struct SlasherPlayer_eventOnCamperHitFX_Parms \
	{ \
		ACamperPlayer* camper; \
		bool showBloodSpatter; \
	}; \
	struct SlasherPlayer_eventOnKillerAbilityBeginActivate_Parms \
	{ \
		EKillerAbilities killerAbility; \
	}; \
	struct SlasherPlayer_eventOnKillerAbilityBeginDeactivate_Parms \
	{ \
		EKillerAbilities killerAbility; \
		bool forced; \
	}; \
	struct SlasherPlayer_eventOnKillerAbilityEndActivate_Parms \
	{ \
		EKillerAbilities killerAbility; \
	}; \
	struct SlasherPlayer_eventOnKillerAbilityEndDeactivate_Parms \
	{ \
		EKillerAbilities killerAbility; \
		bool forced; \
	}; \
	struct SlasherPlayer_eventOnKillerAbilityUpdateActivate_Parms \
	{ \
		EKillerAbilities killerAbility; \
		float percent; \
	}; \
	struct SlasherPlayer_eventOnPerformingChargableInteraction_Parms \
	{ \
		float Progress; \
	}; \
	struct SlasherPlayer_eventOnStalkModeChanged_Parms \
	{ \
		bool stalkMode; \
	}; \
	struct SlasherPlayer_eventOnStalkModeChangedCosmetic_Parms \
	{ \
		bool stalkMode; \
	}; \
	struct SlasherPlayer_eventOnStealthChanged_Parms \
	{ \
		bool stealth; \
	}; \
	struct SlasherPlayer_eventOnSuccessfulInterruption_Parms \
	{ \
		ACamperPlayer* interruptedSurvivor; \
	}; \
	struct SlasherPlayer_eventServer_SendAttackInput_Parms \
	{ \
		bool pressed; \
	}; \
	struct SlasherPlayer_eventSetAttackDetectionZoneSet_Parms \
	{ \
		EAttackZoneSet attackZoneSet; \
	}; \
	struct SlasherPlayer_eventShouldApplyBloodlustSpeedModifier_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SlasherPlayer_eventShouldApplyBloodlustSpeedModifier_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SlasherPlayer_eventUpdateRageTierEffect_Parms \
	{ \
		int32 previousTier; \
		int32 currentTier; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASlasherPlayer(); \
	friend struct Z_Construct_UClass_ASlasherPlayer_Statics; \
public: \
	DECLARE_CLASS(ASlasherPlayer, ADBDPlayer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ASlasherPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ASlasherPlayer*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInStalkMode=NETFIELD_REP_START, \
		_allowedKillCount, \
		_allowedKillAfterStrugglePhase, \
		_allowedKillLastSurvivor, \
		_cachedBloodlustTier, \
		_killerPowerDebugFlags, \
		NETFIELD_REP_END=_killerPowerDebugFlags	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_INCLASS \
private: \
	static void StaticRegisterNativesASlasherPlayer(); \
	friend struct Z_Construct_UClass_ASlasherPlayer_Statics; \
public: \
	DECLARE_CLASS(ASlasherPlayer, ADBDPlayer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ASlasherPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ASlasherPlayer*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInStalkMode=NETFIELD_REP_START, \
		_allowedKillCount, \
		_allowedKillAfterStrugglePhase, \
		_allowedKillLastSurvivor, \
		_cachedBloodlustTier, \
		_killerPowerDebugFlags, \
		NETFIELD_REP_END=_killerPowerDebugFlags	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASlasherPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASlasherPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlasherPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlasherPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlasherPlayer(ASlasherPlayer&&); \
	NO_API ASlasherPlayer(const ASlasherPlayer&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlasherPlayer(ASlasherPlayer&&); \
	NO_API ASlasherPlayer(const ASlasherPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlasherPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlasherPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASlasherPlayer)


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___audioComponent() { return STRUCT_OFFSET(ASlasherPlayer, _audioComponent); } \
	FORCEINLINE static uint32 __PPO___terrorNavModifierComponent() { return STRUCT_OFFSET(ASlasherPlayer, _terrorNavModifierComponent); } \
	FORCEINLINE static uint32 __PPO___slasherLightIntensity() { return STRUCT_OFFSET(ASlasherPlayer, _slasherLightIntensity); } \
	FORCEINLINE static uint32 __PPO___defaultAmountToSquish() { return STRUCT_OFFSET(ASlasherPlayer, _defaultAmountToSquish); } \
	FORCEINLINE static uint32 __PPO___stalkTimers() { return STRUCT_OFFSET(ASlasherPlayer, _stalkTimers); } \
	FORCEINLINE static uint32 __PPO___stillnessTracker() { return STRUCT_OFFSET(ASlasherPlayer, _stillnessTracker); } \
	FORCEINLINE static uint32 __PPO___aimAssistComponent() { return STRUCT_OFFSET(ASlasherPlayer, _aimAssistComponent); } \
	FORCEINLINE static uint32 __PPO___recentlyCloakedTimer() { return STRUCT_OFFSET(ASlasherPlayer, _recentlyCloakedTimer); } \
	FORCEINLINE static uint32 __PPO___flashlightBlindEvasionScoreTimer() { return STRUCT_OFFSET(ASlasherPlayer, _flashlightBlindEvasionScoreTimer); } \
	FORCEINLINE static uint32 __PPO___flashlightBurnoutEvasionScoreTimer() { return STRUCT_OFFSET(ASlasherPlayer, _flashlightBurnoutEvasionScoreTimer); } \
	FORCEINLINE static uint32 __PPO___predictedCamperHitMontages() { return STRUCT_OFFSET(ASlasherPlayer, _predictedCamperHitMontages); } \
	FORCEINLINE static uint32 __PPO___terrorRadiusEmitter() { return STRUCT_OFFSET(ASlasherPlayer, _terrorRadiusEmitter); } \
	FORCEINLINE static uint32 __PPO___loudNoiseIndicator() { return STRUCT_OFFSET(ASlasherPlayer, _loudNoiseIndicator); } \
	FORCEINLINE static uint32 __PPO___hitsWhileCarryingTracker() { return STRUCT_OFFSET(ASlasherPlayer, _hitsWhileCarryingTracker); } \
	FORCEINLINE static uint32 __PPO___stealthIncreaseRate() { return STRUCT_OFFSET(ASlasherPlayer, _stealthIncreaseRate); } \
	FORCEINLINE static uint32 __PPO___stealthDecreaseRate() { return STRUCT_OFFSET(ASlasherPlayer, _stealthDecreaseRate); } \
	FORCEINLINE static uint32 __PPO___stillnessStartTime() { return STRUCT_OFFSET(ASlasherPlayer, _stillnessStartTime); } \
	FORCEINLINE static uint32 __PPO___isInStalkMode() { return STRUCT_OFFSET(ASlasherPlayer, _isInStalkMode); } \
	FORCEINLINE static uint32 __PPO___isKilling() { return STRUCT_OFFSET(ASlasherPlayer, _isKilling); } \
	FORCEINLINE static uint32 __PPO___allowedKillCount() { return STRUCT_OFFSET(ASlasherPlayer, _allowedKillCount); } \
	FORCEINLINE static uint32 __PPO___allowedKillAfterStrugglePhase() { return STRUCT_OFFSET(ASlasherPlayer, _allowedKillAfterStrugglePhase); } \
	FORCEINLINE static uint32 __PPO___allowedKillLastSurvivor() { return STRUCT_OFFSET(ASlasherPlayer, _allowedKillLastSurvivor); } \
	FORCEINLINE static uint32 __PPO___cachedBloodlustTier() { return STRUCT_OFFSET(ASlasherPlayer, _cachedBloodlustTier); } \
	FORCEINLINE static uint32 __PPO___killerPowerDebugFlags() { return STRUCT_OFFSET(ASlasherPlayer, _killerPowerDebugFlags); } \
	FORCEINLINE static uint32 __PPO___presenceTag() { return STRUCT_OFFSET(ASlasherPlayer, _presenceTag); } \
	FORCEINLINE static uint32 __PPO___persistantStateTags() { return STRUCT_OFFSET(ASlasherPlayer, _persistantStateTags); } \
	FORCEINLINE static uint32 __PPO___animGameplayTags() { return STRUCT_OFFSET(ASlasherPlayer, _animGameplayTags); } \
	FORCEINLINE static uint32 __PPO___enableKillerCrouchInput() { return STRUCT_OFFSET(ASlasherPlayer, _enableKillerCrouchInput); } \
	FORCEINLINE static uint32 __PPO___canStartAttackWhileCrouched() { return STRUCT_OFFSET(ASlasherPlayer, _canStartAttackWhileCrouched); } \
	FORCEINLINE static uint32 __PPO___carriedCamper() { return STRUCT_OFFSET(ASlasherPlayer, _carriedCamper); } \
	FORCEINLINE static uint32 __PPO___moriComponent() { return STRUCT_OFFSET(ASlasherPlayer, _moriComponent); } \
	FORCEINLINE static uint32 __PPO___hitValidator() { return STRUCT_OFFSET(ASlasherPlayer, _hitValidator); } \
	FORCEINLINE static uint32 __PPO___hitValidationConfigurator() { return STRUCT_OFFSET(ASlasherPlayer, _hitValidationConfigurator); } \
	FORCEINLINE static uint32 __PPO___attackerComponent() { return STRUCT_OFFSET(ASlasherPlayer, _attackerComponent); } \
	FORCEINLINE static uint32 __PPO___basicAttackType() { return STRUCT_OFFSET(ASlasherPlayer, _basicAttackType); } \
	FORCEINLINE static uint32 __PPO___armIKSensorComponent() { return STRUCT_OFFSET(ASlasherPlayer, _armIKSensorComponent); } \
	FORCEINLINE static uint32 __PPO___survivorBeingKilled() { return STRUCT_OFFSET(ASlasherPlayer, _survivorBeingKilled); } \
	FORCEINLINE static uint32 __PPO___firstPersonViewComponent() { return STRUCT_OFFSET(ASlasherPlayer, _firstPersonViewComponent); } \
	FORCEINLINE static uint32 __PPO___killerIntroComponent() { return STRUCT_OFFSET(ASlasherPlayer, _killerIntroComponent); } \
	FORCEINLINE static uint32 __PPO___blindingFXComponent() { return STRUCT_OFFSET(ASlasherPlayer, _blindingFXComponent); } \
	FORCEINLINE static uint32 __PPO___redStainUpdateStrategy() { return STRUCT_OFFSET(ASlasherPlayer, _redStainUpdateStrategy); } \
	FORCEINLINE static uint32 __PPO___squishFactorParameter() { return STRUCT_OFFSET(ASlasherPlayer, _squishFactorParameter); } \
	FORCEINLINE static uint32 __PPO___attackZonePivot() { return STRUCT_OFFSET(ASlasherPlayer, _attackZonePivot); } \
	FORCEINLINE static uint32 __PPO___slasherStunnableComponent() { return STRUCT_OFFSET(ASlasherPlayer, _slasherStunnableComponent); } \
	FORCEINLINE static uint32 __PPO___turnInPlaceThresholdAngle() { return STRUCT_OFFSET(ASlasherPlayer, _turnInPlaceThresholdAngle); }


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_50_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ASlasherPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_SlasherPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
