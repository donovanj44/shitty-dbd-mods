// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EMapActorCategory_generated_h
#error "EMapActorCategory.generated.h already included, missing '#pragma once' in EMapActorCategory.h"
#endif
#define DEADBYDAYLIGHT_EMapActorCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EMapActorCategory_h


#define FOREACH_ENUM_EMAPACTORCATEGORY(op) \
	op(EMapActorCategory::None) \
	op(EMapActorCategory::Objective) \
	op(EMapActorCategory::Chest) \
	op(EMapActorCategory::BlackLock) \
	op(EMapActorCategory::KillerObject) \
	op(EMapActorCategory::ExitGate) 

enum class EMapActorCategory : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EMapActorCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
