// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINITESTATEMACHINE_EFiniteStateMachineStatus_generated_h
#error "EFiniteStateMachineStatus.generated.h already included, missing '#pragma once' in EFiniteStateMachineStatus.h"
#endif
#define FINITESTATEMACHINE_EFiniteStateMachineStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_FiniteStateMachine_Public_EFiniteStateMachineStatus_h


#define FOREACH_ENUM_EFINITESTATEMACHINESTATUS(op) \
	op(EFiniteStateMachineStatus::Stopped) \
	op(EFiniteStateMachineStatus::Running) \
	op(EFiniteStateMachineStatus::Paused) 

enum class EFiniteStateMachineStatus : uint8;
template<> FINITESTATEMACHINE_API UEnum* StaticEnum<EFiniteStateMachineStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
