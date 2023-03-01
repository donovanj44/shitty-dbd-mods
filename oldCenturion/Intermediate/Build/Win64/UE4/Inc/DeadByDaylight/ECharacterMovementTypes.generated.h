// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ECharacterMovementTypes_generated_h
#error "ECharacterMovementTypes.generated.h already included, missing '#pragma once' in ECharacterMovementTypes.h"
#endif
#define DEADBYDAYLIGHT_ECharacterMovementTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ECharacterMovementTypes_h


#define FOREACH_ENUM_ECHARACTERMOVEMENTTYPES(op) \
	op(ECharacterMovementTypes::Normal) \
	op(ECharacterMovementTypes::Run) \
	op(ECharacterMovementTypes::Crouch) 

enum class ECharacterMovementTypes : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ECharacterMovementTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
