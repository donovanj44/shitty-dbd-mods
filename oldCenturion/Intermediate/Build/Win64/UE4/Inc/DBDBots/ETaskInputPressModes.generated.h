// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_ETaskInputPressModes_generated_h
#error "ETaskInputPressModes.generated.h already included, missing '#pragma once' in ETaskInputPressModes.h"
#endif
#define DBDBOTS_ETaskInputPressModes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_ETaskInputPressModes_h


#define FOREACH_ENUM_ETASKINPUTPRESSMODES(op) \
	op(ETaskInputPressModes::Once) \
	op(ETaskInputPressModes::Loop) \
	op(ETaskInputPressModes::Hold) 

enum class ETaskInputPressModes : uint8;
template<> DBDBOTS_API UEnum* StaticEnum<ETaskInputPressModes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
