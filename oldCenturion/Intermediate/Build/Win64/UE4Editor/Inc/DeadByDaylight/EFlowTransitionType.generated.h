// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EFlowTransitionType_generated_h
#error "EFlowTransitionType.generated.h already included, missing '#pragma once' in EFlowTransitionType.h"
#endif
#define DEADBYDAYLIGHT_EFlowTransitionType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EFlowTransitionType_h


#define FOREACH_ENUM_EFLOWTRANSITIONTYPE(op) \
	op(EFlowTransitionType::Tally) \
	op(EFlowTransitionType::OnlineLobby) \
	op(EFlowTransitionType::PartyLobby) \
	op(EFlowTransitionType::OfflineLobby) \
	op(EFlowTransitionType::Splash) \
	op(EFlowTransitionType::RoleSelection) \
	op(EFlowTransitionType::None) 

enum class EFlowTransitionType;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EFlowTransitionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
