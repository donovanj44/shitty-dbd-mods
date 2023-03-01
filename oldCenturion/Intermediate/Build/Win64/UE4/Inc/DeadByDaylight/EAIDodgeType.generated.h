// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EAIDodgeType_generated_h
#error "EAIDodgeType.generated.h already included, missing '#pragma once' in EAIDodgeType.h"
#endif
#define DEADBYDAYLIGHT_EAIDodgeType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EAIDodgeType_h


#define FOREACH_ENUM_EAIDODGETYPE(op) \
	op(EAIDodgeType::FORWARD_SIDE_STEP) \
	op(EAIDodgeType::SIDE_STEP) \
	op(EAIDodgeType::BACKWARD_SIDE_STEP) 

enum class EAIDodgeType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EAIDodgeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
