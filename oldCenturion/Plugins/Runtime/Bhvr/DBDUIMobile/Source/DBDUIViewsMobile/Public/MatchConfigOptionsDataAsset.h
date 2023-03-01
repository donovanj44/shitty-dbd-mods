#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECustomMatchOptions.h"
#include "MatchOptionAssetData.h"
#include "MatchConfigOptionsDataAsset.generated.h"

UCLASS()
class UMatchConfigOptionsDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<ECustomMatchOptions, FMatchOptionAssetData> OptionsData;
    
    UMatchConfigOptionsDataAsset();
};

