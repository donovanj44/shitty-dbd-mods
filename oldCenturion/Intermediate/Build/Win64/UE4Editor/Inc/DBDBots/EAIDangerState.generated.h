// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_EAIDangerState_generated_h
#error "EAIDangerState.generated.h already included, missing '#pragma once' in EAIDangerState.h"
#endif
#define DBDBOTS_EAIDangerState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_EAIDangerState_h


#define FOREACH_ENUM_EAIDANGERSTATE(op) \
	op(EAIDangerState::Safe) \
	op(EAIDangerState::Unsafe) \
	op(EAIDangerState::Dire) 

enum class EAIDangerState : uint8;
template<> DBDBOTS_API UEnum* StaticEnum<EAIDangerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
