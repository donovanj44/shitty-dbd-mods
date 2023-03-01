#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "PlaceDreamPalletInteraction.generated.h"

class APalletTracker;
class ASlasherPlayer;

UCLASS(EditInlineNew)
class UPlaceDreamPalletInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    TArray<APalletTracker*> _palletTrackers;
    
private:
    UPROPERTY(Transient)
    APalletTracker* _closestTracker;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void SpawnDreamPallet(APalletTracker* trackerAtLocation);
    
private:
    UFUNCTION()
    void InitializeTunableValues(ASlasherPlayer* killer);
    
public:
    UFUNCTION(BlueprintPure)
    APalletTracker* GetTargetedPallet() const;
    
    UFUNCTION(BlueprintPure)
    bool CanSpawnDreamPalletAtTracker(APalletTracker* tracker) const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPlaceDreamPalletInteraction();
};

