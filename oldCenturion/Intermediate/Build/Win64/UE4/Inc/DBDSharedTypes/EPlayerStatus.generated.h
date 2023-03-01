// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EPlayerStatus_generated_h
#error "EPlayerStatus.generated.h already included, missing '#pragma once' in EPlayerStatus.h"
#endif
#define DBDSHAREDTYPES_EPlayerStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EPlayerStatus_h


#define FOREACH_ENUM_EPLAYERSTATUS(op) \
	op(EPlayerStatus::Default) \
	op(EPlayerStatus::Hook) \
	op(EPlayerStatus::Trap) \
	op(EPlayerStatus::Dead) \
	op(EPlayerStatus::Escaped) \
	op(EPlayerStatus::Injured) \
	op(EPlayerStatus::Crawling) \
	op(EPlayerStatus::Sacrificed) \
	op(EPlayerStatus::Disconnected) \
	op(EPlayerStatus::InDeathBed) 

enum class EPlayerStatus : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EPlayerStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
