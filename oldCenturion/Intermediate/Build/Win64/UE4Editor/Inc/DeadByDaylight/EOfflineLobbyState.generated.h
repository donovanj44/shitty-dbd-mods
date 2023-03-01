// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EOfflineLobbyState_generated_h
#error "EOfflineLobbyState.generated.h already included, missing '#pragma once' in EOfflineLobbyState.h"
#endif
#define DEADBYDAYLIGHT_EOfflineLobbyState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EOfflineLobbyState_h


#define FOREACH_ENUM_EOFFLINELOBBYSTATE(op) \
	op(EOfflineLobbyState::None) \
	op(EOfflineLobbyState::RoleSelection) \
	op(EOfflineLobbyState::OfflineLobby) \
	op(EOfflineLobbyState::Store) \
	op(EOfflineLobbyState::PartyLobby) \
	op(EOfflineLobbyState::Archives) 

enum class EOfflineLobbyState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EOfflineLobbyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
