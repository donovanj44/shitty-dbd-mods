#pragma once
#include "CoreMinimal.h"
#include "TunableStat.h"
#include "KillerProjectileLauncher.h"
#include "DBDTunableRowHandle.h"
#include "KnivesLauncher.generated.h"

class AThrowingKnives;

UCLASS(EditInlineNew)
class UKnivesLauncher : public UKillerProjectileLauncher {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _knifeSpawnOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _knifeSpawnForwardOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _launchSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _maxAmmoTunable;
    
    UPROPERTY(Replicated)
    bool _isInSuperModeThrow;
    
public:
    UFUNCTION(BlueprintPure)
    AThrowingKnives* GetPower() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLocallyPredictedAmmo() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UKnivesLauncher();
};

