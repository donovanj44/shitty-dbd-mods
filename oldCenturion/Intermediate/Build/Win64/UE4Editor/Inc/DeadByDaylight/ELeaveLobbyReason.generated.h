// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ELeaveLobbyReason_generated_h
#error "ELeaveLobbyReason.generated.h already included, missing '#pragma once' in ELeaveLobbyReason.h"
#endif
#define DEADBYDAYLIGHT_ELeaveLobbyReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ELeaveLobbyReason_h


#define FOREACH_ENUM_ELEAVELOBBYREASON(op) \
	op(ELeaveLobbyReason::eNone) \
	op(ELeaveLobbyReason::eNetworkDisconnect) \
	op(ELeaveLobbyReason::eProfileOffline) \
	op(ELeaveLobbyReason::eAppSuspended) \
	op(ELeaveLobbyReason::eInternetDisconnect) \
	op(ELeaveLobbyReason::eHostDisconnect) \
	op(ELeaveLobbyReason::eDLCInstalled) \
	op(ELeaveLobbyReason::eTrialExtensionExpired) \
	op(ELeaveLobbyReason::ePartyManagementError) 

enum class ELeaveLobbyReason;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ELeaveLobbyReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
