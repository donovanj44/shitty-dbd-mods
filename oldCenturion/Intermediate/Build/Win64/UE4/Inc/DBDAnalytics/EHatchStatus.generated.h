// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDANALYTICS_EHatchStatus_generated_h
#error "EHatchStatus.generated.h already included, missing '#pragma once' in EHatchStatus.h"
#endif
#define DBDANALYTICS_EHatchStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnalytics_Public_EHatchStatus_h


#define FOREACH_ENUM_EHATCHSTATUS(op) \
	op(EHatchStatus::Hidden) \
	op(EHatchStatus::Visible) \
	op(EHatchStatus::Open) \
	op(EHatchStatus::Closed) \
	op(EHatchStatus::ClosedOrHidden) 

enum class EHatchStatus : uint8;
template<> DBDANALYTICS_API UEnum* StaticEnum<EHatchStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
