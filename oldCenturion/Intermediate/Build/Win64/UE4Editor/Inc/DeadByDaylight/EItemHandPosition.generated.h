// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EItemHandPosition_generated_h
#error "EItemHandPosition.generated.h already included, missing '#pragma once' in EItemHandPosition.h"
#endif
#define DEADBYDAYLIGHT_EItemHandPosition_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EItemHandPosition_h


#define FOREACH_ENUM_EITEMHANDPOSITION(op) \
	op(EItemHandPosition::None) \
	op(EItemHandPosition::HandleItem) \
	op(EItemHandPosition::AimItem) \
	op(EItemHandPosition::SmallItem) \
	op(EItemHandPosition::FirecrackerItem) \
	op(EItemHandPosition::VaccineItem) 

enum class EItemHandPosition : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EItemHandPosition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
