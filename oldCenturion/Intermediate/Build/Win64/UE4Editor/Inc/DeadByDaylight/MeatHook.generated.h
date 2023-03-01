// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class ACamperPlayer;
class USceneComponent;
class UCharacterPusherComponent;
class UHookableComponent;
class UPrimitiveComponent;
class UInteractor;
class UMontagePlayer;
class UChargeableInteractionDefinition;
struct FAnimationMontageDescriptor;
class ACharacter;
class AEntity;
class UMapActorComponent;
class UBoxComponent;
class USphereComponent;
class UAkComponent;
struct FVector;
#ifdef DEADBYDAYLIGHT_MeatHook_generated_h
#error "MeatHook.generated.h already included, missing '#pragma once' in MeatHook.h"
#endif
#define DEADBYDAYLIGHT_MeatHook_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_RPC_WRAPPERS \
	virtual USceneComponent* GetCamperHookedSnapTransform_Implementation() const; \
	virtual UPrimitiveComponent* GetInteractorPrimitiveComponent_Implementation() const; \
	virtual UInteractor* GetMainInteractor_Implementation() const; \
	virtual USceneComponent* GetMeatHookEffect_Implementation() const; \
	virtual UChargeableInteractionDefinition* GetUnhookCID_Implementation() const; \
	virtual void Multicast_EscapeAttemptResult_Implementation(ADBDPlayer* player, bool result); \
	virtual void Multicast_RefreshCharmCustomization_Implementation(); \
	virtual void Multicast_SetHookedSurvivor_Implementation(ACamperPlayer* survivor); \
	virtual void Multicast_SetIsBrokenFromUnhook_Implementation(bool setIsBrokendFromUnhook, ADBDPlayer* hookBreaker, float overrideBaseHookRespawnDuration); \
	virtual void Multicast_SetIsSabotaged_Implementation(bool setIsSabotaged, ADBDPlayer* hookBreaker, bool useCamperHookRespawnDurationModifiers, float overrideBaseHookRespawnDuration); \
	virtual void Multicast_SetIsSacrificed_Implementation(bool isSacrificed); \
 \
	DECLARE_FUNCTION(execAuthority_SendOnUnhookAnalytics); \
	DECLARE_FUNCTION(execAuthority_SetHookedSurvivor); \
	DECLARE_FUNCTION(execAuthority_SetIsBrokenFromUnhook); \
	DECLARE_FUNCTION(execAuthority_SetIsSabotaged); \
	DECLARE_FUNCTION(execAuthority_SetIsSacrificed); \
	DECLARE_FUNCTION(execAuthority_SignalSurvivorAttemptingEscape); \
	DECLARE_FUNCTION(execAuthority_SignalSurvivorAttemptingEscapeAborted); \
	DECLARE_FUNCTION(execAuthority_SignalUnhookingAborted); \
	DECLARE_FUNCTION(execAuthority_SignalUnhookingCharged); \
	DECLARE_FUNCTION(execAuthority_SignalUnhookingEnter); \
	DECLARE_FUNCTION(execCanBeSabotaged); \
	DECLARE_FUNCTION(execCanHookSurvivor); \
	DECLARE_FUNCTION(execCanSurvivorAttemptEscape); \
	DECLARE_FUNCTION(execCanSurvivorStruggle); \
	DECLARE_FUNCTION(execCanUnhookSurvivor); \
	DECLARE_FUNCTION(execDebugHookedSurvivor); \
	DECLARE_FUNCTION(execGetCamperHookedSnapTransform); \
	DECLARE_FUNCTION(execGetCharacterPusher); \
	DECLARE_FUNCTION(execGetHookableComponentOfHookedActor); \
	DECLARE_FUNCTION(execGetHookedSurvivor); \
	DECLARE_FUNCTION(execGetInteractingPlayer); \
	DECLARE_FUNCTION(execGetInteractorPrimitiveComponent); \
	DECLARE_FUNCTION(execGetIsBroken); \
	DECLARE_FUNCTION(execGetIsInBasement); \
	DECLARE_FUNCTION(execGetIsSabotaged); \
	DECLARE_FUNCTION(execGetIsSacrificed); \
	DECLARE_FUNCTION(execGetMainInteractor); \
	DECLARE_FUNCTION(execGetMeatHookEffect); \
	DECLARE_FUNCTION(execGetMontagePlayer); \
	DECLARE_FUNCTION(execGetSabotageHookRespawnDuration); \
	DECLARE_FUNCTION(execGetSaboteurPlayer); \
	DECLARE_FUNCTION(execGetStrugglePercent); \
	DECLARE_FUNCTION(execGetStruggleThreshold); \
	DECLARE_FUNCTION(execGetUnhookCID); \
	DECLARE_FUNCTION(execGetUnhookInMontageDescriptor); \
	DECLARE_FUNCTION(execGetUnhookOutMontageDescriptor); \
	DECLARE_FUNCTION(execInitializeMeatHookIfPossible); \
	DECLARE_FUNCTION(execLocal_MoveSurvivorToHook); \
	DECLARE_FUNCTION(execMulticast_EscapeAttemptResult); \
	DECLARE_FUNCTION(execMulticast_RefreshCharmCustomization); \
	DECLARE_FUNCTION(execMulticast_SetHookedSurvivor); \
	DECLARE_FUNCTION(execMulticast_SetIsBrokenFromUnhook); \
	DECLARE_FUNCTION(execMulticast_SetIsSabotaged); \
	DECLARE_FUNCTION(execMulticast_SetIsSacrificed); \
	DECLARE_FUNCTION(execOnHookedSurvivorAttacked); \
	DECLARE_FUNCTION(execOnStartPushingPlayer); \
	DECLARE_FUNCTION(execOnStopPushingPlayer); \
	DECLARE_FUNCTION(execSetEntity); \
	DECLARE_FUNCTION(execSetInteractingPlayer); \
	DECLARE_FUNCTION(execSetIsBeingSabotaged); \
	DECLARE_FUNCTION(execSetMapActor); \
	DECLARE_FUNCTION(execSetMeatHookInitilized); \
	DECLARE_FUNCTION(execUpdateSlasherBlockerCollision);


