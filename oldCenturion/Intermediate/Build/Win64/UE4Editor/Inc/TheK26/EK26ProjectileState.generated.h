// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK26_EK26ProjectileState_generated_h
#error "EK26ProjectileState.generated.h already included, missing '#pragma once' in EK26ProjectileState.h"
#endif
#define THEK26_EK26ProjectileState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK26_Public_EK26ProjectileState_h


#define FOREACH_ENUM_EK26PROJECTILESTATE(op) \
	op(EK26ProjectileState::Invalid) \
	op(EK26ProjectileState::Summoning) \
	op(EK26ProjectileState::Idle) \
	op(EK26ProjectileState::FollowingPath) \
	op(EK26ProjectileState::OffPath) \
	op(EK26ProjectileState::Destroyed) 

enum class EK26ProjectileState : uint8;
template<> THEK26_API UEnum* StaticEnum<EK26ProjectileState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
