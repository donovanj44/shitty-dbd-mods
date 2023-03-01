// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ESaveGameErrorCategory_generated_h
#error "ESaveGameErrorCategory.generated.h already included, missing '#pragma once' in ESaveGameErrorCategory.h"
#endif
#define DEADBYDAYLIGHT_ESaveGameErrorCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ESaveGameErrorCategory_h


#define FOREACH_ENUM_ESAVEGAMEERRORCATEGORY(op) \
	op(ESaveGameErrorCategory::EvaluateDisconnectPenalty) \
	op(ESaveGameErrorCategory::SaveGameSaveError) \
	op(ESaveGameErrorCategory::SaveGameUnreadable) \
	op(ESaveGameErrorCategory::SaveGameValidation) \
	op(ESaveGameErrorCategory::SaveFailed) 

enum class ESaveGameErrorCategory;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ESaveGameErrorCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
