#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "UObject/Object.h"
#include "ExternalTexture.h"
#include "GFxHitTestType.h"
#include "EGFxRenderTextureMode.h"
#include "GFxWidgetBinding.h"
#include "EGFxScaleMode.h"
#include "UObject/NoExportTypes.h"
#include "ASValue.h"
#include "EGFxTimingMode.h"
#include "ASPerspectiveTransform.h"
#include "ASDisplayInfo.h"
#include "ASColorTransform.h"
#include "EGFxAlign.h"
#include "GFxMoviePlayer.generated.h"

class UGFxObject;
class UTextureRenderTarget2D;
class UTexture;
class UGFxMoviePlayer;
class USwfMovie;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGFxMoviePlayerOnTickCommand, float, DeltaTime);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGFxMoviePlayerOnFsCommand, const FString&, Cmd, const FString&, Arg);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGFxMoviePlayerOnFocusLostCommand, int32, LocalPlayerIndex);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGFxMoviePlayerOnStartCommand);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGFxMoviePlayerOnCloseCommand);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGFxMoviePlayerOnFocusGainedCommand, int32, LocalPlayerIndex);

UCLASS(BlueprintType)
class SCALEFORMUI_API UGFxMoviePlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString SwfAssetName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UGFxObject* Root;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisplayWithHudOff: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableGammaCorrection: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bAllowInput: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bAllowFocus: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCloseOnLevelChange: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOnlyOwnerFocusable: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDiscardNonOwnerInput: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCaptureKeyboardInput: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCaptureMouseInput: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCaptureGamepadInput: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCaptureTouchInput: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIsSplitscreenLayoutModified: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShowDefaultMouseCursor: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bBlurLesserMovies: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHideLesserMovies: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIsPriorityBlurred: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIsPriorityHidden: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreVisibilityEffect: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreBlurEffect: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRefreshed: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bPerformHitTest: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<GFxHitTestType::Type> HitTestType;
    
    UPROPERTY(Transient)
    UTextureRenderTarget2D* RenderTexture;
    
    UPROPERTY(Transient)
    UObject* ExternalInterface;
    
    UPROPERTY(EditAnywhere)
    TArray<FKey> CaptureKeys;
    
    UPROPERTY(EditAnywhere)
    TArray<FKey> FocusIgnoreKeys;
    
    UPROPERTY()
    TArray<FExternalTexture> ExternalTextures;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EGFxRenderTextureMode::Type> RenderTextureMode;
    
    UPROPERTY(EditAnywhere)
    uint8 Priority;
    
    UPROPERTY()
    TArray<FGFxWidgetBinding> WidgetBindings;
    
    UPROPERTY()
    int32 SplitscreenLayoutYAdjust;
    
    UPROPERTY(BlueprintAssignable)
    FGFxMoviePlayerOnFsCommand OnFsCommand;
    
    UPROPERTY(BlueprintAssignable)
    FGFxMoviePlayerOnStartCommand OnStartCommand;
    
    UPROPERTY(BlueprintAssignable)
    FGFxMoviePlayerOnCloseCommand OnCloseCommand;
    
    UPROPERTY(BlueprintAssignable)
    FGFxMoviePlayerOnTickCommand OnTickCommand;
    
    UPROPERTY(BlueprintAssignable)
    FGFxMoviePlayerOnFocusGainedCommand OnFocusGainedCommand;
    
    UPROPERTY(BlueprintAssignable)
    FGFxMoviePlayerOnFocusLostCommand OnFocusLostCommand;
    
private:
    UPROPERTY()
    TArray<UGFxObject*> CachedMovieClipsArray;
    
