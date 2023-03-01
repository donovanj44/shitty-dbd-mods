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
enum class EAttackType : uint8;
enum class EDetectionZone : uint8;
class UPrimitiveComponent;
class UInteractor;
struct FGameplayTag;
struct FScoreEventData;
class UGameplayModifierContainer;
class UStatusEffect;
enum class EStunType : uint8;
class UCharacterDreamworldComponent;
enum class EDBDScoreTypes : uint8;
struct FVector;
struct FRotator;
struct FAnimationMontageDescriptor;
enum class EInputInteractionType : uint8;
class ACharacter;
struct FAnimData;
class UAnimInstance;
class APlayerState;
class USceneComponent;
class UAuthoritativeMovementComponent;
class UBlindableComponent;
class ADBDPlayerCameraManager;
class UCharacterInventoryComponent;
class UChaseComponent;
enum class EInteractionAnimation : uint8;
class UCustomizedSkeletalMesh;
class ADBDPlayerState;
class UActorComponent;
class AInteractable;
class UInteractionDetectorComponent;
struct FInteractionPlayerProperties;
class UItemAddon;
class UItemModifier;
class UAnimMontage;
struct FMontagePlaybackDefinition;
class UMontagePlayer;
class UGameplayTagContainerComponent;
class UOtherCharactersVerticalCollisionsHandler;
enum class EPawnType : uint8;
class UPerkManager;
class UBoxOcclusionQueryComponent;
class UCameraComponent;
class ADBDPlayerController;
class UPlayerInteractionHandler;
enum class EPlayerRole : uint8;
enum class EPlayerTeam : uint8;
class AActor;
struct FHitResult;
struct FTransform;
struct FGuid;
class AController;
struct FCharmIdSlot;
class ACollectable;
enum class EAuthoritativeMovementFlag : uint8;
enum class EAnimNotifyType : uint8;
#ifdef DEADBYDAYLIGHT_DBDPlayer_generated_h
#error "DBDPlayer.generated.h already included, missing '#pragma once' in DBDPlayer.h"
#endif
#define DEADBYDAYLIGHT_DBDPlayer_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_116_DELEGATE \
struct _Script_DeadByDaylight_eventDBDPlayerOnLocallyObservedChangedForPlayer_Parms \
{ \
	ADBDPlayer* player; \
}; \
static inline void FDBDPlayerOnLocallyObservedChangedForPlayer_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerOnLocallyObservedChangedForPlayer, ADBDPlayer* player) \
{ \
	_Script_DeadByDaylight_eventDBDPlayerOnLocallyObservedChangedForPlayer_Parms Parms; \
	Parms.player=player; \
	DBDPlayerOnLocallyObservedChangedForPlayer.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_115_DELEGATE \
struct _Script_DeadByDaylight_eventDBDPlayerOnRunningAndMovingChanged_Parms \
{ \
	bool isRunningAndMoving; \
}; \
static inline void FDBDPlayerOnRunningAndMovingChanged_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerOnRunningAndMovingChanged, bool isRunningAndMoving) \
{ \
	_Script_DeadByDaylight_eventDBDPlayerOnRunningAndMovingChanged_Parms Parms; \
	Parms.isRunningAndMoving=isRunningAndMoving ? true : false; \
	DBDPlayerOnRunningAndMovingChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_114_DELEGATE \
struct _Script_DeadByDaylight_eventDBDPlayerOnIsCrouchedChanged_Parms \
{ \
	bool isCrouched; \
}; \
static inline void FDBDPlayerOnIsCrouchedChanged_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerOnIsCrouchedChanged, bool isCrouched) \
{ \
	_Script_DeadByDaylight_eventDBDPlayerOnIsCrouchedChanged_Parms Parms; \
	Parms.isCrouched=isCrouched ? true : false; \
	DBDPlayerOnIsCrouchedChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_113_DELEGATE \
struct _Script_DeadByDaylight_eventDBDPlayerOnForwardInputLockedChanged_Parms \
{ \
	bool forwardInputLockValue; \
}; \
static inline void FDBDPlayerOnForwardInputLockedChanged_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerOnForwardInputLockedChanged, bool forwardInputLockValue) \
{ \
	_Script_DeadByDaylight_eventDBDPlayerOnForwardInputLockedChanged_Parms Parms; \
	Parms.forwardInputLockValue=forwardInputLockValue ? true : false; \
	DBDPlayerOnForwardInputLockedChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_112_DELEGATE \
struct _Script_DeadByDaylight_eventDBDPlayerAuthority_OnSecondaryActionInput_Parms \
{ \
	ADBDPlayer* player; \
	UInteractionDefinition* interaction; \
	bool fromCancelRequest; \
}; \
static inline void FDBDPlayerAuthority_OnSecondaryActionInput_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerAuthority_OnSecondaryActionInput, ADBDPlayer* player, UInteractionDefinition* interaction, bool fromCancelRequest) \
{ \
	_Script_DeadByDaylight_eventDBDPlayerAuthority_OnSecondaryActionInput_Parms Parms; \
	Parms.player=player; \
	Parms.interaction=interaction; \
	Parms.fromCancelRequest=fromCancelRequest ? true : false; \
	DBDPlayerAuthority_OnSecondaryActionInput.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_111_DELEGATE \
struct _Script_DeadByDaylight_eventDBDPlayerOnAnimNotify_Release_Parms \
{ \
	ADBDPlayer* player; \
}; \
static inline void FDBDPlayerOnAnimNotify_Release_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerOnAnimNotify_Release, ADBDPlayer* player) \
{ \
	_Script_DeadByDaylight_eventDBDPlayerOnAnimNotify_Release_Parms Parms; \
	Parms.player=player; \
	DBDPlayerOnAnimNotify_Release.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_110_DELEGATE \
struct _Script_DeadByDaylight_eventDBDPlayerOnFirstPersonModeChanged_Parms \
{ \
	bool firstPerson; \
}; \
static inline void FDBDPlayerOnFirstPersonModeChanged_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerOnFirstPersonModeChanged, bool firstPerson) \
{ \
	_Script_DeadByDaylight_eventDBDPlayerOnFirstPersonModeChanged_Parms Parms; \
	Parms.firstPerson=firstPerson ? true : false; \
	DBDPlayerOnFirstPersonModeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_109_DELEGATE \
struct _Script_DeadByDaylight_eventDBDPlayerOnAnimNotify_Pickup_Parms \
{ \
	ADBDPlayer* player; \
}; \
static inline void FDBDPlayerOnAnimNotify_Pickup_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerOnAnimNotify_Pickup, ADBDPlayer* player) \
{ \
	_Script_DeadByDaylight_eventDBDPlayerOnAnimNotify_Pickup_Parms Parms; \
	Parms.player=player; \
	DBDPlayerOnAnimNotify_Pickup.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_108_DELEGATE \
struct _Script_DeadByDaylight_eventDBDPlayerOnSensed_Parms \
{ \
	ADBDPlayer* player; \
}; \
static inline void FDBDPlayerOnSensed_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerOnSensed, ADBDPlayer* player) \
{ \
	_Script_DeadByDaylight_eventDBDPlayerOnSensed_Parms Parms; \
	Parms.player=player; \
	DBDPlayerOnSensed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_107_DELEGATE \
struct _Script_DeadByDaylight_eventDBDPlayerOnDamageTargetDelegate_Parms \
{ \
	ADBDPlayer* source; \
	ADBDPlayer* target; \
	EAttackType attackType; \
	bool didDamage; \
}; \
static inline void FDBDPlayerOnDamageTargetDelegate_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerOnDamageTargetDelegate, ADBDPlayer* source, ADBDPlayer* target, EAttackType attackType, bool didDamage) \
{ \
	_Script_DeadByDaylight_eventDBDPlayerOnDamageTargetDelegate_Parms Parms; \
	Parms.source=source; \
	Parms.target=target; \
	Parms.attackType=attackType; \
	Parms.didDamage=didDamage ? true : false; \
	DBDPlayerOnDamageTargetDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_106_DELEGATE \
static inline void FDBDPlayerAuthority_OnAttackedDelegate_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerAuthority_OnAttackedDelegate) \
{ \
	DBDPlayerAuthority_OnAttackedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_105_DELEGATE \
struct _Script_DeadByDaylight_eventDBDPlayerOnDreamworldComponentSet_Parms \
{ \
	ADBDPlayer* player; \
}; \
static inline void FDBDPlayerOnDreamworldComponentSet_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerOnDreamworldComponentSet, ADBDPlayer* player) \
{ \
	_Script_DeadByDaylight_eventDBDPlayerOnDreamworldComponentSet_Parms Parms; \
	Parms.player=player; \
	DBDPlayerOnDreamworldComponentSet.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_RPC_WRAPPERS \
	virtual bool Broadcast_BlinkDestination_Validate(FVector , FRotator ); \
	virtual void Broadcast_BlinkDestination_Implementation(FVector position, FRotator rotation); \
	virtual bool Broadcast_Multicast_BlinkDestination_Validate(FVector , FRotator ); \
	virtual void Broadcast_Multicast_BlinkDestination_Implementation(FVector position, FRotator rotation); \
	virtual bool Broadcast_PlayMontage_Multicast_Validate(FAnimationMontageDescriptor , float ); \
	virtual void Broadcast_PlayMontage_Multicast_Implementation(FAnimationMontageDescriptor animMontageID, float playRate); \
	virtual bool Broadcast_PlayMontage_Server_Validate(FAnimationMontageDescriptor , float ); \
	virtual void Broadcast_PlayMontage_Server_Implementation(FAnimationMontageDescriptor animMontageID, float playRate); \
	virtual bool CanInterrupt_BP_Implementation() const; \
	virtual bool Client_ClearInteractionQueue_Validate(); \
	virtual void Client_ClearInteractionQueue_Implementation(); \
	virtual bool Client_QueueInteraction_Validate(EInputInteractionType , ADBDPlayer* , float ); \
	virtual void Client_QueueInteraction_Implementation(EInputInteractionType InteractionType, ADBDPlayer* Requester, float queuedTimer); \
	virtual bool Client_SendCancelInteraction_Validate(const UInteractionDefinition* ); \
	virtual void Client_SendCancelInteraction_Implementation(const UInteractionDefinition* interactionDefinition); \
	virtual void Client_TryInteraction_Implementation(UInteractionDefinition* interaction, ADBDPlayer* requester, bool force, bool usingInputPersistence); \
	virtual bool Client_TryInteractionType_Validate(EInputInteractionType , ADBDPlayer* ); \
	virtual void Client_TryInteractionType_Implementation(EInputInteractionType interactionType, ADBDPlayer* requester); \
	virtual void DBDCrouch_Implementation(); \
	virtual void DBDUnCrouch_Implementation(); \
	virtual APlayerState* GetAssociatedPlayerState_Implementation() const; \
	virtual USceneComponent* GetAttachPoint_Implementation(FName attachPointName) const; \
	virtual UCustomizedSkeletalMesh* GetCustomizedSkeletalMesh_Implementation(); \
	virtual float GetGrassEffectRadiusMultiplier_Implementation() const; \
	virtual ADBDPlayerController* GetSharedPlayerController_Implementation() const; \
	virtual void Local_NotifyMatchEnded_Implementation(); \
	virtual bool Multicast_ConfirmItemDrop_Validate(bool ); \
	virtual void Multicast_ConfirmItemDrop_Implementation(bool pressed); \
	virtual bool Multicast_InteractionRollResult_Validate(bool ); \
	virtual void Multicast_InteractionRollResult_Implementation(bool rollResult); \
	virtual bool Multicast_LeaveGame_Validate(FGuid ); \
	virtual void Multicast_LeaveGame_Implementation(FGuid uniqueLeavingPlayerId); \
	virtual bool Multicast_OnInsaneSkillCheck_Validate(); \
	virtual void Multicast_OnInsaneSkillCheck_Implementation(); \
	virtual bool Multicast_PlayMontage_Validate(FAnimationMontageDescriptor , float ); \
	virtual void Multicast_PlayMontage_Implementation(FAnimationMontageDescriptor animMontageID, float playRate); \
	virtual void Multicast_ReplicateController_Implementation(AController* newController); \
	virtual bool Multicast_ServerResetMeshRelativeOffSet_Validate(); \
	virtual void Multicast_ServerResetMeshRelativeOffSet_Implementation(); \
	virtual bool Multicast_SetAuthoritativeMovement_Validate(bool ); \
	virtual void Multicast_SetAuthoritativeMovement_Implementation(bool enabled); \
	virtual bool Multicast_SetContinuousPrintDebug_Validate(bool ); \
	virtual void Multicast_SetContinuousPrintDebug_Implementation(bool enabled); \
	virtual bool Multicast_SetCustomization_Validate(TArray<FName> const& , TArray<FCharmIdSlot> const& ); \
	virtual void Multicast_SetCustomization_Implementation(TArray<FName> const& customizationParts, TArray<FCharmIdSlot> const& customizationCharms); \
	virtual bool Multicast_SetDebugCarry_Validate(bool ); \
	virtual void Multicast_SetDebugCarry_Implementation(bool enabled); \
	virtual bool Multicast_SetDebugPrintAvailableInteractions_Validate(bool ); \
	virtual void Multicast_SetDebugPrintAvailableInteractions_Implementation(bool enabled); \
	virtual bool Multicast_SetDebugSnapPoint_Validate(bool ); \
	virtual void Multicast_SetDebugSnapPoint_Implementation(bool enabled); \
	virtual void Multicast_SetEnableCapsuleDynamicResize_Implementation(bool enabled); \
	virtual bool Multicast_SetForceAuthoritativeMovement_Validate(bool ); \
	virtual void Multicast_SetForceAuthoritativeMovement_Implementation(bool value); \
	virtual void Multicast_SetInteractingPlayer_Implementation(ADBDPlayer* interactingPlayer); \
	virtual bool Multicast_SetMaxWalkSpeed_Validate(float ); \
	virtual void Multicast_SetMaxWalkSpeed_Implementation(float maxWalkSpeed); \
	virtual bool Multicast_SetReverseTraverseEnabled_Validate(bool ); \
	virtual void Multicast_SetReverseTraverseEnabled_Implementation(bool enabled); \
	virtual bool Multicast_SetRunVaultEnabled_Validate(bool ); \
	virtual void Multicast_SetRunVaultEnabled_Implementation(bool enabled); \
	virtual FString OnGetCharacterName_Implementation() const; \
	virtual void OnLevelReadyToPlay_Implementation(); \
	virtual bool Server_Drop_Validate(ACollectable* , FVector const& , FRotator const& , bool ); \
	virtual void Server_Drop_Implementation(ACollectable* item, FVector const& location, FRotator const& rotation, bool onDeath); \
	virtual bool Server_OnInsaneSkillCheck_Validate(); \
	virtual void Server_OnInsaneSkillCheck_Implementation(); \
	virtual bool Server_PlayerReady_Validate(); \
	virtual void Server_PlayerReady_Implementation(); \
	virtual bool Server_SendAbilityInput_Validate(bool ); \
	virtual void Server_SendAbilityInput_Implementation(bool pressed); \
	virtual bool Server_SendFastInteractionInput_Validate(bool ); \
	virtual void Server_SendFastInteractionInput_Implementation(bool pressed); \
	virtual bool Server_SendInteractionInput_Validate(bool ); \
	virtual void Server_SendInteractionInput_Implementation(bool pressed); \
	virtual bool Server_SendItemDropInput_Validate(bool ); \
	virtual void Server_SendItemDropInput_Implementation(bool pressed); \
	virtual bool Server_SendItemUse_Validate(bool ); \
	virtual void Server_SendItemUse_Implementation(bool use); \
	virtual bool Server_SendItemUseInput_Validate(bool ); \
	virtual void Server_SendItemUseInput_Implementation(bool pressed); \
	virtual bool Server_SendSecondaryActionPressed_Validate(bool ); \
	virtual void Server_SendSecondaryActionPressed_Implementation(bool fromCancelRequest); \
	virtual bool Server_SetCustomization_Validate(TArray<FName> const& , TArray<FCharmIdSlot> const& ); \
	virtual void Server_SetCustomization_Implementation(TArray<FName> const& customizationParts, TArray<FCharmIdSlot> const& customizationCharms); \
	virtual bool Server_UpdateScreenAspectRatio_Validate(const float ); \
	virtual void Server_UpdateScreenAspectRatio_Implementation(const float value); \
 \
	DECLARE_FUNCTION(execAbilityInputPressed); \
	DECLARE_FUNCTION(execAbilityInputReleased); \
	DECLARE_FUNCTION(execAddDetectionZone); \
	DECLARE_FUNCTION(execAttachInteractor); \
	DECLARE_FUNCTION(execAuthority_ActivateAuthoritativeMovementOnDropped); \
	DECLARE_FUNCTION(execAuthority_CancelOngoingScoreEvent); \
	DECLARE_FUNCTION(execAuthority_EndOngoingScoreEvent); \
	DECLARE_FUNCTION(execAuthority_EndStatusEffectByID); \
	DECLARE_FUNCTION(execAuthority_EvaluateIfPlayerCanSee); \
	DECLARE_FUNCTION(execAuthority_HandleScoreEvent); \
	DECLARE_FUNCTION(execAuthority_ImposeDynamicStatusEffect); \
	DECLARE_FUNCTION(execAuthority_ImposeStatusEffect); \
	DECLARE_FUNCTION(execAuthority_RemoveStatusEffectByID); \
	DECLARE_FUNCTION(execAuthority_RequestStun); \
	DECLARE_FUNCTION(execAuthority_SetDreamworldComponent); \
	DECLARE_FUNCTION(execAuthority_TryForceCancelOngoingScoreEvent); \
	DECLARE_FUNCTION(execAuthority_TryForceEndOngoingScoreEvent); \
	DECLARE_FUNCTION(execBroadcast_BlinkDestination); \
	DECLARE_FUNCTION(execBroadcast_Multicast_BlinkDestination); \
	DECLARE_FUNCTION(execBroadcast_PlayMontage_Multicast); \
	DECLARE_FUNCTION(execBroadcast_PlayMontage_Server); \
	DECLARE_FUNCTION(execCameraUpdated); \
	DECLARE_FUNCTION(execCanBeBlinded); \
	DECLARE_FUNCTION(execCancelCarry); \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execCanInteractWithItems); \
	DECLARE_FUNCTION(execCanInterrupt_BP); \
	DECLARE_FUNCTION(execClient_ClearInteractionQueue); \
	DECLARE_FUNCTION(execClient_QueueInteraction); \
	DECLARE_FUNCTION(execClient_SendCancelInteraction); \
	DECLARE_FUNCTION(execClient_TryInteraction); \
	DECLARE_FUNCTION(execClient_TryInteractionType); \
	DECLARE_FUNCTION(execDBD_DebugStartInteraction); \
	DECLARE_FUNCTION(execDBD_SetForwardInputLock); \
	DECLARE_FUNCTION(execDBD_SetMouseLookUpSpeedMultiplier); \
	DECLARE_FUNCTION(execDBD_SetMouseTurnSpeedMultiplier); \
	DECLARE_FUNCTION(execDBD_ToggleDebugInteractionInZone); \
	DECLARE_FUNCTION(execDBD_ToggleForceAuthoritativeMovement); \
	DECLARE_FUNCTION(execDBDCrouch); \
	DECLARE_FUNCTION(execDBDLog); \
	DECLARE_FUNCTION(execDBDUnCrouch); \
	DECLARE_FUNCTION(execDeactivateSkillChecks); \
	DECLARE_FUNCTION(execDebugPrint); \
	DECLARE_FUNCTION(execDetachInteractor); \
	DECLARE_FUNCTION(execFastInteractionInputPressed); \
	DECLARE_FUNCTION(execFastInteractionInputReleased); \
	DECLARE_FUNCTION(execFindClosestSlashableCharacterInDetectionZone); \
	DECLARE_FUNCTION(execFindClosestSlashablePlayerInDetectionZone); \
	DECLARE_FUNCTION(execFindFurthestClearLocationBetweenPoints); \
	DECLARE_FUNCTION(execGetActorLocationFromFeetLocation); \
	DECLARE_FUNCTION(execGetAlmostCurrentVelocity); \
	DECLARE_FUNCTION(execGetAnimData); \
	DECLARE_FUNCTION(execGetAnimInstance); \
	DECLARE_FUNCTION(execGetAnimTags); \
	DECLARE_FUNCTION(execGetAssociatedPlayerState); \
	DECLARE_FUNCTION(execGetAttachPoint); \
	DECLARE_FUNCTION(execGetAuthoritativeMovementComponent); \
	DECLARE_FUNCTION(execGetAverageVelocity); \
	DECLARE_FUNCTION(execGetBaseFOV); \
	DECLARE_FUNCTION(execGetBlindableComponent); \
	DECLARE_FUNCTION(execGetBlinkTime); \
	DECLARE_FUNCTION(execGetBoneLocation); \
	DECLARE_FUNCTION(execGetBoneRelativeLocation); \
	DECLARE_FUNCTION(execGetCameraCharacterYawDiff); \
	DECLARE_FUNCTION(execGetCameraManager); \
	DECLARE_FUNCTION(execGetCharacterInventoryComponent); \
	DECLARE_FUNCTION(execGetChargeableInteractionMultiplier); \
	DECLARE_FUNCTION(execGetChaseComponent); \
	DECLARE_FUNCTION(execGetContinuousPrintDebug); \
	DECLARE_FUNCTION(execGetCurrentInteraction); \
	DECLARE_FUNCTION(execGetCurrentInteractionAnimation); \
	DECLARE_FUNCTION(execGetCustomizedSkeletalMesh); \
	DECLARE_FUNCTION(execGetDBDPlayerState); \
	DECLARE_FUNCTION(execGetDebugFailAllInteractions); \
	DECLARE_FUNCTION(execGetDebugPrintAvailableInteractions); \
	DECLARE_FUNCTION(execGetDetectionZone); \
	DECLARE_FUNCTION(execGetDreamworldComponent); \
	DECLARE_FUNCTION(execGetFeetOnGround); \
	DECLARE_FUNCTION(execGetFeetPosition); \
	DECLARE_FUNCTION(execGetFeetPositionAtTargetLocation); \
	DECLARE_FUNCTION(execGetFirstComponentByClass); \
	DECLARE_FUNCTION(execGetForceDisableSkillChecks); \
	DECLARE_FUNCTION(execGetGrassEffectRadiusMultiplier); \
	DECLARE_FUNCTION(execGetGuidingPlayer); \
	DECLARE_FUNCTION(execGetInteractable); \
	DECLARE_FUNCTION(execGetInteractionDetectorComponent); \
	DECLARE_FUNCTION(execGetInteractionPlayerProperties); \
	DECLARE_FUNCTION(execGetInteractionRollResult); \
	DECLARE_FUNCTION(execGetIsBeyondCrouchWalkSpeed); \
	DECLARE_FUNCTION(execGetIsInFirstPerson); \
	DECLARE_FUNCTION(execGetIsInteracting); \
	DECLARE_FUNCTION(execGetIsInterrupting); \
	DECLARE_FUNCTION(execGetItemAddons); \
	DECLARE_FUNCTION(execGetItemDropOffTransform); \
	DECLARE_FUNCTION(execGetItemModifiers); \
	DECLARE_FUNCTION(execGetLastSafeLocation); \
	DECLARE_FUNCTION(execGetLuck); \
	DECLARE_FUNCTION(execGetMaxSpeed); \
	DECLARE_FUNCTION(execGetMeshFeetPosition); \
	DECLARE_FUNCTION(execGetMontage); \
	DECLARE_FUNCTION(execGetMontageLength); \
	DECLARE_FUNCTION(execGetMontagePlaybackDefinition); \
	DECLARE_FUNCTION(execGetMontagePlayer); \
	DECLARE_FUNCTION(execGetNameDebugString); \
	DECLARE_FUNCTION(execGetNearbyGroundLocation); \
	DECLARE_FUNCTION(execGetObjectState); \
	DECLARE_FUNCTION(execGetOtherCharactersVerticalCollisionsHandler); \
	DECLARE_FUNCTION(execGetPawnType); \
	DECLARE_FUNCTION(execGetPercentMovementSpeed); \
	DECLARE_FUNCTION(execGetPercentPixelsVisible); \
	DECLARE_FUNCTION(execGetPerkManager); \
	DECLARE_FUNCTION(execGetPixelCounter); \
	DECLARE_FUNCTION(execGetPlayerCamera); \
	DECLARE_FUNCTION(execGetPlayerController); \
	DECLARE_FUNCTION(execGetPlayerDirection); \
	DECLARE_FUNCTION(execGetPlayerInteractionHandler); \
	DECLARE_FUNCTION(execGetPlayerRole); \
	DECLARE_FUNCTION(execGetPlayerTeam); \
	DECLARE_FUNCTION(execGetRemainingTrapImmunityDuration); \
	DECLARE_FUNCTION(execGetRepControlRotation); \
	DECLARE_FUNCTION(execGetReverseTraverseEnabled); \
	DECLARE_FUNCTION(execGetRunVaultEnabled); \
	DECLARE_FUNCTION(execGetSharedPlayerController); \
	DECLARE_FUNCTION(execGetTunableValue); \
	DECLARE_FUNCTION(execHasAnimMontageEnded); \
	DECLARE_FUNCTION(execHasClearPathToItemDropOffPosition); \
	DECLARE_FUNCTION(execHasClearPathToTarget); \
	DECLARE_FUNCTION(execHasClearPathToTargetWithIgnore); \
	DECLARE_FUNCTION(execHasDamageImmunity); \
	DECLARE_FUNCTION(execHasMoveInput); \
	DECLARE_FUNCTION(execHasTrapImmunity); \
	DECLARE_FUNCTION(execHideHead); \
	DECLARE_FUNCTION(execInput_ToggleCrouch); \
	DECLARE_FUNCTION(execInteractionInputPressed); \
	DECLARE_FUNCTION(execInteractionInputReleased); \
	DECLARE_FUNCTION(execIsAIControlled); \
	DECLARE_FUNCTION(execIsAllowedNavigation); \
	DECLARE_FUNCTION(execIsBeingInterrupted); \
	DECLARE_FUNCTION(execIsCloaked); \
	DECLARE_FUNCTION(execIsCrouching); \
	DECLARE_FUNCTION(execIsCrouchPressed); \
	DECLARE_FUNCTION(execIsExhausted); \
	DECLARE_FUNCTION(execIsFacing); \
	DECLARE_FUNCTION(execIsHeadHidden); \
	DECLARE_FUNCTION(execIsInBasement); \
	DECLARE_FUNCTION(execIsIncapacitated); \
	DECLARE_FUNCTION(execIsInMeathookZone); \
	DECLARE_FUNCTION(execIsInParadise); \
	DECLARE_FUNCTION(execIsInsideCloset); \
	DECLARE_FUNCTION(execIsInStalkMode); \
	DECLARE_FUNCTION(execIsInteractionInputPressed); \
	DECLARE_FUNCTION(execIsInTerrorRadius); \
	DECLARE_FUNCTION(execIsLocallyObserved); \
	DECLARE_FUNCTION(execIsLocationClear); \
	DECLARE_FUNCTION(execIsMoving); \
	DECLARE_FUNCTION(execIsPlayingAnyMontage); \
	DECLARE_FUNCTION(execIsPlayingMontage); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execIsRunningAndMoving); \
	DECLARE_FUNCTION(execIsSnapping); \
	DECLARE_FUNCTION(execIsSnappingPosition); \
	DECLARE_FUNCTION(execIsSnappingRotation); \
	DECLARE_FUNCTION(execIsStrafing); \
	DECLARE_FUNCTION(execItemDropPressed); \
	DECLARE_FUNCTION(execItemDropReleased); \
	DECLARE_FUNCTION(execItemUsePressed); \
	DECLARE_FUNCTION(execItemUseReleased); \
	DECLARE_FUNCTION(execK2_SetActorLocationByBottomCapsule); \
	DECLARE_FUNCTION(execLocal_IsInteractionInputPressed); \
	DECLARE_FUNCTION(execLocal_NotifyMatchEnded); \
	DECLARE_FUNCTION(execLocal_RequestBlink); \
	DECLARE_FUNCTION(execMulticast_ConfirmItemDrop); \
	DECLARE_FUNCTION(execMulticast_InteractionRollResult); \
	DECLARE_FUNCTION(execMulticast_LeaveGame); \
	DECLARE_FUNCTION(execMulticast_OnInsaneSkillCheck); \
	DECLARE_FUNCTION(execMulticast_PlayMontage); \
	DECLARE_FUNCTION(execMulticast_ReplicateController); \
	DECLARE_FUNCTION(execMulticast_ServerResetMeshRelativeOffSet); \
	DECLARE_FUNCTION(execMulticast_SetAuthoritativeMovement); \
	DECLARE_FUNCTION(execMulticast_SetContinuousPrintDebug); \
	DECLARE_FUNCTION(execMulticast_SetCustomization); \
	DECLARE_FUNCTION(execMulticast_SetDebugCarry); \
	DECLARE_FUNCTION(execMulticast_SetDebugPrintAvailableInteractions); \
	DECLARE_FUNCTION(execMulticast_SetDebugSnapPoint); \
	DECLARE_FUNCTION(execMulticast_SetEnableCapsuleDynamicResize); \
	DECLARE_FUNCTION(execMulticast_SetForceAuthoritativeMovement); \
	DECLARE_FUNCTION(execMulticast_SetInteractingPlayer); \
	DECLARE_FUNCTION(execMulticast_SetMaxWalkSpeed); \
	DECLARE_FUNCTION(execMulticast_SetReverseTraverseEnabled); \
	DECLARE_FUNCTION(execMulticast_SetRunVaultEnabled); \
	DECLARE_FUNCTION(execOnAllPlayerLoaded); \
	DECLARE_FUNCTION(execOnAnimInstanceChanged); \
	DECLARE_FUNCTION(execOnBlindChargeEmptied); \
	DECLARE_FUNCTION(execOnCurrentMontageBlendingOut); \
	DECLARE_FUNCTION(execOnCurrentMontageComplete); \
	DECLARE_FUNCTION(execOnGetCharacterName); \
	DECLARE_FUNCTION(execOnHudVisibilityChangedNative); \
	DECLARE_FUNCTION(execOnIntroCompletedNative); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnPickupEnd); \
	DECLARE_FUNCTION(execOnPickupStart); \
	DECLARE_FUNCTION(execOnRep_DreamworldComponent); \
	DECLARE_FUNCTION(execOnRep_Interactable); \
	DECLARE_FUNCTION(execPlayMontage); \
	DECLARE_FUNCTION(execRemotely_HandleScoreEvent); \
	DECLARE_FUNCTION(execRemoveStatusEffect); \
	DECLARE_FUNCTION(execResetCamera); \
	DECLARE_FUNCTION(execResetMeshRelativePosition); \
	DECLARE_FUNCTION(execResetMeshRelativeRotation); \
	DECLARE_FUNCTION(execResetPitchScale); \
	DECLARE_FUNCTION(execResetYawScale); \
	DECLARE_FUNCTION(execSecondaryActionInputPressed); \
	DECLARE_FUNCTION(execServer_Drop); \
	DECLARE_FUNCTION(execServer_OnInsaneSkillCheck); \
	DECLARE_FUNCTION(execServer_PlayerReady); \
	DECLARE_FUNCTION(execServer_SendAbilityInput); \
	DECLARE_FUNCTION(execServer_SendFastInteractionInput); \
	DECLARE_FUNCTION(execServer_SendInteractionInput); \
	DECLARE_FUNCTION(execServer_SendItemDropInput); \
	DECLARE_FUNCTION(execServer_SendItemUse); \
	DECLARE_FUNCTION(execServer_SendItemUseInput); \
	DECLARE_FUNCTION(execServer_SendSecondaryActionPressed); \
	DECLARE_FUNCTION(execServer_SetCustomization); \
	DECLARE_FUNCTION(execServer_UpdateScreenAspectRatio); \
	DECLARE_FUNCTION(execSetAllDetectionZonesEnabled); \
	DECLARE_FUNCTION(execSetAllowNavigation); \
	DECLARE_FUNCTION(execSetAuthoritativeMovementFlag); \
	DECLARE_FUNCTION(execSetCurrentInteractionAnimation); \
	DECLARE_FUNCTION(execSetDetectionZoneEnabled); \
	DECLARE_FUNCTION(execSetEmulateGamepadForMousePitch); \
	DECLARE_FUNCTION(execSetEmulateGamepadForMouseYaw); \
	DECLARE_FUNCTION(execSetFeetOnGround); \
	DECLARE_FUNCTION(execSetFirstPersonMeshVisibility); \
	DECLARE_FUNCTION(execSetFirstPersonModelEnabled); \
	DECLARE_FUNCTION(execSetFirstPersonVfxsVisibility); \
	DECLARE_FUNCTION(execSetForceDisableSkillChecks); \
	DECLARE_FUNCTION(execSetGamepadPitchScale); \
	DECLARE_FUNCTION(execSetGamepadYawScale); \
	DECLARE_FUNCTION(execSetGuidingPlayer); \
	DECLARE_FUNCTION(execSetIgnoreActorCollision); \
	DECLARE_FUNCTION(execSetInParadise); \
	DECLARE_FUNCTION(execSetIsCloaked); \
	DECLARE_FUNCTION(execSetItemUseAsToggle); \
	DECLARE_FUNCTION(execSetMousePitchScale); \
	DECLARE_FUNCTION(execSetMouseYawScale); \
	DECLARE_FUNCTION(execSetPawnAuthoritativeMovement); \
	DECLARE_FUNCTION(execSetPlayerDirection); \
	DECLARE_FUNCTION(execSetQuestEventHandlerComponent); \
	DECLARE_FUNCTION(execSetReverseMontage); \
	DECLARE_FUNCTION(execSetShouldPlayCarryAnim); \
	DECLARE_FUNCTION(execSetTutorialChargeableInteractionMultiplier); \
	DECLARE_FUNCTION(execSetWorldCollisionResponse); \
	DECLARE_FUNCTION(execShouldFall); \
	DECLARE_FUNCTION(execShouldPlayCarryAnim); \
	DECLARE_FUNCTION(execSnapCharacter); \
	DECLARE_FUNCTION(execStopAllMovement); \
	DECLARE_FUNCTION(execStopMontage); \
	DECLARE_FUNCTION(execStopSnap); \
	DECLARE_FUNCTION(execTeleportToBP); \
	DECLARE_FUNCTION(execToggleGhost); \
	DECLARE_FUNCTION(execTriggerAnimNotify); \
	DECLARE_FUNCTION(execTriggerTrapImmunity); \
	DECLARE_FUNCTION(execTryFireScoreEvent); \
	DECLARE_FUNCTION(execTryInteraction); \
	DECLARE_FUNCTION(execTryInteractionType); \
	DECLARE_FUNCTION(execUpdateLoadoutFromInventory);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Broadcast_BlinkDestination_Validate(FVector , FRotator ); \
	virtual void Broadcast_BlinkDestination_Implementation(FVector position, FRotator rotation); \
	virtual bool Broadcast_Multicast_BlinkDestination_Validate(FVector , FRotator ); \
	virtual void Broadcast_Multicast_BlinkDestination_Implementation(FVector position, FRotator rotation); \
	virtual bool Broadcast_PlayMontage_Multicast_Validate(FAnimationMontageDescriptor , float ); \
	virtual void Broadcast_PlayMontage_Multicast_Implementation(FAnimationMontageDescriptor animMontageID, float playRate); \
	virtual bool Broadcast_PlayMontage_Server_Validate(FAnimationMontageDescriptor , float ); \
	virtual void Broadcast_PlayMontage_Server_Implementation(FAnimationMontageDescriptor animMontageID, float playRate); \
	virtual bool CanInterrupt_BP_Implementation() const; \
	virtual bool Client_ClearInteractionQueue_Validate(); \
	virtual void Client_ClearInteractionQueue_Implementation(); \
	virtual bool Client_QueueInteraction_Validate(EInputInteractionType , ADBDPlayer* , float ); \
	virtual void Client_QueueInteraction_Implementation(EInputInteractionType InteractionType, ADBDPlayer* Requester, float queuedTimer); \
	virtual bool Client_SendCancelInteraction_Validate(const UInteractionDefinition* ); \
	virtual void Client_SendCancelInteraction_Implementation(const UInteractionDefinition* interactionDefinition); \
	virtual void Client_TryInteraction_Implementation(UInteractionDefinition* interaction, ADBDPlayer* requester, bool force, bool usingInputPersistence); \
	virtual bool Client_TryInteractionType_Validate(EInputInteractionType , ADBDPlayer* ); \
	virtual void Client_TryInteractionType_Implementation(EInputInteractionType interactionType, ADBDPlayer* requester); \
	virtual void DBDCrouch_Implementation(); \
	virtual void DBDUnCrouch_Implementation(); \
	virtual APlayerState* GetAssociatedPlayerState_Implementation() const; \
	virtual USceneComponent* GetAttachPoint_Implementation(FName attachPointName) const; \
	virtual UCustomizedSkeletalMesh* GetCustomizedSkeletalMesh_Implementation(); \
	virtual float GetGrassEffectRadiusMultiplier_Implementation() const; \
	virtual ADBDPlayerController* GetSharedPlayerController_Implementation() const; \
	virtual void Local_NotifyMatchEnded_Implementation(); \
	virtual bool Multicast_ConfirmItemDrop_Validate(bool ); \
	virtual void Multicast_ConfirmItemDrop_Implementation(bool pressed); \
	virtual bool Multicast_InteractionRollResult_Validate(bool ); \
	virtual void Multicast_InteractionRollResult_Implementation(bool rollResult); \
	virtual bool Multicast_LeaveGame_Validate(FGuid ); \
	virtual void Multicast_LeaveGame_Implementation(FGuid uniqueLeavingPlayerId); \
	virtual bool Multicast_OnInsaneSkillCheck_Validate(); \
	virtual void Multicast_OnInsaneSkillCheck_Implementation(); \
	virtual bool Multicast_PlayMontage_Validate(FAnimationMontageDescriptor , float ); \
	virtual void Multicast_PlayMontage_Implementation(FAnimationMontageDescriptor animMontageID, float playRate); \
	virtual void Multicast_ReplicateController_Implementation(AController* newController); \
	virtual bool Multicast_ServerResetMeshRelativeOffSet_Validate(); \
	virtual void Multicast_ServerResetMeshRelativeOffSet_Implementation(); \
	virtual bool Multicast_SetAuthoritativeMovement_Validate(bool ); \
	virtual void Multicast_SetAuthoritativeMovement_Implementation(bool enabled); \
	virtual bool Multicast_SetContinuousPrintDebug_Validate(bool ); \
	virtual void Multicast_SetContinuousPrintDebug_Implementation(bool enabled); \
	virtual bool Multicast_SetCustomization_Validate(TArray<FName> const& , TArray<FCharmIdSlot> const& ); \
	virtual void Multicast_SetCustomization_Implementation(TArray<FName> const& customizationParts, TArray<FCharmIdSlot> const& customizationCharms); \
	virtual bool Multicast_SetDebugCarry_Validate(bool ); \
	virtual void Multicast_SetDebugCarry_Implementation(bool enabled); \
	virtual bool Multicast_SetDebugPrintAvailableInteractions_Validate(bool ); \
	virtual void Multicast_SetDebugPrintAvailableInteractions_Implementation(bool enabled); \
	virtual bool Multicast_SetDebugSnapPoint_Validate(bool ); \
	virtual void Multicast_SetDebugSnapPoint_Implementation(bool enabled); \
	virtual void Multicast_SetEnableCapsuleDynamicResize_Implementation(bool enabled); \
	virtual bool Multicast_SetForceAuthoritativeMovement_Validate(bool ); \
	virtual void Multicast_SetForceAuthoritativeMovement_Implementation(bool value); \
	virtual void Multicast_SetInteractingPlayer_Implementation(ADBDPlayer* interactingPlayer); \
	virtual bool Multicast_SetMaxWalkSpeed_Validate(float ); \
	virtual void Multicast_SetMaxWalkSpeed_Implementation(float maxWalkSpeed); \
	virtual bool Multicast_SetReverseTraverseEnabled_Validate(bool ); \
	virtual void Multicast_SetReverseTraverseEnabled_Implementation(bool enabled); \
	virtual bool Multicast_SetRunVaultEnabled_Validate(bool ); \
	virtual void Multicast_SetRunVaultEnabled_Implementation(bool enabled); \
	virtual FString OnGetCharacterName_Implementation() const; \
	virtual void OnLevelReadyToPlay_Implementation(); \
	virtual bool Server_Drop_Validate(ACollectable* , FVector const& , FRotator const& , bool ); \
	virtual void Server_Drop_Implementation(ACollectable* item, FVector const& location, FRotator const& rotation, bool onDeath); \
	virtual bool Server_OnInsaneSkillCheck_Validate(); \
	virtual void Server_OnInsaneSkillCheck_Implementation(); \
	virtual bool Server_PlayerReady_Validate(); \
	virtual void Server_PlayerReady_Implementation(); \
	virtual bool Server_SendAbilityInput_Validate(bool ); \
	virtual void Server_SendAbilityInput_Implementation(bool pressed); \
	virtual bool Server_SendFastInteractionInput_Validate(bool ); \
	virtual void Server_SendFastInteractionInput_Implementation(bool pressed); \
	virtual bool Server_SendInteractionInput_Validate(bool ); \
	virtual void Server_SendInteractionInput_Implementation(bool pressed); \
	virtual bool Server_SendItemDropInput_Validate(bool ); \
	virtual void Server_SendItemDropInput_Implementation(bool pressed); \
	virtual bool Server_SendItemUse_Validate(bool ); \
	virtual void Server_SendItemUse_Implementation(bool use); \
	virtual bool Server_SendItemUseInput_Validate(bool ); \
	virtual void Server_SendItemUseInput_Implementation(bool pressed); \
	virtual bool Server_SendSecondaryActionPressed_Validate(bool ); \
	virtual void Server_SendSecondaryActionPressed_Implementation(bool fromCancelRequest); \
	virtual bool Server_SetCustomization_Validate(TArray<FName> const& , TArray<FCharmIdSlot> const& ); \
	virtual void Server_SetCustomization_Implementation(TArray<FName> const& customizationParts, TArray<FCharmIdSlot> const& customizationCharms); \
	virtual bool Server_UpdateScreenAspectRatio_Validate(const float ); \
	virtual void Server_UpdateScreenAspectRatio_Implementation(const float value); \
 \
	DECLARE_FUNCTION(execAbilityInputPressed); \
	DECLARE_FUNCTION(execAbilityInputReleased); \
	DECLARE_FUNCTION(execAddDetectionZone); \
	DECLARE_FUNCTION(execAttachInteractor); \
	DECLARE_FUNCTION(execAuthority_ActivateAuthoritativeMovementOnDropped); \
	DECLARE_FUNCTION(execAuthority_CancelOngoingScoreEvent); \
	DECLARE_FUNCTION(execAuthority_EndOngoingScoreEvent); \
	DECLARE_FUNCTION(execAuthority_EndStatusEffectByID); \
	DECLARE_FUNCTION(execAuthority_EvaluateIfPlayerCanSee); \
	DECLARE_FUNCTION(execAuthority_HandleScoreEvent); \
	DECLARE_FUNCTION(execAuthority_ImposeDynamicStatusEffect); \
	DECLARE_FUNCTION(execAuthority_ImposeStatusEffect); \
	DECLARE_FUNCTION(execAuthority_RemoveStatusEffectByID); \
	DECLARE_FUNCTION(execAuthority_RequestStun); \
	DECLARE_FUNCTION(execAuthority_SetDreamworldComponent); \
	DECLARE_FUNCTION(execAuthority_TryForceCancelOngoingScoreEvent); \
	DECLARE_FUNCTION(execAuthority_TryForceEndOngoingScoreEvent); \
	DECLARE_FUNCTION(execBroadcast_BlinkDestination); \
	DECLARE_FUNCTION(execBroadcast_Multicast_BlinkDestination); \
	DECLARE_FUNCTION(execBroadcast_PlayMontage_Multicast); \
	DECLARE_FUNCTION(execBroadcast_PlayMontage_Server); \
	DECLARE_FUNCTION(execCameraUpdated); \
	DECLARE_FUNCTION(execCanBeBlinded); \
	DECLARE_FUNCTION(execCancelCarry); \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execCanInteractWithItems); \
	DECLARE_FUNCTION(execCanInterrupt_BP); \
	DECLARE_FUNCTION(execClient_ClearInteractionQueue); \
	DECLARE_FUNCTION(execClient_QueueInteraction); \
	DECLARE_FUNCTION(execClient_SendCancelInteraction); \
	DECLARE_FUNCTION(execClient_TryInteraction); \
	DECLARE_FUNCTION(execClient_TryInteractionType); \
	DECLARE_FUNCTION(execDBD_DebugStartInteraction); \
	DECLARE_FUNCTION(execDBD_SetForwardInputLock); \
	DECLARE_FUNCTION(execDBD_SetMouseLookUpSpeedMultiplier); \
	DECLARE_FUNCTION(execDBD_SetMouseTurnSpeedMultiplier); \
	DECLARE_FUNCTION(execDBD_ToggleDebugInteractionInZone); \
	DECLARE_FUNCTION(execDBD_ToggleForceAuthoritativeMovement); \
	DECLARE_FUNCTION(execDBDCrouch); \
	DECLARE_FUNCTION(execDBDLog); \
	DECLARE_FUNCTION(execDBDUnCrouch); \
	DECLARE_FUNCTION(execDeactivateSkillChecks); \
	DECLARE_FUNCTION(execDebugPrint); \
	DECLARE_FUNCTION(execDetachInteractor); \
	DECLARE_FUNCTION(execFastInteractionInputPressed); \
	DECLARE_FUNCTION(execFastInteractionInputReleased); \
	DECLARE_FUNCTION(execFindClosestSlashableCharacterInDetectionZone); \
	DECLARE_FUNCTION(execFindClosestSlashablePlayerInDetectionZone); \
	DECLARE_FUNCTION(execFindFurthestClearLocationBetweenPoints); \
	DECLARE_FUNCTION(execGetActorLocationFromFeetLocation); \
	DECLARE_FUNCTION(execGetAlmostCurrentVelocity); \
	DECLARE_FUNCTION(execGetAnimData); \
	DECLARE_FUNCTION(execGetAnimInstance); \
	DECLARE_FUNCTION(execGetAnimTags); \
	DECLARE_FUNCTION(execGetAssociatedPlayerState); \
	DECLARE_FUNCTION(execGetAttachPoint); \
	DECLARE_FUNCTION(execGetAuthoritativeMovementComponent); \
	DECLARE_FUNCTION(execGetAverageVelocity); \
	DECLARE_FUNCTION(execGetBaseFOV); \
	DECLARE_FUNCTION(execGetBlindableComponent); \
	DECLARE_FUNCTION(execGetBlinkTime); \
	DECLARE_FUNCTION(execGetBoneLocation); \
	DECLARE_FUNCTION(execGetBoneRelativeLocation); \
	DECLARE_FUNCTION(execGetCameraCharacterYawDiff); \
	DECLARE_FUNCTION(execGetCameraManager); \
	DECLARE_FUNCTION(execGetCharacterInventoryComponent); \
	DECLARE_FUNCTION(execGetChargeableInteractionMultiplier); \
	DECLARE_FUNCTION(execGetChaseComponent); \
	DECLARE_FUNCTION(execGetContinuousPrintDebug); \
	DECLARE_FUNCTION(execGetCurrentInteraction); \
	DECLARE_FUNCTION(execGetCurrentInteractionAnimation); \
	DECLARE_FUNCTION(execGetCustomizedSkeletalMesh); \
	DECLARE_FUNCTION(execGetDBDPlayerState); \
	DECLARE_FUNCTION(execGetDebugFailAllInteractions); \
	DECLARE_FUNCTION(execGetDebugPrintAvailableInteractions); \
	DECLARE_FUNCTION(execGetDetectionZone); \
	DECLARE_FUNCTION(execGetDreamworldComponent); \
	DECLARE_FUNCTION(execGetFeetOnGround); \
	DECLARE_FUNCTION(execGetFeetPosition); \
	DECLARE_FUNCTION(execGetFeetPositionAtTargetLocation); \
	DECLARE_FUNCTION(execGetFirstComponentByClass); \
	DECLARE_FUNCTION(execGetForceDisableSkillChecks); \
	DECLARE_FUNCTION(execGetGrassEffectRadiusMultiplier); \
	DECLARE_FUNCTION(execGetGuidingPlayer); \
	DECLARE_FUNCTION(execGetInteractable); \
	DECLARE_FUNCTION(execGetInteractionDetectorComponent); \
	DECLARE_FUNCTION(execGetInteractionPlayerProperties); \
	DECLARE_FUNCTION(execGetInteractionRollResult); \
	DECLARE_FUNCTION(execGetIsBeyondCrouchWalkSpeed); \
	DECLARE_FUNCTION(execGetIsInFirstPerson); \
	DECLARE_FUNCTION(execGetIsInteracting); \
	DECLARE_FUNCTION(execGetIsInterrupting); \
	DECLARE_FUNCTION(execGetItemAddons); \
	DECLARE_FUNCTION(execGetItemDropOffTransform); \
	DECLARE_FUNCTION(execGetItemModifiers); \
	DECLARE_FUNCTION(execGetLastSafeLocation); \
	DECLARE_FUNCTION(execGetLuck); \
	DECLARE_FUNCTION(execGetMaxSpeed); \
	DECLARE_FUNCTION(execGetMeshFeetPosition); \
	DECLARE_FUNCTION(execGetMontage); \
	DECLARE_FUNCTION(execGetMontageLength); \
	DECLARE_FUNCTION(execGetMontagePlaybackDefinition); \
	DECLARE_FUNCTION(execGetMontagePlayer); \
	DECLARE_FUNCTION(execGetNameDebugString); \
	DECLARE_FUNCTION(execGetNearbyGroundLocation); \
	DECLARE_FUNCTION(execGetObjectState); \
	DECLARE_FUNCTION(execGetOtherCharactersVerticalCollisionsHandler); \
	DECLARE_FUNCTION(execGetPawnType); \
	DECLARE_FUNCTION(execGetPercentMovementSpeed); \
	DECLARE_FUNCTION(execGetPercentPixelsVisible); \
	DECLARE_FUNCTION(execGetPerkManager); \
	DECLARE_FUNCTION(execGetPixelCounter); \
	DECLARE_FUNCTION(execGetPlayerCamera); \
	DECLARE_FUNCTION(execGetPlayerController); \
	DECLARE_FUNCTION(execGetPlayerDirection); \
	DECLARE_FUNCTION(execGetPlayerInteractionHandler); \
	DECLARE_FUNCTION(execGetPlayerRole); \
	DECLARE_FUNCTION(execGetPlayerTeam); \
	DECLARE_FUNCTION(execGetRemainingTrapImmunityDuration); \
	DECLARE_FUNCTION(execGetRepControlRotation); \
	DECLARE_FUNCTION(execGetReverseTraverseEnabled); \
	DECLARE_FUNCTION(execGetRunVaultEnabled); \
	DECLARE_FUNCTION(execGetSharedPlayerController); \
	DECLARE_FUNCTION(execGetTunableValue); \
	DECLARE_FUNCTION(execHasAnimMontageEnded); \
	DECLARE_FUNCTION(execHasClearPathToItemDropOffPosition); \
	DECLARE_FUNCTION(execHasClearPathToTarget); \
	DECLARE_FUNCTION(execHasClearPathToTargetWithIgnore); \
	DECLARE_FUNCTION(execHasDamageImmunity); \
	DECLARE_FUNCTION(execHasMoveInput); \
	DECLARE_FUNCTION(execHasTrapImmunity); \
	DECLARE_FUNCTION(execHideHead); \
	DECLARE_FUNCTION(execInput_ToggleCrouch); \
	DECLARE_FUNCTION(execInteractionInputPressed); \
	DECLARE_FUNCTION(execInteractionInputReleased); \
	DECLARE_FUNCTION(execIsAIControlled); \
	DECLARE_FUNCTION(execIsAllowedNavigation); \
	DECLARE_FUNCTION(execIsBeingInterrupted); \
	DECLARE_FUNCTION(execIsCloaked); \
	DECLARE_FUNCTION(execIsCrouching); \
	DECLARE_FUNCTION(execIsCrouchPressed); \
	DECLARE_FUNCTION(execIsExhausted); \
	DECLARE_FUNCTION(execIsFacing); \
	DECLARE_FUNCTION(execIsHeadHidden); \
	DECLARE_FUNCTION(execIsInBasement); \
	DECLARE_FUNCTION(execIsIncapacitated); \
	DECLARE_FUNCTION(execIsInMeathookZone); \
	DECLARE_FUNCTION(execIsInParadise); \
	DECLARE_FUNCTION(execIsInsideCloset); \
	DECLARE_FUNCTION(execIsInStalkMode); \
	DECLARE_FUNCTION(execIsInteractionInputPressed); \
	DECLARE_FUNCTION(execIsInTerrorRadius); \
	DECLARE_FUNCTION(execIsLocallyObserved); \
	DECLARE_FUNCTION(execIsLocationClear); \
	DECLARE_FUNCTION(execIsMoving); \
	DECLARE_FUNCTION(execIsPlayingAnyMontage); \
	DECLARE_FUNCTION(execIsPlayingMontage); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execIsRunningAndMoving); \
	DECLARE_FUNCTION(execIsSnapping); \
	DECLARE_FUNCTION(execIsSnappingPosition); \
	DECLARE_FUNCTION(execIsSnappingRotation); \
	DECLARE_FUNCTION(execIsStrafing); \
	DECLARE_FUNCTION(execItemDropPressed); \
	DECLARE_FUNCTION(execItemDropReleased); \
	DECLARE_FUNCTION(execItemUsePressed); \
	DECLARE_FUNCTION(execItemUseReleased); \
	DECLARE_FUNCTION(execK2_SetActorLocationByBottomCapsule); \
	DECLARE_FUNCTION(execLocal_IsInteractionInputPressed); \
	DECLARE_FUNCTION(execLocal_NotifyMatchEnded); \
	DECLARE_FUNCTION(execLocal_RequestBlink); \
	DECLARE_FUNCTION(execMulticast_ConfirmItemDrop); \
	DECLARE_FUNCTION(execMulticast_InteractionRollResult); \
	DECLARE_FUNCTION(execMulticast_LeaveGame); \
	DECLARE_FUNCTION(execMulticast_OnInsaneSkillCheck); \
	DECLARE_FUNCTION(execMulticast_PlayMontage); \
	DECLARE_FUNCTION(execMulticast_ReplicateController); \
	DECLARE_FUNCTION(execMulticast_ServerResetMeshRelativeOffSet); \
	DECLARE_FUNCTION(execMulticast_SetAuthoritativeMovement); \
	DECLARE_FUNCTION(execMulticast_SetContinuousPrintDebug); \
	DECLARE_FUNCTION(execMulticast_SetCustomization); \
	DECLARE_FUNCTION(execMulticast_SetDebugCarry); \
	DECLARE_FUNCTION(execMulticast_SetDebugPrintAvailableInteractions); \
	DECLARE_FUNCTION(execMulticast_SetDebugSnapPoint); \
	DECLARE_FUNCTION(execMulticast_SetEnableCapsuleDynamicResize); \
	DECLARE_FUNCTION(execMulticast_SetForceAuthoritativeMovement); \
	DECLARE_FUNCTION(execMulticast_SetInteractingPlayer); \
	DECLARE_FUNCTION(execMulticast_SetMaxWalkSpeed); \
	DECLARE_FUNCTION(execMulticast_SetReverseTraverseEnabled); \
	DECLARE_FUNCTION(execMulticast_SetRunVaultEnabled); \
	DECLARE_FUNCTION(execOnAllPlayerLoaded); \
	DECLARE_FUNCTION(execOnAnimInstanceChanged); \
	DECLARE_FUNCTION(execOnBlindChargeEmptied); \
	DECLARE_FUNCTION(execOnCurrentMontageBlendingOut); \
	DECLARE_FUNCTION(execOnCurrentMontageComplete); \
	DECLARE_FUNCTION(execOnGetCharacterName); \
	DECLARE_FUNCTION(execOnHudVisibilityChangedNative); \
	DECLARE_FUNCTION(execOnIntroCompletedNative); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnPickupEnd); \
	DECLARE_FUNCTION(execOnPickupStart); \
	DECLARE_FUNCTION(execOnRep_DreamworldComponent); \
	DECLARE_FUNCTION(execOnRep_Interactable); \
	DECLARE_FUNCTION(execPlayMontage); \
	DECLARE_FUNCTION(execRemotely_HandleScoreEvent); \
	DECLARE_FUNCTION(execRemoveStatusEffect); \
	DECLARE_FUNCTION(execResetCamera); \
	DECLARE_FUNCTION(execResetMeshRelativePosition); \
	DECLARE_FUNCTION(execResetMeshRelativeRotation); \
	DECLARE_FUNCTION(execResetPitchScale); \
	DECLARE_FUNCTION(execResetYawScale); \
	DECLARE_FUNCTION(execSecondaryActionInputPressed); \
	DECLARE_FUNCTION(execServer_Drop); \
	DECLARE_FUNCTION(execServer_OnInsaneSkillCheck); \
	DECLARE_FUNCTION(execServer_PlayerReady); \
	DECLARE_FUNCTION(execServer_SendAbilityInput); \
	DECLARE_FUNCTION(execServer_SendFastInteractionInput); \
	DECLARE_FUNCTION(execServer_SendInteractionInput); \
	DECLARE_FUNCTION(execServer_SendItemDropInput); \
	DECLARE_FUNCTION(execServer_SendItemUse); \
	DECLARE_FUNCTION(execServer_SendItemUseInput); \
	DECLARE_FUNCTION(execServer_SendSecondaryActionPressed); \
	DECLARE_FUNCTION(execServer_SetCustomization); \
	DECLARE_FUNCTION(execServer_UpdateScreenAspectRatio); \
	DECLARE_FUNCTION(execSetAllDetectionZonesEnabled); \
	DECLARE_FUNCTION(execSetAllowNavigation); \
	DECLARE_FUNCTION(execSetAuthoritativeMovementFlag); \
	DECLARE_FUNCTION(execSetCurrentInteractionAnimation); \
	DECLARE_FUNCTION(execSetDetectionZoneEnabled); \
	DECLARE_FUNCTION(execSetEmulateGamepadForMousePitch); \
	DECLARE_FUNCTION(execSetEmulateGamepadForMouseYaw); \
	DECLARE_FUNCTION(execSetFeetOnGround); \
	DECLARE_FUNCTION(execSetFirstPersonMeshVisibility); \
	DECLARE_FUNCTION(execSetFirstPersonModelEnabled); \
	DECLARE_FUNCTION(execSetFirstPersonVfxsVisibility); \
	DECLARE_FUNCTION(execSetForceDisableSkillChecks); \
	DECLARE_FUNCTION(execSetGamepadPitchScale); \
	DECLARE_FUNCTION(execSetGamepadYawScale); \
	DECLARE_FUNCTION(execSetGuidingPlayer); \
	DECLARE_FUNCTION(execSetIgnoreActorCollision); \
	DECLARE_FUNCTION(execSetInParadise); \
	DECLARE_FUNCTION(execSetIsCloaked); \
	DECLARE_FUNCTION(execSetItemUseAsToggle); \
	DECLARE_FUNCTION(execSetMousePitchScale); \
	DECLARE_FUNCTION(execSetMouseYawScale); \
	DECLARE_FUNCTION(execSetPawnAuthoritativeMovement); \
	DECLARE_FUNCTION(execSetPlayerDirection); \
	DECLARE_FUNCTION(execSetQuestEventHandlerComponent); \
	DECLARE_FUNCTION(execSetReverseMontage); \
	DECLARE_FUNCTION(execSetShouldPlayCarryAnim); \
	DECLARE_FUNCTION(execSetTutorialChargeableInteractionMultiplier); \
	DECLARE_FUNCTION(execSetWorldCollisionResponse); \
	DECLARE_FUNCTION(execShouldFall); \
	DECLARE_FUNCTION(execShouldPlayCarryAnim); \
	DECLARE_FUNCTION(execSnapCharacter); \
	DECLARE_FUNCTION(execStopAllMovement); \
	DECLARE_FUNCTION(execStopMontage); \
	DECLARE_FUNCTION(execStopSnap); \
	DECLARE_FUNCTION(execTeleportToBP); \
	DECLARE_FUNCTION(execToggleGhost); \
	DECLARE_FUNCTION(execTriggerAnimNotify); \
	DECLARE_FUNCTION(execTriggerTrapImmunity); \
	DECLARE_FUNCTION(execTryFireScoreEvent); \
	DECLARE_FUNCTION(execTryInteraction); \
	DECLARE_FUNCTION(execTryInteractionType); \
	DECLARE_FUNCTION(execUpdateLoadoutFromInventory);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_EVENT_PARMS \
	struct DBDPlayer_eventBroadcast_BlinkDestination_Parms \
	{ \
		FVector position; \
		FRotator rotation; \
	}; \
	struct DBDPlayer_eventBroadcast_Multicast_BlinkDestination_Parms \
	{ \
		FVector position; \
		FRotator rotation; \
	}; \
	struct DBDPlayer_eventBroadcast_PlayMontage_Multicast_Parms \
	{ \
		FAnimationMontageDescriptor animMontageID; \
		float playRate; \
	}; \
	struct DBDPlayer_eventBroadcast_PlayMontage_Server_Parms \
	{ \
		FAnimationMontageDescriptor animMontageID; \
		float playRate; \
	}; \
	struct DBDPlayer_eventCanInterrupt_BP_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DBDPlayer_eventCanInterrupt_BP_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct DBDPlayer_eventClient_QueueInteraction_Parms \
	{ \
		EInputInteractionType InteractionType; \
		ADBDPlayer* Requester; \
		float queuedTimer; \
	}; \
	struct DBDPlayer_eventClient_SendCancelInteraction_Parms \
	{ \
		const UInteractionDefinition* interactionDefinition; \
	}; \
	struct DBDPlayer_eventClient_TryInteraction_Parms \
	{ \
		UInteractionDefinition* interaction; \
		ADBDPlayer* requester; \
		bool force; \
		bool usingInputPersistence; \
	}; \
	struct DBDPlayer_eventClient_TryInteractionType_Parms \
	{ \
		EInputInteractionType interactionType; \
		ADBDPlayer* requester; \
	}; \
	struct DBDPlayer_eventDissolve_Parms \
	{ \
		bool NewDissolve; \
	}; \
	struct DBDPlayer_eventGetAssociatedPlayerState_Parms \
	{ \
		APlayerState* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DBDPlayer_eventGetAssociatedPlayerState_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct DBDPlayer_eventGetAttachPoint_Parms \
	{ \
		FName attachPointName; \
		USceneComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DBDPlayer_eventGetAttachPoint_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct DBDPlayer_eventGetCustomizedSkeletalMesh_Parms \
	{ \
		UCustomizedSkeletalMesh* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DBDPlayer_eventGetCustomizedSkeletalMesh_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct DBDPlayer_eventGetGrassEffectRadiusMultiplier_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DBDPlayer_eventGetGrassEffectRadiusMultiplier_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct DBDPlayer_eventGetSharedPlayerController_Parms \
	{ \
		ADBDPlayerController* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DBDPlayer_eventGetSharedPlayerController_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct DBDPlayer_eventMulticast_ConfirmItemDrop_Parms \
	{ \
		bool pressed; \
	}; \
	struct DBDPlayer_eventMulticast_InteractionRollResult_Parms \
	{ \
		bool rollResult; \
	}; \
	struct DBDPlayer_eventMulticast_LeaveGame_Parms \
	{ \
		FGuid uniqueLeavingPlayerId; \
	}; \
	struct DBDPlayer_eventMulticast_PlayMontage_Parms \
	{ \
		FAnimationMontageDescriptor animMontageID; \
		float playRate; \
	}; \
	struct DBDPlayer_eventMulticast_ReplicateController_Parms \
	{ \
		AController* newController; \
	}; \
	struct DBDPlayer_eventMulticast_SetAuthoritativeMovement_Parms \
	{ \
		bool enabled; \
	}; \
	struct DBDPlayer_eventMulticast_SetContinuousPrintDebug_Parms \
	{ \
		bool enabled; \
	}; \
	struct DBDPlayer_eventMulticast_SetCustomization_Parms \
	{ \
		TArray<FName> customizationParts; \
		TArray<FCharmIdSlot> customizationCharms; \
	}; \
	struct DBDPlayer_eventMulticast_SetDebugCarry_Parms \
	{ \
		bool enabled; \
	}; \
	struct DBDPlayer_eventMulticast_SetDebugPrintAvailableInteractions_Parms \
	{ \
		bool enabled; \
	}; \
	struct DBDPlayer_eventMulticast_SetDebugSnapPoint_Parms \
	{ \
		bool enabled; \
	}; \
	struct DBDPlayer_eventMulticast_SetEnableCapsuleDynamicResize_Parms \
	{ \
		bool enabled; \
	}; \
	struct DBDPlayer_eventMulticast_SetForceAuthoritativeMovement_Parms \
	{ \
		bool value; \
	}; \
	struct DBDPlayer_eventMulticast_SetInteractingPlayer_Parms \
	{ \
		ADBDPlayer* interactingPlayer; \
	}; \
	struct DBDPlayer_eventMulticast_SetMaxWalkSpeed_Parms \
	{ \
		float maxWalkSpeed; \
	}; \
	struct DBDPlayer_eventMulticast_SetReverseTraverseEnabled_Parms \
	{ \
		bool enabled; \
	}; \
	struct DBDPlayer_eventMulticast_SetRunVaultEnabled_Parms \
	{ \
		bool enabled; \
	}; \
	struct DBDPlayer_eventOnGetCharacterName_Parms \
	{ \
		FString ReturnValue; \
	}; \
	struct DBDPlayer_eventOnHudVisibilityChanged_Parms \
	{ \
		bool isVisible; \
	}; \
	struct DBDPlayer_eventServer_Drop_Parms \
	{ \
		ACollectable* item; \
		FVector location; \
		FRotator rotation; \
		bool onDeath; \
	}; \
	struct DBDPlayer_eventServer_SendAbilityInput_Parms \
	{ \
		bool pressed; \
	}; \
	struct DBDPlayer_eventServer_SendFastInteractionInput_Parms \
	{ \
		bool pressed; \
	}; \
	struct DBDPlayer_eventServer_SendInteractionInput_Parms \
	{ \
		bool pressed; \
	}; \
	struct DBDPlayer_eventServer_SendItemDropInput_Parms \
	{ \
		bool pressed; \
	}; \
	struct DBDPlayer_eventServer_SendItemUse_Parms \
	{ \
		bool use; \
	}; \
	struct DBDPlayer_eventServer_SendItemUseInput_Parms \
	{ \
		bool pressed; \
	}; \
	struct DBDPlayer_eventServer_SendSecondaryActionPressed_Parms \
	{ \
		bool fromCancelRequest; \
	}; \
	struct DBDPlayer_eventServer_SetCustomization_Parms \
	{ \
		TArray<FName> customizationParts; \
		TArray<FCharmIdSlot> customizationCharms; \
	}; \
	struct DBDPlayer_eventServer_UpdateScreenAspectRatio_Parms \
	{ \
		float value; \
	}; \
	struct DBDPlayer_eventSetAnimationCrouchState_Parms \
	{ \
		bool crouched; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDPlayer(); \
	friend struct Z_Construct_UClass_ADBDPlayer_Statics; \
public: \
	DECLARE_CLASS(ADBDPlayer, ADBDBasePlayer, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ADBDPlayer*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_interactable=NETFIELD_REP_START, \
		_dreamworldComponent, \
		_screenAspectRatio, \
		NETFIELD_REP_END=_screenAspectRatio	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_INCLASS \
private: \
	static void StaticRegisterNativesADBDPlayer(); \
	friend struct Z_Construct_UClass_ADBDPlayer_Statics; \
public: \
	DECLARE_CLASS(ADBDPlayer, ADBDBasePlayer, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ADBDPlayer*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_interactable=NETFIELD_REP_START, \
		_dreamworldComponent, \
		_screenAspectRatio, \
		NETFIELD_REP_END=_screenAspectRatio	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDPlayer(ADBDPlayer&&); \
	NO_API ADBDPlayer(const ADBDPlayer&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDPlayer(ADBDPlayer&&); \
	NO_API ADBDPlayer(const ADBDPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDPlayer)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___characterInventoryComponent() { return STRUCT_OFFSET(ADBDPlayer, _characterInventoryComponent); } \
	FORCEINLINE static uint32 __PPO__CarryJointName() { return STRUCT_OFFSET(ADBDPlayer, CarryJointName); } \
	FORCEINLINE static uint32 __PPO___pitchOffsetForInteractionPriority() { return STRUCT_OFFSET(ADBDPlayer, _pitchOffsetForInteractionPriority); } \
	FORCEINLINE static uint32 __PPO___renderedPixelCounter() { return STRUCT_OFFSET(ADBDPlayer, _renderedPixelCounter); } \
	FORCEINLINE static uint32 __PPO___standingOcclusionBox() { return STRUCT_OFFSET(ADBDPlayer, _standingOcclusionBox); } \
	FORCEINLINE static uint32 __PPO___crouchingOcclusionBox() { return STRUCT_OFFSET(ADBDPlayer, _crouchingOcclusionBox); } \
	FORCEINLINE static uint32 __PPO___activator() { return STRUCT_OFFSET(ADBDPlayer, _activator); } \
	FORCEINLINE static uint32 __PPO__IsInteracting() { return STRUCT_OFFSET(ADBDPlayer, IsInteracting); } \
	FORCEINLINE static uint32 __PPO___aiCanBeSeenTestCrouchScale() { return STRUCT_OFFSET(ADBDPlayer, _aiCanBeSeenTestCrouchScale); } \
	FORCEINLINE static uint32 __PPO___aiCanBeSeenTestRightOffset() { return STRUCT_OFFSET(ADBDPlayer, _aiCanBeSeenTestRightOffset); } \
	FORCEINLINE static uint32 __PPO___aiCanBeSeenTestHighOffset() { return STRUCT_OFFSET(ADBDPlayer, _aiCanBeSeenTestHighOffset); } \
	FORCEINLINE static uint32 __PPO___aiCanBeSeenTestLowOffset() { return STRUCT_OFFSET(ADBDPlayer, _aiCanBeSeenTestLowOffset); } \
	FORCEINLINE static uint32 __PPO__ClearPathTestRadiusMultiplier() { return STRUCT_OFFSET(ADBDPlayer, ClearPathTestRadiusMultiplier); } \
	FORCEINLINE static uint32 __PPO__ClearPathTestHeightMultiplier() { return STRUCT_OFFSET(ADBDPlayer, ClearPathTestHeightMultiplier); } \
	FORCEINLINE static uint32 __PPO__LocationClearTestRadiusMultiplier() { return STRUCT_OFFSET(ADBDPlayer, LocationClearTestRadiusMultiplier); } \
	FORCEINLINE static uint32 __PPO__LocationClearTestHeightMultiplier() { return STRUCT_OFFSET(ADBDPlayer, LocationClearTestHeightMultiplier); } \
	FORCEINLINE static uint32 __PPO__ClearPathTestStepHeight() { return STRUCT_OFFSET(ADBDPlayer, ClearPathTestStepHeight); } \
	FORCEINLINE static uint32 __PPO__MouseTurnSpeedMultiplier() { return STRUCT_OFFSET(ADBDPlayer, MouseTurnSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO__MouseLookUpSpeedMultiplier() { return STRUCT_OFFSET(ADBDPlayer, MouseLookUpSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO__DeathSound() { return STRUCT_OFFSET(ADBDPlayer, DeathSound); } \
	FORCEINLINE static uint32 __PPO__CurrentCamperState() { return STRUCT_OFFSET(ADBDPlayer, CurrentCamperState); } \
	FORCEINLINE static uint32 __PPO__CollectableAttachPoint() { return STRUCT_OFFSET(ADBDPlayer, CollectableAttachPoint); } \
	FORCEINLINE static uint32 __PPO___stateMachine() { return STRUCT_OFFSET(ADBDPlayer, _stateMachine); } \
	FORCEINLINE static uint32 __PPO___interactionHandler() { return STRUCT_OFFSET(ADBDPlayer, _interactionHandler); } \
	FORCEINLINE static uint32 __PPO___montagePlayer() { return STRUCT_OFFSET(ADBDPlayer, _montagePlayer); } \
	FORCEINLINE static uint32 __PPO___perkManager() { return STRUCT_OFFSET(ADBDPlayer, _perkManager); } \
	FORCEINLINE static uint32 __PPO___playerData() { return STRUCT_OFFSET(ADBDPlayer, _playerData); } \
	FORCEINLINE static uint32 __PPO___wiggleAxisFlickMasher() { return STRUCT_OFFSET(ADBDPlayer, _wiggleAxisFlickMasher); } \
	FORCEINLINE static uint32 __PPO___interactable() { return STRUCT_OFFSET(ADBDPlayer, _interactable); } \
	FORCEINLINE static uint32 __PPO___guidingPlayer() { return STRUCT_OFFSET(ADBDPlayer, _guidingPlayer); } \
	FORCEINLINE static uint32 __PPO___interactingPlayer() { return STRUCT_OFFSET(ADBDPlayer, _interactingPlayer); } \
	FORCEINLINE static uint32 __PPO___nextAttackSubstate() { return STRUCT_OFFSET(ADBDPlayer, _nextAttackSubstate); } \
	FORCEINLINE static uint32 __PPO___hitTargets() { return STRUCT_OFFSET(ADBDPlayer, _hitTargets); } \
	FORCEINLINE static uint32 __PPO___dreamworldComponent() { return STRUCT_OFFSET(ADBDPlayer, _dreamworldComponent); } \
	FORCEINLINE static uint32 __PPO___characterChaseVisualComponent() { return STRUCT_OFFSET(ADBDPlayer, _characterChaseVisualComponent); } \
	FORCEINLINE static uint32 __PPO___cameraHandlerComponent() { return STRUCT_OFFSET(ADBDPlayer, _cameraHandlerComponent); } \
	FORCEINLINE static uint32 __PPO___itemDropOffPosition() { return STRUCT_OFFSET(ADBDPlayer, _itemDropOffPosition); } \
	FORCEINLINE static uint32 __PPO___perceptionStimuliComponent() { return STRUCT_OFFSET(ADBDPlayer, _perceptionStimuliComponent); } \
	FORCEINLINE static uint32 __PPO___ignoreActors() { return STRUCT_OFFSET(ADBDPlayer, _ignoreActors); } \
	FORCEINLINE static uint32 __PPO__EffectCameraTypeSettings() { return STRUCT_OFFSET(ADBDPlayer, EffectCameraTypeSettings); } \
	FORCEINLINE static uint32 __PPO___blindingChargeableComponent() { return STRUCT_OFFSET(ADBDPlayer, _blindingChargeableComponent); } \
	FORCEINLINE static uint32 __PPO___shouldUpdateStateMachineDriverOnPossessed() { return STRUCT_OFFSET(ADBDPlayer, _shouldUpdateStateMachineDriverOnPossessed); } \
	FORCEINLINE static uint32 __PPO___blindableComponent() { return STRUCT_OFFSET(ADBDPlayer, _blindableComponent); } \
	FORCEINLINE static uint32 __PPO___tutorialChargeableInteractionMultiplier() { return STRUCT_OFFSET(ADBDPlayer, _tutorialChargeableInteractionMultiplier); } \
	FORCEINLINE static uint32 __PPO___eventListener() { return STRUCT_OFFSET(ADBDPlayer, _eventListener); } \
	FORCEINLINE static uint32 __PPO___chaseComponent() { return STRUCT_OFFSET(ADBDPlayer, _chaseComponent); } \
	FORCEINLINE static uint32 __PPO___meatHookZoneDetector() { return STRUCT_OFFSET(ADBDPlayer, _meatHookZoneDetector); } \
	FORCEINLINE static uint32 __PPO___basementZoneDetector() { return STRUCT_OFFSET(ADBDPlayer, _basementZoneDetector); } \
	FORCEINLINE static uint32 __PPO___bookmarkedInteraction() { return STRUCT_OFFSET(ADBDPlayer, _bookmarkedInteraction); } \
	FORCEINLINE static uint32 __PPO___detectionZoneMap() { return STRUCT_OFFSET(ADBDPlayer, _detectionZoneMap); } \
	FORCEINLINE static uint32 __PPO___authoritativeMovementComponent() { return STRUCT_OFFSET(ADBDPlayer, _authoritativeMovementComponent); } \
	FORCEINLINE static uint32 __PPO___screenAspectRatio() { return STRUCT_OFFSET(ADBDPlayer, _screenAspectRatio); } \
	FORCEINLINE static uint32 __PPO___objectState() { return STRUCT_OFFSET(ADBDPlayer, _objectState); } \
	FORCEINLINE static uint32 __PPO___audioFXComponent() { return STRUCT_OFFSET(ADBDPlayer, _audioFXComponent); } \
	FORCEINLINE static uint32 __PPO___playerPerspectiveComponent() { return STRUCT_OFFSET(ADBDPlayer, _playerPerspectiveComponent); } \
	FORCEINLINE static uint32 __PPO___characterSightComponent() { return STRUCT_OFFSET(ADBDPlayer, _characterSightComponent); } \
	FORCEINLINE static uint32 __PPO___characterSightableComponent() { return STRUCT_OFFSET(ADBDPlayer, _characterSightableComponent); } \
	FORCEINLINE static uint32 __PPO___interactionDetectorComponent() { return STRUCT_OFFSET(ADBDPlayer, _interactionDetectorComponent); } \
	FORCEINLINE static uint32 __PPO___clippablePrimitivesRegistererComponent() { return STRUCT_OFFSET(ADBDPlayer, _clippablePrimitivesRegistererComponent); } \
	FORCEINLINE static uint32 __PPO___clippableProviderComponent() { return STRUCT_OFFSET(ADBDPlayer, _clippableProviderComponent); } \
	FORCEINLINE static uint32 __PPO___dynCapsuleResizer() { return STRUCT_OFFSET(ADBDPlayer, _dynCapsuleResizer); } \
	FORCEINLINE static uint32 __PPO___playerGameRelevancyComponent() { return STRUCT_OFFSET(ADBDPlayer, _playerGameRelevancyComponent); } \
	FORCEINLINE static uint32 __PPO___contextualQuestComponent() { return STRUCT_OFFSET(ADBDPlayer, _contextualQuestComponent); } \
	FORCEINLINE static uint32 __PPO___questEventHandler() { return STRUCT_OFFSET(ADBDPlayer, _questEventHandler); } \
	FORCEINLINE static uint32 __PPO___presentationChargeableProgressComponent() { return STRUCT_OFFSET(ADBDPlayer, _presentationChargeableProgressComponent); } \
	FORCEINLINE static uint32 __PPO___currentGamepadYawCurve() { return STRUCT_OFFSET(ADBDPlayer, _currentGamepadYawCurve); } \
	FORCEINLINE static uint32 __PPO___currentGamepadPitchCurve() { return STRUCT_OFFSET(ADBDPlayer, _currentGamepadPitchCurve); } \
	FORCEINLINE static uint32 __PPO___associatedPlayerStateCache() { return STRUCT_OFFSET(ADBDPlayer, _associatedPlayerStateCache); } \
	FORCEINLINE static uint32 __PPO___otherCharactersVerticalCollisionsHandler() { return STRUCT_OFFSET(ADBDPlayer, _otherCharactersVerticalCollisionsHandler); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_118_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
