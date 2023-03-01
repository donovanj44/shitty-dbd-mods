// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EFrenzyEndReason_generated_h
#error "EFrenzyEndReason.generated.h already included, missing '#pragma once' in EFrenzyEndReason.h"
#endif
#define DEADBYDAYLIGHT_EFrenzyEndReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EFrenzyEndReason_h


#define FOREACH_ENUM_EFRENZYENDREASON(op) \
	op(EFrenzyEndReason::OutOfTime) \
	op(EFrenzyEndReason::Manual) \
	op(EFrenzyEndReason::PickUpCamper) \
	op(EFrenzyEndReason::Stunned) \
	op(EFrenzyEndReason::Mori) \
	op(EFrenzyEndReason::Blinded) 

enum class EFrenzyEndReason : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EFrenzyEndReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
