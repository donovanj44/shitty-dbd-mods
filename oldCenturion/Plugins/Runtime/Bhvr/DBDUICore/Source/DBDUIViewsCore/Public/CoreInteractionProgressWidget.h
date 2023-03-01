#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "InteractionProgressViewInterface.h"
#include "TutorialHighlightViewInterface.h"
#include "StatusEffectViewData.h"
#include "CoreInteractionProgressWidget.generated.h"

class UCoreStatusEffectIcon;

UCLASS(EditInlineNew)
class UCoreInteractionProgressWidget : public UCoreBaseHudWidget, public IInteractionProgressViewInterface, public ITutorialHighlightViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    TArray<UCoreStatusEffectIcon*> Proficiencies;
    
    UFUNCTION(BlueprintCallable)
    void SetProficiencies(const TArray<FStatusEffectViewData>& proficiencyDatas);
    
public:
    UCoreInteractionProgressWidget();
};

