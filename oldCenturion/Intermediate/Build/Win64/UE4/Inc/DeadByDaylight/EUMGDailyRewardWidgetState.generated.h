// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EUMGDailyRewardWidgetState_generated_h
#error "EUMGDailyRewardWidgetState.generated.h already included, missing '#pragma once' in EUMGDailyRewardWidgetState.h"
#endif
#define DEADBYDAYLIGHT_EUMGDailyRewardWidgetState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EUMGDailyRewardWidgetState_h


#define FOREACH_ENUM_EUMGDAILYREWARDWIDGETSTATE(op) \
	op(EUMGDailyRewardWidgetState::Unknown) \
	op(EUMGDailyRewardWidgetState::Locked) \
	op(EUMGDailyRewardWidgetState::ReadyToCollect) \
	op(EUMGDailyRewardWidgetState::NewlyCollected) \
	op(EUMGDailyRewardWidgetState::Collected) \
	op(EUMGDailyRewardWidgetState::MysteryLocked) \
	op(EUMGDailyRewardWidgetState::MysteryReadyToDiscover) \
	op(EUMGDailyRewardWidgetState::MysteryNewlyDiscovered) 

enum class EUMGDailyRewardWidgetState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EUMGDailyRewardWidgetState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
