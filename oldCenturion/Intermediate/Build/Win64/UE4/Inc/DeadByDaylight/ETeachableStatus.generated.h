// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ETeachableStatus_generated_h
#error "ETeachableStatus.generated.h already included, missing '#pragma once' in ETeachableStatus.h"
#endif
#define DEADBYDAYLIGHT_ETeachableStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ETeachableStatus_h


#define FOREACH_ENUM_ETEACHABLESTATUS(op) \
	op(ETeachableStatus::Unknown) \
	op(ETeachableStatus::Locked) \
	op(ETeachableStatus::AvailableInBloodWeb) \
	op(ETeachableStatus::AvailableInShrine) \
	op(ETeachableStatus::Acquired) 

enum class ETeachableStatus : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ETeachableStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
