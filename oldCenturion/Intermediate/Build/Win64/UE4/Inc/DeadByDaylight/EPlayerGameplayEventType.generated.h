// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EPlayerGameplayEventType_generated_h
#error "EPlayerGameplayEventType.generated.h already included, missing '#pragma once' in EPlayerGameplayEventType.h"
#endif
#define DEADBYDAYLIGHT_EPlayerGameplayEventType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EPlayerGameplayEventType_h


#define FOREACH_ENUM_EPLAYERGAMEPLAYEVENTTYPE(op) \
	op(EPlayerGameplayEventType::VE_UnhookedOther) \
	op(EPlayerGameplayEventType::VE_UntrappedOther) \
	op(EPlayerGameplayEventType::VE_HealedOther) 

enum class EPlayerGameplayEventType;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EPlayerGameplayEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
