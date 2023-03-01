#pragma once
#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Addon_TheBlight_17.generated.h"

class ACamperPlayer;

UCLASS()
class UAddon_TheBlight_17 : public UOnEventBaseAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _survivorInRangeDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float _hinderedSeconds;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SpawnParticleOnSurvivor(const ACamperPlayer* camperPlayer);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SpawnParticleOnSurvivors(const TArray<ACamperPlayer*>& survivors);
    
public:
    UAddon_TheBlight_17();
};

