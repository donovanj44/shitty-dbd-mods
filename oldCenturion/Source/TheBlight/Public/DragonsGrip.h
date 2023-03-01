#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "DBDTunableRowHandle.h"
#include "DragonsGrip.generated.h"

class ADBDPlayer;
class AGenerator;

UCLASS()
class UDragonsGrip : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AGenerator* _kickedGenerator;
    
    UPROPERTY(EditDefaultsOnly)
    float _activationDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _cooldownDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _exposedEffectDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    bool _onlyExposeFirstSurvivor;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _loudNoiseRange;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRevealSurvivor(ADBDPlayer* instigator);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnRevealSurvivor(ADBDPlayer* survivor);
    
public:
    UDragonsGrip();
};

