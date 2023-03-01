// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDANALYTICS_EHealthStatus_generated_h
#error "EHealthStatus.generated.h already included, missing '#pragma once' in EHealthStatus.h"
#endif
#define DBDANALYTICS_EHealthStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnalytics_Public_EHealthStatus_h


#define FOREACH_ENUM_EHEALTHSTATUS(op) \
	op(EHealthStatus::Healthy) \
	op(EHealthStatus::Wounded) \
	op(EHealthStatus::DeepWounded) \
	op(EHealthStatus::Dying) 

enum class EHealthStatus : uint8;
template<> DBDANALYTICS_API UEnum* StaticEnum<EHealthStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
