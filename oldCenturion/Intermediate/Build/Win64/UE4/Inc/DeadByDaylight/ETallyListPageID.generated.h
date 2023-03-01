// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ETallyListPageID_generated_h
#error "ETallyListPageID.generated.h already included, missing '#pragma once' in ETallyListPageID.h"
#endif
#define DEADBYDAYLIGHT_ETallyListPageID_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ETallyListPageID_h


#define FOREACH_ENUM_ETALLYLISTPAGEID(op) \
	op(ETallyListPageID::Scoreboard) \
	op(ETallyListPageID::Bloodpoints) \
	op(ETallyListPageID::Rank) \
	op(ETallyListPageID::PlayerLevel) \
	op(ETallyListPageID::CharacterLevel) \
	op(ETallyListPageID::NumberOfPages) 

enum class ETallyListPageID : int32;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ETallyListPageID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
