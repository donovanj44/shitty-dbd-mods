// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOCIALPARTY_EPartyBusyReason_generated_h
#error "EPartyBusyReason.generated.h already included, missing '#pragma once' in EPartyBusyReason.h"
#endif
#define SOCIALPARTY_EPartyBusyReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_SocialParty_Public_EPartyBusyReason_h


#define FOREACH_ENUM_EPARTYBUSYREASON(op) \
	op(EPartyBusyReason::None) \
	op(EPartyBusyReason::CreatingParty) \
	op(EPartyBusyReason::LeavingParty) \
	op(EPartyBusyReason::SyncingParty) \
	op(EPartyBusyReason::DestroyingParty) \
	op(EPartyBusyReason::InvitingPlayer) \
	op(EPartyBusyReason::AcceptingPartyInvite) \
	op(EPartyBusyReason::RejectingPartyInvite) \
	op(EPartyBusyReason::CancelingPartyInvite) \
	op(EPartyBusyReason::RequestingJoinParty) \
	op(EPartyBusyReason::AcceptingRequestJoinParty) \
	op(EPartyBusyReason::RejectingRequestJoinParty) \
	op(EPartyBusyReason::CancelingRequestJoinParty) \
	op(EPartyBusyReason::AcceptingPlatformInvite) \
	op(EPartyBusyReason::KickingPlayerFromParty) \
	op(EPartyBusyReason::LeavingPartyFromKick) \
	op(EPartyBusyReason::CreatingPartyPlatformSession) \
	op(EPartyBusyReason::LeavingCrossplatformPlatformSession) \
	op(EPartyBusyReason::WaitingForPlatformSessionInfo) \
	op(EPartyBusyReason::ProcessingPlatformSession) 

enum class EPartyBusyReason;
template<> SOCIALPARTY_API UEnum* StaticEnum<EPartyBusyReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
