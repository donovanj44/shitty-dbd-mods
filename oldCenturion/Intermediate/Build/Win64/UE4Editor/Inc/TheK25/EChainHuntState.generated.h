// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK25_EChainHuntState_generated_h
#error "EChainHuntState.generated.h already included, missing '#pragma once' in EChainHuntState.h"
#endif
#define THEK25_EChainHuntState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_EChainHuntState_h


#define FOREACH_ENUM_ECHAINHUNTSTATE(op) \
	op(EChainHuntState::Inactive) \
	op(EChainHuntState::Charging) \
	op(EChainHuntState::Active) 

enum class EChainHuntState : uint8;
template<> THEK25_API UEnum* StaticEnum<EChainHuntState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
