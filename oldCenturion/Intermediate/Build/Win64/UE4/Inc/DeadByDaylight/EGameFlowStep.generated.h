// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EGameFlowStep_generated_h
#error "EGameFlowStep.generated.h already included, missing '#pragma once' in EGameFlowStep.h"
#endif
#define DEADBYDAYLIGHT_EGameFlowStep_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EGameFlowStep_h


#define FOREACH_ENUM_EGAMEFLOWSTEP(op) \
	op(EGameFlowStep::None) \
	op(EGameFlowStep::InGame) \
	op(EGameFlowStep::OfflineLobby) \
	op(EGameFlowStep::OfflineTally) \
	op(EGameFlowStep::OnlineLobby) \
	op(EGameFlowStep::SplashScreen) \
	op(EGameFlowStep::PartyLobby) \
	op(EGameFlowStep::Store) \
	op(EGameFlowStep::RoleSelection) 

enum class EGameFlowStep;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EGameFlowStep>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
