// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EPlayerTeam_generated_h
#error "EPlayerTeam.generated.h already included, missing '#pragma once' in EPlayerTeam.h"
#endif
#define DBDSHAREDTYPES_EPlayerTeam_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EPlayerTeam_h


#define FOREACH_ENUM_EPLAYERTEAM(op) \
	op(EPlayerTeam::VE_None) \
	op(EPlayerTeam::VE_Killer) \
	op(EPlayerTeam::VE_Survivor) 

enum class EPlayerTeam : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EPlayerTeam>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
