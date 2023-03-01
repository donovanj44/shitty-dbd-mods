// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ETotemState_generated_h
#error "ETotemState.generated.h already included, missing '#pragma once' in ETotemState.h"
#endif
#define DEADBYDAYLIGHT_ETotemState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ETotemState_h


#define FOREACH_ENUM_ETOTEMSTATE(op) \
	op(ETotemState::Cleansed) \
	op(ETotemState::Dull) \
	op(ETotemState::Hex) \
	op(ETotemState::Boon) 

enum class ETotemState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ETotemState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
