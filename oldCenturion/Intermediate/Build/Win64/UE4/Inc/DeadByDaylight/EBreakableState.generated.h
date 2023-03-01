// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EBreakableState_generated_h
#error "EBreakableState.generated.h already included, missing '#pragma once' in EBreakableState.h"
#endif
#define DEADBYDAYLIGHT_EBreakableState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EBreakableState_h


#define FOREACH_ENUM_EBREAKABLESTATE(op) \
	op(EBreakableState::Unbroken) \
	op(EBreakableState::Broken) 

enum class EBreakableState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EBreakableState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
