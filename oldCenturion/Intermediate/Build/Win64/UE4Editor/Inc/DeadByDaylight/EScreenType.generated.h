// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EScreenType_generated_h
#error "EScreenType.generated.h already included, missing '#pragma once' in EScreenType.h"
#endif
#define DEADBYDAYLIGHT_EScreenType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EScreenType_h


#define FOREACH_ENUM_ESCREENTYPE(op) \
	op(EScreenType::eScaleformScreen) \
	op(EScreenType::eUMGScreen) \
	op(EScreenType::eMixedScaleformUMG) 

enum class EScreenType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EScreenType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS