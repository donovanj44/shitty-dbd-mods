// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EHookType_generated_h
#error "EHookType.generated.h already included, missing '#pragma once' in EHookType.h"
#endif
#define DEADBYDAYLIGHT_EHookType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EHookType_h


#define FOREACH_ENUM_EHOOKTYPE(op) \
	op(EHookType::Hook) \
	op(EHookType::DeathBed) \
	op(EHookType::None) 

enum class EHookType;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EHookType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
