// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EObsessionUIState_generated_h
#error "EObsessionUIState.generated.h already included, missing '#pragma once' in EObsessionUIState.h"
#endif
#define DBDSHAREDTYPES_EObsessionUIState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EObsessionUIState_h


#define FOREACH_ENUM_EOBSESSIONUISTATE(op) \
	op(EObsessionUIState::Off) \
	op(EObsessionUIState::Target) \
	op(EObsessionUIState::Chased) \
	op(EObsessionUIState::Dead) 

enum class EObsessionUIState : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EObsessionUIState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
