// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EOfferingSequenceState_generated_h
#error "EOfferingSequenceState.generated.h already included, missing '#pragma once' in EOfferingSequenceState.h"
#endif
#define DEADBYDAYLIGHT_EOfferingSequenceState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EOfferingSequenceState_h


#define FOREACH_ENUM_EOFFERINGSEQUENCESTATE(op) \
	op(EOfferingSequenceState::SmokeIn) \
	op(EOfferingSequenceState::FadeOut) \
	op(EOfferingSequenceState::FadeIn) \
	op(EOfferingSequenceState::NotInitialized) \
	op(EOfferingSequenceState::Idle) \
	op(EOfferingSequenceState::Init) \
	op(EOfferingSequenceState::InitDone) \
	op(EOfferingSequenceState::Reveal) \
	op(EOfferingSequenceState::RevealDone) \
	op(EOfferingSequenceState::ShowInteraction) \
	op(EOfferingSequenceState::Finalize) \
	op(EOfferingSequenceState::Done) 

enum class EOfferingSequenceState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EOfferingSequenceState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