public:
    UFUNCTION()
    bool Start(bool bRefresh);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibility(const FString& MovieClipName, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetViewScaleMode(TEnumAsByte<EGFxScaleMode::Type> ScaleMode);
    
    UFUNCTION(BlueprintCallable)
    void SetViewport(int32 X, int32 Y, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    void SetView3D(const FTransform& ViewTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableValueArray(const FString& MovieClipName, const FString& MemberName, const TArray<FASValue>& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableValue(const FString& MovieClipName, const FString& MemberName, const FASValue& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTimingMode(TEnumAsByte<EGFxTimingMode::Type> TimingMode);
    
    UFUNCTION(BlueprintCallable)
    void SetScale(const FString& MovieClipName, float XScale, float YScale);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(const FString& MovieClipName, float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void SetPerspective3D(const FASPerspectiveTransform& PerspectiveTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetPause(bool bPausePlayback);
    
    UFUNCTION(BlueprintCallable)
    void SetMovieCanReceiveInput(bool bCanReceiveInput);
    
    UFUNCTION(BlueprintCallable)
    void SetMovieCanReceiveFocus(bool bCanReceiveFocus);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusIgnoreKeys(const TArray<FKey>& Keys);
    
    UFUNCTION(BlueprintCallable)
    bool SetExternalTexture(const FString& Resource, UTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayTransform(const FString& MovieClipName, const FTransform& DisplayTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayInfo(const FString& MovieClipName, const FASDisplayInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void SetColorTransform(const FString& MovieClipName, const FASColorTransform& UnrealColorTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetCaptureKeys(const TArray<FKey>& Keys);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignment(TEnumAsByte<EGFxAlign::Type> Align);
    
    UFUNCTION()
    void ReceiveGFxCommand(const FString& Command, const FString& Arguments);
    
    UFUNCTION(BlueprintCallable)
    static UGFxMoviePlayer* OpenMovie(USwfMovie* SwfMovie, UObject* ExternalScriptInterface, UTextureRenderTarget2D* RenderToTexture, UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused);
    
    UFUNCTION()
    void OnTick(float DeltaTime);
    
    UFUNCTION()
    void OnStart();
    
    UFUNCTION()
    void OnFocusLost(int32 LocalPlayerIndex);
    
    UFUNCTION()
    void OnFocusGained(int32 LocalPlayerIndex);
    
    UFUNCTION()
    void OnClose();
    
    UFUNCTION()
    bool LoadAndStart(const FString& InSwfAssetName, bool bRefresh);
    
    UFUNCTION(BlueprintCallable)
    FASValue Invoke(const FString& MovieClipName, const FString& FunctionName, const TArray<FASValue>& Params);
    
    UFUNCTION(BlueprintCallable)
    void GotoAndStopI(const FString& MovieClipName, int32 Frame);
    
    UFUNCTION(BlueprintCallable)
    void GotoAndStop(const FString& MovieClipName, const FString& Frame);
    
    UFUNCTION(BlueprintCallable)
    void GotoAndPlayI(const FString& MovieClipName, int32 Frame);
    
    UFUNCTION(BlueprintCallable)
    void GotoAndPlay(const FString& MovieClipName, const FString& Frame);
    
    UFUNCTION(BlueprintCallable)
    bool GetVisibility(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetView3D();
    
    UFUNCTION(BlueprintCallable)
    TArray<FASValue> GetVariableValueArray(const FString& MovieClipName, const FString& MemberName);
    
    UFUNCTION(BlueprintCallable)
    FASValue GetVariableValue(const FString& MovieClipName, const FString& MemberName);
    
    UFUNCTION(BlueprintCallable)
    bool GetScale(const FString& MovieClipName, float& XScale, float& YScale);
    
    UFUNCTION(BlueprintCallable)
    bool GetPosition(const FString& MovieClipName, float& X, float& Y);
    
    UFUNCTION(BlueprintCallable)
    FASPerspectiveTransform GetPerspective3D();
    
    UFUNCTION(BlueprintCallable)
    UGFxObject* GetMovieClip(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetDisplayTransform(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable)
    FASDisplayInfo GetDisplayInfo(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable)
    FASColorTransform GetColorTransform(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable)
    void Close(bool Unload);
    
    UGFxMoviePlayer();
};

