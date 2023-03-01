#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "ECamperDamageState.h"
#include "ECamperImmobilizeState.h"
#include "Diversion.generated.h"

UCLASS()
class THESPIRIT_API UDiversion : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _diversionActivationTimePerLevel[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _throwPebbleDistance;
    
    UFUNCTION()
    void Authority_OnOwningSurvivorImmobilizedStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState);
    
    UFUNCTION()
    void Authority_OnOwningSurvivorDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);
    
public:
    UDiversion();
};

