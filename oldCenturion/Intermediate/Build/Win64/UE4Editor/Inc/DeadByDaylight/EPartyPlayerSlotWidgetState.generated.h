// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EPartyPlayerSlotWidgetState_generated_h
#error "EPartyPlayerSlotWidgetState.generated.h already included, missing '#pragma once' in EPartyPlayerSlotWidgetState.h"
#endif
#define DEADBYDAYLIGHT_EPartyPlayerSlotWidgetState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EPartyPlayerSlotWidgetState_h


#define FOREACH_ENUM_EPARTYPLAYERSLOTWIDGETSTATE(op) \
	op(EPartyPlayerSlotWidgetState::None) \
	op(EPartyPlayerSlotWidgetState::Empty) \
	op(EPartyPlayerSlotWidgetState::NotReady) \
	op(EPartyPlayerSlotWidgetState::Ready) \
	op(EPartyPlayerSlotWidgetState::Hidden) 

enum class EPartyPlayerSlotWidgetState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EPartyPlayerSlotWidgetState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
