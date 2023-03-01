// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDCOMPETENCE_ETheMettleOfManPhase_generated_h
#error "ETheMettleOfManPhase.generated.h already included, missing '#pragma once' in ETheMettleOfManPhase.h"
#endif
#define DBDCOMPETENCE_ETheMettleOfManPhase_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_ETheMettleOfManPhase_h


#define FOREACH_ENUM_ETHEMETTLEOFMANPHASE(op) \
	op(ETheMettleOfManPhase::Uninitialized) \
	op(ETheMettleOfManPhase::GainingTokens) \
	op(ETheMettleOfManPhase::CancelNextAttack) \
	op(ETheMettleOfManPhase::RevealWhenHealthy) \
	op(ETheMettleOfManPhase::RevealedToKiller) 

enum class ETheMettleOfManPhase : uint8;
template<> DBDCOMPETENCE_API UEnum* StaticEnum<ETheMettleOfManPhase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
