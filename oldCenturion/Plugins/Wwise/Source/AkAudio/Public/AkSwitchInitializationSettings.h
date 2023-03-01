#pragma once
#include "CoreMinimal.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "UObject/Object.h"
#include "AkCommunicationSettingsWithCommSelection.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkSwitchInitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkSwitchInitializationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithCommSelection CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;
    
    UFUNCTION()
    void MigrateMultiCoreRendering(bool NewValue);
    
    UAkSwitchInitializationSettings();
};

