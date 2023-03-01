#pragma once
#include "CoreMinimal.h"
#include "PurchaseCurrencyData.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UMGCharacterPrice.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGCharacterPrice : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* PriceTextBlock;
    
    UPROPERTY(BlueprintReadOnly)
    FColor AffordableColor;
    
    UPROPERTY(BlueprintReadOnly)
    FColor UnaffordableColor;
    
public:
    UFUNCTION()
    void SetCurrencyData(const FPurchaseCurrencyData& currencyData);
    
    UUMGCharacterPrice();
};

