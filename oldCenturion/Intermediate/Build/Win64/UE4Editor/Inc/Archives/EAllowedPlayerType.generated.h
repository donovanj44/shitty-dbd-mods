// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHIVES_EAllowedPlayerType_generated_h
#error "EAllowedPlayerType.generated.h already included, missing '#pragma once' in EAllowedPlayerType.h"
#endif
#define ARCHIVES_EAllowedPlayerType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Archives_Public_EAllowedPlayerType_h


#define FOREACH_ENUM_EALLOWEDPLAYERTYPE(op) \
	op(EAllowedPlayerType::All) \
	op(EAllowedPlayerType::KillerOnly) \
	op(EAllowedPlayerType::SurvivorOnly) 

enum class EAllowedPlayerType : uint8;
template<> ARCHIVES_API UEnum* StaticEnum<EAllowedPlayerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
