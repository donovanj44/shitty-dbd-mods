// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EEventsType_generated_h
#error "EEventsType.generated.h already included, missing '#pragma once' in EEventsType.h"
#endif
#define DEADBYDAYLIGHT_EEventsType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EEventsType_h


#define FOREACH_ENUM_EEVENTSTYPE(op) \
	op(EEventsType::Generic) \
	op(EEventsType::Calendar) \
	op(EEventsType::BonusACEvent) \
	op(EEventsType::FirstPremiumPurchase) \
	op(EEventsType::MonthlyPass) \
	op(EEventsType::Count) 

enum class EEventsType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EEventsType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
