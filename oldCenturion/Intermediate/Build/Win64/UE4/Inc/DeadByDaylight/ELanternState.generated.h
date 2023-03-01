// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ELanternState_generated_h
#error "ELanternState.generated.h already included, missing '#pragma once' in ELanternState.h"
#endif
#define DEADBYDAYLIGHT_ELanternState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ELanternState_h


#define FOREACH_ENUM_ELANTERNSTATE(op) \
	op(ELanternState::Collectable) \
	op(ELanternState::Collected) \
	op(ELanternState::Destroyed) \
	op(ELanternState::Destroyable) 

enum class ELanternState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ELanternState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
