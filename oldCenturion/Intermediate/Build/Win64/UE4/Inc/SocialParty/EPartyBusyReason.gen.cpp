// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialParty/Public/EPartyBusyReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPartyBusyReason() {}
// Cross Module References
	SOCIALPARTY_API UEnum* Z_Construct_UEnum_SocialParty_EPartyBusyReason();
	UPackage* Z_Construct_UPackage__Script_SocialParty();
// End Cross Module References
	static UEnum* EPartyBusyReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SocialParty_EPartyBusyReason, Z_Construct_UPackage__Script_SocialParty(), TEXT("EPartyBusyReason"));
		}
		return Singleton;
	}
	template<> SOCIALPARTY_API UEnum* StaticEnum<EPartyBusyReason>()
	{
		return EPartyBusyReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPartyBusyReason(EPartyBusyReason_StaticEnum, TEXT("/Script/SocialParty"), TEXT("EPartyBusyReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SocialParty_EPartyBusyReason_Hash() { return 976034569U; }
	UEnum* Z_Construct_UEnum_SocialParty_EPartyBusyReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SocialParty();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPartyBusyReason"), 0, Get_Z_Construct_UEnum_SocialParty_EPartyBusyReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPartyBusyReason::None", (int64)EPartyBusyReason::None },
				{ "EPartyBusyReason::CreatingParty", (int64)EPartyBusyReason::CreatingParty },
				{ "EPartyBusyReason::LeavingParty", (int64)EPartyBusyReason::LeavingParty },
				{ "EPartyBusyReason::SyncingParty", (int64)EPartyBusyReason::SyncingParty },
				{ "EPartyBusyReason::DestroyingParty", (int64)EPartyBusyReason::DestroyingParty },
				{ "EPartyBusyReason::InvitingPlayer", (int64)EPartyBusyReason::InvitingPlayer },
				{ "EPartyBusyReason::AcceptingPartyInvite", (int64)EPartyBusyReason::AcceptingPartyInvite },
				{ "EPartyBusyReason::RejectingPartyInvite", (int64)EPartyBusyReason::RejectingPartyInvite },
				{ "EPartyBusyReason::CancelingPartyInvite", (int64)EPartyBusyReason::CancelingPartyInvite },
				{ "EPartyBusyReason::RequestingJoinParty", (int64)EPartyBusyReason::RequestingJoinParty },
				{ "EPartyBusyReason::AcceptingRequestJoinParty", (int64)EPartyBusyReason::AcceptingRequestJoinParty },
				{ "EPartyBusyReason::RejectingRequestJoinParty", (int64)EPartyBusyReason::RejectingRequestJoinParty },
				{ "EPartyBusyReason::CancelingRequestJoinParty", (int64)EPartyBusyReason::CancelingRequestJoinParty },
				{ "EPartyBusyReason::AcceptingPlatformInvite", (int64)EPartyBusyReason::AcceptingPlatformInvite },
				{ "EPartyBusyReason::KickingPlayerFromParty", (int64)EPartyBusyReason::KickingPlayerFromParty },
				{ "EPartyBusyReason::LeavingPartyFromKick", (int64)EPartyBusyReason::LeavingPartyFromKick },
				{ "EPartyBusyReason::CreatingPartyPlatformSession", (int64)EPartyBusyReason::CreatingPartyPlatformSession },
				{ "EPartyBusyReason::LeavingCrossplatformPlatformSession", (int64)EPartyBusyReason::LeavingCrossplatformPlatformSession },
				{ "EPartyBusyReason::WaitingForPlatformSessionInfo", (int64)EPartyBusyReason::WaitingForPlatformSessionInfo },
				{ "EPartyBusyReason::ProcessingPlatformSession", (int64)EPartyBusyReason::ProcessingPlatformSession },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AcceptingPartyInvite.Name", "EPartyBusyReason::AcceptingPartyInvite" },
				{ "AcceptingPlatformInvite.Name", "EPartyBusyReason::AcceptingPlatformInvite" },
				{ "AcceptingRequestJoinParty.Name", "EPartyBusyReason::AcceptingRequestJoinParty" },
				{ "CancelingPartyInvite.Name", "EPartyBusyReason::CancelingPartyInvite" },
				{ "CancelingRequestJoinParty.Name", "EPartyBusyReason::CancelingRequestJoinParty" },
				{ "CreatingParty.Name", "EPartyBusyReason::CreatingParty" },
				{ "CreatingPartyPlatformSession.Name", "EPartyBusyReason::CreatingPartyPlatformSession" },
				{ "DestroyingParty.Name", "EPartyBusyReason::DestroyingParty" },
				{ "InvitingPlayer.Name", "EPartyBusyReason::InvitingPlayer" },
				{ "KickingPlayerFromParty.Name", "EPartyBusyReason::KickingPlayerFromParty" },
				{ "LeavingCrossplatformPlatformSession.Name", "EPartyBusyReason::LeavingCrossplatformPlatformSession" },
				{ "LeavingParty.Name", "EPartyBusyReason::LeavingParty" },
				{ "LeavingPartyFromKick.Name", "EPartyBusyReason::LeavingPartyFromKick" },
				{ "ModuleRelativePath", "Public/EPartyBusyReason.h" },
				{ "None.Name", "EPartyBusyReason::None" },
				{ "ProcessingPlatformSession.Name", "EPartyBusyReason::ProcessingPlatformSession" },
				{ "RejectingPartyInvite.Name", "EPartyBusyReason::RejectingPartyInvite" },
				{ "RejectingRequestJoinParty.Name", "EPartyBusyReason::RejectingRequestJoinParty" },
				{ "RequestingJoinParty.Name", "EPartyBusyReason::RequestingJoinParty" },
				{ "SyncingParty.Name", "EPartyBusyReason::SyncingParty" },
				{ "WaitingForPlatformSessionInfo.Name", "EPartyBusyReason::WaitingForPlatformSessionInfo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SocialParty,
				nullptr,
				"EPartyBusyReason",
				"EPartyBusyReason",
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
