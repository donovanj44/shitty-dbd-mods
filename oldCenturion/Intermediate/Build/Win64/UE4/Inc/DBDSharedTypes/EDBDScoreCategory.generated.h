// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EDBDScoreCategory_generated_h
#error "EDBDScoreCategory.generated.h already included, missing '#pragma once' in EDBDScoreCategory.h"
#endif
#define DBDSHAREDTYPES_EDBDScoreCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EDBDScoreCategory_h


#define FOREACH_ENUM_EDBDSCORECATEGORY(op) \
	op(EDBDScoreCategory::DBD_CamperScoreCat_Objectives) \
	op(EDBDScoreCategory::DBD_CamperScoreCat_Survival) \
	op(EDBDScoreCategory::DBD_CamperScoreCat_Altruism) \
	op(EDBDScoreCategory::DBD_CamperScoreCat_Boldness) \
	op(EDBDScoreCategory::DBD_SlasherScoreCat_Brutality) \
	op(EDBDScoreCategory::DBD_SlasherScoreCat_Deviousness) \
	op(EDBDScoreCategory::DBD_SlasherScoreCat_Hunter) \
	op(EDBDScoreCategory::DBD_SlasherScoreCat_Sacrifice) \
	op(EDBDScoreCategory::DBD_CamperScoreCat_Untracked) \
	op(EDBDScoreCategory::DBD_CamperScoreCat_Streak) \
	op(EDBDScoreCategory::DBD_ScoreCat_SpecialEvents) \
	op(EDBDScoreCategory::Count) 

enum class EDBDScoreCategory : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EDBDScoreCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
