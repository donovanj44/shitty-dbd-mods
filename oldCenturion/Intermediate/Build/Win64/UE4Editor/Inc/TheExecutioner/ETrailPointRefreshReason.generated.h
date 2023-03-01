// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEEXECUTIONER_ETrailPointRefreshReason_generated_h
#error "ETrailPointRefreshReason.generated.h already included, missing '#pragma once' in ETrailPointRefreshReason.h"
#endif
#define THEEXECUTIONER_ETrailPointRefreshReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_ETrailPointRefreshReason_h


#define FOREACH_ENUM_ETRAILPOINTREFRESHREASON(op) \
	op(ETrailPointRefreshReason::FrontNeighbourAdded) \
	op(ETrailPointRefreshReason::BackNeighbourAdded) \
	op(ETrailPointRefreshReason::BackNeighbourRemoved) \
	op(ETrailPointRefreshReason::FrontNeighbourRemoved) \
	op(ETrailPointRefreshReason::None) 

enum class ETrailPointRefreshReason : uint8;
template<> THEEXECUTIONER_API UEnum* StaticEnum<ETrailPointRefreshReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
