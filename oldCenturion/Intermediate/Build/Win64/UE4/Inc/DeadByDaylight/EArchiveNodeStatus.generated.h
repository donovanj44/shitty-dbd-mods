// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EArchiveNodeStatus_generated_h
#error "EArchiveNodeStatus.generated.h already included, missing '#pragma once' in EArchiveNodeStatus.h"
#endif
#define DEADBYDAYLIGHT_EArchiveNodeStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EArchiveNodeStatus_h


#define FOREACH_ENUM_EARCHIVENODESTATUS(op) \
	op(EArchiveNodeStatus::Closed) \
	op(EArchiveNodeStatus::Completed) \
	op(EArchiveNodeStatus::Open) \
	op(EArchiveNodeStatus::Paused) \
	op(EArchiveNodeStatus::Waiting) \
	op(EArchiveNodeStatus::Error) 

enum class EArchiveNodeStatus;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EArchiveNodeStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
