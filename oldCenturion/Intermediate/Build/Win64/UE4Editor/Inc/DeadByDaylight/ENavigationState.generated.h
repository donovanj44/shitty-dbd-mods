// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ENavigationState_generated_h
#error "ENavigationState.generated.h already included, missing '#pragma once' in ENavigationState.h"
#endif
#define DEADBYDAYLIGHT_ENavigationState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ENavigationState_h


#define FOREACH_ENUM_ENAVIGATIONSTATE(op) \
	op(ENavigationState::RoleSelection) \
	op(ENavigationState::Customization) \
	op(ENavigationState::CharacterSelection) \
	op(ENavigationState::Lobby) \
	op(ENavigationState::BloodStore) \
	op(ENavigationState::None) 

enum class ENavigationState;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ENavigationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
