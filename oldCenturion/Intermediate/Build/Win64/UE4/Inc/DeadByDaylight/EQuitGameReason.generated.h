// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EQuitGameReason_generated_h
#error "EQuitGameReason.generated.h already included, missing '#pragma once' in EQuitGameReason.h"
#endif
#define DEADBYDAYLIGHT_EQuitGameReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EQuitGameReason_h


#define FOREACH_ENUM_EQUITGAMEREASON(op) \
	op(EQuitGameReason::None) \
	op(EQuitGameReason::Logout) \
	op(EQuitGameReason::Suspend) \
	op(EQuitGameReason::Shutdown) \
	op(EQuitGameReason::Count) 

enum class EQuitGameReason;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EQuitGameReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
