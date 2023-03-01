// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK25_ELamentConfigurationDropReason_generated_h
#error "ELamentConfigurationDropReason.generated.h already included, missing '#pragma once' in ELamentConfigurationDropReason.h"
#endif
#define THEK25_ELamentConfigurationDropReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_ELamentConfigurationDropReason_h


#define FOREACH_ENUM_ELAMENTCONFIGURATIONDROPREASON(op) \
	op(ELamentConfigurationDropReason::SurvivorSolved) \
	op(ELamentConfigurationDropReason::SurvivorIsNoLongerHostage) \
	op(ELamentConfigurationDropReason::SurvivorDowned) \
	op(ELamentConfigurationDropReason::KillerCollect) \
	op(ELamentConfigurationDropReason::Other) 

enum class ELamentConfigurationDropReason;
template<> THEK25_API UEnum* StaticEnum<ELamentConfigurationDropReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
