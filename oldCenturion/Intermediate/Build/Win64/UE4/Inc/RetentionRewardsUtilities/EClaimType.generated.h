// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RETENTIONREWARDSUTILITIES_EClaimType_generated_h
#error "EClaimType.generated.h already included, missing '#pragma once' in EClaimType.h"
#endif
#define RETENTIONREWARDSUTILITIES_EClaimType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_RetentionRewardsUtilities_Public_EClaimType_h


#define FOREACH_ENUM_ECLAIMTYPE(op) \
	op(EClaimType::Minute) \
	op(EClaimType::Hour) \
	op(EClaimType::Day) \
	op(EClaimType::Week) \
	op(EClaimType::Month) \
	op(EClaimType::Year) 

enum class EClaimType : uint8;
template<> RETENTIONREWARDSUTILITIES_API UEnum* StaticEnum<EClaimType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
