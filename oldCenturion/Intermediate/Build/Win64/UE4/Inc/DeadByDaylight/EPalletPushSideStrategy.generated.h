// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EPalletPushSideStrategy_generated_h
#error "EPalletPushSideStrategy.generated.h already included, missing '#pragma once' in EPalletPushSideStrategy.h"
#endif
#define DEADBYDAYLIGHT_EPalletPushSideStrategy_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EPalletPushSideStrategy_h


#define FOREACH_ENUM_EPALLETPUSHSIDESTRATEGY(op) \
	op(EPalletPushSideStrategy::PushToClosestPalletSide) \
	op(EPalletPushSideStrategy::PushOppositeToPlayerExecutingPulldown) 

enum class EPalletPushSideStrategy : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EPalletPushSideStrategy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
