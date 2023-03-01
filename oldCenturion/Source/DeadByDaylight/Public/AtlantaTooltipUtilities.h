#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtlantaTooltipUtilities.generated.h"

UCLASS(BlueprintType)
class UAtlantaTooltipUtilities : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool TryCloseActiveTooltip();
    
    UAtlantaTooltipUtilities();
};

