// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDANALYTICS_EDoorStatus_generated_h
#error "EDoorStatus.generated.h already included, missing '#pragma once' in EDoorStatus.h"
#endif
#define DBDANALYTICS_EDoorStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnalytics_Public_EDoorStatus_h


#define FOREACH_ENUM_EDOORSTATUS(op) \
	op(EDoorStatus::Closed) \
	op(EDoorStatus::Powered) \
	op(EDoorStatus::Open) 

enum class EDoorStatus : uint8;
template<> DBDANALYTICS_API UEnum* StaticEnum<EDoorStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
