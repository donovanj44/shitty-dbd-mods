// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EPlayerRole_generated_h
#error "EPlayerRole.generated.h already included, missing '#pragma once' in EPlayerRole.h"
#endif
#define DBDSHAREDTYPES_EPlayerRole_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EPlayerRole_h


#define FOREACH_ENUM_EPLAYERROLE(op) \
	op(EPlayerRole::VE_None) \
	op(EPlayerRole::VE_Slasher) \
	op(EPlayerRole::VE_Camper) \
	op(EPlayerRole::VE_Observer) \
	op(EPlayerRole::Max) 

enum class EPlayerRole : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EPlayerRole>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
