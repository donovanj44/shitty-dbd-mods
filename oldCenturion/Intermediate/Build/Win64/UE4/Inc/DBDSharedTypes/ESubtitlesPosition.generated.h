// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_ESubtitlesPosition_generated_h
#error "ESubtitlesPosition.generated.h already included, missing '#pragma once' in ESubtitlesPosition.h"
#endif
#define DBDSHAREDTYPES_ESubtitlesPosition_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_ESubtitlesPosition_h


#define FOREACH_ENUM_ESUBTITLESPOSITION(op) \
	op(ESubtitlesPosition::HUD) \
	op(ESubtitlesPosition::Menus) \
	op(ESubtitlesPosition::Cinematics) 

enum class ESubtitlesPosition : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ESubtitlesPosition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