#define DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual USceneComponent* GetCamperHookedSnapTransform_Implementation() const; \
	virtual UPrimitiveComponent* GetInteractorPrimitiveComponent_Implementation() const; \
	virtual UInteractor* GetMainInteractor_Implementation() const; \
	virtual USceneComponent* GetMeatHookEffect_Implementation() const; \
	virtual UChargeableInteractionDefinition* GetUnhookCID_Implementation() const; \
	virtual void Multicast_EscapeAttemptResult_Implementation(ADBDPlayer* player, bool result); \
	virtual void Multicast_RefreshCharmCustomization_Implementation(); \
	virtual void Multicast_SetHookedSurvivor_Implementation(ACamperPlayer* survivor); \
	virtual void Multicast_SetIsBrokenFromUnhook_Implementation(bool setIsBrokendFromUnhook, ADBDPlayer* hookBreaker, float overrideBaseHookRespawnDuration); \
	virtual void Multicast_SetIsSabotaged_Implementation(bool setIsSabotaged, ADBDPlayer* hookBreaker, bool useCamperHookRespawnDurationModifiers, float overrideBaseHookRespawnDuration); \
	virtual void Multicast_SetIsSacrificed_Implementation(bool isSacrificed); \
 \
	DECLARE_FUNCTION(execAuthority_SendOnUnhookAnalytics); \
	DECLARE_FUNCTION(execAuthority_SetHookedSurvivor); \
	DECLARE_FUNCTION(execAuthority_SetIsBrokenFromUnhook); \
	DECLARE_FUNCTION(execAuthority_SetIsSabotaged); \
	DECLARE_FUNCTION(execAuthority_SetIsSacrificed); \
	DECLARE_FUNCTION(execAuthority_SignalSurvivorAttemptingEscape); \
	DECLARE_FUNCTION(execAuthority_SignalSurvivorAttemptingEscapeAborted); \
	DECLARE_FUNCTION(execAuthority_SignalUnhookingAborted); \
	DECLARE_FUNCTION(execAuthority_SignalUnhookingCharged); \
	DECLARE_FUNCTION(execAuthority_SignalUnhookingEnter); \
	DECLARE_FUNCTION(execCanBeSabotaged); \
	DECLARE_FUNCTION(execCanHookSurvivor); \
	DECLARE_FUNCTION(execCanSurvivorAttemptEscape); \
	DECLARE_FUNCTION(execCanSurvivorStruggle); \
	DECLARE_FUNCTION(execCanUnhookSurvivor); \
	DECLARE_FUNCTION(execDebugHookedSurvivor); \
	DECLARE_FUNCTION(execGetCamperHookedSnapTransform); \
	DECLARE_FUNCTION(execGetCharacterPusher); \
	DECLARE_FUNCTION(execGetHookableComponentOfHookedActor); \
	DECLARE_FUNCTION(execGetHookedSurvivor); \
	DECLARE_FUNCTION(execGetInteractingPlayer); \
	DECLARE_FUNCTION(execGetInteractorPrimitiveComponent); \
	DECLARE_FUNCTION(execGetIsBroken); \
	DECLARE_FUNCTION(execGetIsInBasement); \
	DECLARE_FUNCTION(execGetIsSabotaged); \
	DECLARE_FUNCTION(execGetIsSacrificed); \
	DECLARE_FUNCTION(execGetMainInteractor); \
	DECLARE_FUNCTION(execGetMeatHookEffect); \
	DECLARE_FUNCTION(execGetMontagePlayer); \
	DECLARE_FUNCTION(execGetSabotageHookRespawnDuration); \
	DECLARE_FUNCTION(execGetSaboteurPlayer); \
	DECLARE_FUNCTION(execGetStrugglePercent); \
	DECLARE_FUNCTION(execGetStruggleThreshold); \
	DECLARE_FUNCTION(execGetUnhookCID); \
	DECLARE_FUNCTION(execGetUnhookInMontageDescriptor); \
	DECLARE_FUNCTION(execGetUnhookOutMontageDescriptor); \
	DECLARE_FUNCTION(execInitializeMeatHookIfPossible); \
	DECLARE_FUNCTION(execLocal_MoveSurvivorToHook); \
	DECLARE_FUNCTION(execMulticast_EscapeAttemptResult); \
	DECLARE_FUNCTION(execMulticast_RefreshCharmCustomization); \
	DECLARE_FUNCTION(execMulticast_SetHookedSurvivor); \
	DECLARE_FUNCTION(execMulticast_SetIsBrokenFromUnhook); \
	DECLARE_FUNCTION(execMulticast_SetIsSabotaged); \
	DECLARE_FUNCTION(execMulticast_SetIsSacrificed); \
	DECLARE_FUNCTION(execOnHookedSurvivorAttacked); \
	DECLARE_FUNCTION(execOnStartPushingPlayer); \
	DECLARE_FUNCTION(execOnStopPushingPlayer); \
	DECLARE_FUNCTION(execSetEntity); \
	DECLARE_FUNCTION(execSetInteractingPlayer); \
	DECLARE_FUNCTION(execSetIsBeingSabotaged); \
	DECLARE_FUNCTION(execSetMapActor); \
	DECLARE_FUNCTION(execSetMeatHookInitilized); \
	DECLARE_FUNCTION(execUpdateSlasherBlockerCollision);


