// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EArchiveNodeType_generated_h
#error "EArchiveNodeType.generated.h already included, missing '#pragma once' in EArchiveNodeType.h"
#endif
#define DEADBYDAYLIGHT_EArchiveNodeType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EArchiveNodeType_h


#define FOREACH_ENUM_EARCHIVENODETYPE(op) \
	op(EArchiveNodeType::Narrative) \
	op(EArchiveNodeType::Task) \
	op(EArchiveNodeType::Challenge) \
	op(EArchiveNodeType::Contextual) \
	op(EArchiveNodeType::Reward) \
	op(EArchiveNodeType::None) 

enum class EArchiveNodeType;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EArchiveNodeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
