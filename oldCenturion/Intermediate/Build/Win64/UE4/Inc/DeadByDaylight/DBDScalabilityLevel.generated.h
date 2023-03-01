// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_DBDScalabilityLevel_generated_h
#error "DBDScalabilityLevel.generated.h already included, missing '#pragma once' in DBDScalabilityLevel.h"
#endif
#define DEADBYDAYLIGHT_DBDScalabilityLevel_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDScalabilityLevel_h


#define FOREACH_ENUM_DBDSCALABILITYLEVEL(op) \
	op(DBDScalabilityLevel::LOW) \
	op(DBDScalabilityLevel::MEDIUM) \
	op(DBDScalabilityLevel::HIGH) \
	op(DBDScalabilityLevel::EPIC) \
	op(DBDScalabilityLevel::ULTRA) 

enum class DBDScalabilityLevel;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<DBDScalabilityLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
