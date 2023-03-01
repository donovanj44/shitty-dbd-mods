// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EHudScreenIndicatorType_generated_h
#error "EHudScreenIndicatorType.generated.h already included, missing '#pragma once' in EHudScreenIndicatorType.h"
#endif
#define DBDSHAREDTYPES_EHudScreenIndicatorType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EHudScreenIndicatorType_h


#define FOREACH_ENUM_EHUDSCREENINDICATORTYPE(op) \
	op(EHudScreenIndicatorType::None) \
	op(EHudScreenIndicatorType::LoudNoise) \
	op(EHudScreenIndicatorType::StealthBroken) \
	op(EHudScreenIndicatorType::Objective) 

enum class EHudScreenIndicatorType : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EHudScreenIndicatorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
