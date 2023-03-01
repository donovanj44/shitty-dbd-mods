// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_EExtMoveToStrafeFocusOptions_generated_h
#error "EExtMoveToStrafeFocusOptions.generated.h already included, missing '#pragma once' in EExtMoveToStrafeFocusOptions.h"
#endif
#define DBDBOTS_EExtMoveToStrafeFocusOptions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_EExtMoveToStrafeFocusOptions_h


#define FOREACH_ENUM_EEXTMOVETOSTRAFEFOCUSOPTIONS(op) \
	op(EExtMoveToStrafeFocusOptions::Never) \
	op(EExtMoveToStrafeFocusOptions::NearFocus) \
	op(EExtMoveToStrafeFocusOptions::NearGoal) \
	op(EExtMoveToStrafeFocusOptions::Always) \
	op(EExtMoveToStrafeFocusOptions::Intermittent) 

enum class EExtMoveToStrafeFocusOptions : uint8;
template<> DBDBOTS_API UEnum* StaticEnum<EExtMoveToStrafeFocusOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
