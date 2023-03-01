// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ESecondaryActionRequestTypes_generated_h
#error "ESecondaryActionRequestTypes.generated.h already included, missing '#pragma once' in ESecondaryActionRequestTypes.h"
#endif
#define DEADBYDAYLIGHT_ESecondaryActionRequestTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ESecondaryActionRequestTypes_h


#define FOREACH_ENUM_ESECONDARYACTIONREQUESTTYPES(op) \
	op(ESecondaryActionRequestTypes::None) \
	op(ESecondaryActionRequestTypes::SecondaryActionRequested) \
	op(ESecondaryActionRequestTypes::SecondaryActionRequestedFromCancel) 

enum class ESecondaryActionRequestTypes;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ESecondaryActionRequestTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
