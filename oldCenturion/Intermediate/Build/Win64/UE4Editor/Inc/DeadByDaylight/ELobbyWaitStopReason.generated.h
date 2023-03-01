// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ELobbyWaitStopReason_generated_h
#error "ELobbyWaitStopReason.generated.h already included, missing '#pragma once' in ELobbyWaitStopReason.h"
#endif
#define DEADBYDAYLIGHT_ELobbyWaitStopReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ELobbyWaitStopReason_h


#define FOREACH_ENUM_ELOBBYWAITSTOPREASON(op) \
	op(ELobbyWaitStopReason::StartMatchWait) \
	op(ELobbyWaitStopReason::PlayerCancelled) \
	op(ELobbyWaitStopReason::Unknown) 

enum class ELobbyWaitStopReason;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ELobbyWaitStopReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
