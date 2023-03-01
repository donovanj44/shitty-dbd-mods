// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ERefundSource_generated_h
#error "ERefundSource.generated.h already included, missing '#pragma once' in ERefundSource.h"
#endif
#define DEADBYDAYLIGHT_ERefundSource_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ERefundSource_h


#define FOREACH_ENUM_EREFUNDSOURCE(op) \
	op(ERefundSource::None) \
	op(ERefundSource::BloodMarket) \
	op(ERefundSource::DailyCalendar) \
	op(ERefundSource::PromoPack) \
	op(ERefundSource::Count) 

enum class ERefundSource : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ERefundSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
