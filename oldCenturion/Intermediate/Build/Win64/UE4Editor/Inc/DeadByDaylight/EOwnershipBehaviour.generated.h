// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EOwnershipBehaviour_generated_h
#error "EOwnershipBehaviour.generated.h already included, missing '#pragma once' in EOwnershipBehaviour.h"
#endif
#define DEADBYDAYLIGHT_EOwnershipBehaviour_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EOwnershipBehaviour_h


#define FOREACH_ENUM_EOWNERSHIPBEHAVIOUR(op) \
	op(EOwnershipBehaviour::Personal) \
	op(EOwnershipBehaviour::Shared) 

enum class EOwnershipBehaviour : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EOwnershipBehaviour>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
