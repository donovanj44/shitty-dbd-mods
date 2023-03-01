#pragma once
#include "CoreMinimal.h"
#include "UMGCharacterPrestigeIcon.h"
#include "EPlayerRole.h"
#include "UMGCharacterPrestigeButton.generated.h"

class UButton;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGCharacterPrestigeButton : public UUMGCharacterPrestigeIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* PrestigeButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* PrestigeAnimationCanvas;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCharacterPrestigeData(bool canPrestige, const int32 prestigeLevel, const EPlayerRole role);
    
protected:
    UFUNCTION()
    void OnPrestigeButtonClicked();
    
public:
    UUMGCharacterPrestigeButton();
};

