// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EWorldFlowEvent_generated_h
#error "EWorldFlowEvent.generated.h already included, missing '#pragma once' in EWorldFlowEvent.h"
#endif
#define DEADBYDAYLIGHT_EWorldFlowEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EWorldFlowEvent_h


#define FOREACH_ENUM_EWORLDFLOWEVENT(op) \
	op(EWorldFlowEvent::None) \
	op(EWorldFlowEvent::GameLevelLoaded) \
	op(EWorldFlowEvent::LoadingGameLevel) \
	op(EWorldFlowEvent::LoadingOfflineParadise) \
	op(EWorldFlowEvent::LoadingOnlineLobbyLevel) \
	op(EWorldFlowEvent::OfflineLobbyMapLoaded) \
	op(EWorldFlowEvent::OfflineParadiseLoaded) \
	op(EWorldFlowEvent::OnlineLobbyMapLoaded) \
	op(EWorldFlowEvent::StartScreenMapLoaded) \
	op(EWorldFlowEvent::LoadingSplashScreen) 

enum class EWorldFlowEvent : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EWorldFlowEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
