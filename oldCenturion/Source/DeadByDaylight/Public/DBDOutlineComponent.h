#pragma once
#include "CoreMinimal.h"
#include "DBDOutlineRenderStrategySelector.h"
#include "BatchMeshCommands.h"
#include "UObject/NoExportTypes.h"
#include "DBDOutlineComponent.generated.h"

class UBaseOutlineRenderStrategy;
class UMaterialInterface;
class UTexture;

UCLASS()
class DEADBYDAYLIGHT_API UDBDOutlineComponent : public UBatchMeshCommands {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float InterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool ShouldBeAboveOutlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool ForceOutlineFarAway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool LimitToCustomDepthObjects;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    bool FadeOutAsClosingIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool IsAlwaysVisible;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float MinimumOutlineDistance;
    
protected:
    UPROPERTY(EditAnywhere)
    FString OutlineName;
    
private:
    UPROPERTY(Transient)
    FDBDOutlineRenderStrategySelector _renderStrategySelector;
    
    UPROPERTY(Export, Transient)
    UBatchMeshCommands* _batchMeshCommands;
    
    UPROPERTY(Transient)
    UBaseOutlineRenderStrategy* _renderingStrategy;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetTargetColor(FLinearColor color);
    
    UFUNCTION(BlueprintCallable)
    void SetOutlineIntensity(float outlineIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimumOutlineDistance(float distance);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialCopyTarget(UMaterialInterface* inMaterialToCopy);
    
    UFUNCTION(BlueprintCallable)
    void SetIsOccludingOutlines(const bool isOccluding);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetFadeTexture(UTexture* inFadeTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetFadeIntensity(float fadeIntensity);
    
    UFUNCTION(BlueprintCallable)
    void ResetToTransparent();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RefreshOutlineComponent();
    
private:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
    UFUNCTION()
    void InitBatcher();
    
public:
    UDBDOutlineComponent();
};

