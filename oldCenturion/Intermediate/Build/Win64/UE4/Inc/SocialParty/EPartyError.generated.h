// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOCIALPARTY_EPartyError_generated_h
#error "EPartyError.generated.h already included, missing '#pragma once' in EPartyError.h"
#endif
#define SOCIALPARTY_EPartyError_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_SocialParty_Public_EPartyError_h


#define FOREACH_ENUM_EPARTYERROR(op) \
	op(EPartyError::None) \
	op(EPartyError::CreatePartyFail) \
	op(EPartyError::CreatePartyFail_PlayerAlreadyInParty) \
	op(EPartyError::ConnectionToPartyManagementLost) \
	op(EPartyError::AcceptInvitationFail) \
	op(EPartyError::AcceptInvitationFail_InvitationExpired) \
	op(EPartyError::AcceptInvitationFail_PartyIsFull) \
	op(EPartyError::AcceptInvitationFail_PartyDoesNotExists) \
	op(EPartyError::AcceptInvitationFail_VersionMismatch) \
	op(EPartyError::AcceptInvitationFail_StreamingInstallationIncomplete) \
	op(EPartyError::AcceptInvitationFail_PartyAlreadyInMatchmaking) \
	op(EPartyError::AcceptInvitationFail_AllPartyMembersAreInMatch) \
	op(EPartyError::RejectInvitationFail) \
	op(EPartyError::RejectInvitationFail_PartyDoesNotExists) \
	op(EPartyError::InvitationFail) \
	op(EPartyError::InvitationFail_PartyDoesNotExists) \
	op(EPartyError::InvitationFail_PlayerAlreadyInParty) \
	op(EPartyError::InvitationFail_NotFriendsWithUser) \
	op(EPartyError::JoinRequestFail) \
	op(EPartyError::JoinRequestFail_PartyDoesNotExists) \
	op(EPartyError::JoinRequestFail_PlayerAlreadyInPartyOrPartyFull) \
	op(EPartyError::JoinRequestFail_BannedFromParty) \
	op(EPartyError::JoinRequestFail_FriendNotInParty) \
	op(EPartyError::JoinRequestFail_PartyIsPrivate) \
	op(EPartyError::JoinRequestAcceptedFail) \
	op(EPartyError::JoinRequestAcceptedFail_PartyDoesNotExists) \
	op(EPartyError::AcceptJoinRequestFail) \
	op(EPartyError::AcceptJoinRequestFail_RequestNotFound) \
	op(EPartyError::AcceptJoinRequestFail_PartyDoesNotExists) \
	op(EPartyError::RejectJoinRequestFail) \
	op(EPartyError::RejectJoinRequestFail_RequestNotFound) \
	op(EPartyError::RejectJoinRequestFail_PartyDoesNotExists) \
	op(EPartyError::CancelJoinRequestFail) \
	op(EPartyError::CancelJoinRequestFail_RequestNotFound) \
	op(EPartyError::RealTimeMessagingDisconnected) \
	op(EPartyError::FriendBlocked_UnableToJoinParty) \
	op(EPartyError::FriendBlocked_UnableToRemainInParty) \
	op(EPartyError::CancelInvitationFail) \
	op(EPartyError::CancelInvitationFail_PartyDoesNotExists) \
	op(EPartyError::SendPartyChatMessageFail) \
	op(EPartyError::SendPartyChatMessageFail_PartyDoesNotExists) \
	op(EPartyError::SendPartyChatMessageFail_MessageNotAllowed) \
	op(EPartyError::InvitationValidationError) \
	op(EPartyError::InvitationValidationError_StandardInviteFlowButActiveCrowdPlay) \
	op(EPartyError::InvitationValidationError_QueueToPlayInviteButInactiveCrowdPlay) \
	op(EPartyError::InvitationValidationError_PartyIsFull) \
	op(EPartyError::InvitationValidationError_PartyDoesNotExists) \
	op(EPartyError::InvitationValidationError_VersionMismatch) \
	op(EPartyError::InvitationValidationError_StreamingInstallationIncomplete) \
	op(EPartyError::InvitationValidationError_FriendBlocked) \
	op(EPartyError::InvitationValidationError_InsufficientPrivileges) \
	op(EPartyError::InvitationValidationError_PlayerBanned) \
	op(EPartyError::InvitationValidationError_LocalCrossplayIncompatibility) \
	op(EPartyError::InvitationValidationError_RemoteCrossplayIncompatibility) \
	op(EPartyError::InvitationValidationError_ListenServerCrossplayIncompatibility) \
	op(EPartyError::RemovePlayerFromPartyFail) \
	op(EPartyError::JoinFail_PlayerAlreadyInParty) \
	op(EPartyError::UnknownError) 

enum class EPartyError;
template<> SOCIALPARTY_API UEnum* StaticEnum<EPartyError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
