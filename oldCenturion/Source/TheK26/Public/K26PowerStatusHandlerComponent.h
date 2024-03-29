#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "K26SurvivorStatus.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "K26PowerStatusHandlerComponent.generated.h"

class UInteractionDefinition;
class AActor;
class ACamperPlayer;
class ASlasherPlayer;

UCLASS(Blueprintable, EditInlineNew)
class UK26PowerStatusHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UInteractionDefinition>> _interactionsDuringWhichTheCrowIsIgnored;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _invincibilityTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _killerInstinctDelay;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _killerInstinctGracePeriod;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> _statusIndicatorClass;
    
    UPROPERTY(EditDefaultsOnly)
    FName _k26KillerInstinctStatusEffectName;
    
    UPROPERTY(Replicated)
    TArray<FK26SurvivorStatus> _survivorStatusList;
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnStopRemovingCrow(const ACamperPlayer* survivor);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnStartRemovingCrow(const ACamperPlayer* survivor);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnIdleCrowInterrupt(ACamperPlayer* survivor);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnCrowDetached(const ACamperPlayer* survivor);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnCrowDamagedSurvivor(ASlasherPlayer* killer, ACamperPlayer* survivor);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnCrowAttached(const ACamperPlayer* survivor);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnCrowIdleInterrupt(ACamperPlayer* survivor);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnCrowDamagedSurvivor(ASlasherPlayer* killer, ACamperPlayer* survivor);
    
private:
    UFUNCTION()
    void Authority_OnSurvivorAdded(ACamperPlayer* survivor);
    
    UFUNCTION()
    void Authority_OnKillerInstinctTimePassed(const ACamperPlayer* survivor);
    
    UFUNCTION()
    void Authority_OnIntroCompleted();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UK26PowerStatusHandlerComponent();
};

