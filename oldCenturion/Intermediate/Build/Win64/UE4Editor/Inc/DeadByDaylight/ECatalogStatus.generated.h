// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ECatalogStatus_generated_h
#error "ECatalogStatus.generated.h already included, missing '#pragma once' in ECatalogStatus.h"
#endif
#define DEADBYDAYLIGHT_ECatalogStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ECatalogStatus_h


#define FOREACH_ENUM_ECATALOGSTATUS(op) \
	op(ECatalogStatus::NotReady) \
	op(ECatalogStatus::Updating) \
	op(ECatalogStatus::Fetched) 

enum class ECatalogStatus;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ECatalogStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
