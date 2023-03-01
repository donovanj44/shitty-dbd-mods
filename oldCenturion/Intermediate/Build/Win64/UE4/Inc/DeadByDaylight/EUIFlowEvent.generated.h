// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EUIFlowEvent_generated_h
#error "EUIFlowEvent.generated.h already included, missing '#pragma once' in EUIFlowEvent.h"
#endif
#define DEADBYDAYLIGHT_EUIFlowEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EUIFlowEvent_h


#define FOREACH_ENUM_EUIFLOWEVENT(op) \
	op(EUIFlowEvent::None) \
	op(EUIFlowEvent::AtlantaRoleSelectionScreenReady) \
	op(EUIFlowEvent::AtlantaNavigationScreenReady) \
	op(EUIFlowEvent::InGameHudReady) \
	op(EUIFlowEvent::LoadingScreenReady) \
	op(EUIFlowEvent::OfflineLobbyScreenReady) \
	op(EUIFlowEvent::OnlineLobbyScreenReady) \
	op(EUIFlowEvent::RoleSelectionScreenReady) \
	op(EUIFlowEvent::SplashScreenReady) \
	op(EUIFlowEvent::TallyScreenReady) \
	op(EUIFlowEvent::PartyLobbyScreenReady) \
	op(EUIFlowEvent::StoreScreenReady) 

enum class EUIFlowEvent : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EUIFlowEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
