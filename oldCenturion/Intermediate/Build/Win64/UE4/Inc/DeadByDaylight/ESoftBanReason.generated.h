// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ESoftBanReason_generated_h
#error "ESoftBanReason.generated.h already included, missing '#pragma once' in ESoftBanReason.h"
#endif
#define DEADBYDAYLIGHT_ESoftBanReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ESoftBanReason_h


#define FOREACH_ENUM_ESOFTBANREASON(op) \
	op(ESoftBanReason::Invalid) \
	op(ESoftBanReason::Harassment) \
	op(ESoftBanReason::Griefing) \
	op(ESoftBanReason::Exploits) \
	op(ESoftBanReason::Unsportsmanlike) \
	op(ESoftBanReason::Count) 

enum class ESoftBanReason;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ESoftBanReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
