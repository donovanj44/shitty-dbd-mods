// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ESpecialEventStatus_generated_h
#error "ESpecialEventStatus.generated.h already included, missing '#pragma once' in ESpecialEventStatus.h"
#endif
#define DEADBYDAYLIGHT_ESpecialEventStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ESpecialEventStatus_h


#define FOREACH_ENUM_ESPECIALEVENTSTATUS(op) \
	op(ESpecialEventStatus::Inactive) \
	op(ESpecialEventStatus::ActiveMain) \
	op(ESpecialEventStatus::ActivePost) 

enum class ESpecialEventStatus : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ESpecialEventStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
