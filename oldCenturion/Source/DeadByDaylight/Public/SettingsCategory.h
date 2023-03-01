#pragma once
#include "CoreMinimal.h"
#include "SettingsCategory.generated.h"

UENUM()
enum class SettingsCategory {
    None = -0x1,
    General,
    Graphics,
    Audio,
    Controls,
    Atlanta,
};

