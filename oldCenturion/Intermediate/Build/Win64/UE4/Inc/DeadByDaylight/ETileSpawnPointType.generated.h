// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ETileSpawnPointType_generated_h
#error "ETileSpawnPointType.generated.h already included, missing '#pragma once' in ETileSpawnPointType.h"
#endif
#define DEADBYDAYLIGHT_ETileSpawnPointType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ETileSpawnPointType_h


#define FOREACH_ENUM_ETILESPAWNPOINTTYPE(op) \
	op(ETileSpawnPointType::Unspecified) \
	op(ETileSpawnPointType::Survivor) \
	op(ETileSpawnPointType::SurvivorItem) \
	op(ETileSpawnPointType::Killer) \
	op(ETileSpawnPointType::KillerItem) \
	op(ETileSpawnPointType::InteractableObject) \
	op(ETileSpawnPointType::Count) 

enum class ETileSpawnPointType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ETileSpawnPointType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
