// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEEXECUTIONER_ETrailType_generated_h
#error "ETrailType.generated.h already included, missing '#pragma once' in ETrailType.h"
#endif
#define THEEXECUTIONER_ETrailType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_ETrailType_h


#define FOREACH_ENUM_ETRAILTYPE(op) \
	op(ETrailType::NormalTrail) \
	op(ETrailType::RestrictionTrail) \
	op(ETrailType::None) 

enum class ETrailType : uint8;
template<> THEEXECUTIONER_API UEnum* StaticEnum<ETrailType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
