#pragma once
#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "MeatHookOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UMeatHookOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor HookedOutlineColorSlasher;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FLinearColor CarryingOutlineColorSlasher;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor DefaultOutlineColorSlasher;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor VisibleOutlineColorCamper;
    
    UFUNCTION()
    void Local_AddBasementOfferingReveal();
    
    UFUNCTION()
    void Authority_AddBasementHookToPlayerMapItem();
    
public:
    UMeatHookOutlineUpdateStrategy();
};

