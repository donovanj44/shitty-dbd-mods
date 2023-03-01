// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RETENTIONREWARDSUTILITIES_EClaimResponseCodes_generated_h
#error "EClaimResponseCodes.generated.h already included, missing '#pragma once' in EClaimResponseCodes.h"
#endif
#define RETENTIONREWARDSUTILITIES_EClaimResponseCodes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_RetentionRewardsUtilities_Public_EClaimResponseCodes_h


#define FOREACH_ENUM_ECLAIMRESPONSECODES(op) \
	op(EClaimResponseCodes::Claimed) \
	op(EClaimResponseCodes::CalendarNotFound) \
	op(EClaimResponseCodes::RewardNotAvailable) \
	op(EClaimResponseCodes::RewardNotSupported) 

enum class EClaimResponseCodes;
template<> RETENTIONREWARDSUTILITIES_API UEnum* StaticEnum<EClaimResponseCodes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
