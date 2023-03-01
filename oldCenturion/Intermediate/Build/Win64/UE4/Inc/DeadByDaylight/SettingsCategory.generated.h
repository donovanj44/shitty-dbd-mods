// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_SettingsCategory_generated_h
#error "SettingsCategory.generated.h already included, missing '#pragma once' in SettingsCategory.h"
#endif
#define DEADBYDAYLIGHT_SettingsCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_SettingsCategory_h


#define FOREACH_ENUM_SETTINGSCATEGORY(op) \
	op(SettingsCategory::None) \
	op(SettingsCategory::General) \
	op(SettingsCategory::Graphics) \
	op(SettingsCategory::Audio) \
	op(SettingsCategory::Controls) \
	op(SettingsCategory::Atlanta) 

enum class SettingsCategory;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<SettingsCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
