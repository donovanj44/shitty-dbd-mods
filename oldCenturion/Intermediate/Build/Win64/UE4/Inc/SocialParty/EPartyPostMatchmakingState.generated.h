// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOCIALPARTY_EPartyPostMatchmakingState_generated_h
#error "EPartyPostMatchmakingState.generated.h already included, missing '#pragma once' in EPartyPostMatchmakingState.h"
#endif
#define SOCIALPARTY_EPartyPostMatchmakingState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_SocialParty_Public_EPartyPostMatchmakingState_h


#define FOREACH_ENUM_EPARTYPOSTMATCHMAKINGSTATE(op) \
	op(EPartyPostMatchmakingState::None) \
	op(EPartyPostMatchmakingState::InProgress) \
	op(EPartyPostMatchmakingState::Completed) \
	op(EPartyPostMatchmakingState::Error) 

enum class EPartyPostMatchmakingState : uint8;
template<> SOCIALPARTY_API UEnum* StaticEnum<EPartyPostMatchmakingState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
