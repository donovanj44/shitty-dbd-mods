#pragma once
#include "CoreMinimal.h"
#include "DBDBasePlayer.h"
#include "K25Husk.generated.h"

class UCustomizedSkeletalMesh;
class UAnimationMontageSlave;
class UMontagePlayer;

UCLASS()
class AK25Husk : public ADBDBasePlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCustomizedSkeletalMesh* _customizedSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAnimationMontageSlave* _montageFollower;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UMontagePlayer* _montagePlayer;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _k25CharacterOverrideID;
    
public:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_StartDisappearing();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_StartAppearing();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_HideHusk();
    
    AK25Husk();
};

