// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
enum class ECamperImmobilizeState : uint8;
class UInteractionDefinition;
class AActor;
enum class EEscapeType : uint8;
struct FVector;
class UDBDClipRegionComponent;
class UCamperBloodTrailComponent;
class UCameraAttachmentComponent;
class UCamperAnimInstance;
class UDBDCamperData;
class UCamperStillnessTrackerComponent;
class UChaseeCharacterComponent;
enum class ECamperGuidedAction : uint8;
class UCamperHealthComponent;
class UHookableComponent;
class UMoveComponentToComponent;
class UAnimationMontageSlave;
class UAkComponent;
class ACamperPlayer;
class AReverseBearTrap;
class UScreamComponent;
class UTerrorRadiusReceiverComponent;
struct FRotator;
enum class EAuthoritativeMovementFlag : uint8;
enum class ECamperDamageState : uint8;
enum class ESkillCheckCustomType : uint8;
class APawn;
class UPrimitiveComponent;
struct FHitResult;
class UChargeableComponent;
class UAkAudioEvent;
#ifdef DEADBYDAYLIGHT_CamperPlayer_generated_h
#error "CamperPlayer.generated.h already included, missing '#pragma once' in CamperPlayer.h"
#endif
#define DEADBYDAYLIGHT_CamperPlayer_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_62_DELEGATE \
static inline void FCamperPlayerOnHookEscapeFailedCosmetic_DelegateWrapper(const FMulticastScriptDelegate& CamperPlayerOnHookEscapeFailedCosmetic) \
{ \
	CamperPlayerOnHookEscapeFailedCosmetic.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_61_DELEGATE \
static inline void FCamperPlayerOnHPSlotChanged_DelegateWrapper(const FMulticastScriptDelegate& CamperPlayerOnHPSlotChanged) \
{ \
	CamperPlayerOnHPSlotChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_60_DELEGATE \
struct _Script_DeadByDaylight_eventCamperPlayerOnPickedUpEndDelegate_Parms \
{ \
	ADBDPlayer* picker; \
}; \
static inline void FCamperPlayerOnPickedUpEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& CamperPlayerOnPickedUpEndDelegate, ADBDPlayer* picker) \
{ \
	_Script_DeadByDaylight_eventCamperPlayerOnPickedUpEndDelegate_Parms Parms; \
	Parms.picker=picker; \
	CamperPlayerOnPickedUpEndDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_59_DELEGATE \
struct _Script_DeadByDaylight_eventCamperPlayerOnPickedUpDelegate_Parms \
{ \
	ADBDPlayer* picker; \
}; \
static inline void FCamperPlayerOnPickedUpDelegate_DelegateWrapper(const FMulticastScriptDelegate& CamperPlayerOnPickedUpDelegate, ADBDPlayer* picker) \
{ \
	_Script_DeadByDaylight_eventCamperPlayerOnPickedUpDelegate_Parms Parms; \
	Parms.picker=picker; \
	CamperPlayerOnPickedUpDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_58_DELEGATE \
struct _Script_DeadByDaylight_eventCamperPlayerOnImmobilizeStateChanged_Parms \
{ \
	ECamperImmobilizeState oldState; \
	ECamperImmobilizeState newState; \
}; \
static inline void FCamperPlayerOnImmobilizeStateChanged_DelegateWrapper(const FMulticastScriptDelegate& CamperPlayerOnImmobilizeStateChanged, ECamperImmobilizeState oldState, ECamperImmobilizeState newState) \
{ \
	_Script_DeadByDaylight_eventCamperPlayerOnImmobilizeStateChanged_Parms Parms; \
	Parms.oldState=oldState; \
	Parms.newState=newState; \
	CamperPlayerOnImmobilizeStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_57_DELEGATE \
static inline void FCamperPlayerOnGuidedStateChanged_DelegateWrapper(const FMulticastScriptDelegate& CamperPlayerOnGuidedStateChanged) \
{ \
	CamperPlayerOnGuidedStateChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_56_DELEGATE \
static inline void FCamperPlayerOnHookedStateChanged_DelegateWrapper(const FMulticastScriptDelegate& CamperPlayerOnHookedStateChanged) \
{ \
	CamperPlayerOnHookedStateChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_RPC_WRAPPERS \
	virtual bool Client_OnSlashedOutOfTrap_Validate(ADBDPlayer* ); \
	virtual void Client_OnSlashedOutOfTrap_Implementation(ADBDPlayer* requester); \
	virtual bool Multicast_RemoveReverseBearTrap_Validate(); \
	virtual void Multicast_RemoveReverseBearTrap_Implementation(); \
	virtual bool Multicast_SetAuthoritativeMovementFlag_Validate(EAuthoritativeMovementFlag , bool ); \
	virtual void Multicast_SetAuthoritativeMovementFlag_Implementation(EAuthoritativeMovementFlag flag, bool value); \
	virtual bool Multicast_SetGuidedAction_Validate(ECamperGuidedAction ); \
	virtual void Multicast_SetGuidedAction_Implementation(ECamperGuidedAction action); \
	virtual bool Multicast_SetHookEscapeAutoFail_Validate(bool ); \
	virtual void Multicast_SetHookEscapeAutoFail_Implementation(bool enabled); \
	virtual bool Multicast_SetImmobilized_Validate(ECamperImmobilizeState ); \
	virtual void Multicast_SetImmobilized_Implementation(ECamperImmobilizeState state); \
	virtual void Multicast_SetOverlappingEscape_Implementation(AActor* NewEscape); \
	virtual bool Server_SendInteractMashedInput_Validate(bool ); \
	virtual void Server_SendInteractMashedInput_Implementation(bool pressed); \
	virtual bool Server_SendLeftRightMashedInput_Validate(bool ); \
	virtual void Server_SendLeftRightMashedInput_Implementation(bool pressed); \
	virtual bool Server_SetImmobilized_Validate(ECamperImmobilizeState ); \
	virtual void Server_SetImmobilized_Implementation(ECamperImmobilizeState state); \
	virtual bool Server_SetOverlappingEscape_Validate(AActor* ); \
	virtual void Server_SetOverlappingEscape_Implementation(AActor* NewEscape); \
	virtual bool Server_SetRunInput_Validate(bool ); \
	virtual void Server_SetRunInput_Implementation(bool pressed); \
 \
	DECLARE_FUNCTION(execActionInputPressed); \
	DECLARE_FUNCTION(execActionInputReleased); \
	DECLARE_FUNCTION(execAttachToGuidingPlayer); \
	DECLARE_FUNCTION(execAuthority_DropItemAtLastSafePosition); \
	DECLARE_FUNCTION(execAuthority_OnSlashed); \
	DECLARE_FUNCTION(execCallOnDroppedByBearTrap); \
	DECLARE_FUNCTION(execCanBeKilled); \
	DECLARE_FUNCTION(execCanBePickedUp); \
	DECLARE_FUNCTION(execCanBeShocked); \
	DECLARE_FUNCTION(execCanRushQuietly); \
	DECLARE_FUNCTION(execClient_OnSlashedOutOfTrap); \
	DECLARE_FUNCTION(execComputeBeartrapEscapeResult); \
	DECLARE_FUNCTION(execComputeHookEscapeResult); \
	DECLARE_FUNCTION(execComputeInteractionSuccessPercentage); \
	DECLARE_FUNCTION(execDBD_AutoInteractionMash); \
	DECLARE_FUNCTION(execDBD_AutoLeftRightMash); \
	DECLARE_FUNCTION(execDBD_CheatEscaped); \
	DECLARE_FUNCTION(execDBD_ForceRun); \
	DECLARE_FUNCTION(execDBD_LeaveParadise); \
	DECLARE_FUNCTION(execDBD_SetImmobilized); \
	DECLARE_FUNCTION(execDetachFromGuidingPlayer); \
	DECLARE_FUNCTION(execEscape); \
	DECLARE_FUNCTION(execEscapeTutorial); \
	DECLARE_FUNCTION(execGetAimPoint); \
	DECLARE_FUNCTION(execGetAllEntityRenderRegions); \
	DECLARE_FUNCTION(execGetBloodTrailComponent); \
	DECLARE_FUNCTION(execGetCameraAttachmentComponent); \
	DECLARE_FUNCTION(execGetCamperAnimInstance); \
	DECLARE_FUNCTION(execGetCamperData); \
	DECLARE_FUNCTION(execGetCamperStillnessComponent); \
	DECLARE_FUNCTION(execGetChaseeCharacterComponent); \
	DECLARE_FUNCTION(execGetDropStaggerPercentTimeElapsed); \
	DECLARE_FUNCTION(execGetDropStaggerTimeLeft); \
	DECLARE_FUNCTION(execGetEntityRenderRegionAtIndex); \
	DECLARE_FUNCTION(execGetGuidedAction); \
	DECLARE_FUNCTION(execGetHealthComponent); \
	DECLARE_FUNCTION(execGetHookableComponent); \
	DECLARE_FUNCTION(execGetImmobilizedState); \
	DECLARE_FUNCTION(execGetIsBeingDissolved); \
	DECLARE_FUNCTION(execGetIsHealingKOCamper); \
	DECLARE_FUNCTION(execGetIsSkillCheckFailed); \
	DECLARE_FUNCTION(execGetMaxGruntDistance); \
	DECLARE_FUNCTION(execGetMeshMover); \
	DECLARE_FUNCTION(execGetMontageFollower); \
	DECLARE_FUNCTION(execGetNoOcclusionAudioComponent); \
	DECLARE_FUNCTION(execGetNumberOfEntityRenderRegions); \
	DECLARE_FUNCTION(execGetObsessionTargetWeight); \
	DECLARE_FUNCTION(execGetOverlappingEscape); \
	DECLARE_FUNCTION(execGetPercentHealingTimer); \
	DECLARE_FUNCTION(execGetRevealedSurvivor); \
	DECLARE_FUNCTION(execGetReverseBearTrap); \
	DECLARE_FUNCTION(execGetScreamComponent); \
	DECLARE_FUNCTION(execGetStillness); \
	DECLARE_FUNCTION(execGetTerrorRadiusReceiverComponent); \
	DECLARE_FUNCTION(execGetToAimPointRotation); \
	DECLARE_FUNCTION(execHasGuidedAction); \
	DECLARE_FUNCTION(execHasHitEvents); \
	DECLARE_FUNCTION(execHasReverseBearTrap); \
	DECLARE_FUNCTION(execHatchEscapeZoneEntered); \
	DECLARE_FUNCTION(execInput_ToggleRun); \
	DECLARE_FUNCTION(execInput_Wiggle); \
	DECLARE_FUNCTION(execIsBeingCarried); \
	DECLARE_FUNCTION(execIsBeingEndGameSacrificed); \
	DECLARE_FUNCTION(execIsBeingHealed); \
	DECLARE_FUNCTION(execIsBeingInteractedWith); \
	DECLARE_FUNCTION(execIsBeingKilled); \
	DECLARE_FUNCTION(execIsBeingMended); \
	DECLARE_FUNCTION(execIsBeingPickedUp); \
	DECLARE_FUNCTION(execIsBeingPulledFromCloset); \
	DECLARE_FUNCTION(execIsBeingPutDown); \
	DECLARE_FUNCTION(execIsBeingPutOnHook); \
	DECLARE_FUNCTION(execIsBeingUnhooked); \
	DECLARE_FUNCTION(execIsCrawling); \
	DECLARE_FUNCTION(execIsDeadOrInParadise); \
	DECLARE_FUNCTION(execIsEscaped); \
	DECLARE_FUNCTION(execIsGuidedBySlasher); \
	DECLARE_FUNCTION(execIsHealingTimerExpired); \
	DECLARE_FUNCTION(execIsHooked); \
	DECLARE_FUNCTION(execIsImmobilized); \
	DECLARE_FUNCTION(execIsInDeathBed); \
	DECLARE_FUNCTION(execIsInNeed); \
	DECLARE_FUNCTION(execIsMovementGuided); \
	DECLARE_FUNCTION(execIsObsessionTarget); \
	DECLARE_FUNCTION(execIsRunLocked); \
	DECLARE_FUNCTION(execIsSacrificed); \
	DECLARE_FUNCTION(execIsTrapped); \
	DECLARE_FUNCTION(execIsUnhookingSelf); \
	DECLARE_FUNCTION(execIsUnintentionallyImmobilized); \
	DECLARE_FUNCTION(execKill); \
	DECLARE_FUNCTION(execLocal_SetImmobilized); \
	DECLARE_FUNCTION(execMoveToOwnerCarryJoint); \
	DECLARE_FUNCTION(execMulticast_RemoveReverseBearTrap); \
	DECLARE_FUNCTION(execMulticast_SetAuthoritativeMovementFlag); \
	DECLARE_FUNCTION(execMulticast_SetGuidedAction); \
	DECLARE_FUNCTION(execMulticast_SetHookEscapeAutoFail); \
	DECLARE_FUNCTION(execMulticast_SetImmobilized); \
	DECLARE_FUNCTION(execMulticast_SetOverlappingEscape); \
	DECLARE_FUNCTION(execOnDroppedEnd); \
	DECLARE_FUNCTION(execOnDroppedStart); \
	DECLARE_FUNCTION(execOnFinishedPlaying); \
	DECLARE_FUNCTION(execOnHealthStateChanged); \
	DECLARE_FUNCTION(execOnHooked); \
	DECLARE_FUNCTION(execOnHpSlotSkillCheckResponseAesthetic); \
	DECLARE_FUNCTION(execOnObsessionChanged); \
	DECLARE_FUNCTION(execOnPawnSensed); \
	DECLARE_FUNCTION(execOnPickUpDenied); \
	DECLARE_FUNCTION(execOnPickUpEnter); \
	DECLARE_FUNCTION(execOnProximityEntered); \
	DECLARE_FUNCTION(execOnRep_RunInputPressed); \
	DECLARE_FUNCTION(execOnRep_SprintEffect); \
	DECLARE_FUNCTION(execOnUnhooked); \
	DECLARE_FUNCTION(execResetCameraAttach); \
	DECLARE_FUNCTION(execResetPotentialSaviors); \
	DECLARE_FUNCTION(execRunLocked); \
	DECLARE_FUNCTION(execServer_SendInteractMashedInput); \
	DECLARE_FUNCTION(execServer_SendLeftRightMashedInput); \
	DECLARE_FUNCTION(execServer_SetImmobilized); \
	DECLARE_FUNCTION(execServer_SetOverlappingEscape); \
	DECLARE_FUNCTION(execServer_SetRunInput); \
	DECLARE_FUNCTION(execSetAutoInteractionMashEnabled); \
	DECLARE_FUNCTION(execSetBeingCarried); \
	DECLARE_FUNCTION(execSetGuidedAction); \
	DECLARE_FUNCTION(execSetGuidedActionLocal); \
	DECLARE_FUNCTION(execSetImmobilized); \
	DECLARE_FUNCTION(execSetIsHealingKOCamper); \
	DECLARE_FUNCTION(execSetIsSkillCheckFailed); \
	DECLARE_FUNCTION(execSetRevealedSurvivor); \
	DECLARE_FUNCTION(execStartHealingTimer); \
	DECLARE_FUNCTION(execStopHealingTimer); \
	DECLARE_FUNCTION(execTriggerAfflictionHUDFeedback); \
	DECLARE_FUNCTION(execUpdateHealingTimer); \
	DECLARE_FUNCTION(execUpdateKillerDistanceEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Client_OnSlashedOutOfTrap_Validate(ADBDPlayer* ); \
	virtual void Client_OnSlashedOutOfTrap_Implementation(ADBDPlayer* requester); \
	virtual bool Multicast_RemoveReverseBearTrap_Validate(); \
	virtual void Multicast_RemoveReverseBearTrap_Implementation(); \
	virtual bool Multicast_SetAuthoritativeMovementFlag_Validate(EAuthoritativeMovementFlag , bool ); \
	virtual void Multicast_SetAuthoritativeMovementFlag_Implementation(EAuthoritativeMovementFlag flag, bool value); \
	virtual bool Multicast_SetGuidedAction_Validate(ECamperGuidedAction ); \
	virtual void Multicast_SetGuidedAction_Implementation(ECamperGuidedAction action); \
	virtual bool Multicast_SetHookEscapeAutoFail_Validate(bool ); \
	virtual void Multicast_SetHookEscapeAutoFail_Implementation(bool enabled); \
	virtual bool Multicast_SetImmobilized_Validate(ECamperImmobilizeState ); \
	virtual void Multicast_SetImmobilized_Implementation(ECamperImmobilizeState state); \
	virtual void Multicast_SetOverlappingEscape_Implementation(AActor* NewEscape); \
	virtual bool Server_SendInteractMashedInput_Validate(bool ); \
	virtual void Server_SendInteractMashedInput_Implementation(bool pressed); \
	virtual bool Server_SendLeftRightMashedInput_Validate(bool ); \
	virtual void Server_SendLeftRightMashedInput_Implementation(bool pressed); \
	virtual bool Server_SetImmobilized_Validate(ECamperImmobilizeState ); \
	virtual void Server_SetImmobilized_Implementation(ECamperImmobilizeState state); \
	virtual bool Server_SetOverlappingEscape_Validate(AActor* ); \
	virtual void Server_SetOverlappingEscape_Implementation(AActor* NewEscape); \
	virtual bool Server_SetRunInput_Validate(bool ); \
	virtual void Server_SetRunInput_Implementation(bool pressed); \
 \
	DECLARE_FUNCTION(execActionInputPressed); \
	DECLARE_FUNCTION(execActionInputReleased); \
	DECLARE_FUNCTION(execAttachToGuidingPlayer); \
	DECLARE_FUNCTION(execAuthority_DropItemAtLastSafePosition); \
	DECLARE_FUNCTION(execAuthority_OnSlashed); \
	DECLARE_FUNCTION(execCallOnDroppedByBearTrap); \
	DECLARE_FUNCTION(execCanBeKilled); \
	DECLARE_FUNCTION(execCanBePickedUp); \
	DECLARE_FUNCTION(execCanBeShocked); \
	DECLARE_FUNCTION(execCanRushQuietly); \
	DECLARE_FUNCTION(execClient_OnSlashedOutOfTrap); \
	DECLARE_FUNCTION(execComputeBeartrapEscapeResult); \
	DECLARE_FUNCTION(execComputeHookEscapeResult); \
	DECLARE_FUNCTION(execComputeInteractionSuccessPercentage); \
	DECLARE_FUNCTION(execDBD_AutoInteractionMash); \
	DECLARE_FUNCTION(execDBD_AutoLeftRightMash); \
	DECLARE_FUNCTION(execDBD_CheatEscaped); \
	DECLARE_FUNCTION(execDBD_ForceRun); \
	DECLARE_FUNCTION(execDBD_LeaveParadise); \
	DECLARE_FUNCTION(execDBD_SetImmobilized); \
	DECLARE_FUNCTION(execDetachFromGuidingPlayer); \
	DECLARE_FUNCTION(execEscape); \
	DECLARE_FUNCTION(execEscapeTutorial); \
	DECLARE_FUNCTION(execGetAimPoint); \
	DECLARE_FUNCTION(execGetAllEntityRenderRegions); \
	DECLARE_FUNCTION(execGetBloodTrailComponent); \
	DECLARE_FUNCTION(execGetCameraAttachmentComponent); \
	DECLARE_FUNCTION(execGetCamperAnimInstance); \
	DECLARE_FUNCTION(execGetCamperData); \
	DECLARE_FUNCTION(execGetCamperStillnessComponent); \
	DECLARE_FUNCTION(execGetChaseeCharacterComponent); \
	DECLARE_FUNCTION(execGetDropStaggerPercentTimeElapsed); \
	DECLARE_FUNCTION(execGetDropStaggerTimeLeft); \
	DECLARE_FUNCTION(execGetEntityRenderRegionAtIndex); \
	DECLARE_FUNCTION(execGetGuidedAction); \
	DECLARE_FUNCTION(execGetHealthComponent); \
	DECLARE_FUNCTION(execGetHookableComponent); \
	DECLARE_FUNCTION(execGetImmobilizedState); \
	DECLARE_FUNCTION(execGetIsBeingDissolved); \
	DECLARE_FUNCTION(execGetIsHealingKOCamper); \
	DECLARE_FUNCTION(execGetIsSkillCheckFailed); \
	DECLARE_FUNCTION(execGetMaxGruntDistance); \
	DECLARE_FUNCTION(execGetMeshMover); \
	DECLARE_FUNCTION(execGetMontageFollower); \
	DECLARE_FUNCTION(execGetNoOcclusionAudioComponent); \
	DECLARE_FUNCTION(execGetNumberOfEntityRenderRegions); \
	DECLARE_FUNCTION(execGetObsessionTargetWeight); \
	DECLARE_FUNCTION(execGetOverlappingEscape); \
	DECLARE_FUNCTION(execGetPercentHealingTimer); \
	DECLARE_FUNCTION(execGetRevealedSurvivor); \
	DECLARE_FUNCTION(execGetReverseBearTrap); \
	DECLARE_FUNCTION(execGetScreamComponent); \
	DECLARE_FUNCTION(execGetStillness); \
	DECLARE_FUNCTION(execGetTerrorRadiusReceiverComponent); \
	DECLARE_FUNCTION(execGetToAimPointRotation); \
	DECLARE_FUNCTION(execHasGuidedAction); \
	DECLARE_FUNCTION(execHasHitEvents); \
	DECLARE_FUNCTION(execHasReverseBearTrap); \
	DECLARE_FUNCTION(execHatchEscapeZoneEntered); \
	DECLARE_FUNCTION(execInput_ToggleRun); \
	DECLARE_FUNCTION(execInput_Wiggle); \
	DECLARE_FUNCTION(execIsBeingCarried); \
	DECLARE_FUNCTION(execIsBeingEndGameSacrificed); \
	DECLARE_FUNCTION(execIsBeingHealed); \
	DECLARE_FUNCTION(execIsBeingInteractedWith); \
	DECLARE_FUNCTION(execIsBeingKilled); \
	DECLARE_FUNCTION(execIsBeingMended); \
	DECLARE_FUNCTION(execIsBeingPickedUp); \
	DECLARE_FUNCTION(execIsBeingPulledFromCloset); \
	DECLARE_FUNCTION(execIsBeingPutDown); \
	DECLARE_FUNCTION(execIsBeingPutOnHook); \
	DECLARE_FUNCTION(execIsBeingUnhooked); \
	DECLARE_FUNCTION(execIsCrawling); \
	DECLARE_FUNCTION(execIsDeadOrInParadise); \
	DECLARE_FUNCTION(execIsEscaped); \
	DECLARE_FUNCTION(execIsGuidedBySlasher); \
	DECLARE_FUNCTION(execIsHealingTimerExpired); \
	DECLARE_FUNCTION(execIsHooked); \
	DECLARE_FUNCTION(execIsImmobilized); \
	DECLARE_FUNCTION(execIsInDeathBed); \
	DECLARE_FUNCTION(execIsInNeed); \
	DECLARE_FUNCTION(execIsMovementGuided); \
	DECLARE_FUNCTION(execIsObsessionTarget); \
	DECLARE_FUNCTION(execIsRunLocked); \
	DECLARE_FUNCTION(execIsSacrificed); \
	DECLARE_FUNCTION(execIsTrapped); \
	DECLARE_FUNCTION(execIsUnhookingSelf); \
	DECLARE_FUNCTION(execIsUnintentionallyImmobilized); \
	DECLARE_FUNCTION(execKill); \
	DECLARE_FUNCTION(execLocal_SetImmobilized); \
	DECLARE_FUNCTION(execMoveToOwnerCarryJoint); \
	DECLARE_FUNCTION(execMulticast_RemoveReverseBearTrap); \
	DECLARE_FUNCTION(execMulticast_SetAuthoritativeMovementFlag); \
	DECLARE_FUNCTION(execMulticast_SetGuidedAction); \
	DECLARE_FUNCTION(execMulticast_SetHookEscapeAutoFail); \
	DECLARE_FUNCTION(execMulticast_SetImmobilized); \
	DECLARE_FUNCTION(execMulticast_SetOverlappingEscape); \
	DECLARE_FUNCTION(execOnDroppedEnd); \
	DECLARE_FUNCTION(execOnDroppedStart); \
	DECLARE_FUNCTION(execOnFinishedPlaying); \
	DECLARE_FUNCTION(execOnHealthStateChanged); \
	DECLARE_FUNCTION(execOnHooked); \
	DECLARE_FUNCTION(execOnHpSlotSkillCheckResponseAesthetic); \
	DECLARE_FUNCTION(execOnObsessionChanged); \
	DECLARE_FUNCTION(execOnPawnSensed); \
	DECLARE_FUNCTION(execOnPickUpDenied); \
	DECLARE_FUNCTION(execOnPickUpEnter); \
	DECLARE_FUNCTION(execOnProximityEntered); \
	DECLARE_FUNCTION(execOnRep_RunInputPressed); \
	DECLARE_FUNCTION(execOnRep_SprintEffect); \
	DECLARE_FUNCTION(execOnUnhooked); \
	DECLARE_FUNCTION(execResetCameraAttach); \
	DECLARE_FUNCTION(execResetPotentialSaviors); \
	DECLARE_FUNCTION(execRunLocked); \
	DECLARE_FUNCTION(execServer_SendInteractMashedInput); \
	DECLARE_FUNCTION(execServer_SendLeftRightMashedInput); \
	DECLARE_FUNCTION(execServer_SetImmobilized); \
	DECLARE_FUNCTION(execServer_SetOverlappingEscape); \
	DECLARE_FUNCTION(execServer_SetRunInput); \
	DECLARE_FUNCTION(execSetAutoInteractionMashEnabled); \
	DECLARE_FUNCTION(execSetBeingCarried); \
	DECLARE_FUNCTION(execSetGuidedAction); \
	DECLARE_FUNCTION(execSetGuidedActionLocal); \
	DECLARE_FUNCTION(execSetImmobilized); \
	DECLARE_FUNCTION(execSetIsHealingKOCamper); \
	DECLARE_FUNCTION(execSetIsSkillCheckFailed); \
	DECLARE_FUNCTION(execSetRevealedSurvivor); \
	DECLARE_FUNCTION(execStartHealingTimer); \
	DECLARE_FUNCTION(execStopHealingTimer); \
	DECLARE_FUNCTION(execTriggerAfflictionHUDFeedback); \
	DECLARE_FUNCTION(execUpdateHealingTimer); \
	DECLARE_FUNCTION(execUpdateKillerDistanceEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_EVENT_PARMS \
	struct CamperPlayer_eventClient_OnSlashedOutOfTrap_Parms \
	{ \
		ADBDPlayer* requester; \
	}; \
	struct CamperPlayer_eventDBD_SetSurvivorCameraArmLength_Parms \
	{ \
		float cameraArmLength; \
	}; \
	struct CamperPlayer_eventGetWiggleChargeable_Parms \
	{ \
		UChargeableComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CamperPlayer_eventGetWiggleChargeable_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct CamperPlayer_eventIsVaulting_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CamperPlayer_eventIsVaulting_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct CamperPlayer_eventMulticast_SetAuthoritativeMovementFlag_Parms \
	{ \
		EAuthoritativeMovementFlag flag; \
		bool value; \
	}; \
	struct CamperPlayer_eventMulticast_SetGuidedAction_Parms \
	{ \
		ECamperGuidedAction action; \
	}; \
	struct CamperPlayer_eventMulticast_SetHookEscapeAutoFail_Parms \
	{ \
		bool enabled; \
	}; \
	struct CamperPlayer_eventMulticast_SetImmobilized_Parms \
	{ \
		ECamperImmobilizeState state; \
	}; \
	struct CamperPlayer_eventMulticast_SetOverlappingEscape_Parms \
	{ \
		AActor* NewEscape; \
	}; \
	struct CamperPlayer_eventOnDamageHit_Parms \
	{ \
		bool causedKO; \
		bool isWeaponHit; \
	}; \
	struct CamperPlayer_eventOnPlayScream_Parms \
	{ \
		UAkAudioEvent* audioEvent; \
		bool fireSoundEvent; \
	}; \
	struct CamperPlayer_eventServer_SendInteractMashedInput_Parms \
	{ \
		bool pressed; \
	}; \
	struct CamperPlayer_eventServer_SendLeftRightMashedInput_Parms \
	{ \
		bool pressed; \
	}; \
	struct CamperPlayer_eventServer_SetImmobilized_Parms \
	{ \
		ECamperImmobilizeState state; \
	}; \
	struct CamperPlayer_eventServer_SetOverlappingEscape_Parms \
	{ \
		AActor* NewEscape; \
	}; \
	struct CamperPlayer_eventServer_SetRunInput_Parms \
	{ \
		bool pressed; \
	}; \
	struct CamperPlayer_eventSetVignetteVisible_Parms \
	{ \
		bool visible; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACamperPlayer(); \
	friend struct Z_Construct_UClass_ACamperPlayer_Statics; \
public: \
	DECLARE_CLASS(ACamperPlayer, ADBDPlayer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ACamperPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ACamperPlayer*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_runInputPressed=NETFIELD_REP_START, \
		_sprintEffect, \
		NETFIELD_REP_END=_sprintEffect	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_INCLASS \
private: \
	static void StaticRegisterNativesACamperPlayer(); \
	friend struct Z_Construct_UClass_ACamperPlayer_Statics; \
public: \
	DECLARE_CLASS(ACamperPlayer, ADBDPlayer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ACamperPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ACamperPlayer*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_runInputPressed=NETFIELD_REP_START, \
		_sprintEffect, \
		NETFIELD_REP_END=_sprintEffect	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACamperPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACamperPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamperPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamperPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamperPlayer(ACamperPlayer&&); \
	NO_API ACamperPlayer(const ACamperPlayer&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamperPlayer(ACamperPlayer&&); \
	NO_API ACamperPlayer(const ACamperPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamperPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamperPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACamperPlayer)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___stillnessTracker() { return STRUCT_OFFSET(ACamperPlayer, _stillnessTracker); } \
	FORCEINLINE static uint32 __PPO__PartiallyHiddenStillnessThreshold() { return STRUCT_OFFSET(ACamperPlayer, PartiallyHiddenStillnessThreshold); } \
	FORCEINLINE static uint32 __PPO___escape() { return STRUCT_OFFSET(ACamperPlayer, _escape); } \
	FORCEINLINE static uint32 __PPO___overlappingEscape() { return STRUCT_OFFSET(ACamperPlayer, _overlappingEscape); } \
	FORCEINLINE static uint32 __PPO__ProximityZone() { return STRUCT_OFFSET(ACamperPlayer, ProximityZone); } \
	FORCEINLINE static uint32 __PPO___dropStaggerTimer() { return STRUCT_OFFSET(ACamperPlayer, _dropStaggerTimer); } \
	FORCEINLINE static uint32 __PPO__SlashableZone() { return STRUCT_OFFSET(ACamperPlayer, SlashableZone); } \
	FORCEINLINE static uint32 __PPO__HookSlashableZone() { return STRUCT_OFFSET(ACamperPlayer, HookSlashableZone); } \
	FORCEINLINE static uint32 __PPO___camperSlashable() { return STRUCT_OFFSET(ACamperPlayer, _camperSlashable); } \
	FORCEINLINE static uint32 __PPO___terrorRadiusReceiverComponent() { return STRUCT_OFFSET(ACamperPlayer, _terrorRadiusReceiverComponent); } \
	FORCEINLINE static uint32 __PPO__CrouchCapsuleHalfHeight() { return STRUCT_OFFSET(ACamperPlayer, CrouchCapsuleHalfHeight); } \
	FORCEINLINE static uint32 __PPO__IKOffsetRightFoot() { return STRUCT_OFFSET(ACamperPlayer, IKOffsetRightFoot); } \
	FORCEINLINE static uint32 __PPO__IKOffsetLeftFoot() { return STRUCT_OFFSET(ACamperPlayer, IKOffsetLeftFoot); } \
	FORCEINLINE static uint32 __PPO___camperSensor() { return STRUCT_OFFSET(ACamperPlayer, _camperSensor); } \
	FORCEINLINE static uint32 __PPO___surviveTimerScoreComponent() { return STRUCT_OFFSET(ACamperPlayer, _surviveTimerScoreComponent); } \
	FORCEINLINE static uint32 __PPO___foundCampers() { return STRUCT_OFFSET(ACamperPlayer, _foundCampers); } \
	FORCEINLINE static uint32 __PPO___potentialSaviors() { return STRUCT_OFFSET(ACamperPlayer, _potentialSaviors); } \
	FORCEINLINE static uint32 __PPO___healthComponent() { return STRUCT_OFFSET(ACamperPlayer, _healthComponent); } \
	FORCEINLINE static uint32 __PPO___hpSlot01() { return STRUCT_OFFSET(ACamperPlayer, _hpSlot01); } \
	FORCEINLINE static uint32 __PPO___hpSlot02() { return STRUCT_OFFSET(ACamperPlayer, _hpSlot02); } \
	FORCEINLINE static uint32 __PPO___mendChargeable() { return STRUCT_OFFSET(ACamperPlayer, _mendChargeable); } \
	FORCEINLINE static uint32 __PPO___bloodTrailSettings() { return STRUCT_OFFSET(ACamperPlayer, _bloodTrailSettings); } \
	FORCEINLINE static uint32 __PPO___bloodTrailComponent() { return STRUCT_OFFSET(ACamperPlayer, _bloodTrailComponent); } \
	FORCEINLINE static uint32 __PPO___killerInstinctComponent() { return STRUCT_OFFSET(ACamperPlayer, _killerInstinctComponent); } \
	FORCEINLINE static uint32 __PPO___cameraAttachment() { return STRUCT_OFFSET(ACamperPlayer, _cameraAttachment); } \
	FORCEINLINE static uint32 __PPO___charmSpawnerComponent() { return STRUCT_OFFSET(ACamperPlayer, _charmSpawnerComponent); } \
	FORCEINLINE static uint32 __PPO___hookableComponent() { return STRUCT_OFFSET(ACamperPlayer, _hookableComponent); } \
	FORCEINLINE static uint32 __PPO___protectionHitComponent() { return STRUCT_OFFSET(ACamperPlayer, _protectionHitComponent); } \
	FORCEINLINE static uint32 __PPO___screamComponent() { return STRUCT_OFFSET(ACamperPlayer, _screamComponent); } \
	FORCEINLINE static uint32 __PPO___positionRecorder() { return STRUCT_OFFSET(ACamperPlayer, _positionRecorder); } \
	FORCEINLINE static uint32 __PPO___runInputPressed() { return STRUCT_OFFSET(ACamperPlayer, _runInputPressed); } \
	FORCEINLINE static uint32 __PPO___trapIndicatorActive() { return STRUCT_OFFSET(ACamperPlayer, _trapIndicatorActive); } \
	FORCEINLINE static uint32 __PPO___revealedSurvivor() { return STRUCT_OFFSET(ACamperPlayer, _revealedSurvivor); } \
	FORCEINLINE static uint32 __PPO___camperEndGameComponent() { return STRUCT_OFFSET(ACamperPlayer, _camperEndGameComponent); } \
	FORCEINLINE static uint32 __PPO___noOcclusionAkComponent() { return STRUCT_OFFSET(ACamperPlayer, _noOcclusionAkComponent); } \
	FORCEINLINE static uint32 __PPO___isHealingKOCamper() { return STRUCT_OFFSET(ACamperPlayer, _isHealingKOCamper); } \
	FORCEINLINE static uint32 __PPO___isSkillCheckFailed() { return STRUCT_OFFSET(ACamperPlayer, _isSkillCheckFailed); } \
	FORCEINLINE static uint32 __PPO___isBeingSacrificed() { return STRUCT_OFFSET(ACamperPlayer, _isBeingSacrificed); } \
	FORCEINLINE static uint32 __PPO___isWiggleProgressionAllowed() { return STRUCT_OFFSET(ACamperPlayer, _isWiggleProgressionAllowed); } \
	FORCEINLINE static uint32 __PPO___meshMover() { return STRUCT_OFFSET(ACamperPlayer, _meshMover); } \
	FORCEINLINE static uint32 __PPO___sprintEffect() { return STRUCT_OFFSET(ACamperPlayer, _sprintEffect); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_64_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ACamperPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CamperPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
