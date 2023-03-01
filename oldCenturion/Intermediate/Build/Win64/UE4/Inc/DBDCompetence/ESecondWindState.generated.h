// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDCOMPETENCE_ESecondWindState_generated_h
#error "ESecondWindState.generated.h already included, missing '#pragma once' in ESecondWindState.h"
#endif
#define DBDCOMPETENCE_ESecondWindState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_ESecondWindState_h


#define FOREACH_ENUM_ESECONDWINDSTATE(op) \
	op(ESecondWindState::Loading) \
	op(ESecondWindState::Locked) \
	op(ESecondWindState::Available) \
	op(ESecondWindState::InUse) 

enum class ESecondWindState : uint8;
template<> DBDCOMPETENCE_API UEnum* StaticEnum<ESecondWindState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
