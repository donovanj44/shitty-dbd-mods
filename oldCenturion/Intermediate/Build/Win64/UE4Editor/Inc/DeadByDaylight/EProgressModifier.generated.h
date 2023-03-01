// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EProgressModifier_generated_h
#error "EProgressModifier.generated.h already included, missing '#pragma once' in EProgressModifier.h"
#endif
#define DEADBYDAYLIGHT_EProgressModifier_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EProgressModifier_h


#define FOREACH_ENUM_EPROGRESSMODIFIER(op) \
	op(EProgressModifier::Default) \
	op(EProgressModifier::Buff) \
	op(EProgressModifier::Debuff) 

enum class EProgressModifier : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EProgressModifier>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
