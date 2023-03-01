// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EPromptType_generated_h
#error "EPromptType.generated.h already included, missing '#pragma once' in EPromptType.h"
#endif
#define DEADBYDAYLIGHT_EPromptType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EPromptType_h


#define FOREACH_ENUM_EPROMPTTYPE(op) \
	op(EPromptType::None) \
	op(EPromptType::ExitsPowered) \
	op(EPromptType::HatchSpawned) \
	op(EPromptType::HatchOpened) 

enum class EPromptType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EPromptType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
