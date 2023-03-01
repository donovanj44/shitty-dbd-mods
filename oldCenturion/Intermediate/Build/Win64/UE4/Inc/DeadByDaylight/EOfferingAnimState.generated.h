// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EOfferingAnimState_generated_h
#error "EOfferingAnimState.generated.h already included, missing '#pragma once' in EOfferingAnimState.h"
#endif
#define DEADBYDAYLIGHT_EOfferingAnimState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EOfferingAnimState_h


#define FOREACH_ENUM_EOFFERINGANIMSTATE(op) \
	op(EOfferingAnimState::None) \
	op(EOfferingAnimState::Idle) \
	op(EOfferingAnimState::Init) \
	op(EOfferingAnimState::Reveal) \
	op(EOfferingAnimState::ShowInteraction) \
	op(EOfferingAnimState::Burned) \
	op(EOfferingAnimState::Returned) \
	op(EOfferingAnimState::Cancel) \
	op(EOfferingAnimState::Hidden) 

enum class EOfferingAnimState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EOfferingAnimState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
