// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK25_EK25ChainState_generated_h
#error "EK25ChainState.generated.h already included, missing '#pragma once' in EK25ChainState.h"
#endif
#define THEK25_EK25ChainState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_EK25ChainState_h


#define FOREACH_ENUM_EK25CHAINSTATE(op) \
	op(EK25ChainState::InPool) \
	op(EK25ChainState::AttachedToProjectile) \
	op(EK25ChainState::AttachedToSurvivorAnchorPoint) \
	op(EK25ChainState::ReelingBack) \
	op(EK25ChainState::ReachingSurvivorAnchorPoint) 

enum class EK25ChainState : uint8;
template<> THEK25_API UEnum* StaticEnum<EK25ChainState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
