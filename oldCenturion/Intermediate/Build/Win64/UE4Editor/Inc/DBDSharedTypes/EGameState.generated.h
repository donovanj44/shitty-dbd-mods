// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EGameState_generated_h
#error "EGameState.generated.h already included, missing '#pragma once' in EGameState.h"
#endif
#define DBDSHAREDTYPES_EGameState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EGameState_h


#define FOREACH_ENUM_EGAMESTATE(op) \
	op(EGameState::VE_Active) \
	op(EGameState::VE_Dead) \
	op(EGameState::VE_Escaped) \
	op(EGameState::VE_EscapedInjured) \
	op(EGameState::VE_Sacrificed) \
	op(EGameState::VE_None) \
	op(EGameState::VE_Disconnected) \
	op(EGameState::VE_ManuallyLeftMatch) 

enum class EGameState : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
