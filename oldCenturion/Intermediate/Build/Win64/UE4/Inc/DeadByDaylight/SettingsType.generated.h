// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_SettingsType_generated_h
#error "SettingsType.generated.h already included, missing '#pragma once' in SettingsType.h"
#endif
#define DEADBYDAYLIGHT_SettingsType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_SettingsType_h


#define FOREACH_ENUM_SETTINGSTYPE(op) \
	op(SettingsType::None) \
	op(SettingsType::Button) \
	op(SettingsType::PlayerId) \
	op(SettingsType::NumericStepper) \
	op(SettingsType::Dropdown) \
	op(SettingsType::ColorBar) \
	op(SettingsType::TextStepper) \
	op(SettingsType::BoolTextStepper) \
	op(SettingsType::Checkbox) 

enum class SettingsType;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<SettingsType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
