// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EBasementType_generated_h
#error "EBasementType.generated.h already included, missing '#pragma once' in EBasementType.h"
#endif
#define DEADBYDAYLIGHT_EBasementType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EBasementType_h


#define FOREACH_ENUM_EBASEMENTTYPE(op) \
	op(EBasementType::None) \
	op(EBasementType::Basic) \
	op(EBasementType::MainBuilding) \
	op(EBasementType::Shack) \
	op(EBasementType::Count) 

enum class EBasementType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EBasementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
