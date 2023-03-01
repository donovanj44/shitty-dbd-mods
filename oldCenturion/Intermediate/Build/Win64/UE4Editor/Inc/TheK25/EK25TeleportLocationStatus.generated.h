// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK25_EK25TeleportLocationStatus_generated_h
#error "EK25TeleportLocationStatus.generated.h already included, missing '#pragma once' in EK25TeleportLocationStatus.h"
#endif
#define THEK25_EK25TeleportLocationStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_EK25TeleportLocationStatus_h


#define FOREACH_ENUM_EK25TELEPORTLOCATIONSTATUS(op) \
	op(EK25TeleportLocationStatus::Invalid) \
	op(EK25TeleportLocationStatus::PassableLocation) \
	op(EK25TeleportLocationStatus::PerfectLocation) 

enum class EK25TeleportLocationStatus : uint8;
template<> THEK25_API UEnum* StaticEnum<EK25TeleportLocationStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
