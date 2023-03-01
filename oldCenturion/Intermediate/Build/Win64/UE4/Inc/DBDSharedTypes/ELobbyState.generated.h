// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_ELobbyState_generated_h
#error "ELobbyState.generated.h already included, missing '#pragma once' in ELobbyState.h"
#endif
#define DBDSHAREDTYPES_ELobbyState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_ELobbyState_h


#define FOREACH_ENUM_ELOBBYSTATE(op) \
	op(ELobbyState::Searching) \
	op(ELobbyState::Joined) \
	op(ELobbyState::Offering) \
	op(ELobbyState::Fog) 

enum class ELobbyState;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ELobbyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