#define DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_EVENT_PARMS \
	struct MeatHook_eventFireHookSoundEvent_Parms \
	{ \
		FName NoiseRangeTunable; \
		const ADBDPlayer* soundInstigator; \
	}; \
	struct MeatHook_eventGetCamperHookedSnapTransform_Parms \
	{ \
		USceneComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MeatHook_eventGetCamperHookedSnapTransform_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MeatHook_eventGetCamperUnkookFocalPointTransform_Parms \
	{ \
		USceneComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MeatHook_eventGetCamperUnkookFocalPointTransform_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MeatHook_eventGetInteractorPrimitiveComponent_Parms \
	{ \
		UPrimitiveComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MeatHook_eventGetInteractorPrimitiveComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MeatHook_eventGetInteractorZoneComponent_Parms \
	{ \
		UBoxComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MeatHook_eventGetInteractorZoneComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MeatHook_eventGetKickSlasherDetectionZone_Parms \
	{ \
		USphereComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MeatHook_eventGetKickSlasherDetectionZone_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MeatHook_eventGetMainInteractor_Parms \
	{ \
		UInteractor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MeatHook_eventGetMainInteractor_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MeatHook_eventGetMeatHookAkAudioComponent_Parms \
	{ \
		UAkComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MeatHook_eventGetMeatHookAkAudioComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MeatHook_eventGetMeatHookEffect_Parms \
	{ \
		USceneComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MeatHook_eventGetMeatHookEffect_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MeatHook_eventGetUnhookCID_Parms \
	{ \
		UChargeableInteractionDefinition* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MeatHook_eventGetUnhookCID_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MeatHook_eventMulticast_EscapeAttemptResult_Parms \
	{ \
		ADBDPlayer* player; \
		bool result; \
	}; \
	struct MeatHook_eventMulticast_SetHookedSurvivor_Parms \
	{ \
		ACamperPlayer* survivor; \
	}; \
	struct MeatHook_eventMulticast_SetIsBrokenFromUnhook_Parms \
	{ \
		bool setIsBrokendFromUnhook; \
		ADBDPlayer* hookBreaker; \
		float overrideBaseHookRespawnDuration; \
	}; \
	struct MeatHook_eventMulticast_SetIsSabotaged_Parms \
	{ \
		bool setIsSabotaged; \
		ADBDPlayer* hookBreaker; \
		bool useCamperHookRespawnDurationModifiers; \
		float overrideBaseHookRespawnDuration; \
	}; \
	struct MeatHook_eventMulticast_SetIsSacrificed_Parms \
	{ \
		bool isSacrificed; \
	}; \
	struct MeatHook_eventOnHookedSurvivorChanged_Parms \
	{ \
		ACamperPlayer* before; \
		ACamperPlayer* after; \
	}; \
	struct MeatHook_eventOnTickStruggle_Parms \
	{ \
		float deltaTime; \
	}; \
	struct MeatHook_eventResetTargetHookYaw_Parms \
	{ \
		float time; \
	}; \
	struct MeatHook_eventSetTargetHookLookAt_Parms \
	{ \
		FVector lookAt; \
		float time; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMeatHook(); \
	friend struct Z_Construct_UClass_AMeatHook_Statics; \
public: \
	DECLARE_CLASS(AMeatHook, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AMeatHook) \
	virtual UObject* _getUObject() const override { return const_cast<AMeatHook*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_INCLASS \
private: \
	static void StaticRegisterNativesAMeatHook(); \
	friend struct Z_Construct_UClass_AMeatHook_Statics; \
public: \
	DECLARE_CLASS(AMeatHook, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AMeatHook) \
	virtual UObject* _getUObject() const override { return const_cast<AMeatHook*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMeatHook(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMeatHook) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeatHook); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeatHook); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMeatHook(AMeatHook&&); \
	NO_API AMeatHook(const AMeatHook&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMeatHook(AMeatHook&&); \
	NO_API AMeatHook(const AMeatHook&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeatHook); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeatHook); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMeatHook)


#define DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ClipRegions() { return STRUCT_OFFSET(AMeatHook, ClipRegions); } \
	FORCEINLINE static uint32 __PPO__IsInBasement() { return STRUCT_OFFSET(AMeatHook, IsInBasement); } \
	FORCEINLINE static uint32 __PPO__IsBreakable() { return STRUCT_OFFSET(AMeatHook, IsBreakable); } \
	FORCEINLINE static uint32 __PPO__IsSabotageable() { return STRUCT_OFFSET(AMeatHook, IsSabotageable); } \
	FORCEINLINE static uint32 __PPO__HookIdentityTag() { return STRUCT_OFFSET(AMeatHook, HookIdentityTag); } \
	FORCEINLINE static uint32 __PPO__SnapHookedCharacter() { return STRUCT_OFFSET(AMeatHook, SnapHookedCharacter); } \
	FORCEINLINE static uint32 __PPO__FullyHooked() { return STRUCT_OFFSET(AMeatHook, FullyHooked); } \
	FORCEINLINE static uint32 __PPO__YawAdjustTimer() { return STRUCT_OFFSET(AMeatHook, YawAdjustTimer); } \
	FORCEINLINE static uint32 __PPO__HookYaw() { return STRUCT_OFFSET(AMeatHook, HookYaw); } \
	FORCEINLINE static uint32 __PPO__TargetHookYaw() { return STRUCT_OFFSET(AMeatHook, TargetHookYaw); } \
	FORCEINLINE static uint32 __PPO___struggleThreshold() { return STRUCT_OFFSET(AMeatHook, _struggleThreshold); } \
	FORCEINLINE static uint32 __PPO___characterPusher() { return STRUCT_OFFSET(AMeatHook, _characterPusher); } \
	FORCEINLINE static uint32 __PPO___slasherCollisionBlocker() { return STRUCT_OFFSET(AMeatHook, _slasherCollisionBlocker); } \
	FORCEINLINE static uint32 __PPO___eventListener() { return STRUCT_OFFSET(AMeatHook, _eventListener); } \
	FORCEINLINE static uint32 __PPO___hookedSurvivor() { return STRUCT_OFFSET(AMeatHook, _hookedSurvivor); } \
	FORCEINLINE static uint32 __PPO___hookBreakerPlayer() { return STRUCT_OFFSET(AMeatHook, _hookBreakerPlayer); } \
	FORCEINLINE static uint32 __PPO___campersThatSabotagedMeatHook() { return STRUCT_OFFSET(AMeatHook, _campersThatSabotagedMeatHook); } \
	FORCEINLINE static uint32 __PPO___mainInteractor() { return STRUCT_OFFSET(AMeatHook, _mainInteractor); } \
	FORCEINLINE static uint32 __PPO___meatHookEffect() { return STRUCT_OFFSET(AMeatHook, _meatHookEffect); } \
	FORCEINLINE static uint32 __PPO___unhook() { return STRUCT_OFFSET(AMeatHook, _unhook); } \
	FORCEINLINE static uint32 __PPO___camperHookedSnapTransform() { return STRUCT_OFFSET(AMeatHook, _camperHookedSnapTransform); } \
	FORCEINLINE static uint32 __PPO___entity() { return STRUCT_OFFSET(AMeatHook, _entity); } \
	FORCEINLINE static uint32 __PPO___preventDrainProgression() { return STRUCT_OFFSET(AMeatHook, _preventDrainProgression); } \
	FORCEINLINE static uint32 __PPO___perceptionStimuliComponent() { return STRUCT_OFFSET(AMeatHook, _perceptionStimuliComponent); } \
	FORCEINLINE static uint32 __PPO___interactingPlayer() { return STRUCT_OFFSET(AMeatHook, _interactingPlayer); } \
	FORCEINLINE static uint32 __PPO___initialized() { return STRUCT_OFFSET(AMeatHook, _initialized); } \
	FORCEINLINE static uint32 __PPO___cachedMapActor() { return STRUCT_OFFSET(AMeatHook, _cachedMapActor); }


#define DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_34_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AMeatHook>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_MeatHook_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
