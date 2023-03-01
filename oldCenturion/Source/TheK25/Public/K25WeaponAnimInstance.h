#pragma once
#include "CoreMinimal.h"
#include "BaseKillerWeaponAnimInstance.h"
#include "EAttackType.h"
#include "K25WeaponAnimInstance.generated.h"

UCLASS(NonTransient)
class THEK25_API UK25WeaponAnimInstance : public UBaseKillerWeaponAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _hasDownedTargetHoldingLamentConfiguration;
    
    UFUNCTION()
    void OnAttackStart(const EAttackType attackType);
    
public:
    UK25WeaponAnimInstance();
};

