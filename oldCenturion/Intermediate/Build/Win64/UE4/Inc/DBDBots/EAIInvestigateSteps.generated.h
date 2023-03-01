// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_EAIInvestigateSteps_generated_h
#error "EAIInvestigateSteps.generated.h already included, missing '#pragma once' in EAIInvestigateSteps.h"
#endif
#define DBDBOTS_EAIInvestigateSteps_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_EAIInvestigateSteps_h


#define FOREACH_ENUM_EAIINVESTIGATESTEPS(op) \
	op(EAIInvestigateSteps::None) \
	op(EAIInvestigateSteps::ToInvestigation) \
	op(EAIInvestigateSteps::Investigating) 

enum class EAIInvestigateSteps;
template<> DBDBOTS_API UEnum* StaticEnum<EAIInvestigateSteps>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
