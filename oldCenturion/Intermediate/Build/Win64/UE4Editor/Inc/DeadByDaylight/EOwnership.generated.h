// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EOwnership_generated_h
#error "EOwnership.generated.h already included, missing '#pragma once' in EOwnership.h"
#endif
#define DEADBYDAYLIGHT_EOwnership_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EOwnership_h


#define FOREACH_ENUM_EOWNERSHIP(op) \
	op(EOwnership::Owned) \
	op(EOwnership::NotOwned) \
	op(EOwnership::Any) 

enum class EOwnership;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EOwnership>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
