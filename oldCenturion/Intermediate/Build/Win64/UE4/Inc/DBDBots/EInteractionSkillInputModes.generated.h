// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_EInteractionSkillInputModes_generated_h
#error "EInteractionSkillInputModes.generated.h already included, missing '#pragma once' in EInteractionSkillInputModes.h"
#endif
#define DBDBOTS_EInteractionSkillInputModes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_EInteractionSkillInputModes_h


#define FOREACH_ENUM_EINTERACTIONSKILLINPUTMODES(op) \
	op(EInteractionSkillInputModes::Once) \
	op(EInteractionSkillInputModes::Hold) \
	op(EInteractionSkillInputModes::Toggle) \
	op(EInteractionSkillInputModes::ToggleHold) \
	op(EInteractionSkillInputModes::OneClickHold) 

enum class EInteractionSkillInputModes : uint8;
template<> DBDBOTS_API UEnum* StaticEnum<EInteractionSkillInputModes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
