// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EPathType_generated_h
#error "EPathType.generated.h already included, missing '#pragma once' in EPathType.h"
#endif
#define DEADBYDAYLIGHT_EPathType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EPathType_h


#define FOREACH_ENUM_EPATHTYPE(op) \
	op(EPathType::None) \
	op(EPathType::Straight) \
	op(EPathType::DeadEnd) \
	op(EPathType::Corner) \
	op(EPathType::Crossroads) \
	op(EPathType::TJunction) \
	op(EPathType::OrientationOnly) \
	op(EPathType::Unspecified) \
	op(EPathType::OrientedCrossroads) 

enum class EPathType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EPathType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
