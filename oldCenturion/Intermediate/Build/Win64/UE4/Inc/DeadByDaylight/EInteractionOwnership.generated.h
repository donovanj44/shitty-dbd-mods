// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EInteractionOwnership_generated_h
#error "EInteractionOwnership.generated.h already included, missing '#pragma once' in EInteractionOwnership.h"
#endif
#define DEADBYDAYLIGHT_EInteractionOwnership_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EInteractionOwnership_h


#define FOREACH_ENUM_EINTERACTIONOWNERSHIP(op) \
	op(EInteractionOwnership::AnyCanUse) \
	op(EInteractionOwnership::OnlyOwnerCanUse) \
	op(EInteractionOwnership::OwnerCannotUse) 

enum class EInteractionOwnership : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EInteractionOwnership>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
