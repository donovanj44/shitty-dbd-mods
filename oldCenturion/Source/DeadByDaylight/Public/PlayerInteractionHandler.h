#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractionPerformer.h"
#include "EInteractionLayer.h"
#include "ESkillCheckCustomType.h"
#include "EInputInteractionType.h"
#include "StoredInteraction.h"
#include "ERequestState.h"
#include "EInteractionValidationState.h"
#include "PlayerInteractionHandler.generated.h"

class USkillCheck;
class UInteractionDefinition;
class ADBDPlayer;
class UInterruptionDefinition;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerInteractionHandlerAuthority_SecondaryActionDoneDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPlayerInteractionHandlerOnDeactivateSkillCheckDelegate, bool, HadInput, bool, Success, bool, Bonus, ESkillCheckCustomType, type);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerInteractionHandlerNewInteractionRequestedDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerInteractionHandlerServerValidatedInteractionStartedDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerInteractionHandlerServerValidatedInteractionEndedDelegate);

UCLASS(BlueprintType, EditInlineNew)
class DEADBYDAYLIGHT_API UPlayerInteractionHandler : public UActorComponent, public IInteractionPerformer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PriorityConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BotPriorityConeAngle;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerInteractionHandlerAuthority_SecondaryActionDoneDelegate Authority_SecondaryActionDoneDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerInteractionHandlerNewInteractionRequestedDelegate NewInteractionRequestedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerInteractionHandlerServerValidatedInteractionStartedDelegate ServerValidatedInteractionStartedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerInteractionHandlerServerValidatedInteractionEndedDelegate ServerValidatedInteractionEndedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionLayer InteractionLayer;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerInteractionHandlerOnDeactivateSkillCheckDelegate OnDeactivateSkillCheckDelegate;
    
private:
    UPROPERTY(Transient)
    bool _hasInteractionRequest;
    
    UPROPERTY(Transient)
    bool _hasInteractionRequestInBuffer;
    
    UPROPERTY(Export, Transient)
    UInteractionDefinition* _interactionToSwapTo;
    
    UPROPERTY(Export, Transient)
    UInteractionDefinition* _currentInteraction;
    
    UPROPERTY(Transient)
    TArray<ADBDPlayer*> _currentPlayerDependencies;
    
    UPROPERTY(Transient)
    EInputInteractionType _currentInteractionType;
    
    UPROPERTY(Export, Transient)
    USkillCheck* _skillCheck;
    
    UPROPERTY(Transient)
    TArray<float> _progressBasedSkillChecks;
    
    UPROPERTY(Transient)
    ADBDPlayer* _requestedInterruptionOtherParty;
    
    UPROPERTY(Export, Transient)
    UInterruptionDefinition* _requestedInterruptionDefinition;
    
    UPROPERTY(Transient)
    bool _requestedInterruptionIsInterruptor;
    
    UPROPERTY(Transient)
    ADBDPlayer* _currentInterruptionOtherParty;
    
    UPROPERTY(Export, Transient)
    UInterruptionDefinition* _currentInterruptionDefinition;
    
    UPROPERTY(Transient)
    bool _currentInterruptionIsInterruptor;
    
    UPROPERTY(Transient)
    bool _interactionInProgress;
    
    UPROPERTY(Export, Transient)
    TArray<UInteractionDefinition*> _interactionsInZone;
    
public:
    UFUNCTION(BlueprintCallable)
    void UnPauseSkillCheckTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartCustomSkillCheck(ESkillCheckCustomType type, float warningSoundDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillCheckTimer(float delay);
    
    UFUNCTION(BlueprintCallable)
    void SetScanForInteractionsEnabled(bool enabled);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_StoreInterruption_Interruptor(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetInteractionToSwapTo(UInteractionDefinition* interaction);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RequestInterruption_Interruptor();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_DebugRequestInteraction(const FString& interactionName, const FString& interactorName, const FString& interactableName);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_CancelCurrentInteractionByInput();
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Broadcast_StoreInteraction(FStoredInteraction interactionToStore);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Broadcast_ConfirmChargedCompleted(bool chargeComplete);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_AnswerInterruption_Interruptee(ERequestState state);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetSuccessiveSkillCheckCount();
    
    UFUNCTION(BlueprintCallable)
    void RemoveInteraction(UInteractionDefinition* interaction);
    
    UFUNCTION(BlueprintCallable)
    void PauseSkillCheckTimer();
    
    UFUNCTION(BlueprintPure)
    int32 NumInteractionsInZone() const;
    
private:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_StoreInterruption_Interruptor(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StoreInteraction(FStoredInteraction interactionToStore);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetInteractionToSwapTo(UInteractionDefinition* interaction);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_RequestInterruption_Interruptee(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_InterruptionRequestResult_Interruptor(ERequestState state, bool grantInterruptScore);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_InteractionPredictionValidationResult(UInteractionDefinition* interaction, EInteractionValidationState state);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_CancelCurrentInteractionByInput();
    
    UFUNCTION(BlueprintCallable)
    void IncrementSuccessiveSkillCheckCount();
    
    UFUNCTION(BlueprintCallable)
    bool HasAvailableInteraction(EInputInteractionType interactionType);
    
    UFUNCTION(BlueprintPure)
    bool HasActiveSkillCheck() const;
    
    UFUNCTION(BlueprintPure)
    USkillCheck* GetSkillCheck() const;
    
    UFUNCTION(BlueprintPure)
    float GetMultiplicativeSkillCheckProbabilityModifier() const;
    
    UFUNCTION(BlueprintPure)
    UInteractionDefinition* GetCurrentInteractionOfType(EInputInteractionType interactionInputType) const;
    
    UFUNCTION(BlueprintPure)
    UInteractionDefinition* GetCurrentInteraction() const;
    
    UFUNCTION(BlueprintPure)
    void GetAvailableInteractions(TArray<UInteractionDefinition*>& result) const;
    
    UFUNCTION(BlueprintPure)
    UInteractionDefinition* GetAvailableInteractionByID(const FString& interactionID) const;
    
    UFUNCTION(BlueprintPure)
    UInteractionDefinition* GetAvailableInteraction(EInputInteractionType interactionType) const;
    
    UFUNCTION(BlueprintPure)
    float GetAdditiveSkillCheckProbabilityModifier() const;
    
    UFUNCTION(Client, Reliable)
    void Client_StartCustomSkillCheck(ESkillCheckCustomType type, float warningSoundDelay);
    
    UFUNCTION(Client, Reliable, WithValidation)
    void Client_NotifyChargeCompleted(const UInteractionDefinition* interaction);
    
    UFUNCTION()
    void CleanInteractionArray(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintPure)
    bool CanPerformInteraction(const FString& interactionName) const;
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Broadcast_Multicast_ConfirmChargedCompleted(bool chargeComplete);
    
    UFUNCTION(BlueprintCallable)
    void Authority_ClearPlayerDependency(ADBDPlayer* playerDependency);
    
    UFUNCTION(BlueprintCallable)
    void Authority_ClearPlayerDependencies();
    
    UFUNCTION(BlueprintCallable)
    void AddSelfInteractions(const AActor* interactionRoot);
    
    UFUNCTION(BlueprintCallable)
    void AddInteraction(UInteractionDefinition* interaction);
    
    UPlayerInteractionHandler();
};

