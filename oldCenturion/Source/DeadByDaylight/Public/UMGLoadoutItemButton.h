#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "EInventoryButtonState.h"
#include "InventorySlotData.h"
#include "Components/SlateWrapperTypes.h"
#include "Styling/SlateBrush.h"
#include "EItemRarity.h"
#include "EStatusEffectType.h"
#include "UMGLoadoutItemButton.generated.h"

class UButton;
class UTextBlock;
class UImage;
class UCanvasPanel;
class UVerticalBox;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGLoadoutItemButtonOnDisabledItemButtonClicked, FName, itemID);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGLoadoutItemButtonOnLoadoutItemButtonClicked, FName, itemID);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUMGLoadoutItemButtonOnLoadoutItemButtonLongPress, const FInventorySlotData&, itemSlotData, FVector2D, position);

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLoadoutItemButton : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUMGLoadoutItemButtonOnLoadoutItemButtonClicked OnLoadoutItemButtonClicked;
    
    UPROPERTY(BlueprintAssignable)
    FUMGLoadoutItemButtonOnDisabledItemButtonClicked OnDisabledItemButtonClicked;
    
    UPROPERTY(BlueprintAssignable)
    FUMGLoadoutItemButtonOnLoadoutItemButtonLongPress OnLoadoutItemButtonLongPress;
    
    UPROPERTY(BlueprintReadWrite)
    bool HideStackCount;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TextStackCount;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* EmptyCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* EmptyButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* LockedButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ActionCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ImageRarityBG;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ImageGradient;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ImagePaint;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ImageEventBorder;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ImagePaintTop;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ImagePaintBottom;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility EmptyCanvasVisibility;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility ActionCanvasVisibility;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility PrivateCanvasVisibility;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility LockIconVisibility;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility EmptyIconVisibility;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility SpecialEventVisiblity;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    ESlateVisibility LoadoutSelectedVisibility;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    ESlateVisibility LoadoutLockVisibility;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ImageIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ImageShadow;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* ActionButton;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush EmptyBGAsset;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush DisableBGAsset;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FInventorySlotData LoadoutItemData;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool _triggerClickEventForLoadoutWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* CanvasUnlock;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TextUnlockLevel;
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateWidgetByState(EInventoryButtonState state);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateWidgetByDataBP(const FInventorySlotData& slotData);
    
    UFUNCTION(BlueprintCallable)
    void UpdateWidgetByData(const FInventorySlotData& slotData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateUnlockable(const FString& nameToDisplay, int32 unlockableLevel);
    
    UFUNCTION(BlueprintCallable)
    void UpdateStackCount(int32 stackCount);
    
    UFUNCTION(BlueprintCallable)
    void UpdateImageColor(EItemRarity rarity, EStatusEffectType effectType);
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowClickableOutline(bool clickable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(bool isSelected);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetIconImageByPath(const FString& iconPath);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLockedButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializationForLoadoutWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializationForCharacterInfoWidget();
    
    UFUNCTION(BlueprintCallable)
    FName GetLoadoutItemID();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastLongPressEvent(FName itemID);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastClickedEvent(FName itemID);
    
    UUMGLoadoutItemButton();
};

