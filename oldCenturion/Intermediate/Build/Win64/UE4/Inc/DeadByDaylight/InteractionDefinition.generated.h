// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
class UInteractionDefinition;
class UInteractor;
class UPrimitiveComponent;
class ADBDPlayer;
enum class EInteractionComparisonPriority : uint8;
class AActor;
struct FVector;
enum class EButtonType : uint8;
struct FMontagePlaybackDefinition;
struct FAnimationMontageDescriptor;
class AInteractable;
class UInterruptionDefinition;
enum class EPowerProgressBar : uint8;
struct FRotator;
class UObject;
enum class EInputInteractionType : uint8;
#ifdef DEADBYDAYLIGHT_InteractionDefinition_generated_h
#error "InteractionDefinition.generated.h already included, missing '#pragma once' in InteractionDefinition.h"
#endif
#define DEADBYDAYLIGHT_InteractionDefinition_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_36_DELEGATE \
struct _Script_DeadByDaylight_eventInteractionDefinitionOnInteractionAnimNotify_Parms \
{ \
	FName NotifyId; \
}; \
static inline void FInteractionDefinitionOnInteractionAnimNotify_DelegateWrapper(const FMulticastScriptDelegate& InteractionDefinitionOnInteractionAnimNotify, FName NotifyId) \
{ \
	_Script_DeadByDaylight_eventInteractionDefinitionOnInteractionAnimNotify_Parms Parms; \
	Parms.NotifyId=NotifyId; \
	InteractionDefinitionOnInteractionAnimNotify.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_RPC_WRAPPERS \
	virtual bool AtlantaItemUseToggleState_Implementation(); \
	virtual bool CanOverrideInteraction_Implementation(UInteractionDefinition* interaction) const; \
	virtual EInteractionComparisonPriority ComparePriorityToInteraction_Implementation(UInteractionDefinition* interaction) const; \
	virtual TArray<AActor*> GetActorsToIgnoreOverlap_Implementation() const; \
	virtual bool GetAllowNavigation_Implementation(const ADBDPlayer* player) const; \
	virtual FAnimationMontageDescriptor GetEnterMontage_Implementation(const ADBDPlayer* player) const; \
	virtual FAnimationMontageDescriptor GetExitMontage_Implementation(const ADBDPlayer* player) const; \
	virtual FVector GetFocalPointPosition_Implementation(const ADBDPlayer* player) const; \
	virtual float GetInteractionExitTime_Implementation(const ADBDPlayer* character) const; \
	virtual FString GetInteractionText_Implementation(const ADBDPlayer* player) const; \
	virtual float GetInteractionTimeMultiplier_Implementation(const ADBDPlayer* character) const; \
	virtual ADBDPlayer* GetPlayerDependancy_Implementation(const ADBDPlayer* interactingPlayer); \
	virtual FRotator GetRotationToSnapPoint_Implementation(const ADBDPlayer* player) const; \
	virtual float GetSnapDistance_Implementation(const ADBDPlayer* player) const; \
	virtual FVector GetSnapPointPosition_Implementation(const ADBDPlayer* player) const; \
	virtual FName GetSnapSocketName_Implementation(const ADBDPlayer* player) const; \
	virtual float GetSnapTime_Implementation(const ADBDPlayer* player) const; \
	virtual FAnimationMontageDescriptor GetUpdateMontage_Implementation(const ADBDPlayer* player) const; \
	virtual bool IsCancelable_Implementation(const ADBDPlayer* player) const; \
	virtual bool IsInteractionDone_Implementation(const ADBDPlayer* player, EInputInteractionType interactionType) const; \
	virtual bool IsInteractionPossibleBP_Implementation(const ADBDPlayer* player, EInputInteractionType interactionType) const; \
	virtual bool IsInteractionPossibleClient_Implementation(const ADBDPlayer* player, EInputInteractionType interactionType) const; \
	virtual bool IsInteractionUsingOffering_Implementation(const ADBDPlayer* player) const; \
	virtual bool IsInterruptionPossible_Implementation(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee, const UInterruptionDefinition* interruption) const; \
 \
	DECLARE_FUNCTION(execAddDisablingTags); \
	DECLARE_FUNCTION(execAddMutuallyExclusiveInteraction); \
	DECLARE_FUNCTION(execAtlantaItemUseToggleState); \
	DECLARE_FUNCTION(execAttachToInteractor); \
	DECLARE_FUNCTION(execAttachToZone); \
	DECLARE_FUNCTION(execCalculateSnapTimeForConstantMaxNormalMovementSpeed); \
	DECLARE_FUNCTION(execCalculateSnapTimeForConstantSpeed); \
	DECLARE_FUNCTION(execCanOverrideInteraction); \
	DECLARE_FUNCTION(execComparePriorityToInteraction); \
	DECLARE_FUNCTION(execCompleteCharge); \
	DECLARE_FUNCTION(execDoesPlayerHaveClearPath); \
	DECLARE_FUNCTION(execGetActionSpeedMultiplier); \
	DECLARE_FUNCTION(execGetActorHeightDelta); \
	DECLARE_FUNCTION(execGetActorsToIgnoreOverlap); \
	DECLARE_FUNCTION(execGetActualSnapPointPosition); \
	DECLARE_FUNCTION(execGetActualSnapPointPositionAtStart); \
	DECLARE_FUNCTION(execGetAllowNavigation); \
	DECLARE_FUNCTION(execGetCancelButtonType); \
	DECLARE_FUNCTION(execGetChargePercent); \
	DECLARE_FUNCTION(execGetEnterAnimationPlayBackDefinition); \
	DECLARE_FUNCTION(execGetEnterMontage); \
	DECLARE_FUNCTION(execGetExitAnimationPlayBackDefinition); \
	DECLARE_FUNCTION(execGetExitAnimationPlayRate); \
	DECLARE_FUNCTION(execGetExitMontage); \
	DECLARE_FUNCTION(execGetFocalPointPosition); \
	DECLARE_FUNCTION(execGetInteractable); \
	DECLARE_FUNCTION(execGetInteractionDescriptionText); \
	DECLARE_FUNCTION(execGetInteractionExitTime); \
	DECLARE_FUNCTION(execGetInteractionText); \
	DECLARE_FUNCTION(execGetInteractionTime); \
	DECLARE_FUNCTION(execGetInteractionTimeMultiplier); \
	DECLARE_FUNCTION(execGetInteractor); \
	DECLARE_FUNCTION(execGetInterruptionDefinitions); \
	DECLARE_FUNCTION(execGetPlayerDependancy); \
	DECLARE_FUNCTION(execGetPowerProgressBar); \
	DECLARE_FUNCTION(execGetRotationToSnapPoint); \
	DECLARE_FUNCTION(execGetRotationToSnapPointAtStart); \
	DECLARE_FUNCTION(execGetSecondaryActionButtonType); \
	DECLARE_FUNCTION(execGetSecondaryActionInputType); \
	DECLARE_FUNCTION(execGetSecondaryAttackButtonType); \
	DECLARE_FUNCTION(execGetSnapDistance); \
	DECLARE_FUNCTION(execGetSnapDistanceAtStart); \
	DECLARE_FUNCTION(execGetSnapPointPosition); \
	DECLARE_FUNCTION(execGetSnapPointPositionAtStart); \
	DECLARE_FUNCTION(execGetSnapSocketName); \
	DECLARE_FUNCTION(execGetSnapTime); \
	DECLARE_FUNCTION(execGetSnapTimeAtStart); \
	DECLARE_FUNCTION(execGetUpdateAnimationPlayBackDefinition); \
	DECLARE_FUNCTION(execGetUpdateAnimationPlayRate); \
	DECLARE_FUNCTION(execGetUpdateHighlightOpacityUsingCharge); \
	DECLARE_FUNCTION(execGetUpdateMontage); \
	DECLARE_FUNCTION(execIsCancelable); \
	DECLARE_FUNCTION(execIsCharacterFacingInteractorDirection); \
	DECLARE_FUNCTION(execIsInputPressed); \
	DECLARE_FUNCTION(execIsInteractableInPlayerView); \
	DECLARE_FUNCTION(execIsInteractionDone); \
	DECLARE_FUNCTION(execIsInteractionPossibleBP); \
	DECLARE_FUNCTION(execIsInteractionPossibleClient); \
	DECLARE_FUNCTION(execIsInteractionUsingOffering); \
	DECLARE_FUNCTION(execIsInterruptionPossible); \
	DECLARE_FUNCTION(execIsSupportedCharacterType); \
	DECLARE_FUNCTION(execRemoveDisablingTags); \
	DECLARE_FUNCTION(execSetAtlantaSecondaryActionInputType); \
	DECLARE_FUNCTION(execSetCancelButtonType); \
	DECLARE_FUNCTION(execSetSecondaryActionButtonType); \
	DECLARE_FUNCTION(execSetSecondaryActionInputType); \
	DECLARE_FUNCTION(execSetSecondaryAttackButtonType); \
	DECLARE_FUNCTION(execShouldStartUpdateMontageDuringEnter);


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool AtlantaItemUseToggleState_Implementation(); \
	virtual bool CanOverrideInteraction_Implementation(UInteractionDefinition* interaction) const; \
	virtual EInteractionComparisonPriority ComparePriorityToInteraction_Implementation(UInteractionDefinition* interaction) const; \
	virtual TArray<AActor*> GetActorsToIgnoreOverlap_Implementation() const; \
	virtual bool GetAllowNavigation_Implementation(const ADBDPlayer* player) const; \
	virtual FAnimationMontageDescriptor GetEnterMontage_Implementation(const ADBDPlayer* player) const; \
	virtual FAnimationMontageDescriptor GetExitMontage_Implementation(const ADBDPlayer* player) const; \
	virtual FVector GetFocalPointPosition_Implementation(const ADBDPlayer* player) const; \
	virtual float GetInteractionExitTime_Implementation(const ADBDPlayer* character) const; \
	virtual FString GetInteractionText_Implementation(const ADBDPlayer* player) const; \
	virtual float GetInteractionTimeMultiplier_Implementation(const ADBDPlayer* character) const; \
	virtual ADBDPlayer* GetPlayerDependancy_Implementation(const ADBDPlayer* interactingPlayer); \
	virtual FRotator GetRotationToSnapPoint_Implementation(const ADBDPlayer* player) const; \
	virtual float GetSnapDistance_Implementation(const ADBDPlayer* player) const; \
	virtual FVector GetSnapPointPosition_Implementation(const ADBDPlayer* player) const; \
	virtual FName GetSnapSocketName_Implementation(const ADBDPlayer* player) const; \
	virtual float GetSnapTime_Implementation(const ADBDPlayer* player) const; \
	virtual FAnimationMontageDescriptor GetUpdateMontage_Implementation(const ADBDPlayer* player) const; \
	virtual bool IsCancelable_Implementation(const ADBDPlayer* player) const; \
	virtual bool IsInteractionDone_Implementation(const ADBDPlayer* player, EInputInteractionType interactionType) const; \
	virtual bool IsInteractionPossibleBP_Implementation(const ADBDPlayer* player, EInputInteractionType interactionType) const; \
	virtual bool IsInteractionPossibleClient_Implementation(const ADBDPlayer* player, EInputInteractionType interactionType) const; \
	virtual bool IsInteractionUsingOffering_Implementation(const ADBDPlayer* player) const; \
	virtual bool IsInterruptionPossible_Implementation(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee, const UInterruptionDefinition* interruption) const; \
 \
	DECLARE_FUNCTION(execAddDisablingTags); \
	DECLARE_FUNCTION(execAddMutuallyExclusiveInteraction); \
	DECLARE_FUNCTION(execAtlantaItemUseToggleState); \
	DECLARE_FUNCTION(execAttachToInteractor); \
	DECLARE_FUNCTION(execAttachToZone); \
	DECLARE_FUNCTION(execCalculateSnapTimeForConstantMaxNormalMovementSpeed); \
	DECLARE_FUNCTION(execCalculateSnapTimeForConstantSpeed); \
	DECLARE_FUNCTION(execCanOverrideInteraction); \
	DECLARE_FUNCTION(execComparePriorityToInteraction); \
	DECLARE_FUNCTION(execCompleteCharge); \
	DECLARE_FUNCTION(execDoesPlayerHaveClearPath); \
	DECLARE_FUNCTION(execGetActionSpeedMultiplier); \
	DECLARE_FUNCTION(execGetActorHeightDelta); \
	DECLARE_FUNCTION(execGetActorsToIgnoreOverlap); \
	DECLARE_FUNCTION(execGetActualSnapPointPosition); \
	DECLARE_FUNCTION(execGetActualSnapPointPositionAtStart); \
	DECLARE_FUNCTION(execGetAllowNavigation); \
	DECLARE_FUNCTION(execGetCancelButtonType); \
	DECLARE_FUNCTION(execGetChargePercent); \
	DECLARE_FUNCTION(execGetEnterAnimationPlayBackDefinition); \
	DECLARE_FUNCTION(execGetEnterMontage); \
	DECLARE_FUNCTION(execGetExitAnimationPlayBackDefinition); \
	DECLARE_FUNCTION(execGetExitAnimationPlayRate); \
	DECLARE_FUNCTION(execGetExitMontage); \
	DECLARE_FUNCTION(execGetFocalPointPosition); \
	DECLARE_FUNCTION(execGetInteractable); \
	DECLARE_FUNCTION(execGetInteractionDescriptionText); \
	DECLARE_FUNCTION(execGetInteractionExitTime); \
	DECLARE_FUNCTION(execGetInteractionText); \
	DECLARE_FUNCTION(execGetInteractionTime); \
	DECLARE_FUNCTION(execGetInteractionTimeMultiplier); \
	DECLARE_FUNCTION(execGetInteractor); \
	DECLARE_FUNCTION(execGetInterruptionDefinitions); \
	DECLARE_FUNCTION(execGetPlayerDependancy); \
	DECLARE_FUNCTION(execGetPowerProgressBar); \
	DECLARE_FUNCTION(execGetRotationToSnapPoint); \
	DECLARE_FUNCTION(execGetRotationToSnapPointAtStart); \
	DECLARE_FUNCTION(execGetSecondaryActionButtonType); \
	DECLARE_FUNCTION(execGetSecondaryActionInputType); \
	DECLARE_FUNCTION(execGetSecondaryAttackButtonType); \
	DECLARE_FUNCTION(execGetSnapDistance); \
	DECLARE_FUNCTION(execGetSnapDistanceAtStart); \
	DECLARE_FUNCTION(execGetSnapPointPosition); \
	DECLARE_FUNCTION(execGetSnapPointPositionAtStart); \
	DECLARE_FUNCTION(execGetSnapSocketName); \
	DECLARE_FUNCTION(execGetSnapTime); \
	DECLARE_FUNCTION(execGetSnapTimeAtStart); \
	DECLARE_FUNCTION(execGetUpdateAnimationPlayBackDefinition); \
	DECLARE_FUNCTION(execGetUpdateAnimationPlayRate); \
	DECLARE_FUNCTION(execGetUpdateHighlightOpacityUsingCharge); \
	DECLARE_FUNCTION(execGetUpdateMontage); \
	DECLARE_FUNCTION(execIsCancelable); \
	DECLARE_FUNCTION(execIsCharacterFacingInteractorDirection); \
	DECLARE_FUNCTION(execIsInputPressed); \
	DECLARE_FUNCTION(execIsInteractableInPlayerView); \
	DECLARE_FUNCTION(execIsInteractionDone); \
	DECLARE_FUNCTION(execIsInteractionPossibleBP); \
	DECLARE_FUNCTION(execIsInteractionPossibleClient); \
	DECLARE_FUNCTION(execIsInteractionUsingOffering); \
	DECLARE_FUNCTION(execIsInterruptionPossible); \
	DECLARE_FUNCTION(execIsSupportedCharacterType); \
	DECLARE_FUNCTION(execRemoveDisablingTags); \
	DECLARE_FUNCTION(execSetAtlantaSecondaryActionInputType); \
	DECLARE_FUNCTION(execSetCancelButtonType); \
	DECLARE_FUNCTION(execSetSecondaryActionButtonType); \
	DECLARE_FUNCTION(execSetSecondaryActionInputType); \
	DECLARE_FUNCTION(execSetSecondaryAttackButtonType); \
	DECLARE_FUNCTION(execShouldStartUpdateMontageDuringEnter);


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_EVENT_PARMS \
	struct InteractionDefinition_eventAtlantaItemUseToggleState_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventAtlantaItemUseToggleState_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventCanOverrideInteraction_Parms \
	{ \
		UInteractionDefinition* interaction; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventCanOverrideInteraction_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventComparePriorityToInteraction_Parms \
	{ \
		UInteractionDefinition* interaction; \
		EInteractionComparisonPriority ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventComparePriorityToInteraction_Parms() \
			: ReturnValue((EInteractionComparisonPriority)0) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventGetActorsToIgnoreOverlap_Parms \
	{ \
		TArray<AActor*> ReturnValue; \
	}; \
	struct InteractionDefinition_eventGetAllowNavigation_Parms \
	{ \
		const ADBDPlayer* player; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventGetAllowNavigation_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventGetEnterMontage_Parms \
	{ \
		const ADBDPlayer* player; \
		FAnimationMontageDescriptor ReturnValue; \
	}; \
	struct InteractionDefinition_eventGetExitMontage_Parms \
	{ \
		const ADBDPlayer* player; \
		FAnimationMontageDescriptor ReturnValue; \
	}; \
	struct InteractionDefinition_eventGetFocalPointPosition_Parms \
	{ \
		const ADBDPlayer* player; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventGetFocalPointPosition_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventGetInteractionExitTime_Parms \
	{ \
		const ADBDPlayer* character; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventGetInteractionExitTime_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventGetInteractionText_Parms \
	{ \
		const ADBDPlayer* player; \
		FString ReturnValue; \
	}; \
	struct InteractionDefinition_eventGetInteractionTimeMultiplier_Parms \
	{ \
		const ADBDPlayer* character; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventGetInteractionTimeMultiplier_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventGetPlayerDependancy_Parms \
	{ \
		const ADBDPlayer* interactingPlayer; \
		ADBDPlayer* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventGetPlayerDependancy_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventGetRotationToSnapPoint_Parms \
	{ \
		const ADBDPlayer* player; \
		FRotator ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventGetRotationToSnapPoint_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventGetSnapDistance_Parms \
	{ \
		const ADBDPlayer* player; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventGetSnapDistance_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventGetSnapPointPosition_Parms \
	{ \
		const ADBDPlayer* player; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventGetSnapPointPosition_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventGetSnapSocketName_Parms \
	{ \
		const ADBDPlayer* player; \
		FName ReturnValue; \
	}; \
	struct InteractionDefinition_eventGetSnapTime_Parms \
	{ \
		const ADBDPlayer* player; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventGetSnapTime_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventGetUpdateMontage_Parms \
	{ \
		const ADBDPlayer* player; \
		FAnimationMontageDescriptor ReturnValue; \
	}; \
	struct InteractionDefinition_eventIsCancelable_Parms \
	{ \
		const ADBDPlayer* player; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventIsCancelable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventIsInteractionDone_Parms \
	{ \
		const ADBDPlayer* player; \
		EInputInteractionType interactionType; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventIsInteractionDone_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventIsInteractionPossibleBP_Parms \
	{ \
		const ADBDPlayer* player; \
		EInputInteractionType interactionType; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventIsInteractionPossibleBP_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventIsInteractionPossibleClient_Parms \
	{ \
		const ADBDPlayer* player; \
		EInputInteractionType interactionType; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventIsInteractionPossibleClient_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventIsInteractionUsingOffering_Parms \
	{ \
		const ADBDPlayer* player; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventIsInteractionUsingOffering_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventIsInterruptionPossible_Parms \
	{ \
		const ADBDPlayer* interruptor; \
		const ADBDPlayer* interruptee; \
		const UInterruptionDefinition* interruption; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionDefinition_eventIsInterruptionPossible_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct InteractionDefinition_eventOnInteractionAnimNotifyEvent_Parms \
	{ \
		FName notifyID; \
		ADBDPlayer* player; \
	}; \
	struct InteractionDefinition_eventOnInteractionCancelled_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct InteractionDefinition_eventOnInteractionEnterEnd_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct InteractionDefinition_eventOnInteractionEnterStart_Parms \
	{ \
		ADBDPlayer* player; \
		float actualSnapTime; \
	}; \
	struct InteractionDefinition_eventOnInteractionEnterTick_Parms \
	{ \
		ADBDPlayer* player; \
		float deltaTime; \
	}; \
	struct InteractionDefinition_eventOnInteractionExitEnd_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct InteractionDefinition_eventOnInteractionExitStart_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct InteractionDefinition_eventOnInteractionExitTick_Parms \
	{ \
		ADBDPlayer* player; \
		float deltaTime; \
	}; \
	struct InteractionDefinition_eventOnInteractionFinished_Parms \
	{ \
		ADBDPlayer* player; \
		bool hasInteractionStarted; \
	}; \
	struct InteractionDefinition_eventOnInteractionInit_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct InteractionDefinition_eventOnInteractionInterruptEnd_Parms \
	{ \
		ADBDPlayer* player; \
		UInterruptionDefinition* currentInterruption; \
		ADBDPlayer* interruptingPlayer; \
	}; \
	struct InteractionDefinition_eventOnInteractionInterruptStart_Parms \
	{ \
		ADBDPlayer* player; \
		UInterruptionDefinition* currentInterruption; \
		ADBDPlayer* interruptingPlayer; \
	}; \
	struct InteractionDefinition_eventOnInteractionInterruptStarted_Parms \
	{ \
		ADBDPlayer* player; \
		UInterruptionDefinition* currentInterruption; \
		ADBDPlayer* interruptingPlayer; \
	}; \
	struct InteractionDefinition_eventOnInteractionUpdateEnd_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct InteractionDefinition_eventOnInteractionUpdateMontageReachedMiddle_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct InteractionDefinition_eventOnInteractionUpdateStart_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct InteractionDefinition_eventOnInteractionUpdateTick_Parms \
	{ \
		ADBDPlayer* player; \
		float deltaTime; \
	}; \
	struct InteractionDefinition_eventOnInterruptorUpdateStart_Parms \
	{ \
		UInterruptionDefinition* currentInterruption; \
		ADBDPlayer* interruptor; \
		ADBDPlayer* interruptee; \
	}; \
	struct InteractionDefinition_eventOnUpdateMontageStart_Parms \
	{ \
		ADBDPlayer* player; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionDefinition(); \
	friend struct Z_Construct_UClass_UInteractionDefinition_Statics; \
public: \
	DECLARE_CLASS(UInteractionDefinition, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UInteractionDefinition) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractionDefinition*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionDefinition(); \
	friend struct Z_Construct_UClass_UInteractionDefinition_Statics; \
public: \
	DECLARE_CLASS(UInteractionDefinition, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UInteractionDefinition) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractionDefinition*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionDefinition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionDefinition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionDefinition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionDefinition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionDefinition(UInteractionDefinition&&); \
	NO_API UInteractionDefinition(const UInteractionDefinition&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionDefinition(UInteractionDefinition&&); \
	NO_API UInteractionDefinition(const UInteractionDefinition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionDefinition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionDefinition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionDefinition)


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NavigationSpeedCurveEnter() { return STRUCT_OFFSET(UInteractionDefinition, NavigationSpeedCurveEnter); } \
	FORCEINLINE static uint32 __PPO__NavigationSpeedCurve() { return STRUCT_OFFSET(UInteractionDefinition, NavigationSpeedCurve); } \
	FORCEINLINE static uint32 __PPO__NavigationSpeedCurveExit() { return STRUCT_OFFSET(UInteractionDefinition, NavigationSpeedCurveExit); } \
	FORCEINLINE static uint32 __PPO__InteractionAtlantaInputType() { return STRUCT_OFFSET(UInteractionDefinition, InteractionAtlantaInputType); } \
	FORCEINLINE static uint32 __PPO__AtlantaStopInteractionOnInputRelease() { return STRUCT_OFFSET(UInteractionDefinition, AtlantaStopInteractionOnInputRelease); } \
	FORCEINLINE static uint32 __PPO___shouldCheckInteractedUpon() { return STRUCT_OFFSET(UInteractionDefinition, _shouldCheckInteractedUpon); } \
	FORCEINLINE static uint32 __PPO__OwnershipUsability() { return STRUCT_OFFSET(UInteractionDefinition, OwnershipUsability); } \
	FORCEINLINE static uint32 __PPO__ExitInteractionTime() { return STRUCT_OFFSET(UInteractionDefinition, ExitInteractionTime); } \
	FORCEINLINE static uint32 __PPO__ApplyModifiersToExitTime() { return STRUCT_OFFSET(UInteractionDefinition, ApplyModifiersToExitTime); } \
	FORCEINLINE static uint32 __PPO__InteractionDescriptionText() { return STRUCT_OFFSET(UInteractionDefinition, InteractionDescriptionText); } \
	FORCEINLINE static uint32 __PPO__AtlantaLastButtonPressed() { return STRUCT_OFFSET(UInteractionDefinition, AtlantaLastButtonPressed); } \
	FORCEINLINE static uint32 __PPO__InteractionHeightDeltaMax() { return STRUCT_OFFSET(UInteractionDefinition, InteractionHeightDeltaMax); } \
	FORCEINLINE static uint32 __PPO__MaximumVelocity() { return STRUCT_OFFSET(UInteractionDefinition, MaximumVelocity); } \
	FORCEINLINE static uint32 __PPO__EnterMontage() { return STRUCT_OFFSET(UInteractionDefinition, EnterMontage); } \
	FORCEINLINE static uint32 __PPO__UpdateMontage() { return STRUCT_OFFSET(UInteractionDefinition, UpdateMontage); } \
	FORCEINLINE static uint32 __PPO__ExitMontage() { return STRUCT_OFFSET(UInteractionDefinition, ExitMontage); } \
	FORCEINLINE static uint32 __PPO__SnapSocketName() { return STRUCT_OFFSET(UInteractionDefinition, SnapSocketName); } \
	FORCEINLINE static uint32 __PPO___canBeAttachedToAnyZone() { return STRUCT_OFFSET(UInteractionDefinition, _canBeAttachedToAnyZone); } \
	FORCEINLINE static uint32 __PPO__CancelButtonType() { return STRUCT_OFFSET(UInteractionDefinition, CancelButtonType); } \
	FORCEINLINE static uint32 __PPO__SecondaryActionButtonType() { return STRUCT_OFFSET(UInteractionDefinition, SecondaryActionButtonType); } \
	FORCEINLINE static uint32 __PPO__SecondaryAttackButtonType() { return STRUCT_OFFSET(UInteractionDefinition, SecondaryAttackButtonType); } \
	FORCEINLINE static uint32 __PPO___isInterruptibleBySacrifice() { return STRUCT_OFFSET(UInteractionDefinition, _isInterruptibleBySacrifice); } \
	FORCEINLINE static uint32 __PPO__IgnoreStun() { return STRUCT_OFFSET(UInteractionDefinition, IgnoreStun); } \
	FORCEINLINE static uint32 __PPO___tags() { return STRUCT_OFFSET(UInteractionDefinition, _tags); } \
	FORCEINLINE static uint32 __PPO___objectStateTag() { return STRUCT_OFFSET(UInteractionDefinition, _objectStateTag); } \
	FORCEINLINE static uint32 __PPO___secondaryInteractions() { return STRUCT_OFFSET(UInteractionDefinition, _secondaryInteractions); } \
	FORCEINLINE static uint32 __PPO___useHoldPrompt() { return STRUCT_OFFSET(UInteractionDefinition, _useHoldPrompt); } \
	FORCEINLINE static uint32 __PPO___allowInteractionInNarrowSpaces() { return STRUCT_OFFSET(UInteractionDefinition, _allowInteractionInNarrowSpaces); } \
	FORCEINLINE static uint32 __PPO___allowIKSensorDuringInteraction() { return STRUCT_OFFSET(UInteractionDefinition, _allowIKSensorDuringInteraction); } \
	FORCEINLINE static uint32 __PPO___startUpdateMontageDuringEnter() { return STRUCT_OFFSET(UInteractionDefinition, _startUpdateMontageDuringEnter); } \
	FORCEINLINE static uint32 __PPO___interactor() { return STRUCT_OFFSET(UInteractionDefinition, _interactor); } \
	FORCEINLINE static uint32 __PPO___mutuallyExclusiveInteractionsClient() { return STRUCT_OFFSET(UInteractionDefinition, _mutuallyExclusiveInteractionsClient); } \
	FORCEINLINE static uint32 __PPO___activationDefinition() { return STRUCT_OFFSET(UInteractionDefinition, _activationDefinition); } \
	FORCEINLINE static uint32 __PPO___zone() { return STRUCT_OFFSET(UInteractionDefinition, _zone); } \
	FORCEINLINE static uint32 __PPO___cancelInputType() { return STRUCT_OFFSET(UInteractionDefinition, _cancelInputType); } \
	FORCEINLINE static uint32 __PPO___preventingTags() { return STRUCT_OFFSET(UInteractionDefinition, _preventingTags); } \
	FORCEINLINE static uint32 __PPO___disablingTags() { return STRUCT_OFFSET(UInteractionDefinition, _disablingTags); } \
	FORCEINLINE static uint32 __PPO___evaluatingInteractionHandlers() { return STRUCT_OFFSET(UInteractionDefinition, _evaluatingInteractionHandlers); } \
	FORCEINLINE static uint32 __PPO__DEPRECATED_SecondaryInteractionProperties() { return STRUCT_OFFSET(UInteractionDefinition, DEPRECATED_SecondaryInteractionProperties); }


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_38_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UInteractionDefinition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_InteractionDefinition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
