// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REWARDUTILITIES_ERewardItemType_generated_h
#error "ERewardItemType.generated.h already included, missing '#pragma once' in ERewardItemType.h"
#endif
#define REWARDUTILITIES_ERewardItemType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_RewardUtilities_Public_ERewardItemType_h


#define FOREACH_ENUM_EREWARDITEMTYPE(op) \
	op(ERewardItemType::None) \
	op(ERewardItemType::Currency) \
	op(ERewardItemType::Inventory) 

enum class ERewardItemType : uint8;
template<> REWARDUTILITIES_API UEnum* StaticEnum<ERewardItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
