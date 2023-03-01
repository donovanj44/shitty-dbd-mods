// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ELinkedVomitState_generated_h
#error "ELinkedVomitState.generated.h already included, missing '#pragma once' in ELinkedVomitState.h"
#endif
#define DEADBYDAYLIGHT_ELinkedVomitState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ELinkedVomitState_h


#define FOREACH_ENUM_ELINKEDVOMITSTATE(op) \
	op(ELinkedVomitState::Idle) \
	op(ELinkedVomitState::Charging) \
	op(ELinkedVomitState::Vomiting) 

enum class ELinkedVomitState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ELinkedVomitState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
