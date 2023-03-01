// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOCIALPARTY_EPartyPostMatchmakingRole_generated_h
#error "EPartyPostMatchmakingRole.generated.h already included, missing '#pragma once' in EPartyPostMatchmakingRole.h"
#endif
#define SOCIALPARTY_EPartyPostMatchmakingRole_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_SocialParty_Public_EPartyPostMatchmakingRole_h


#define FOREACH_ENUM_EPARTYPOSTMATCHMAKINGROLE(op) \
	op(EPartyPostMatchmakingRole::None) \
	op(EPartyPostMatchmakingRole::Client) \
	op(EPartyPostMatchmakingRole::Host) 

enum class EPartyPostMatchmakingRole : uint8;
template<> SOCIALPARTY_API UEnum* StaticEnum<EPartyPostMatchmakingRole>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
