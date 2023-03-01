// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOCIALPARTY_EMatchmakingState_generated_h
#error "EMatchmakingState.generated.h already included, missing '#pragma once' in EMatchmakingState.h"
#endif
#define SOCIALPARTY_EMatchmakingState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_SocialParty_Public_EMatchmakingState_h


#define FOREACH_ENUM_EMATCHMAKINGSTATE(op) \
	op(EMatchmakingState::None) \
	op(EMatchmakingState::Searching) \
	op(EMatchmakingState::MatchFound) \
	op(EMatchmakingState::Error) 

enum class EMatchmakingState : uint8;
template<> SOCIALPARTY_API UEnum* StaticEnum<EMatchmakingState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
