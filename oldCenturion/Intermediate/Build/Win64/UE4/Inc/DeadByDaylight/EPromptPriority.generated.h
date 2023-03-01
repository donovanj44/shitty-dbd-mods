// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EPromptPriority_generated_h
#error "EPromptPriority.generated.h already included, missing '#pragma once' in EPromptPriority.h"
#endif
#define DEADBYDAYLIGHT_EPromptPriority_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EPromptPriority_h


#define FOREACH_ENUM_EPROMPTPRIORITY(op) \
	op(EPromptPriority::Tutorial) \
	op(EPromptPriority::High) \
	op(EPromptPriority::Medium) \
	op(EPromptPriority::Low) 

enum class EPromptPriority : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EPromptPriority>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
