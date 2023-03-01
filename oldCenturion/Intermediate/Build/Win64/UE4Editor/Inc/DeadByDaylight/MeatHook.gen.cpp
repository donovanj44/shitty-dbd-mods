// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MeatHook.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeatHook() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AMeatHook_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AMeatHook();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UCharacterPusherComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHookableComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractor_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMontagePlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEntity_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMapActorComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPollableEventListener_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTimer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDClipRegionComponent_NoRegister();
	INTERACTION_API UClass* Z_Construct_UClass_UAIInteractableTargetInterface_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIPointOfInterestTargetInterface_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharmAttachable_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNoiseIndicatorEmitterInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMeatHook::execAuthority_SendOnUnhookAnalytics)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_rescuer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SendOnUnhookAnalytics(Z_Param_rescuer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execAuthority_SetHookedSurvivor)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetHookedSurvivor(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execAuthority_SetIsBrokenFromUnhook)
	{
		P_GET_UBOOL(Z_Param_isBrokenFromUnhook);
		P_GET_OBJECT(ADBDPlayer,Z_Param_hookBreaker);
		P_GET_PROPERTY(FFloatProperty,Z_Param_overrideBaseHookRespawnDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetIsBrokenFromUnhook(Z_Param_isBrokenFromUnhook,Z_Param_hookBreaker,Z_Param_overrideBaseHookRespawnDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execAuthority_SetIsSabotaged)
	{
		P_GET_UBOOL(Z_Param_isSabotaged);
		P_GET_OBJECT(ADBDPlayer,Z_Param_saboteur);
		P_GET_UBOOL(Z_Param_useCamperHookRespawnDurationModifiers);
		P_GET_PROPERTY(FFloatProperty,Z_Param_overrideBaseHookRespawnDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetIsSabotaged(Z_Param_isSabotaged,Z_Param_saboteur,Z_Param_useCamperHookRespawnDurationModifiers,Z_Param_overrideBaseHookRespawnDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execAuthority_SetIsSacrificed)
	{
		P_GET_UBOOL(Z_Param_isSacrificed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetIsSacrificed(Z_Param_isSacrificed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execAuthority_SignalSurvivorAttemptingEscape)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SignalSurvivorAttemptingEscape();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execAuthority_SignalSurvivorAttemptingEscapeAborted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SignalSurvivorAttemptingEscapeAborted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execAuthority_SignalUnhookingAborted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SignalUnhookingAborted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execAuthority_SignalUnhookingCharged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SignalUnhookingCharged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execAuthority_SignalUnhookingEnter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SignalUnhookingEnter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execCanBeSabotaged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeSabotaged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execCanHookSurvivor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanHookSurvivor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execCanSurvivorAttemptEscape)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSurvivorAttemptEscape(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execCanSurvivorStruggle)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSurvivorStruggle(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execCanUnhookSurvivor)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUnhookSurvivor(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execDebugHookedSurvivor)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_expectedSurvivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugHookedSurvivor(Z_Param_expectedSurvivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetCamperHookedSnapTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetCamperHookedSnapTransform_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetCharacterPusher)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCharacterPusherComponent**)Z_Param__Result=P_THIS->GetCharacterPusher();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetHookableComponentOfHookedActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHookableComponent**)Z_Param__Result=P_THIS->GetHookableComponentOfHookedActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetHookedSurvivor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACamperPlayer**)Z_Param__Result=P_THIS->GetHookedSurvivor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetInteractingPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetInteractingPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetInteractorPrimitiveComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetInteractorPrimitiveComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetIsBroken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsBroken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetIsInBasement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsInBasement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetIsSabotaged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsSabotaged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetIsSacrificed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsSacrificed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetMainInteractor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInteractor**)Z_Param__Result=P_THIS->GetMainInteractor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetMeatHookEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetMeatHookEffect_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetMontagePlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMontagePlayer**)Z_Param__Result=P_THIS->GetMontagePlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetSabotageHookRespawnDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSabotageHookRespawnDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetSaboteurPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetSaboteurPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetStrugglePercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStrugglePercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetStruggleThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStruggleThreshold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetUnhookCID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UChargeableInteractionDefinition**)Z_Param__Result=P_THIS->GetUnhookCID_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetUnhookInMontageDescriptor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAnimationMontageDescriptor*)Z_Param__Result=P_THIS->GetUnhookInMontageDescriptor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execGetUnhookOutMontageDescriptor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAnimationMontageDescriptor*)Z_Param__Result=P_THIS->GetUnhookOutMontageDescriptor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execInitializeMeatHookIfPossible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeMeatHookIfPossible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execLocal_MoveSurvivorToHook)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_MoveSurvivorToHook(Z_Param_survivor,Z_Param_duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execMulticast_EscapeAttemptResult)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_UBOOL(Z_Param_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_EscapeAttemptResult_Implementation(Z_Param_player,Z_Param_result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execMulticast_RefreshCharmCustomization)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RefreshCharmCustomization_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execMulticast_SetHookedSurvivor)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetHookedSurvivor_Implementation(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execMulticast_SetIsBrokenFromUnhook)
	{
		P_GET_UBOOL(Z_Param_setIsBrokendFromUnhook);
		P_GET_OBJECT(ADBDPlayer,Z_Param_hookBreaker);
		P_GET_PROPERTY(FFloatProperty,Z_Param_overrideBaseHookRespawnDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetIsBrokenFromUnhook_Implementation(Z_Param_setIsBrokendFromUnhook,Z_Param_hookBreaker,Z_Param_overrideBaseHookRespawnDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execMulticast_SetIsSabotaged)
	{
		P_GET_UBOOL(Z_Param_setIsSabotaged);
		P_GET_OBJECT(ADBDPlayer,Z_Param_hookBreaker);
		P_GET_UBOOL(Z_Param_useCamperHookRespawnDurationModifiers);
		P_GET_PROPERTY(FFloatProperty,Z_Param_overrideBaseHookRespawnDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetIsSabotaged_Implementation(Z_Param_setIsSabotaged,Z_Param_hookBreaker,Z_Param_useCamperHookRespawnDurationModifiers,Z_Param_overrideBaseHookRespawnDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execMulticast_SetIsSacrificed)
	{
		P_GET_UBOOL(Z_Param_isSacrificed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetIsSacrificed_Implementation(Z_Param_isSacrificed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execOnHookedSurvivorAttacked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHookedSurvivorAttacked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execOnStartPushingPlayer)
	{
		P_GET_OBJECT(ACharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartPushingPlayer(Z_Param_character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execOnStopPushingPlayer)
	{
		P_GET_OBJECT(ACharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopPushingPlayer(Z_Param_character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execSetEntity)
	{
		P_GET_OBJECT(AEntity,Z_Param_entity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEntity(Z_Param_entity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execSetInteractingPlayer)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_interactingPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractingPlayer(Z_Param_interactingPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execSetIsBeingSabotaged)
	{
		P_GET_UBOOL(Z_Param_isBeingSabotaged);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsBeingSabotaged(Z_Param_isBeingSabotaged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execSetMapActor)
	{
		P_GET_OBJECT(UMapActorComponent,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapActor(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execSetMeatHookInitilized)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeatHookInitilized(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeatHook::execUpdateSlasherBlockerCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSlasherBlockerCollision();
		P_NATIVE_END;
	}
	static FName NAME_AMeatHook_Cosmetic_SetAsScourgeHookStart = FName(TEXT("Cosmetic_SetAsScourgeHookStart"));
	void AMeatHook::Cosmetic_SetAsScourgeHookStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_Cosmetic_SetAsScourgeHookStart),NULL);
	}
	static FName NAME_AMeatHook_FireHookSoundEvent = FName(TEXT("FireHookSoundEvent"));
	void AMeatHook::FireHookSoundEvent(const FName NoiseRangeTunable, const ADBDPlayer* soundInstigator) const
	{
		MeatHook_eventFireHookSoundEvent_Parms Parms;
		Parms.NoiseRangeTunable=NoiseRangeTunable;
		Parms.soundInstigator=soundInstigator;
		const_cast<AMeatHook*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMeatHook_FireHookSoundEvent),&Parms);
	}
	static FName NAME_AMeatHook_GetCamperHookedSnapTransform = FName(TEXT("GetCamperHookedSnapTransform"));
	USceneComponent* AMeatHook::GetCamperHookedSnapTransform() const
	{
		MeatHook_eventGetCamperHookedSnapTransform_Parms Parms;
		const_cast<AMeatHook*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMeatHook_GetCamperHookedSnapTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMeatHook_GetCamperUnkookFocalPointTransform = FName(TEXT("GetCamperUnkookFocalPointTransform"));
	USceneComponent* AMeatHook::GetCamperUnkookFocalPointTransform() const
	{
		MeatHook_eventGetCamperUnkookFocalPointTransform_Parms Parms;
		const_cast<AMeatHook*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMeatHook_GetCamperUnkookFocalPointTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMeatHook_GetInteractorPrimitiveComponent = FName(TEXT("GetInteractorPrimitiveComponent"));
	UPrimitiveComponent* AMeatHook::GetInteractorPrimitiveComponent() const
	{
		MeatHook_eventGetInteractorPrimitiveComponent_Parms Parms;
		const_cast<AMeatHook*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMeatHook_GetInteractorPrimitiveComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMeatHook_GetInteractorZoneComponent = FName(TEXT("GetInteractorZoneComponent"));
	UBoxComponent* AMeatHook::GetInteractorZoneComponent() const
	{
		MeatHook_eventGetInteractorZoneComponent_Parms Parms;
		const_cast<AMeatHook*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMeatHook_GetInteractorZoneComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMeatHook_GetKickSlasherDetectionZone = FName(TEXT("GetKickSlasherDetectionZone"));
	USphereComponent* AMeatHook::GetKickSlasherDetectionZone() const
	{
		MeatHook_eventGetKickSlasherDetectionZone_Parms Parms;
		const_cast<AMeatHook*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMeatHook_GetKickSlasherDetectionZone),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMeatHook_GetMainInteractor = FName(TEXT("GetMainInteractor"));
	UInteractor* AMeatHook::GetMainInteractor() const
	{
		MeatHook_eventGetMainInteractor_Parms Parms;
		const_cast<AMeatHook*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMeatHook_GetMainInteractor),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMeatHook_GetMeatHookAkAudioComponent = FName(TEXT("GetMeatHookAkAudioComponent"));
	UAkComponent* AMeatHook::GetMeatHookAkAudioComponent() const
	{
		MeatHook_eventGetMeatHookAkAudioComponent_Parms Parms;
		const_cast<AMeatHook*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMeatHook_GetMeatHookAkAudioComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMeatHook_GetMeatHookEffect = FName(TEXT("GetMeatHookEffect"));
	USceneComponent* AMeatHook::GetMeatHookEffect() const
	{
		MeatHook_eventGetMeatHookEffect_Parms Parms;
		const_cast<AMeatHook*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMeatHook_GetMeatHookEffect),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMeatHook_GetUnhookCID = FName(TEXT("GetUnhookCID"));
	UChargeableInteractionDefinition* AMeatHook::GetUnhookCID() const
	{
		MeatHook_eventGetUnhookCID_Parms Parms;
		const_cast<AMeatHook*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMeatHook_GetUnhookCID),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMeatHook_InitializeMeatHook = FName(TEXT("InitializeMeatHook"));
	void AMeatHook::InitializeMeatHook()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_InitializeMeatHook),NULL);
	}
	static FName NAME_AMeatHook_Multicast_EscapeAttemptResult = FName(TEXT("Multicast_EscapeAttemptResult"));
	void AMeatHook::Multicast_EscapeAttemptResult(ADBDPlayer* player, bool result)
	{
		MeatHook_eventMulticast_EscapeAttemptResult_Parms Parms;
		Parms.player=player;
		Parms.result=result ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_Multicast_EscapeAttemptResult),&Parms);
	}
	static FName NAME_AMeatHook_Multicast_RefreshCharmCustomization = FName(TEXT("Multicast_RefreshCharmCustomization"));
	void AMeatHook::Multicast_RefreshCharmCustomization()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_Multicast_RefreshCharmCustomization),NULL);
	}
	static FName NAME_AMeatHook_Multicast_SetHookedSurvivor = FName(TEXT("Multicast_SetHookedSurvivor"));
	void AMeatHook::Multicast_SetHookedSurvivor(ACamperPlayer* survivor)
	{
		MeatHook_eventMulticast_SetHookedSurvivor_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_Multicast_SetHookedSurvivor),&Parms);
	}
	static FName NAME_AMeatHook_Multicast_SetIsBrokenFromUnhook = FName(TEXT("Multicast_SetIsBrokenFromUnhook"));
	void AMeatHook::Multicast_SetIsBrokenFromUnhook(bool setIsBrokendFromUnhook, ADBDPlayer* hookBreaker, float overrideBaseHookRespawnDuration)
	{
		MeatHook_eventMulticast_SetIsBrokenFromUnhook_Parms Parms;
		Parms.setIsBrokendFromUnhook=setIsBrokendFromUnhook ? true : false;
		Parms.hookBreaker=hookBreaker;
		Parms.overrideBaseHookRespawnDuration=overrideBaseHookRespawnDuration;
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_Multicast_SetIsBrokenFromUnhook),&Parms);
	}
	static FName NAME_AMeatHook_Multicast_SetIsSabotaged = FName(TEXT("Multicast_SetIsSabotaged"));
	void AMeatHook::Multicast_SetIsSabotaged(bool setIsSabotaged, ADBDPlayer* hookBreaker, bool useCamperHookRespawnDurationModifiers, float overrideBaseHookRespawnDuration)
	{
		MeatHook_eventMulticast_SetIsSabotaged_Parms Parms;
		Parms.setIsSabotaged=setIsSabotaged ? true : false;
		Parms.hookBreaker=hookBreaker;
		Parms.useCamperHookRespawnDurationModifiers=useCamperHookRespawnDurationModifiers ? true : false;
		Parms.overrideBaseHookRespawnDuration=overrideBaseHookRespawnDuration;
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_Multicast_SetIsSabotaged),&Parms);
	}
	static FName NAME_AMeatHook_Multicast_SetIsSacrificed = FName(TEXT("Multicast_SetIsSacrificed"));
	void AMeatHook::Multicast_SetIsSacrificed(bool isSacrificed)
	{
		MeatHook_eventMulticast_SetIsSacrificed_Parms Parms;
		Parms.isSacrificed=isSacrificed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_Multicast_SetIsSacrificed),&Parms);
	}
	static FName NAME_AMeatHook_OnAutoRepair = FName(TEXT("OnAutoRepair"));
	void AMeatHook::OnAutoRepair()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_OnAutoRepair),NULL);
	}
	static FName NAME_AMeatHook_OnHookedEnter = FName(TEXT("OnHookedEnter"));
	void AMeatHook::OnHookedEnter()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_OnHookedEnter),NULL);
	}
	static FName NAME_AMeatHook_OnHookedExit = FName(TEXT("OnHookedExit"));
	void AMeatHook::OnHookedExit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_OnHookedExit),NULL);
	}
	static FName NAME_AMeatHook_OnHookedIdle = FName(TEXT("OnHookedIdle"));
	void AMeatHook::OnHookedIdle()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_OnHookedIdle),NULL);
	}
	static FName NAME_AMeatHook_OnHookedSurvivorChanged = FName(TEXT("OnHookedSurvivorChanged"));
	void AMeatHook::OnHookedSurvivorChanged(ACamperPlayer* before, ACamperPlayer* after)
	{
		MeatHook_eventOnHookedSurvivorChanged_Parms Parms;
		Parms.before=before;
		Parms.after=after;
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_OnHookedSurvivorChanged),&Parms);
	}
	static FName NAME_AMeatHook_OnHookingEnter = FName(TEXT("OnHookingEnter"));
	void AMeatHook::OnHookingEnter()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_OnHookingEnter),NULL);
	}
	static FName NAME_AMeatHook_OnHookingExit = FName(TEXT("OnHookingExit"));
	void AMeatHook::OnHookingExit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_OnHookingExit),NULL);
	}
	static FName NAME_AMeatHook_OnReaction = FName(TEXT("OnReaction"));
	void AMeatHook::OnReaction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_OnReaction),NULL);
	}
	static FName NAME_AMeatHook_OnReactionIn = FName(TEXT("OnReactionIn"));
	void AMeatHook::OnReactionIn()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_OnReactionIn),NULL);
	}
	static FName NAME_AMeatHook_OnSacrificeIn = FName(TEXT("OnSacrificeIn"));
	void AMeatHook::OnSacrificeIn()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_OnSacrificeIn),NULL);
	}
	static FName NAME_AMeatHook_OnSacrificeOut = FName(TEXT("OnSacrificeOut"));
	void AMeatHook::OnSacrificeOut()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_OnSacrificeOut),NULL);
	}
	static FName NAME_AMeatHook_OnStruggleEnter = FName(TEXT("OnStruggleEnter"));
	void AMeatHook::OnStruggleEnter()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_OnStruggleEnter),NULL);
	}
	static FName NAME_AMeatHook_OnStruggleExit = FName(TEXT("OnStruggleExit"));
	void AMeatHook::OnStruggleExit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_OnStruggleExit),NULL);
	}
	static FName NAME_AMeatHook_OnStruggleSkillCheckFailed_Cosmetic = FName(TEXT("OnStruggleSkillCheckFailed_Cosmetic"));
	void AMeatHook::OnStruggleSkillCheckFailed_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_OnStruggleSkillCheckFailed_Cosmetic),NULL);
	}
	static FName NAME_AMeatHook_OnTickStruggle = FName(TEXT("OnTickStruggle"));
	void AMeatHook::OnTickStruggle(float deltaTime)
	{
		MeatHook_eventOnTickStruggle_Parms Parms;
		Parms.deltaTime=deltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_OnTickStruggle),&Parms);
	}
	static FName NAME_AMeatHook_ResetTargetHookYaw = FName(TEXT("ResetTargetHookYaw"));
	void AMeatHook::ResetTargetHookYaw(float time)
	{
		MeatHook_eventResetTargetHookYaw_Parms Parms;
		Parms.time=time;
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_ResetTargetHookYaw),&Parms);
	}
	static FName NAME_AMeatHook_SetTargetHookLookAt = FName(TEXT("SetTargetHookLookAt"));
	void AMeatHook::SetTargetHookLookAt(FVector lookAt, float time)
	{
		MeatHook_eventSetTargetHookLookAt_Parms Parms;
		Parms.lookAt=lookAt;
		Parms.time=time;
		ProcessEvent(FindFunctionChecked(NAME_AMeatHook_SetTargetHookLookAt),&Parms);
	}
	void AMeatHook::StaticRegisterNativesAMeatHook()
	{
		UClass* Class = AMeatHook::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_SendOnUnhookAnalytics", &AMeatHook::execAuthority_SendOnUnhookAnalytics },
			{ "Authority_SetHookedSurvivor", &AMeatHook::execAuthority_SetHookedSurvivor },
			{ "Authority_SetIsBrokenFromUnhook", &AMeatHook::execAuthority_SetIsBrokenFromUnhook },
			{ "Authority_SetIsSabotaged", &AMeatHook::execAuthority_SetIsSabotaged },
			{ "Authority_SetIsSacrificed", &AMeatHook::execAuthority_SetIsSacrificed },
			{ "Authority_SignalSurvivorAttemptingEscape", &AMeatHook::execAuthority_SignalSurvivorAttemptingEscape },
			{ "Authority_SignalSurvivorAttemptingEscapeAborted", &AMeatHook::execAuthority_SignalSurvivorAttemptingEscapeAborted },
			{ "Authority_SignalUnhookingAborted", &AMeatHook::execAuthority_SignalUnhookingAborted },
			{ "Authority_SignalUnhookingCharged", &AMeatHook::execAuthority_SignalUnhookingCharged },
			{ "Authority_SignalUnhookingEnter", &AMeatHook::execAuthority_SignalUnhookingEnter },
			{ "CanBeSabotaged", &AMeatHook::execCanBeSabotaged },
			{ "CanHookSurvivor", &AMeatHook::execCanHookSurvivor },
			{ "CanSurvivorAttemptEscape", &AMeatHook::execCanSurvivorAttemptEscape },
			{ "CanSurvivorStruggle", &AMeatHook::execCanSurvivorStruggle },
			{ "CanUnhookSurvivor", &AMeatHook::execCanUnhookSurvivor },
			{ "DebugHookedSurvivor", &AMeatHook::execDebugHookedSurvivor },
			{ "GetCamperHookedSnapTransform", &AMeatHook::execGetCamperHookedSnapTransform },
			{ "GetCharacterPusher", &AMeatHook::execGetCharacterPusher },
			{ "GetHookableComponentOfHookedActor", &AMeatHook::execGetHookableComponentOfHookedActor },
			{ "GetHookedSurvivor", &AMeatHook::execGetHookedSurvivor },
			{ "GetInteractingPlayer", &AMeatHook::execGetInteractingPlayer },
			{ "GetInteractorPrimitiveComponent", &AMeatHook::execGetInteractorPrimitiveComponent },
			{ "GetIsBroken", &AMeatHook::execGetIsBroken },
			{ "GetIsInBasement", &AMeatHook::execGetIsInBasement },
			{ "GetIsSabotaged", &AMeatHook::execGetIsSabotaged },
			{ "GetIsSacrificed", &AMeatHook::execGetIsSacrificed },
			{ "GetMainInteractor", &AMeatHook::execGetMainInteractor },
			{ "GetMeatHookEffect", &AMeatHook::execGetMeatHookEffect },
			{ "GetMontagePlayer", &AMeatHook::execGetMontagePlayer },
			{ "GetSabotageHookRespawnDuration", &AMeatHook::execGetSabotageHookRespawnDuration },
			{ "GetSaboteurPlayer", &AMeatHook::execGetSaboteurPlayer },
			{ "GetStrugglePercent", &AMeatHook::execGetStrugglePercent },
			{ "GetStruggleThreshold", &AMeatHook::execGetStruggleThreshold },
			{ "GetUnhookCID", &AMeatHook::execGetUnhookCID },
			{ "GetUnhookInMontageDescriptor", &AMeatHook::execGetUnhookInMontageDescriptor },
			{ "GetUnhookOutMontageDescriptor", &AMeatHook::execGetUnhookOutMontageDescriptor },
			{ "InitializeMeatHookIfPossible", &AMeatHook::execInitializeMeatHookIfPossible },
			{ "Local_MoveSurvivorToHook", &AMeatHook::execLocal_MoveSurvivorToHook },
			{ "Multicast_EscapeAttemptResult", &AMeatHook::execMulticast_EscapeAttemptResult },
			{ "Multicast_RefreshCharmCustomization", &AMeatHook::execMulticast_RefreshCharmCustomization },
			{ "Multicast_SetHookedSurvivor", &AMeatHook::execMulticast_SetHookedSurvivor },
			{ "Multicast_SetIsBrokenFromUnhook", &AMeatHook::execMulticast_SetIsBrokenFromUnhook },
			{ "Multicast_SetIsSabotaged", &AMeatHook::execMulticast_SetIsSabotaged },
			{ "Multicast_SetIsSacrificed", &AMeatHook::execMulticast_SetIsSacrificed },
			{ "OnHookedSurvivorAttacked", &AMeatHook::execOnHookedSurvivorAttacked },
			{ "OnStartPushingPlayer", &AMeatHook::execOnStartPushingPlayer },
			{ "OnStopPushingPlayer", &AMeatHook::execOnStopPushingPlayer },
			{ "SetEntity", &AMeatHook::execSetEntity },
			{ "SetInteractingPlayer", &AMeatHook::execSetInteractingPlayer },
			{ "SetIsBeingSabotaged", &AMeatHook::execSetIsBeingSabotaged },
			{ "SetMapActor", &AMeatHook::execSetMapActor },
			{ "SetMeatHookInitilized", &AMeatHook::execSetMeatHookInitilized },
			{ "UpdateSlasherBlockerCollision", &AMeatHook::execUpdateSlasherBlockerCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMeatHook_Authority_SendOnUnhookAnalytics_Statics
	{
		struct MeatHook_eventAuthority_SendOnUnhookAnalytics_Parms
		{
			ADBDPlayer* rescuer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rescuer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_Authority_SendOnUnhookAnalytics_Statics::NewProp_rescuer = { "rescuer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventAuthority_SendOnUnhookAnalytics_Parms, rescuer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_Authority_SendOnUnhookAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Authority_SendOnUnhookAnalytics_Statics::NewProp_rescuer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Authority_SendOnUnhookAnalytics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Authority_SendOnUnhookAnalytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Authority_SendOnUnhookAnalytics", nullptr, nullptr, sizeof(MeatHook_eventAuthority_SendOnUnhookAnalytics_Parms), Z_Construct_UFunction_AMeatHook_Authority_SendOnUnhookAnalytics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Authority_SendOnUnhookAnalytics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Authority_SendOnUnhookAnalytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Authority_SendOnUnhookAnalytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Authority_SendOnUnhookAnalytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Authority_SendOnUnhookAnalytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_Authority_SetHookedSurvivor_Statics
	{
		struct MeatHook_eventAuthority_SetHookedSurvivor_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_Authority_SetHookedSurvivor_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventAuthority_SetHookedSurvivor_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_Authority_SetHookedSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Authority_SetHookedSurvivor_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Authority_SetHookedSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Authority_SetHookedSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Authority_SetHookedSurvivor", nullptr, nullptr, sizeof(MeatHook_eventAuthority_SetHookedSurvivor_Parms), Z_Construct_UFunction_AMeatHook_Authority_SetHookedSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Authority_SetHookedSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Authority_SetHookedSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Authority_SetHookedSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Authority_SetHookedSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Authority_SetHookedSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook_Statics
	{
		struct MeatHook_eventAuthority_SetIsBrokenFromUnhook_Parms
		{
			bool isBrokenFromUnhook;
			ADBDPlayer* hookBreaker;
			float overrideBaseHookRespawnDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_overrideBaseHookRespawnDuration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hookBreaker;
		static void NewProp_isBrokenFromUnhook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBrokenFromUnhook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook_Statics::NewProp_overrideBaseHookRespawnDuration = { "overrideBaseHookRespawnDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventAuthority_SetIsBrokenFromUnhook_Parms, overrideBaseHookRespawnDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook_Statics::NewProp_hookBreaker = { "hookBreaker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventAuthority_SetIsBrokenFromUnhook_Parms, hookBreaker), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook_Statics::NewProp_isBrokenFromUnhook_SetBit(void* Obj)
	{
		((MeatHook_eventAuthority_SetIsBrokenFromUnhook_Parms*)Obj)->isBrokenFromUnhook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook_Statics::NewProp_isBrokenFromUnhook = { "isBrokenFromUnhook", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventAuthority_SetIsBrokenFromUnhook_Parms), &Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook_Statics::NewProp_isBrokenFromUnhook_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook_Statics::NewProp_overrideBaseHookRespawnDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook_Statics::NewProp_hookBreaker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook_Statics::NewProp_isBrokenFromUnhook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Authority_SetIsBrokenFromUnhook", nullptr, nullptr, sizeof(MeatHook_eventAuthority_SetIsBrokenFromUnhook_Parms), Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics
	{
		struct MeatHook_eventAuthority_SetIsSabotaged_Parms
		{
			bool isSabotaged;
			ADBDPlayer* saboteur;
			bool useCamperHookRespawnDurationModifiers;
			float overrideBaseHookRespawnDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_overrideBaseHookRespawnDuration;
		static void NewProp_useCamperHookRespawnDurationModifiers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useCamperHookRespawnDurationModifiers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_saboteur;
		static void NewProp_isSabotaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSabotaged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::NewProp_overrideBaseHookRespawnDuration = { "overrideBaseHookRespawnDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventAuthority_SetIsSabotaged_Parms, overrideBaseHookRespawnDuration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::NewProp_useCamperHookRespawnDurationModifiers_SetBit(void* Obj)
	{
		((MeatHook_eventAuthority_SetIsSabotaged_Parms*)Obj)->useCamperHookRespawnDurationModifiers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::NewProp_useCamperHookRespawnDurationModifiers = { "useCamperHookRespawnDurationModifiers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventAuthority_SetIsSabotaged_Parms), &Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::NewProp_useCamperHookRespawnDurationModifiers_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::NewProp_saboteur = { "saboteur", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventAuthority_SetIsSabotaged_Parms, saboteur), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::NewProp_isSabotaged_SetBit(void* Obj)
	{
		((MeatHook_eventAuthority_SetIsSabotaged_Parms*)Obj)->isSabotaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::NewProp_isSabotaged = { "isSabotaged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventAuthority_SetIsSabotaged_Parms), &Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::NewProp_isSabotaged_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::NewProp_overrideBaseHookRespawnDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::NewProp_useCamperHookRespawnDurationModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::NewProp_saboteur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::NewProp_isSabotaged,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Authority_SetIsSabotaged", nullptr, nullptr, sizeof(MeatHook_eventAuthority_SetIsSabotaged_Parms), Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_Authority_SetIsSacrificed_Statics
	{
		struct MeatHook_eventAuthority_SetIsSacrificed_Parms
		{
			bool isSacrificed;
		};
		static void NewProp_isSacrificed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSacrificed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMeatHook_Authority_SetIsSacrificed_Statics::NewProp_isSacrificed_SetBit(void* Obj)
	{
		((MeatHook_eventAuthority_SetIsSacrificed_Parms*)Obj)->isSacrificed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_Authority_SetIsSacrificed_Statics::NewProp_isSacrificed = { "isSacrificed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventAuthority_SetIsSacrificed_Parms), &Z_Construct_UFunction_AMeatHook_Authority_SetIsSacrificed_Statics::NewProp_isSacrificed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_Authority_SetIsSacrificed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Authority_SetIsSacrificed_Statics::NewProp_isSacrificed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Authority_SetIsSacrificed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Authority_SetIsSacrificed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Authority_SetIsSacrificed", nullptr, nullptr, sizeof(MeatHook_eventAuthority_SetIsSacrificed_Parms), Z_Construct_UFunction_AMeatHook_Authority_SetIsSacrificed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Authority_SetIsSacrificed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Authority_SetIsSacrificed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Authority_SetIsSacrificed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Authority_SetIsSacrificed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Authority_SetIsSacrificed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_Authority_SignalSurvivorAttemptingEscape_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Authority_SignalSurvivorAttemptingEscape_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Authority_SignalSurvivorAttemptingEscape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Authority_SignalSurvivorAttemptingEscape", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Authority_SignalSurvivorAttemptingEscape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Authority_SignalSurvivorAttemptingEscape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Authority_SignalSurvivorAttemptingEscape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Authority_SignalSurvivorAttemptingEscape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_Authority_SignalSurvivorAttemptingEscapeAborted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Authority_SignalSurvivorAttemptingEscapeAborted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Authority_SignalSurvivorAttemptingEscapeAborted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Authority_SignalSurvivorAttemptingEscapeAborted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Authority_SignalSurvivorAttemptingEscapeAborted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Authority_SignalSurvivorAttemptingEscapeAborted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Authority_SignalSurvivorAttemptingEscapeAborted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Authority_SignalSurvivorAttemptingEscapeAborted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingAborted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingAborted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingAborted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Authority_SignalUnhookingAborted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingAborted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingAborted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingAborted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingAborted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingCharged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingCharged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingCharged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Authority_SignalUnhookingCharged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingCharged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingCharged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingCharged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingCharged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingEnter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Authority_SignalUnhookingEnter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_CanBeSabotaged_Statics
	{
		struct MeatHook_eventCanBeSabotaged_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMeatHook_CanBeSabotaged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeatHook_eventCanBeSabotaged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_CanBeSabotaged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventCanBeSabotaged_Parms), &Z_Construct_UFunction_AMeatHook_CanBeSabotaged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_CanBeSabotaged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_CanBeSabotaged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_CanBeSabotaged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_CanBeSabotaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "CanBeSabotaged", nullptr, nullptr, sizeof(MeatHook_eventCanBeSabotaged_Parms), Z_Construct_UFunction_AMeatHook_CanBeSabotaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_CanBeSabotaged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_CanBeSabotaged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_CanBeSabotaged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_CanBeSabotaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_CanBeSabotaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_CanHookSurvivor_Statics
	{
		struct MeatHook_eventCanHookSurvivor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMeatHook_CanHookSurvivor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeatHook_eventCanHookSurvivor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_CanHookSurvivor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventCanHookSurvivor_Parms), &Z_Construct_UFunction_AMeatHook_CanHookSurvivor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_CanHookSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_CanHookSurvivor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_CanHookSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_CanHookSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "CanHookSurvivor", nullptr, nullptr, sizeof(MeatHook_eventCanHookSurvivor_Parms), Z_Construct_UFunction_AMeatHook_CanHookSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_CanHookSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_CanHookSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_CanHookSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_CanHookSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_CanHookSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_CanSurvivorAttemptEscape_Statics
	{
		struct MeatHook_eventCanSurvivorAttemptEscape_Parms
		{
			ACamperPlayer* survivor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMeatHook_CanSurvivorAttemptEscape_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeatHook_eventCanSurvivorAttemptEscape_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_CanSurvivorAttemptEscape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventCanSurvivorAttemptEscape_Parms), &Z_Construct_UFunction_AMeatHook_CanSurvivorAttemptEscape_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_CanSurvivorAttemptEscape_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventCanSurvivorAttemptEscape_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_CanSurvivorAttemptEscape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_CanSurvivorAttemptEscape_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_CanSurvivorAttemptEscape_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_CanSurvivorAttemptEscape_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_CanSurvivorAttemptEscape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "CanSurvivorAttemptEscape", nullptr, nullptr, sizeof(MeatHook_eventCanSurvivorAttemptEscape_Parms), Z_Construct_UFunction_AMeatHook_CanSurvivorAttemptEscape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_CanSurvivorAttemptEscape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_CanSurvivorAttemptEscape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_CanSurvivorAttemptEscape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_CanSurvivorAttemptEscape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_CanSurvivorAttemptEscape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_CanSurvivorStruggle_Statics
	{
		struct MeatHook_eventCanSurvivorStruggle_Parms
		{
			ACamperPlayer* survivor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMeatHook_CanSurvivorStruggle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeatHook_eventCanSurvivorStruggle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_CanSurvivorStruggle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventCanSurvivorStruggle_Parms), &Z_Construct_UFunction_AMeatHook_CanSurvivorStruggle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_CanSurvivorStruggle_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventCanSurvivorStruggle_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_CanSurvivorStruggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_CanSurvivorStruggle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_CanSurvivorStruggle_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_CanSurvivorStruggle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_CanSurvivorStruggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "CanSurvivorStruggle", nullptr, nullptr, sizeof(MeatHook_eventCanSurvivorStruggle_Parms), Z_Construct_UFunction_AMeatHook_CanSurvivorStruggle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_CanSurvivorStruggle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_CanSurvivorStruggle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_CanSurvivorStruggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_CanSurvivorStruggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_CanSurvivorStruggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics
	{
		struct MeatHook_eventCanUnhookSurvivor_Parms
		{
			const ACamperPlayer* survivor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_survivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeatHook_eventCanUnhookSurvivor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventCanUnhookSurvivor_Parms), &Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics::NewProp_survivor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventCanUnhookSurvivor_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics::NewProp_survivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics::NewProp_survivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "CanUnhookSurvivor", nullptr, nullptr, sizeof(MeatHook_eventCanUnhookSurvivor_Parms), Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_Cosmetic_SetAsScourgeHookStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Cosmetic_SetAsScourgeHookStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Cosmetic_SetAsScourgeHookStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Cosmetic_SetAsScourgeHookStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Cosmetic_SetAsScourgeHookStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Cosmetic_SetAsScourgeHookStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Cosmetic_SetAsScourgeHookStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Cosmetic_SetAsScourgeHookStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_DebugHookedSurvivor_Statics
	{
		struct MeatHook_eventDebugHookedSurvivor_Parms
		{
			ACamperPlayer* expectedSurvivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_expectedSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_DebugHookedSurvivor_Statics::NewProp_expectedSurvivor = { "expectedSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventDebugHookedSurvivor_Parms, expectedSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_DebugHookedSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_DebugHookedSurvivor_Statics::NewProp_expectedSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_DebugHookedSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_DebugHookedSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "DebugHookedSurvivor", nullptr, nullptr, sizeof(MeatHook_eventDebugHookedSurvivor_Parms), Z_Construct_UFunction_AMeatHook_DebugHookedSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_DebugHookedSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_DebugHookedSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_DebugHookedSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_DebugHookedSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_DebugHookedSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_soundInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_soundInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseRangeTunable_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NoiseRangeTunable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::NewProp_soundInstigator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::NewProp_soundInstigator = { "soundInstigator", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventFireHookSoundEvent_Parms, soundInstigator), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::NewProp_soundInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::NewProp_soundInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::NewProp_NoiseRangeTunable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::NewProp_NoiseRangeTunable = { "NoiseRangeTunable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventFireHookSoundEvent_Parms, NoiseRangeTunable), METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::NewProp_NoiseRangeTunable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::NewProp_NoiseRangeTunable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::NewProp_soundInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::NewProp_NoiseRangeTunable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "FireHookSoundEvent", nullptr, nullptr, sizeof(MeatHook_eventFireHookSoundEvent_Parms), Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x4C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_FireHookSoundEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_FireHookSoundEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetCamperHookedSnapTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetCamperHookedSnapTransform_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_GetCamperHookedSnapTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetCamperHookedSnapTransform_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetCamperHookedSnapTransform_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetCamperHookedSnapTransform_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetCamperHookedSnapTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetCamperHookedSnapTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetCamperHookedSnapTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetCamperHookedSnapTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetCamperHookedSnapTransform", nullptr, nullptr, sizeof(MeatHook_eventGetCamperHookedSnapTransform_Parms), Z_Construct_UFunction_AMeatHook_GetCamperHookedSnapTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetCamperHookedSnapTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetCamperHookedSnapTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetCamperHookedSnapTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetCamperHookedSnapTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetCamperHookedSnapTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetCamperUnkookFocalPointTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetCamperUnkookFocalPointTransform_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_GetCamperUnkookFocalPointTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetCamperUnkookFocalPointTransform_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetCamperUnkookFocalPointTransform_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetCamperUnkookFocalPointTransform_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetCamperUnkookFocalPointTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetCamperUnkookFocalPointTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetCamperUnkookFocalPointTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetCamperUnkookFocalPointTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetCamperUnkookFocalPointTransform", nullptr, nullptr, sizeof(MeatHook_eventGetCamperUnkookFocalPointTransform_Parms), Z_Construct_UFunction_AMeatHook_GetCamperUnkookFocalPointTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetCamperUnkookFocalPointTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetCamperUnkookFocalPointTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetCamperUnkookFocalPointTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetCamperUnkookFocalPointTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetCamperUnkookFocalPointTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetCharacterPusher_Statics
	{
		struct MeatHook_eventGetCharacterPusher_Parms
		{
			UCharacterPusherComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetCharacterPusher_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_GetCharacterPusher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetCharacterPusher_Parms, ReturnValue), Z_Construct_UClass_UCharacterPusherComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetCharacterPusher_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetCharacterPusher_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetCharacterPusher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetCharacterPusher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetCharacterPusher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetCharacterPusher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetCharacterPusher", nullptr, nullptr, sizeof(MeatHook_eventGetCharacterPusher_Parms), Z_Construct_UFunction_AMeatHook_GetCharacterPusher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetCharacterPusher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetCharacterPusher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetCharacterPusher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetCharacterPusher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetCharacterPusher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetHookableComponentOfHookedActor_Statics
	{
		struct MeatHook_eventGetHookableComponentOfHookedActor_Parms
		{
			UHookableComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetHookableComponentOfHookedActor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_GetHookableComponentOfHookedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetHookableComponentOfHookedActor_Parms, ReturnValue), Z_Construct_UClass_UHookableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetHookableComponentOfHookedActor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetHookableComponentOfHookedActor_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetHookableComponentOfHookedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetHookableComponentOfHookedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetHookableComponentOfHookedActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetHookableComponentOfHookedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetHookableComponentOfHookedActor", nullptr, nullptr, sizeof(MeatHook_eventGetHookableComponentOfHookedActor_Parms), Z_Construct_UFunction_AMeatHook_GetHookableComponentOfHookedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetHookableComponentOfHookedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetHookableComponentOfHookedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetHookableComponentOfHookedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetHookableComponentOfHookedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetHookableComponentOfHookedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetHookedSurvivor_Statics
	{
		struct MeatHook_eventGetHookedSurvivor_Parms
		{
			ACamperPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_GetHookedSurvivor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetHookedSurvivor_Parms, ReturnValue), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetHookedSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetHookedSurvivor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetHookedSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetHookedSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetHookedSurvivor", nullptr, nullptr, sizeof(MeatHook_eventGetHookedSurvivor_Parms), Z_Construct_UFunction_AMeatHook_GetHookedSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetHookedSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetHookedSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetHookedSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetHookedSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetHookedSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetInteractingPlayer_Statics
	{
		struct MeatHook_eventGetInteractingPlayer_Parms
		{
			ADBDPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_GetInteractingPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetInteractingPlayer_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetInteractingPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetInteractingPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetInteractingPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetInteractingPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetInteractingPlayer", nullptr, nullptr, sizeof(MeatHook_eventGetInteractingPlayer_Parms), Z_Construct_UFunction_AMeatHook_GetInteractingPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetInteractingPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetInteractingPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetInteractingPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetInteractingPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetInteractingPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetInteractorPrimitiveComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetInteractorPrimitiveComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_GetInteractorPrimitiveComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetInteractorPrimitiveComponent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetInteractorPrimitiveComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetInteractorPrimitiveComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetInteractorPrimitiveComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetInteractorPrimitiveComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetInteractorPrimitiveComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetInteractorPrimitiveComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetInteractorPrimitiveComponent", nullptr, nullptr, sizeof(MeatHook_eventGetInteractorPrimitiveComponent_Parms), Z_Construct_UFunction_AMeatHook_GetInteractorPrimitiveComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetInteractorPrimitiveComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetInteractorPrimitiveComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetInteractorPrimitiveComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetInteractorPrimitiveComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetInteractorPrimitiveComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetInteractorZoneComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetInteractorZoneComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_GetInteractorZoneComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetInteractorZoneComponent_Parms, ReturnValue), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetInteractorZoneComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetInteractorZoneComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetInteractorZoneComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetInteractorZoneComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetInteractorZoneComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetInteractorZoneComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetInteractorZoneComponent", nullptr, nullptr, sizeof(MeatHook_eventGetInteractorZoneComponent_Parms), Z_Construct_UFunction_AMeatHook_GetInteractorZoneComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetInteractorZoneComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetInteractorZoneComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetInteractorZoneComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetInteractorZoneComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetInteractorZoneComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetIsBroken_Statics
	{
		struct MeatHook_eventGetIsBroken_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMeatHook_GetIsBroken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeatHook_eventGetIsBroken_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_GetIsBroken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventGetIsBroken_Parms), &Z_Construct_UFunction_AMeatHook_GetIsBroken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetIsBroken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetIsBroken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetIsBroken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetIsBroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetIsBroken", nullptr, nullptr, sizeof(MeatHook_eventGetIsBroken_Parms), Z_Construct_UFunction_AMeatHook_GetIsBroken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetIsBroken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetIsBroken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetIsBroken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetIsBroken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetIsBroken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetIsInBasement_Statics
	{
		struct MeatHook_eventGetIsInBasement_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMeatHook_GetIsInBasement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeatHook_eventGetIsInBasement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_GetIsInBasement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventGetIsInBasement_Parms), &Z_Construct_UFunction_AMeatHook_GetIsInBasement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetIsInBasement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetIsInBasement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetIsInBasement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetIsInBasement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetIsInBasement", nullptr, nullptr, sizeof(MeatHook_eventGetIsInBasement_Parms), Z_Construct_UFunction_AMeatHook_GetIsInBasement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetIsInBasement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetIsInBasement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetIsInBasement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetIsInBasement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetIsInBasement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetIsSabotaged_Statics
	{
		struct MeatHook_eventGetIsSabotaged_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMeatHook_GetIsSabotaged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeatHook_eventGetIsSabotaged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_GetIsSabotaged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventGetIsSabotaged_Parms), &Z_Construct_UFunction_AMeatHook_GetIsSabotaged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetIsSabotaged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetIsSabotaged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetIsSabotaged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetIsSabotaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetIsSabotaged", nullptr, nullptr, sizeof(MeatHook_eventGetIsSabotaged_Parms), Z_Construct_UFunction_AMeatHook_GetIsSabotaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetIsSabotaged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetIsSabotaged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetIsSabotaged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetIsSabotaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetIsSabotaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetIsSacrificed_Statics
	{
		struct MeatHook_eventGetIsSacrificed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMeatHook_GetIsSacrificed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeatHook_eventGetIsSacrificed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_GetIsSacrificed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventGetIsSacrificed_Parms), &Z_Construct_UFunction_AMeatHook_GetIsSacrificed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetIsSacrificed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetIsSacrificed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetIsSacrificed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetIsSacrificed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetIsSacrificed", nullptr, nullptr, sizeof(MeatHook_eventGetIsSacrificed_Parms), Z_Construct_UFunction_AMeatHook_GetIsSacrificed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetIsSacrificed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetIsSacrificed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetIsSacrificed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetIsSacrificed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetIsSacrificed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetKickSlasherDetectionZone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetKickSlasherDetectionZone_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_GetKickSlasherDetectionZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetKickSlasherDetectionZone_Parms, ReturnValue), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetKickSlasherDetectionZone_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetKickSlasherDetectionZone_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetKickSlasherDetectionZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetKickSlasherDetectionZone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetKickSlasherDetectionZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetKickSlasherDetectionZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetKickSlasherDetectionZone", nullptr, nullptr, sizeof(MeatHook_eventGetKickSlasherDetectionZone_Parms), Z_Construct_UFunction_AMeatHook_GetKickSlasherDetectionZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetKickSlasherDetectionZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetKickSlasherDetectionZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetKickSlasherDetectionZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetKickSlasherDetectionZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetKickSlasherDetectionZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetMainInteractor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetMainInteractor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_GetMainInteractor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetMainInteractor_Parms, ReturnValue), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetMainInteractor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetMainInteractor_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetMainInteractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetMainInteractor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetMainInteractor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetMainInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetMainInteractor", nullptr, nullptr, sizeof(MeatHook_eventGetMainInteractor_Parms), Z_Construct_UFunction_AMeatHook_GetMainInteractor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetMainInteractor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetMainInteractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetMainInteractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetMainInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetMainInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetMeatHookAkAudioComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetMeatHookAkAudioComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_GetMeatHookAkAudioComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetMeatHookAkAudioComponent_Parms, ReturnValue), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetMeatHookAkAudioComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetMeatHookAkAudioComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetMeatHookAkAudioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetMeatHookAkAudioComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetMeatHookAkAudioComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetMeatHookAkAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetMeatHookAkAudioComponent", nullptr, nullptr, sizeof(MeatHook_eventGetMeatHookAkAudioComponent_Parms), Z_Construct_UFunction_AMeatHook_GetMeatHookAkAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetMeatHookAkAudioComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetMeatHookAkAudioComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetMeatHookAkAudioComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetMeatHookAkAudioComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetMeatHookAkAudioComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetMeatHookEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetMeatHookEffect_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_GetMeatHookEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetMeatHookEffect_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetMeatHookEffect_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetMeatHookEffect_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetMeatHookEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetMeatHookEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetMeatHookEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetMeatHookEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetMeatHookEffect", nullptr, nullptr, sizeof(MeatHook_eventGetMeatHookEffect_Parms), Z_Construct_UFunction_AMeatHook_GetMeatHookEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetMeatHookEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetMeatHookEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetMeatHookEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetMeatHookEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetMeatHookEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetMontagePlayer_Statics
	{
		struct MeatHook_eventGetMontagePlayer_Parms
		{
			UMontagePlayer* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetMontagePlayer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_GetMontagePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetMontagePlayer_Parms, ReturnValue), Z_Construct_UClass_UMontagePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetMontagePlayer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetMontagePlayer_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetMontagePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetMontagePlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetMontagePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetMontagePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetMontagePlayer", nullptr, nullptr, sizeof(MeatHook_eventGetMontagePlayer_Parms), Z_Construct_UFunction_AMeatHook_GetMontagePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetMontagePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetMontagePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetMontagePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetMontagePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetMontagePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetSabotageHookRespawnDuration_Statics
	{
		struct MeatHook_eventGetSabotageHookRespawnDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMeatHook_GetSabotageHookRespawnDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetSabotageHookRespawnDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetSabotageHookRespawnDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetSabotageHookRespawnDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetSabotageHookRespawnDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetSabotageHookRespawnDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetSabotageHookRespawnDuration", nullptr, nullptr, sizeof(MeatHook_eventGetSabotageHookRespawnDuration_Parms), Z_Construct_UFunction_AMeatHook_GetSabotageHookRespawnDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetSabotageHookRespawnDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetSabotageHookRespawnDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetSabotageHookRespawnDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetSabotageHookRespawnDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetSabotageHookRespawnDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetSaboteurPlayer_Statics
	{
		struct MeatHook_eventGetSaboteurPlayer_Parms
		{
			ADBDPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_GetSaboteurPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetSaboteurPlayer_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetSaboteurPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetSaboteurPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetSaboteurPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetSaboteurPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetSaboteurPlayer", nullptr, nullptr, sizeof(MeatHook_eventGetSaboteurPlayer_Parms), Z_Construct_UFunction_AMeatHook_GetSaboteurPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetSaboteurPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetSaboteurPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetSaboteurPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetSaboteurPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetSaboteurPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetStrugglePercent_Statics
	{
		struct MeatHook_eventGetStrugglePercent_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMeatHook_GetStrugglePercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetStrugglePercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetStrugglePercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetStrugglePercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetStrugglePercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetStrugglePercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetStrugglePercent", nullptr, nullptr, sizeof(MeatHook_eventGetStrugglePercent_Parms), Z_Construct_UFunction_AMeatHook_GetStrugglePercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetStrugglePercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetStrugglePercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetStrugglePercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetStrugglePercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetStrugglePercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetStruggleThreshold_Statics
	{
		struct MeatHook_eventGetStruggleThreshold_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMeatHook_GetStruggleThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetStruggleThreshold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetStruggleThreshold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetStruggleThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetStruggleThreshold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetStruggleThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetStruggleThreshold", nullptr, nullptr, sizeof(MeatHook_eventGetStruggleThreshold_Parms), Z_Construct_UFunction_AMeatHook_GetStruggleThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetStruggleThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetStruggleThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetStruggleThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetStruggleThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetStruggleThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetUnhookCID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetUnhookCID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_GetUnhookCID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetUnhookCID_Parms, ReturnValue), Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetUnhookCID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetUnhookCID_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetUnhookCID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetUnhookCID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetUnhookCID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetUnhookCID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetUnhookCID", nullptr, nullptr, sizeof(MeatHook_eventGetUnhookCID_Parms), Z_Construct_UFunction_AMeatHook_GetUnhookCID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetUnhookCID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetUnhookCID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetUnhookCID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetUnhookCID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetUnhookCID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetUnhookInMontageDescriptor_Statics
	{
		struct MeatHook_eventGetUnhookInMontageDescriptor_Parms
		{
			FAnimationMontageDescriptor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMeatHook_GetUnhookInMontageDescriptor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetUnhookInMontageDescriptor_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetUnhookInMontageDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetUnhookInMontageDescriptor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetUnhookInMontageDescriptor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetUnhookInMontageDescriptor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetUnhookInMontageDescriptor", nullptr, nullptr, sizeof(MeatHook_eventGetUnhookInMontageDescriptor_Parms), Z_Construct_UFunction_AMeatHook_GetUnhookInMontageDescriptor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetUnhookInMontageDescriptor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetUnhookInMontageDescriptor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetUnhookInMontageDescriptor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetUnhookInMontageDescriptor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetUnhookInMontageDescriptor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_GetUnhookOutMontageDescriptor_Statics
	{
		struct MeatHook_eventGetUnhookOutMontageDescriptor_Parms
		{
			FAnimationMontageDescriptor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMeatHook_GetUnhookOutMontageDescriptor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventGetUnhookOutMontageDescriptor_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_GetUnhookOutMontageDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_GetUnhookOutMontageDescriptor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_GetUnhookOutMontageDescriptor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_GetUnhookOutMontageDescriptor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "GetUnhookOutMontageDescriptor", nullptr, nullptr, sizeof(MeatHook_eventGetUnhookOutMontageDescriptor_Parms), Z_Construct_UFunction_AMeatHook_GetUnhookOutMontageDescriptor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetUnhookOutMontageDescriptor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_GetUnhookOutMontageDescriptor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_GetUnhookOutMontageDescriptor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_GetUnhookOutMontageDescriptor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_GetUnhookOutMontageDescriptor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_InitializeMeatHook_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_InitializeMeatHook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_InitializeMeatHook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "InitializeMeatHook", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_InitializeMeatHook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_InitializeMeatHook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_InitializeMeatHook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_InitializeMeatHook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_InitializeMeatHookIfPossible_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_InitializeMeatHookIfPossible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_InitializeMeatHookIfPossible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "InitializeMeatHookIfPossible", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_InitializeMeatHookIfPossible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_InitializeMeatHookIfPossible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_InitializeMeatHookIfPossible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_InitializeMeatHookIfPossible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook_Statics
	{
		struct MeatHook_eventLocal_MoveSurvivorToHook_Parms
		{
			ACamperPlayer* survivor;
			float duration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook_Statics::NewProp_duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventLocal_MoveSurvivorToHook_Parms, duration), METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook_Statics::NewProp_duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook_Statics::NewProp_duration_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventLocal_MoveSurvivorToHook_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Local_MoveSurvivorToHook", nullptr, nullptr, sizeof(MeatHook_eventLocal_MoveSurvivorToHook_Parms), Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_Multicast_EscapeAttemptResult_Statics
	{
		static void NewProp_result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMeatHook_Multicast_EscapeAttemptResult_Statics::NewProp_result_SetBit(void* Obj)
	{
		((MeatHook_eventMulticast_EscapeAttemptResult_Parms*)Obj)->result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_Multicast_EscapeAttemptResult_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventMulticast_EscapeAttemptResult_Parms), &Z_Construct_UFunction_AMeatHook_Multicast_EscapeAttemptResult_Statics::NewProp_result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_Multicast_EscapeAttemptResult_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventMulticast_EscapeAttemptResult_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_Multicast_EscapeAttemptResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Multicast_EscapeAttemptResult_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Multicast_EscapeAttemptResult_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Multicast_EscapeAttemptResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Multicast_EscapeAttemptResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Multicast_EscapeAttemptResult", nullptr, nullptr, sizeof(MeatHook_eventMulticast_EscapeAttemptResult_Parms), Z_Construct_UFunction_AMeatHook_Multicast_EscapeAttemptResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Multicast_EscapeAttemptResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Multicast_EscapeAttemptResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Multicast_EscapeAttemptResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Multicast_EscapeAttemptResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Multicast_EscapeAttemptResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_Multicast_RefreshCharmCustomization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Multicast_RefreshCharmCustomization_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Multicast_RefreshCharmCustomization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Multicast_RefreshCharmCustomization", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Multicast_RefreshCharmCustomization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Multicast_RefreshCharmCustomization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Multicast_RefreshCharmCustomization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Multicast_RefreshCharmCustomization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_Multicast_SetHookedSurvivor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_Multicast_SetHookedSurvivor_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventMulticast_SetHookedSurvivor_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_Multicast_SetHookedSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Multicast_SetHookedSurvivor_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Multicast_SetHookedSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Multicast_SetHookedSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Multicast_SetHookedSurvivor", nullptr, nullptr, sizeof(MeatHook_eventMulticast_SetHookedSurvivor_Parms), Z_Construct_UFunction_AMeatHook_Multicast_SetHookedSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Multicast_SetHookedSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Multicast_SetHookedSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Multicast_SetHookedSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Multicast_SetHookedSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Multicast_SetHookedSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_overrideBaseHookRespawnDuration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hookBreaker;
		static void NewProp_setIsBrokendFromUnhook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_setIsBrokendFromUnhook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook_Statics::NewProp_overrideBaseHookRespawnDuration = { "overrideBaseHookRespawnDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventMulticast_SetIsBrokenFromUnhook_Parms, overrideBaseHookRespawnDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook_Statics::NewProp_hookBreaker = { "hookBreaker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventMulticast_SetIsBrokenFromUnhook_Parms, hookBreaker), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook_Statics::NewProp_setIsBrokendFromUnhook_SetBit(void* Obj)
	{
		((MeatHook_eventMulticast_SetIsBrokenFromUnhook_Parms*)Obj)->setIsBrokendFromUnhook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook_Statics::NewProp_setIsBrokendFromUnhook = { "setIsBrokendFromUnhook", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventMulticast_SetIsBrokenFromUnhook_Parms), &Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook_Statics::NewProp_setIsBrokendFromUnhook_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook_Statics::NewProp_overrideBaseHookRespawnDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook_Statics::NewProp_hookBreaker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook_Statics::NewProp_setIsBrokendFromUnhook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Multicast_SetIsBrokenFromUnhook", nullptr, nullptr, sizeof(MeatHook_eventMulticast_SetIsBrokenFromUnhook_Parms), Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_overrideBaseHookRespawnDuration;
		static void NewProp_useCamperHookRespawnDurationModifiers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useCamperHookRespawnDurationModifiers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hookBreaker;
		static void NewProp_setIsSabotaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_setIsSabotaged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::NewProp_overrideBaseHookRespawnDuration = { "overrideBaseHookRespawnDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventMulticast_SetIsSabotaged_Parms, overrideBaseHookRespawnDuration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::NewProp_useCamperHookRespawnDurationModifiers_SetBit(void* Obj)
	{
		((MeatHook_eventMulticast_SetIsSabotaged_Parms*)Obj)->useCamperHookRespawnDurationModifiers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::NewProp_useCamperHookRespawnDurationModifiers = { "useCamperHookRespawnDurationModifiers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventMulticast_SetIsSabotaged_Parms), &Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::NewProp_useCamperHookRespawnDurationModifiers_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::NewProp_hookBreaker = { "hookBreaker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventMulticast_SetIsSabotaged_Parms, hookBreaker), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::NewProp_setIsSabotaged_SetBit(void* Obj)
	{
		((MeatHook_eventMulticast_SetIsSabotaged_Parms*)Obj)->setIsSabotaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::NewProp_setIsSabotaged = { "setIsSabotaged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventMulticast_SetIsSabotaged_Parms), &Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::NewProp_setIsSabotaged_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::NewProp_overrideBaseHookRespawnDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::NewProp_useCamperHookRespawnDurationModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::NewProp_hookBreaker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::NewProp_setIsSabotaged,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Multicast_SetIsSabotaged", nullptr, nullptr, sizeof(MeatHook_eventMulticast_SetIsSabotaged_Parms), Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_Multicast_SetIsSacrificed_Statics
	{
		static void NewProp_isSacrificed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSacrificed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMeatHook_Multicast_SetIsSacrificed_Statics::NewProp_isSacrificed_SetBit(void* Obj)
	{
		((MeatHook_eventMulticast_SetIsSacrificed_Parms*)Obj)->isSacrificed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_Multicast_SetIsSacrificed_Statics::NewProp_isSacrificed = { "isSacrificed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventMulticast_SetIsSacrificed_Parms), &Z_Construct_UFunction_AMeatHook_Multicast_SetIsSacrificed_Statics::NewProp_isSacrificed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_Multicast_SetIsSacrificed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_Multicast_SetIsSacrificed_Statics::NewProp_isSacrificed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_Multicast_SetIsSacrificed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_Multicast_SetIsSacrificed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "Multicast_SetIsSacrificed", nullptr, nullptr, sizeof(MeatHook_eventMulticast_SetIsSacrificed_Parms), Z_Construct_UFunction_AMeatHook_Multicast_SetIsSacrificed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Multicast_SetIsSacrificed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_Multicast_SetIsSacrificed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_Multicast_SetIsSacrificed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_Multicast_SetIsSacrificed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_Multicast_SetIsSacrificed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnAutoRepair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnAutoRepair_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnAutoRepair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnAutoRepair", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnAutoRepair_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnAutoRepair_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnAutoRepair()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnAutoRepair_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnHookedEnter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnHookedEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnHookedEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnHookedEnter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnHookedEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnHookedEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnHookedEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnHookedEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnHookedExit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnHookedExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnHookedExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnHookedExit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnHookedExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnHookedExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnHookedExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnHookedExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnHookedIdle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnHookedIdle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnHookedIdle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnHookedIdle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnHookedIdle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnHookedIdle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnHookedIdle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnHookedIdle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnHookedSurvivorAttacked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnHookedSurvivorAttacked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnHookedSurvivorAttacked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnHookedSurvivorAttacked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnHookedSurvivorAttacked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnHookedSurvivorAttacked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnHookedSurvivorAttacked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnHookedSurvivorAttacked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnHookedSurvivorChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_after;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_before;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_OnHookedSurvivorChanged_Statics::NewProp_after = { "after", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventOnHookedSurvivorChanged_Parms, after), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_OnHookedSurvivorChanged_Statics::NewProp_before = { "before", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventOnHookedSurvivorChanged_Parms, before), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_OnHookedSurvivorChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_OnHookedSurvivorChanged_Statics::NewProp_after,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_OnHookedSurvivorChanged_Statics::NewProp_before,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnHookedSurvivorChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnHookedSurvivorChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnHookedSurvivorChanged", nullptr, nullptr, sizeof(MeatHook_eventOnHookedSurvivorChanged_Parms), Z_Construct_UFunction_AMeatHook_OnHookedSurvivorChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnHookedSurvivorChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnHookedSurvivorChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnHookedSurvivorChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnHookedSurvivorChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnHookedSurvivorChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnHookingEnter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnHookingEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnHookingEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnHookingEnter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnHookingEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnHookingEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnHookingEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnHookingEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnHookingExit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnHookingExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnHookingExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnHookingExit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnHookingExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnHookingExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnHookingExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnHookingExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnReaction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnReaction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnReaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnReaction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnReaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnReaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnReaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnReaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnReactionIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnReactionIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnReactionIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnReactionIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnReactionIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnReactionIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnReactionIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnReactionIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnSacrificeIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnSacrificeIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnSacrificeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnSacrificeIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnSacrificeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnSacrificeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnSacrificeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnSacrificeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnSacrificeOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnSacrificeOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnSacrificeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnSacrificeOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnSacrificeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnSacrificeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnSacrificeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnSacrificeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnStartPushingPlayer_Statics
	{
		struct MeatHook_eventOnStartPushingPlayer_Parms
		{
			ACharacter* character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_OnStartPushingPlayer_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventOnStartPushingPlayer_Parms, character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_OnStartPushingPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_OnStartPushingPlayer_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnStartPushingPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnStartPushingPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnStartPushingPlayer", nullptr, nullptr, sizeof(MeatHook_eventOnStartPushingPlayer_Parms), Z_Construct_UFunction_AMeatHook_OnStartPushingPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnStartPushingPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnStartPushingPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnStartPushingPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnStartPushingPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnStartPushingPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnStopPushingPlayer_Statics
	{
		struct MeatHook_eventOnStopPushingPlayer_Parms
		{
			ACharacter* character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_OnStopPushingPlayer_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventOnStopPushingPlayer_Parms, character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_OnStopPushingPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_OnStopPushingPlayer_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnStopPushingPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnStopPushingPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnStopPushingPlayer", nullptr, nullptr, sizeof(MeatHook_eventOnStopPushingPlayer_Parms), Z_Construct_UFunction_AMeatHook_OnStopPushingPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnStopPushingPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnStopPushingPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnStopPushingPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnStopPushingPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnStopPushingPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnStruggleEnter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnStruggleEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnStruggleEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnStruggleEnter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnStruggleEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnStruggleEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnStruggleEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnStruggleEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnStruggleExit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnStruggleExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnStruggleExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnStruggleExit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnStruggleExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnStruggleExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnStruggleExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnStruggleExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnStruggleSkillCheckFailed_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnStruggleSkillCheckFailed_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnStruggleSkillCheckFailed_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnStruggleSkillCheckFailed_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnStruggleSkillCheckFailed_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnStruggleSkillCheckFailed_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnStruggleSkillCheckFailed_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnStruggleSkillCheckFailed_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_OnTickStruggle_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMeatHook_OnTickStruggle_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventOnTickStruggle_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_OnTickStruggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_OnTickStruggle_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_OnTickStruggle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_OnTickStruggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "OnTickStruggle", nullptr, nullptr, sizeof(MeatHook_eventOnTickStruggle_Parms), Z_Construct_UFunction_AMeatHook_OnTickStruggle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnTickStruggle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_OnTickStruggle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_OnTickStruggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_OnTickStruggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_OnTickStruggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_ResetTargetHookYaw_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMeatHook_ResetTargetHookYaw_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventResetTargetHookYaw_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_ResetTargetHookYaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_ResetTargetHookYaw_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_ResetTargetHookYaw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_ResetTargetHookYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "ResetTargetHookYaw", nullptr, nullptr, sizeof(MeatHook_eventResetTargetHookYaw_Parms), Z_Construct_UFunction_AMeatHook_ResetTargetHookYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_ResetTargetHookYaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_ResetTargetHookYaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_ResetTargetHookYaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_ResetTargetHookYaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_ResetTargetHookYaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_SetEntity_Statics
	{
		struct MeatHook_eventSetEntity_Parms
		{
			AEntity* entity;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_entity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_SetEntity_Statics::NewProp_entity = { "entity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventSetEntity_Parms, entity), Z_Construct_UClass_AEntity_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_SetEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_SetEntity_Statics::NewProp_entity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_SetEntity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_SetEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "SetEntity", nullptr, nullptr, sizeof(MeatHook_eventSetEntity_Parms), Z_Construct_UFunction_AMeatHook_SetEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_SetEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_SetEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_SetEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_SetEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_SetEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_SetInteractingPlayer_Statics
	{
		struct MeatHook_eventSetInteractingPlayer_Parms
		{
			ADBDPlayer* interactingPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_SetInteractingPlayer_Statics::NewProp_interactingPlayer = { "interactingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventSetInteractingPlayer_Parms, interactingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_SetInteractingPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_SetInteractingPlayer_Statics::NewProp_interactingPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_SetInteractingPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_SetInteractingPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "SetInteractingPlayer", nullptr, nullptr, sizeof(MeatHook_eventSetInteractingPlayer_Parms), Z_Construct_UFunction_AMeatHook_SetInteractingPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_SetInteractingPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_SetInteractingPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_SetInteractingPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_SetInteractingPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_SetInteractingPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_SetIsBeingSabotaged_Statics
	{
		struct MeatHook_eventSetIsBeingSabotaged_Parms
		{
			bool isBeingSabotaged;
		};
		static void NewProp_isBeingSabotaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBeingSabotaged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMeatHook_SetIsBeingSabotaged_Statics::NewProp_isBeingSabotaged_SetBit(void* Obj)
	{
		((MeatHook_eventSetIsBeingSabotaged_Parms*)Obj)->isBeingSabotaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_SetIsBeingSabotaged_Statics::NewProp_isBeingSabotaged = { "isBeingSabotaged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventSetIsBeingSabotaged_Parms), &Z_Construct_UFunction_AMeatHook_SetIsBeingSabotaged_Statics::NewProp_isBeingSabotaged_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_SetIsBeingSabotaged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_SetIsBeingSabotaged_Statics::NewProp_isBeingSabotaged,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_SetIsBeingSabotaged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_SetIsBeingSabotaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "SetIsBeingSabotaged", nullptr, nullptr, sizeof(MeatHook_eventSetIsBeingSabotaged_Parms), Z_Construct_UFunction_AMeatHook_SetIsBeingSabotaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_SetIsBeingSabotaged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_SetIsBeingSabotaged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_SetIsBeingSabotaged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_SetIsBeingSabotaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_SetIsBeingSabotaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_SetMapActor_Statics
	{
		struct MeatHook_eventSetMapActor_Parms
		{
			UMapActorComponent* value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_SetMapActor_Statics::NewProp_value_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeatHook_SetMapActor_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventSetMapActor_Parms, value), Z_Construct_UClass_UMapActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_SetMapActor_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_SetMapActor_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_SetMapActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_SetMapActor_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_SetMapActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_SetMapActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "SetMapActor", nullptr, nullptr, sizeof(MeatHook_eventSetMapActor_Parms), Z_Construct_UFunction_AMeatHook_SetMapActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_SetMapActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_SetMapActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_SetMapActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_SetMapActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_SetMapActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_SetMeatHookInitilized_Statics
	{
		struct MeatHook_eventSetMeatHookInitilized_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMeatHook_SetMeatHookInitilized_Statics::NewProp_value_SetBit(void* Obj)
	{
		((MeatHook_eventSetMeatHookInitilized_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeatHook_SetMeatHookInitilized_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeatHook_eventSetMeatHookInitilized_Parms), &Z_Construct_UFunction_AMeatHook_SetMeatHookInitilized_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_SetMeatHookInitilized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_SetMeatHookInitilized_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_SetMeatHookInitilized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_SetMeatHookInitilized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "SetMeatHookInitilized", nullptr, nullptr, sizeof(MeatHook_eventSetMeatHookInitilized_Parms), Z_Construct_UFunction_AMeatHook_SetMeatHookInitilized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_SetMeatHookInitilized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_SetMeatHookInitilized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_SetMeatHookInitilized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_SetMeatHookInitilized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_SetMeatHookInitilized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_SetTargetHookLookAt_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lookAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMeatHook_SetTargetHookLookAt_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventSetTargetHookLookAt_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMeatHook_SetTargetHookLookAt_Statics::NewProp_lookAt = { "lookAt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeatHook_eventSetTargetHookLookAt_Parms, lookAt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeatHook_SetTargetHookLookAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_SetTargetHookLookAt_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeatHook_SetTargetHookLookAt_Statics::NewProp_lookAt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_SetTargetHookLookAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_SetTargetHookLookAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "SetTargetHookLookAt", nullptr, nullptr, sizeof(MeatHook_eventSetTargetHookLookAt_Parms), Z_Construct_UFunction_AMeatHook_SetTargetHookLookAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_SetTargetHookLookAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_SetTargetHookLookAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_SetTargetHookLookAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_SetTargetHookLookAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_SetTargetHookLookAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeatHook_UpdateSlasherBlockerCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeatHook_UpdateSlasherBlockerCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeatHook_UpdateSlasherBlockerCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeatHook, nullptr, "UpdateSlasherBlockerCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeatHook_UpdateSlasherBlockerCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeatHook_UpdateSlasherBlockerCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeatHook_UpdateSlasherBlockerCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeatHook_UpdateSlasherBlockerCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMeatHook_NoRegister()
	{
		return AMeatHook::StaticClass();
	}
	struct Z_Construct_UClass_AMeatHook_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cachedMapActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cachedMapActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__initialized_MetaData[];
#endif
		static void NewProp__initialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__initialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactingPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__interactingPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perceptionStimuliComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__perceptionStimuliComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__preventDrainProgression_MetaData[];
#endif
		static void NewProp__preventDrainProgression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__preventDrainProgression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camperHookedSnapTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__camperHookedSnapTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__unhook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__unhook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__meatHookEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__meatHookEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mainInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mainInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__campersThatSabotagedMeatHook_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__campersThatSabotagedMeatHook;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__campersThatSabotagedMeatHook_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hookBreakerPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hookBreakerPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hookedSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hookedSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__eventListener_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__eventListener;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slasherCollisionBlocker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__slasherCollisionBlocker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterPusher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__characterPusher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__struggleThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__struggleThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetHookYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetHookYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HookYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HookYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawAdjustTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YawAdjustTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullyHooked_MetaData[];
#endif
		static void NewProp_FullyHooked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FullyHooked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapHookedCharacter_MetaData[];
#endif
		static void NewProp_SnapHookedCharacter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SnapHookedCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HookIdentityTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HookIdentityTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSabotageable_MetaData[];
#endif
		static void NewProp_IsSabotageable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSabotageable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBreakable_MetaData[];
#endif
		static void NewProp_IsBreakable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBreakable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInBasement_MetaData[];
#endif
		static void NewProp_IsInBasement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInBasement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipRegions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClipRegions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClipRegions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIInteractionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIInteractionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSacrificeEnabled_MetaData[];
#endif
		static void NewProp_IsSacrificeEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSacrificeEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasSurvivorStruggleCancelled_MetaData[];
#endif
		static void NewProp_WasSurvivorStruggleCancelled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasSurvivorStruggleCancelled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSurvivorStruggling_MetaData[];
#endif
		static void NewProp_IsSurvivorStruggling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSurvivorStruggling;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeatHook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMeatHook_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMeatHook_Authority_SendOnUnhookAnalytics, "Authority_SendOnUnhookAnalytics" }, // 3019732211
		{ &Z_Construct_UFunction_AMeatHook_Authority_SetHookedSurvivor, "Authority_SetHookedSurvivor" }, // 2538144946
		{ &Z_Construct_UFunction_AMeatHook_Authority_SetIsBrokenFromUnhook, "Authority_SetIsBrokenFromUnhook" }, // 3784900746
		{ &Z_Construct_UFunction_AMeatHook_Authority_SetIsSabotaged, "Authority_SetIsSabotaged" }, // 1256164432
		{ &Z_Construct_UFunction_AMeatHook_Authority_SetIsSacrificed, "Authority_SetIsSacrificed" }, // 2802897572
		{ &Z_Construct_UFunction_AMeatHook_Authority_SignalSurvivorAttemptingEscape, "Authority_SignalSurvivorAttemptingEscape" }, // 3288265784
		{ &Z_Construct_UFunction_AMeatHook_Authority_SignalSurvivorAttemptingEscapeAborted, "Authority_SignalSurvivorAttemptingEscapeAborted" }, // 3599574305
		{ &Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingAborted, "Authority_SignalUnhookingAborted" }, // 980034754
		{ &Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingCharged, "Authority_SignalUnhookingCharged" }, // 3329773142
		{ &Z_Construct_UFunction_AMeatHook_Authority_SignalUnhookingEnter, "Authority_SignalUnhookingEnter" }, // 1271006098
		{ &Z_Construct_UFunction_AMeatHook_CanBeSabotaged, "CanBeSabotaged" }, // 2203728197
		{ &Z_Construct_UFunction_AMeatHook_CanHookSurvivor, "CanHookSurvivor" }, // 508215213
		{ &Z_Construct_UFunction_AMeatHook_CanSurvivorAttemptEscape, "CanSurvivorAttemptEscape" }, // 2664769493
		{ &Z_Construct_UFunction_AMeatHook_CanSurvivorStruggle, "CanSurvivorStruggle" }, // 3357197430
		{ &Z_Construct_UFunction_AMeatHook_CanUnhookSurvivor, "CanUnhookSurvivor" }, // 389515940
		{ &Z_Construct_UFunction_AMeatHook_Cosmetic_SetAsScourgeHookStart, "Cosmetic_SetAsScourgeHookStart" }, // 4017144466
		{ &Z_Construct_UFunction_AMeatHook_DebugHookedSurvivor, "DebugHookedSurvivor" }, // 1495289433
		{ &Z_Construct_UFunction_AMeatHook_FireHookSoundEvent, "FireHookSoundEvent" }, // 256205259
		{ &Z_Construct_UFunction_AMeatHook_GetCamperHookedSnapTransform, "GetCamperHookedSnapTransform" }, // 1074171220
		{ &Z_Construct_UFunction_AMeatHook_GetCamperUnkookFocalPointTransform, "GetCamperUnkookFocalPointTransform" }, // 1367007829
		{ &Z_Construct_UFunction_AMeatHook_GetCharacterPusher, "GetCharacterPusher" }, // 4088503026
		{ &Z_Construct_UFunction_AMeatHook_GetHookableComponentOfHookedActor, "GetHookableComponentOfHookedActor" }, // 1908149273
		{ &Z_Construct_UFunction_AMeatHook_GetHookedSurvivor, "GetHookedSurvivor" }, // 2934537966
		{ &Z_Construct_UFunction_AMeatHook_GetInteractingPlayer, "GetInteractingPlayer" }, // 3080532839
		{ &Z_Construct_UFunction_AMeatHook_GetInteractorPrimitiveComponent, "GetInteractorPrimitiveComponent" }, // 3766467163
		{ &Z_Construct_UFunction_AMeatHook_GetInteractorZoneComponent, "GetInteractorZoneComponent" }, // 563016777
		{ &Z_Construct_UFunction_AMeatHook_GetIsBroken, "GetIsBroken" }, // 422804553
		{ &Z_Construct_UFunction_AMeatHook_GetIsInBasement, "GetIsInBasement" }, // 3551307174
		{ &Z_Construct_UFunction_AMeatHook_GetIsSabotaged, "GetIsSabotaged" }, // 3294738593
		{ &Z_Construct_UFunction_AMeatHook_GetIsSacrificed, "GetIsSacrificed" }, // 3063257727
		{ &Z_Construct_UFunction_AMeatHook_GetKickSlasherDetectionZone, "GetKickSlasherDetectionZone" }, // 266355324
		{ &Z_Construct_UFunction_AMeatHook_GetMainInteractor, "GetMainInteractor" }, // 2855438241
		{ &Z_Construct_UFunction_AMeatHook_GetMeatHookAkAudioComponent, "GetMeatHookAkAudioComponent" }, // 1062534896
		{ &Z_Construct_UFunction_AMeatHook_GetMeatHookEffect, "GetMeatHookEffect" }, // 4262396139
		{ &Z_Construct_UFunction_AMeatHook_GetMontagePlayer, "GetMontagePlayer" }, // 1184775374
		{ &Z_Construct_UFunction_AMeatHook_GetSabotageHookRespawnDuration, "GetSabotageHookRespawnDuration" }, // 1317409504
		{ &Z_Construct_UFunction_AMeatHook_GetSaboteurPlayer, "GetSaboteurPlayer" }, // 1907783429
		{ &Z_Construct_UFunction_AMeatHook_GetStrugglePercent, "GetStrugglePercent" }, // 1778093913
		{ &Z_Construct_UFunction_AMeatHook_GetStruggleThreshold, "GetStruggleThreshold" }, // 2253724936
		{ &Z_Construct_UFunction_AMeatHook_GetUnhookCID, "GetUnhookCID" }, // 2555449259
		{ &Z_Construct_UFunction_AMeatHook_GetUnhookInMontageDescriptor, "GetUnhookInMontageDescriptor" }, // 189041066
		{ &Z_Construct_UFunction_AMeatHook_GetUnhookOutMontageDescriptor, "GetUnhookOutMontageDescriptor" }, // 3881171233
		{ &Z_Construct_UFunction_AMeatHook_InitializeMeatHook, "InitializeMeatHook" }, // 1733780061
		{ &Z_Construct_UFunction_AMeatHook_InitializeMeatHookIfPossible, "InitializeMeatHookIfPossible" }, // 1912957666
		{ &Z_Construct_UFunction_AMeatHook_Local_MoveSurvivorToHook, "Local_MoveSurvivorToHook" }, // 1679377347
		{ &Z_Construct_UFunction_AMeatHook_Multicast_EscapeAttemptResult, "Multicast_EscapeAttemptResult" }, // 2526650858
		{ &Z_Construct_UFunction_AMeatHook_Multicast_RefreshCharmCustomization, "Multicast_RefreshCharmCustomization" }, // 3258189112
		{ &Z_Construct_UFunction_AMeatHook_Multicast_SetHookedSurvivor, "Multicast_SetHookedSurvivor" }, // 2758132657
		{ &Z_Construct_UFunction_AMeatHook_Multicast_SetIsBrokenFromUnhook, "Multicast_SetIsBrokenFromUnhook" }, // 1639299638
		{ &Z_Construct_UFunction_AMeatHook_Multicast_SetIsSabotaged, "Multicast_SetIsSabotaged" }, // 3879327718
		{ &Z_Construct_UFunction_AMeatHook_Multicast_SetIsSacrificed, "Multicast_SetIsSacrificed" }, // 1317788431
		{ &Z_Construct_UFunction_AMeatHook_OnAutoRepair, "OnAutoRepair" }, // 3635460178
		{ &Z_Construct_UFunction_AMeatHook_OnHookedEnter, "OnHookedEnter" }, // 1586096172
		{ &Z_Construct_UFunction_AMeatHook_OnHookedExit, "OnHookedExit" }, // 1225818811
		{ &Z_Construct_UFunction_AMeatHook_OnHookedIdle, "OnHookedIdle" }, // 4131015169
		{ &Z_Construct_UFunction_AMeatHook_OnHookedSurvivorAttacked, "OnHookedSurvivorAttacked" }, // 1567829096
		{ &Z_Construct_UFunction_AMeatHook_OnHookedSurvivorChanged, "OnHookedSurvivorChanged" }, // 1004929584
		{ &Z_Construct_UFunction_AMeatHook_OnHookingEnter, "OnHookingEnter" }, // 2326083179
		{ &Z_Construct_UFunction_AMeatHook_OnHookingExit, "OnHookingExit" }, // 3641584271
		{ &Z_Construct_UFunction_AMeatHook_OnReaction, "OnReaction" }, // 2572377007
		{ &Z_Construct_UFunction_AMeatHook_OnReactionIn, "OnReactionIn" }, // 4247235033
		{ &Z_Construct_UFunction_AMeatHook_OnSacrificeIn, "OnSacrificeIn" }, // 431893495
		{ &Z_Construct_UFunction_AMeatHook_OnSacrificeOut, "OnSacrificeOut" }, // 2271507624
		{ &Z_Construct_UFunction_AMeatHook_OnStartPushingPlayer, "OnStartPushingPlayer" }, // 1634721906
		{ &Z_Construct_UFunction_AMeatHook_OnStopPushingPlayer, "OnStopPushingPlayer" }, // 1452116841
		{ &Z_Construct_UFunction_AMeatHook_OnStruggleEnter, "OnStruggleEnter" }, // 3833784419
		{ &Z_Construct_UFunction_AMeatHook_OnStruggleExit, "OnStruggleExit" }, // 1346918000
		{ &Z_Construct_UFunction_AMeatHook_OnStruggleSkillCheckFailed_Cosmetic, "OnStruggleSkillCheckFailed_Cosmetic" }, // 1597083134
		{ &Z_Construct_UFunction_AMeatHook_OnTickStruggle, "OnTickStruggle" }, // 3646460581
		{ &Z_Construct_UFunction_AMeatHook_ResetTargetHookYaw, "ResetTargetHookYaw" }, // 945820485
		{ &Z_Construct_UFunction_AMeatHook_SetEntity, "SetEntity" }, // 2845547900
		{ &Z_Construct_UFunction_AMeatHook_SetInteractingPlayer, "SetInteractingPlayer" }, // 1434300232
		{ &Z_Construct_UFunction_AMeatHook_SetIsBeingSabotaged, "SetIsBeingSabotaged" }, // 2918325528
		{ &Z_Construct_UFunction_AMeatHook_SetMapActor, "SetMapActor" }, // 4119475666
		{ &Z_Construct_UFunction_AMeatHook_SetMeatHookInitilized, "SetMeatHookInitilized" }, // 752351920
		{ &Z_Construct_UFunction_AMeatHook_SetTargetHookLookAt, "SetTargetHookLookAt" }, // 937031065
		{ &Z_Construct_UFunction_AMeatHook_UpdateSlasherBlockerCollision, "UpdateSlasherBlockerCollision" }, // 2037171974
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeatHook.h" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp__cachedMapActor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__cachedMapActor = { "_cachedMapActor", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, _cachedMapActor), Z_Construct_UClass_UMapActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp__cachedMapActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp__cachedMapActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp__initialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	void Z_Construct_UClass_AMeatHook_Statics::NewProp__initialized_SetBit(void* Obj)
	{
		((AMeatHook*)Obj)->_initialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__initialized = { "_initialized", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMeatHook), &Z_Construct_UClass_AMeatHook_Statics::NewProp__initialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp__initialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp__initialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp__interactingPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__interactingPlayer = { "_interactingPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, _interactingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp__interactingPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp__interactingPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp__perceptionStimuliComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeatHook" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__perceptionStimuliComponent = { "_perceptionStimuliComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, _perceptionStimuliComponent), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp__perceptionStimuliComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp__perceptionStimuliComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp__preventDrainProgression_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	void Z_Construct_UClass_AMeatHook_Statics::NewProp__preventDrainProgression_SetBit(void* Obj)
	{
		((AMeatHook*)Obj)->_preventDrainProgression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__preventDrainProgression = { "_preventDrainProgression", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMeatHook), &Z_Construct_UClass_AMeatHook_Statics::NewProp__preventDrainProgression_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp__preventDrainProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp__preventDrainProgression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp__entity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeatHook" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__entity = { "_entity", nullptr, (EPropertyFlags)0x0040000000002004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, _entity), Z_Construct_UClass_AEntity_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp__entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp__entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp__camperHookedSnapTransform_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__camperHookedSnapTransform = { "_camperHookedSnapTransform", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, _camperHookedSnapTransform), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp__camperHookedSnapTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp__camperHookedSnapTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp__unhook_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__unhook = { "_unhook", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, _unhook), Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp__unhook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp__unhook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp__meatHookEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__meatHookEffect = { "_meatHookEffect", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, _meatHookEffect), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp__meatHookEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp__meatHookEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp__mainInteractor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__mainInteractor = { "_mainInteractor", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, _mainInteractor), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp__mainInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp__mainInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp__campersThatSabotagedMeatHook_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__campersThatSabotagedMeatHook = { "_campersThatSabotagedMeatHook", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, _campersThatSabotagedMeatHook), METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp__campersThatSabotagedMeatHook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp__campersThatSabotagedMeatHook_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__campersThatSabotagedMeatHook_ElementProp = { "_campersThatSabotagedMeatHook", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp__hookBreakerPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__hookBreakerPlayer = { "_hookBreakerPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, _hookBreakerPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp__hookBreakerPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp__hookBreakerPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp__hookedSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__hookedSurvivor = { "_hookedSurvivor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, _hookedSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp__hookedSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp__hookedSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp__eventListener_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__eventListener = { "_eventListener", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, _eventListener), Z_Construct_UClass_UPollableEventListener_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp__eventListener_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp__eventListener_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp__slasherCollisionBlocker_MetaData[] = {
		{ "Category", "MeatHook" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__slasherCollisionBlocker = { "_slasherCollisionBlocker", nullptr, (EPropertyFlags)0x002008000008200c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, _slasherCollisionBlocker), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp__slasherCollisionBlocker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp__slasherCollisionBlocker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp__characterPusher_MetaData[] = {
		{ "Category", "MeatHook" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__characterPusher = { "_characterPusher", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, _characterPusher), Z_Construct_UClass_UCharacterPusherComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp__characterPusher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp__characterPusher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp__struggleThreshold_MetaData[] = {
		{ "Category", "MeatHook" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp__struggleThreshold = { "_struggleThreshold", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, _struggleThreshold), METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp__struggleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp__struggleThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp_TargetHookYaw_MetaData[] = {
		{ "Category", "MeatHook" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp_TargetHookYaw = { "TargetHookYaw", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, TargetHookYaw), METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp_TargetHookYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp_TargetHookYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp_HookYaw_MetaData[] = {
		{ "Category", "MeatHook" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp_HookYaw = { "HookYaw", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, HookYaw), METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp_HookYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp_HookYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp_YawAdjustTimer_MetaData[] = {
		{ "Category", "MeatHook" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp_YawAdjustTimer = { "YawAdjustTimer", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, YawAdjustTimer), Z_Construct_UScriptStruct_FDBDTimer, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp_YawAdjustTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp_YawAdjustTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp_FullyHooked_MetaData[] = {
		{ "Category", "MeatHook" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	void Z_Construct_UClass_AMeatHook_Statics::NewProp_FullyHooked_SetBit(void* Obj)
	{
		((AMeatHook*)Obj)->FullyHooked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp_FullyHooked = { "FullyHooked", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMeatHook), &Z_Construct_UClass_AMeatHook_Statics::NewProp_FullyHooked_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp_FullyHooked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp_FullyHooked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp_SnapHookedCharacter_MetaData[] = {
		{ "Category", "MeatHook" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	void Z_Construct_UClass_AMeatHook_Statics::NewProp_SnapHookedCharacter_SetBit(void* Obj)
	{
		((AMeatHook*)Obj)->SnapHookedCharacter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp_SnapHookedCharacter = { "SnapHookedCharacter", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMeatHook), &Z_Construct_UClass_AMeatHook_Statics::NewProp_SnapHookedCharacter_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp_SnapHookedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp_SnapHookedCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp_HookIdentityTag_MetaData[] = {
		{ "Category", "MeatHook" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp_HookIdentityTag = { "HookIdentityTag", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, HookIdentityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp_HookIdentityTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp_HookIdentityTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSabotageable_MetaData[] = {
		{ "Category", "MeatHook" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	void Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSabotageable_SetBit(void* Obj)
	{
		((AMeatHook*)Obj)->IsSabotageable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSabotageable = { "IsSabotageable", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMeatHook), &Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSabotageable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSabotageable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSabotageable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp_IsBreakable_MetaData[] = {
		{ "Category", "MeatHook" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	void Z_Construct_UClass_AMeatHook_Statics::NewProp_IsBreakable_SetBit(void* Obj)
	{
		((AMeatHook*)Obj)->IsBreakable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp_IsBreakable = { "IsBreakable", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMeatHook), &Z_Construct_UClass_AMeatHook_Statics::NewProp_IsBreakable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp_IsBreakable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp_IsBreakable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp_IsInBasement_MetaData[] = {
		{ "Category", "MeatHook" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	void Z_Construct_UClass_AMeatHook_Statics::NewProp_IsInBasement_SetBit(void* Obj)
	{
		((AMeatHook*)Obj)->IsInBasement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp_IsInBasement = { "IsInBasement", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMeatHook), &Z_Construct_UClass_AMeatHook_Statics::NewProp_IsInBasement_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp_IsInBasement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp_IsInBasement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp_ClipRegions_MetaData[] = {
		{ "Category", "MeatHook" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp_ClipRegions = { "ClipRegions", nullptr, (EPropertyFlags)0x002008800000200c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, ClipRegions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp_ClipRegions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp_ClipRegions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp_ClipRegions_Inner = { "ClipRegions", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDBDClipRegionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp_AIInteractionOffset_MetaData[] = {
		{ "Category", "MeatHook" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp_AIInteractionOffset = { "AIInteractionOffset", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeatHook, AIInteractionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp_AIInteractionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp_AIInteractionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSacrificeEnabled_MetaData[] = {
		{ "Category", "MeatHook" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	void Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSacrificeEnabled_SetBit(void* Obj)
	{
		((AMeatHook*)Obj)->IsSacrificeEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSacrificeEnabled = { "IsSacrificeEnabled", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMeatHook), &Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSacrificeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSacrificeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSacrificeEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp_WasSurvivorStruggleCancelled_MetaData[] = {
		{ "Category", "MeatHook" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	void Z_Construct_UClass_AMeatHook_Statics::NewProp_WasSurvivorStruggleCancelled_SetBit(void* Obj)
	{
		((AMeatHook*)Obj)->WasSurvivorStruggleCancelled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp_WasSurvivorStruggleCancelled = { "WasSurvivorStruggleCancelled", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMeatHook), &Z_Construct_UClass_AMeatHook_Statics::NewProp_WasSurvivorStruggleCancelled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp_WasSurvivorStruggleCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp_WasSurvivorStruggleCancelled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSurvivorStruggling_MetaData[] = {
		{ "Category", "MeatHook" },
		{ "ModuleRelativePath", "Public/MeatHook.h" },
	};
#endif
	void Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSurvivorStruggling_SetBit(void* Obj)
	{
		((AMeatHook*)Obj)->IsSurvivorStruggling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSurvivorStruggling = { "IsSurvivorStruggling", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMeatHook), &Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSurvivorStruggling_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSurvivorStruggling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSurvivorStruggling_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMeatHook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__cachedMapActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__initialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__interactingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__perceptionStimuliComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__preventDrainProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__camperHookedSnapTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__unhook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__meatHookEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__mainInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__campersThatSabotagedMeatHook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__campersThatSabotagedMeatHook_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__hookBreakerPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__hookedSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__eventListener,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__slasherCollisionBlocker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__characterPusher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp__struggleThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp_TargetHookYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp_HookYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp_YawAdjustTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp_FullyHooked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp_SnapHookedCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp_HookIdentityTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSabotageable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp_IsBreakable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp_IsInBasement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp_ClipRegions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp_ClipRegions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp_AIInteractionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSacrificeEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp_WasSurvivorStruggleCancelled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeatHook_Statics::NewProp_IsSurvivorStruggling,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMeatHook_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIInteractableTargetInterface_NoRegister, (int32)VTABLE_OFFSET(AMeatHook, IAIInteractableTargetInterface), false },
			{ Z_Construct_UClass_UAIPointOfInterestTargetInterface_NoRegister, (int32)VTABLE_OFFSET(AMeatHook, IAIPointOfInterestTargetInterface), false },
			{ Z_Construct_UClass_UCharmAttachable_NoRegister, (int32)VTABLE_OFFSET(AMeatHook, ICharmAttachable), false },
			{ Z_Construct_UClass_UNoiseIndicatorEmitterInterface_NoRegister, (int32)VTABLE_OFFSET(AMeatHook, INoiseIndicatorEmitterInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeatHook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeatHook>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeatHook_Statics::ClassParams = {
		&AMeatHook::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMeatHook_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMeatHook_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMeatHook_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeatHook()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeatHook_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeatHook, 768450108);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AMeatHook>()
	{
		return AMeatHook::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeatHook(Z_Construct_UClass_AMeatHook, &AMeatHook::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AMeatHook"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeatHook);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
