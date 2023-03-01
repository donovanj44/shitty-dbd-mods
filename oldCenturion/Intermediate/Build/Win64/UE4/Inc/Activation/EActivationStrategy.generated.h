// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIVATION_EActivationStrategy_generated_h
#error "EActivationStrategy.generated.h already included, missing '#pragma once' in EActivationStrategy.h"
#endif
#define ACTIVATION_EActivationStrategy_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Activation_Public_EActivationStrategy_h


#define FOREACH_ENUM_EACTIVATIONSTRATEGY(op) \
	op(EActivationStrategy::ActivateIfAnyTagMatches) \
	op(EActivationStrategy::ActivateIfAllTagMatches) \
	op(EActivationStrategy::DeactivateIfAnyTagMatches) \
	op(EActivationStrategy::DeactivateIfAllTagMatches) \
	op(EActivationStrategy::DeactivateWhenDependenciesAreDeactivated) 

enum class EActivationStrategy : uint8;
template<> ACTIVATION_API UEnum* StaticEnum<EActivationStrategy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
