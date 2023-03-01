// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDANALYTICS_EDBDAnalyticsGameMode_generated_h
#error "EDBDAnalyticsGameMode.generated.h already included, missing '#pragma once' in EDBDAnalyticsGameMode.h"
#endif
#define DBDANALYTICS_EDBDAnalyticsGameMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnalytics_Public_EDBDAnalyticsGameMode_h


#define FOREACH_ENUM_EDBDANALYTICSGAMEMODE(op) \
	op(EDBDAnalyticsGameMode::AnalyticsServer) \
	op(EDBDAnalyticsGameMode::AnalyticsClient) \
	op(EDBDAnalyticsGameMode::AnalyticsLoading) \
	op(EDBDAnalyticsGameMode::AnalyticsLobby) \
	op(EDBDAnalyticsGameMode::AnalyticsMenu) \
	op(EDBDAnalyticsGameMode::AnalyticsPostGame) \
	op(EDBDAnalyticsGameMode::AnalyticsPerfTests) \
	op(EDBDAnalyticsGameMode::AnalyticsSplashScreen) 

enum class EDBDAnalyticsGameMode;
template<> DBDANALYTICS_API UEnum* StaticEnum<EDBDAnalyticsGameMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
