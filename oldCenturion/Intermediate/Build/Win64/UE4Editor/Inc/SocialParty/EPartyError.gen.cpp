// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialParty/Public/EPartyError.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPartyError() {}
// Cross Module References
	SOCIALPARTY_API UEnum* Z_Construct_UEnum_SocialParty_EPartyError();
	UPackage* Z_Construct_UPackage__Script_SocialParty();
// End Cross Module References
	static UEnum* EPartyError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SocialParty_EPartyError, Z_Construct_UPackage__Script_SocialParty(), TEXT("EPartyError"));
		}
		return Singleton;
	}
	template<> SOCIALPARTY_API UEnum* StaticEnum<EPartyError>()
	{
		return EPartyError_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPartyError(EPartyError_StaticEnum, TEXT("/Script/SocialParty"), TEXT("EPartyError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SocialParty_EPartyError_Hash() { return 529173199U; }
	UEnum* Z_Construct_UEnum_SocialParty_EPartyError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SocialParty();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPartyError"), 0, Get_Z_Construct_UEnum_SocialParty_EPartyError_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPartyError::None", (int64)EPartyError::None },
				{ "EPartyError::CreatePartyFail", (int64)EPartyError::CreatePartyFail },
				{ "EPartyError::CreatePartyFail_PlayerAlreadyInParty", (int64)EPartyError::CreatePartyFail_PlayerAlreadyInParty },
				{ "EPartyError::ConnectionToPartyManagementLost", (int64)EPartyError::ConnectionToPartyManagementLost },
				{ "EPartyError::AcceptInvitationFail", (int64)EPartyError::AcceptInvitationFail },
				{ "EPartyError::AcceptInvitationFail_InvitationExpired", (int64)EPartyError::AcceptInvitationFail_InvitationExpired },
				{ "EPartyError::AcceptInvitationFail_PartyIsFull", (int64)EPartyError::AcceptInvitationFail_PartyIsFull },
				{ "EPartyError::AcceptInvitationFail_PartyDoesNotExists", (int64)EPartyError::AcceptInvitationFail_PartyDoesNotExists },
				{ "EPartyError::AcceptInvitationFail_VersionMismatch", (int64)EPartyError::AcceptInvitationFail_VersionMismatch },
				{ "EPartyError::AcceptInvitationFail_StreamingInstallationIncomplete", (int64)EPartyError::AcceptInvitationFail_StreamingInstallationIncomplete },
				{ "EPartyError::AcceptInvitationFail_PartyAlreadyInMatchmaking", (int64)EPartyError::AcceptInvitationFail_PartyAlreadyInMatchmaking },
				{ "EPartyError::AcceptInvitationFail_AllPartyMembersAreInMatch", (int64)EPartyError::AcceptInvitationFail_AllPartyMembersAreInMatch },
				{ "EPartyError::RejectInvitationFail", (int64)EPartyError::RejectInvitationFail },
				{ "EPartyError::RejectInvitationFail_PartyDoesNotExists", (int64)EPartyError::RejectInvitationFail_PartyDoesNotExists },
				{ "EPartyError::InvitationFail", (int64)EPartyError::InvitationFail },
				{ "EPartyError::InvitationFail_PartyDoesNotExists", (int64)EPartyError::InvitationFail_PartyDoesNotExists },
				{ "EPartyError::InvitationFail_PlayerAlreadyInParty", (int64)EPartyError::InvitationFail_PlayerAlreadyInParty },
				{ "EPartyError::InvitationFail_NotFriendsWithUser", (int64)EPartyError::InvitationFail_NotFriendsWithUser },
				{ "EPartyError::JoinRequestFail", (int64)EPartyError::JoinRequestFail },
				{ "EPartyError::JoinRequestFail_PartyDoesNotExists", (int64)EPartyError::JoinRequestFail_PartyDoesNotExists },
				{ "EPartyError::JoinRequestFail_PlayerAlreadyInPartyOrPartyFull", (int64)EPartyError::JoinRequestFail_PlayerAlreadyInPartyOrPartyFull },
				{ "EPartyError::JoinRequestFail_BannedFromParty", (int64)EPartyError::JoinRequestFail_BannedFromParty },
				{ "EPartyError::JoinRequestFail_FriendNotInParty", (int64)EPartyError::JoinRequestFail_FriendNotInParty },
				{ "EPartyError::JoinRequestFail_PartyIsPrivate", (int64)EPartyError::JoinRequestFail_PartyIsPrivate },
				{ "EPartyError::JoinRequestAcceptedFail", (int64)EPartyError::JoinRequestAcceptedFail },
				{ "EPartyError::JoinRequestAcceptedFail_PartyDoesNotExists", (int64)EPartyError::JoinRequestAcceptedFail_PartyDoesNotExists },
				{ "EPartyError::AcceptJoinRequestFail", (int64)EPartyError::AcceptJoinRequestFail },
				{ "EPartyError::AcceptJoinRequestFail_RequestNotFound", (int64)EPartyError::AcceptJoinRequestFail_RequestNotFound },
				{ "EPartyError::AcceptJoinRequestFail_PartyDoesNotExists", (int64)EPartyError::AcceptJoinRequestFail_PartyDoesNotExists },
				{ "EPartyError::RejectJoinRequestFail", (int64)EPartyError::RejectJoinRequestFail },
				{ "EPartyError::RejectJoinRequestFail_RequestNotFound", (int64)EPartyError::RejectJoinRequestFail_RequestNotFound },
				{ "EPartyError::RejectJoinRequestFail_PartyDoesNotExists", (int64)EPartyError::RejectJoinRequestFail_PartyDoesNotExists },
				{ "EPartyError::CancelJoinRequestFail", (int64)EPartyError::CancelJoinRequestFail },
				{ "EPartyError::CancelJoinRequestFail_RequestNotFound", (int64)EPartyError::CancelJoinRequestFail_RequestNotFound },
				{ "EPartyError::RealTimeMessagingDisconnected", (int64)EPartyError::RealTimeMessagingDisconnected },
				{ "EPartyError::FriendBlocked_UnableToJoinParty", (int64)EPartyError::FriendBlocked_UnableToJoinParty },
				{ "EPartyError::FriendBlocked_UnableToRemainInParty", (int64)EPartyError::FriendBlocked_UnableToRemainInParty },
				{ "EPartyError::CancelInvitationFail", (int64)EPartyError::CancelInvitationFail },
				{ "EPartyError::CancelInvitationFail_PartyDoesNotExists", (int64)EPartyError::CancelInvitationFail_PartyDoesNotExists },
				{ "EPartyError::SendPartyChatMessageFail", (int64)EPartyError::SendPartyChatMessageFail },
				{ "EPartyError::SendPartyChatMessageFail_PartyDoesNotExists", (int64)EPartyError::SendPartyChatMessageFail_PartyDoesNotExists },
				{ "EPartyError::SendPartyChatMessageFail_MessageNotAllowed", (int64)EPartyError::SendPartyChatMessageFail_MessageNotAllowed },
				{ "EPartyError::InvitationValidationError", (int64)EPartyError::InvitationValidationError },
				{ "EPartyError::InvitationValidationError_StandardInviteFlowButActiveCrowdPlay", (int64)EPartyError::InvitationValidationError_StandardInviteFlowButActiveCrowdPlay },
				{ "EPartyError::InvitationValidationError_QueueToPlayInviteButInactiveCrowdPlay", (int64)EPartyError::InvitationValidationError_QueueToPlayInviteButInactiveCrowdPlay },
				{ "EPartyError::InvitationValidationError_PartyIsFull", (int64)EPartyError::InvitationValidationError_PartyIsFull },
				{ "EPartyError::InvitationValidationError_PartyDoesNotExists", (int64)EPartyError::InvitationValidationError_PartyDoesNotExists },
				{ "EPartyError::InvitationValidationError_VersionMismatch", (int64)EPartyError::InvitationValidationError_VersionMismatch },
				{ "EPartyError::InvitationValidationError_StreamingInstallationIncomplete", (int64)EPartyError::InvitationValidationError_StreamingInstallationIncomplete },
				{ "EPartyError::InvitationValidationError_FriendBlocked", (int64)EPartyError::InvitationValidationError_FriendBlocked },
				{ "EPartyError::InvitationValidationError_InsufficientPrivileges", (int64)EPartyError::InvitationValidationError_InsufficientPrivileges },
				{ "EPartyError::InvitationValidationError_PlayerBanned", (int64)EPartyError::InvitationValidationError_PlayerBanned },
				{ "EPartyError::InvitationValidationError_LocalCrossplayIncompatibility", (int64)EPartyError::InvitationValidationError_LocalCrossplayIncompatibility },
				{ "EPartyError::InvitationValidationError_RemoteCrossplayIncompatibility", (int64)EPartyError::InvitationValidationError_RemoteCrossplayIncompatibility },
				{ "EPartyError::InvitationValidationError_ListenServerCrossplayIncompatibility", (int64)EPartyError::InvitationValidationError_ListenServerCrossplayIncompatibility },
				{ "EPartyError::RemovePlayerFromPartyFail", (int64)EPartyError::RemovePlayerFromPartyFail },
				{ "EPartyError::JoinFail_PlayerAlreadyInParty", (int64)EPartyError::JoinFail_PlayerAlreadyInParty },
				{ "EPartyError::UnknownError", (int64)EPartyError::UnknownError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AcceptInvitationFail.Name", "EPartyError::AcceptInvitationFail" },
				{ "AcceptInvitationFail_AllPartyMembersAreInMatch.Name", "EPartyError::AcceptInvitationFail_AllPartyMembersAreInMatch" },
				{ "AcceptInvitationFail_InvitationExpired.Name", "EPartyError::AcceptInvitationFail_InvitationExpired" },
				{ "AcceptInvitationFail_PartyAlreadyInMatchmaking.Name", "EPartyError::AcceptInvitationFail_PartyAlreadyInMatchmaking" },
				{ "AcceptInvitationFail_PartyDoesNotExists.Name", "EPartyError::AcceptInvitationFail_PartyDoesNotExists" },
				{ "AcceptInvitationFail_PartyIsFull.Name", "EPartyError::AcceptInvitationFail_PartyIsFull" },
				{ "AcceptInvitationFail_StreamingInstallationIncomplete.Name", "EPartyError::AcceptInvitationFail_StreamingInstallationIncomplete" },
				{ "AcceptInvitationFail_VersionMismatch.Name", "EPartyError::AcceptInvitationFail_VersionMismatch" },
				{ "AcceptJoinRequestFail.Name", "EPartyError::AcceptJoinRequestFail" },
				{ "AcceptJoinRequestFail_PartyDoesNotExists.Name", "EPartyError::AcceptJoinRequestFail_PartyDoesNotExists" },
				{ "AcceptJoinRequestFail_RequestNotFound.Name", "EPartyError::AcceptJoinRequestFail_RequestNotFound" },
				{ "CancelInvitationFail.Name", "EPartyError::CancelInvitationFail" },
				{ "CancelInvitationFail_PartyDoesNotExists.Name", "EPartyError::CancelInvitationFail_PartyDoesNotExists" },
				{ "CancelJoinRequestFail.Name", "EPartyError::CancelJoinRequestFail" },
				{ "CancelJoinRequestFail_RequestNotFound.Name", "EPartyError::CancelJoinRequestFail_RequestNotFound" },
				{ "ConnectionToPartyManagementLost.Name", "EPartyError::ConnectionToPartyManagementLost" },
				{ "CreatePartyFail.Name", "EPartyError::CreatePartyFail" },
				{ "CreatePartyFail_PlayerAlreadyInParty.Name", "EPartyError::CreatePartyFail_PlayerAlreadyInParty" },
				{ "FriendBlocked_UnableToJoinParty.Name", "EPartyError::FriendBlocked_UnableToJoinParty" },
				{ "FriendBlocked_UnableToRemainInParty.Name", "EPartyError::FriendBlocked_UnableToRemainInParty" },
				{ "InvitationFail.Name", "EPartyError::InvitationFail" },
				{ "InvitationFail_NotFriendsWithUser.Name", "EPartyError::InvitationFail_NotFriendsWithUser" },
				{ "InvitationFail_PartyDoesNotExists.Name", "EPartyError::InvitationFail_PartyDoesNotExists" },
				{ "InvitationFail_PlayerAlreadyInParty.Name", "EPartyError::InvitationFail_PlayerAlreadyInParty" },
				{ "InvitationValidationError.Name", "EPartyError::InvitationValidationError" },
				{ "InvitationValidationError_FriendBlocked.Name", "EPartyError::InvitationValidationError_FriendBlocked" },
				{ "InvitationValidationError_InsufficientPrivileges.Name", "EPartyError::InvitationValidationError_InsufficientPrivileges" },
				{ "InvitationValidationError_ListenServerCrossplayIncompatibility.Name", "EPartyError::InvitationValidationError_ListenServerCrossplayIncompatibility" },
				{ "InvitationValidationError_LocalCrossplayIncompatibility.Name", "EPartyError::InvitationValidationError_LocalCrossplayIncompatibility" },
				{ "InvitationValidationError_PartyDoesNotExists.Name", "EPartyError::InvitationValidationError_PartyDoesNotExists" },
				{ "InvitationValidationError_PartyIsFull.Name", "EPartyError::InvitationValidationError_PartyIsFull" },
				{ "InvitationValidationError_PlayerBanned.Name", "EPartyError::InvitationValidationError_PlayerBanned" },
				{ "InvitationValidationError_QueueToPlayInviteButInactiveCrowdPlay.Name", "EPartyError::InvitationValidationError_QueueToPlayInviteButInactiveCrowdPlay" },
				{ "InvitationValidationError_RemoteCrossplayIncompatibility.Name", "EPartyError::InvitationValidationError_RemoteCrossplayIncompatibility" },
				{ "InvitationValidationError_StandardInviteFlowButActiveCrowdPlay.Name", "EPartyError::InvitationValidationError_StandardInviteFlowButActiveCrowdPlay" },
				{ "InvitationValidationError_StreamingInstallationIncomplete.Name", "EPartyError::InvitationValidationError_StreamingInstallationIncomplete" },
				{ "InvitationValidationError_VersionMismatch.Name", "EPartyError::InvitationValidationError_VersionMismatch" },
				{ "JoinFail_PlayerAlreadyInParty.Name", "EPartyError::JoinFail_PlayerAlreadyInParty" },
				{ "JoinRequestAcceptedFail.Name", "EPartyError::JoinRequestAcceptedFail" },
				{ "JoinRequestAcceptedFail_PartyDoesNotExists.Name", "EPartyError::JoinRequestAcceptedFail_PartyDoesNotExists" },
				{ "JoinRequestFail.Name", "EPartyError::JoinRequestFail" },
				{ "JoinRequestFail_BannedFromParty.Name", "EPartyError::JoinRequestFail_BannedFromParty" },
				{ "JoinRequestFail_FriendNotInParty.Name", "EPartyError::JoinRequestFail_FriendNotInParty" },
				{ "JoinRequestFail_PartyDoesNotExists.Name", "EPartyError::JoinRequestFail_PartyDoesNotExists" },
				{ "JoinRequestFail_PartyIsPrivate.Name", "EPartyError::JoinRequestFail_PartyIsPrivate" },
				{ "JoinRequestFail_PlayerAlreadyInPartyOrPartyFull.Name", "EPartyError::JoinRequestFail_PlayerAlreadyInPartyOrPartyFull" },
				{ "ModuleRelativePath", "Public/EPartyError.h" },
				{ "None.Name", "EPartyError::None" },
				{ "RealTimeMessagingDisconnected.Name", "EPartyError::RealTimeMessagingDisconnected" },
				{ "RejectInvitationFail.Name", "EPartyError::RejectInvitationFail" },
				{ "RejectInvitationFail_PartyDoesNotExists.Name", "EPartyError::RejectInvitationFail_PartyDoesNotExists" },
				{ "RejectJoinRequestFail.Name", "EPartyError::RejectJoinRequestFail" },
				{ "RejectJoinRequestFail_PartyDoesNotExists.Name", "EPartyError::RejectJoinRequestFail_PartyDoesNotExists" },
				{ "RejectJoinRequestFail_RequestNotFound.Name", "EPartyError::RejectJoinRequestFail_RequestNotFound" },
				{ "RemovePlayerFromPartyFail.Name", "EPartyError::RemovePlayerFromPartyFail" },
				{ "SendPartyChatMessageFail.Name", "EPartyError::SendPartyChatMessageFail" },
				{ "SendPartyChatMessageFail_MessageNotAllowed.Name", "EPartyError::SendPartyChatMessageFail_MessageNotAllowed" },
				{ "SendPartyChatMessageFail_PartyDoesNotExists.Name", "EPartyError::SendPartyChatMessageFail_PartyDoesNotExists" },
				{ "UnknownError.Name", "EPartyError::UnknownError" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SocialParty,
				nullptr,
				"EPartyError",
				"EPartyError",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
