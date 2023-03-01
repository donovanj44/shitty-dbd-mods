// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EArchiveStoryType_generated_h
#error "EArchiveStoryType.generated.h already included, missing '#pragma once' in EArchiveStoryType.h"
#endif
#define DEADBYDAYLIGHT_EArchiveStoryType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EArchiveStoryType_h


#define FOREACH_ENUM_EARCHIVESTORYTYPE(op) \
	op(EArchiveStoryType::NotSet) \
	op(EArchiveStoryType::CurrentStory) \
	op(EArchiveStoryType::PastStory) \
	op(EArchiveStoryType::EventStory) 

enum class EArchiveStoryType;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EArchiveStoryType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
