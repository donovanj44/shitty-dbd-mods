// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEONI_EBloodOrbState_generated_h
#error "EBloodOrbState.generated.h already included, missing '#pragma once' in EBloodOrbState.h"
#endif
#define THEONI_EBloodOrbState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheOni_Public_EBloodOrbState_h


#define FOREACH_ENUM_EBLOODORBSTATE(op) \
	op(EBloodOrbState::Invalid) \
	op(EBloodOrbState::BeingDropped) \
	op(EBloodOrbState::Idle) \
	op(EBloodOrbState::WaitingToMove) \
	op(EBloodOrbState::Attracted) \
	op(EBloodOrbState::Absorbed) \
	op(EBloodOrbState::Destroyed) 

enum class EBloodOrbState : uint8;
template<> THEONI_API UEnum* StaticEnum<EBloodOrbState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
