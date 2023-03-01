#pragma once
#include "CoreMinimal.h"
#include "CharacterSlotData.h"
#include "UMGGridPageScrollWidget.h"
#include "UMGCharacterPageScrollWidget.generated.h"

class UUMGCharacterButton;

UCLASS(EditInlineNew)
class UUMGCharacterPageScrollWidget : public UUMGGridPageScrollWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear)
    TSoftClassPtr<UUMGCharacterButton> _characterButtonWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FCharacterSlotData> _charactersData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isKiller;
    
    UPROPERTY(BlueprintReadOnly)
    FText _charactersTitleText;
    
    UPROPERTY(BlueprintReadOnly)
    FText _killersTitleText;
    
    UPROPERTY(BlueprintReadOnly)
    FText _survivorsTitleText;
    
    UFUNCTION()
    void HandleCharacterClicked(int32 characterIndex);
    
public:
    UUMGCharacterPageScrollWidget();
};

