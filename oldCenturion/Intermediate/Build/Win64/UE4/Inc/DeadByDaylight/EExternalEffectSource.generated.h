// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EExternalEffectSource_generated_h
#error "EExternalEffectSource.generated.h already included, missing '#pragma once' in EExternalEffectSource.h"
#endif
#define DEADBYDAYLIGHT_EExternalEffectSource_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EExternalEffectSource_h


#define FOREACH_ENUM_EEXTERNALEFFECTSOURCE(op) \
	op(EExternalEffectSource::None) \
	op(EExternalEffectSource::Perk) \
	op(EExternalEffectSource::Addon) \
	op(EExternalEffectSource::Power) 

enum class EExternalEffectSource : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EExternalEffectSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
