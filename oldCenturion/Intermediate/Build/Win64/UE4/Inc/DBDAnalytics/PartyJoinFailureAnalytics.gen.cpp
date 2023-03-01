// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/PartyJoinFailureAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyJoinFailureAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FPartyJoinFailureAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("PartyJoinFailureAnalytics"), sizeof(FPartyJoinFailureAnalytics), Get_Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FPartyJoinFailureAnalytics>()
{
	return FPartyJoinFailureAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPartyJoinFailureAnalytics(FPartyJoinFailureAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("PartyJoinFailureAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFPartyJoinFailureAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFPartyJoinFailureAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PartyJoinFailureAnalytics")),new UScriptStruct::TCppStructOps<FPartyJoinFailureAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFPartyJoinFailureAnalytics;
	struct Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPlatformAcceptedFriendsInParty_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumPlatformAcceptedFriendsInParty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumKrakenConfirmedFriendsInParty_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumKrakenConfirmedFriendsInParty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyMembersFriendshipStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyMembersFriendshipStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyJoinFailureAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyJoinFailureAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::NewProp_NumPlatformAcceptedFriendsInParty_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyJoinFailureAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::NewProp_NumPlatformAcceptedFriendsInParty = { "NumPlatformAcceptedFriendsInParty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartyJoinFailureAnalytics, NumPlatformAcceptedFriendsInParty), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::NewProp_NumPlatformAcceptedFriendsInParty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::NewProp_NumPlatformAcceptedFriendsInParty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::NewProp_NumKrakenConfirmedFriendsInParty_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyJoinFailureAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::NewProp_NumKrakenConfirmedFriendsInParty = { "NumKrakenConfirmedFriendsInParty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartyJoinFailureAnalytics, NumKrakenConfirmedFriendsInParty), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::NewProp_NumKrakenConfirmedFriendsInParty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::NewProp_NumKrakenConfirmedFriendsInParty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::NewProp_PartyMembersFriendshipStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyJoinFailureAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::NewProp_PartyMembersFriendshipStatus = { "PartyMembersFriendshipStatus", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartyJoinFailureAnalytics, PartyMembersFriendshipStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::NewProp_PartyMembersFriendshipStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::NewProp_PartyMembersFriendshipStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::NewProp_NumPlatformAcceptedFriendsInParty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::NewProp_NumKrakenConfirmedFriendsInParty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::NewProp_PartyMembersFriendshipStatus,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"PartyJoinFailureAnalytics",
		sizeof(FPartyJoinFailureAnalytics),
		alignof(FPartyJoinFailureAnalytics),
		Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PartyJoinFailureAnalytics"), sizeof(FPartyJoinFailureAnalytics), Get_Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPartyJoinFailureAnalytics_Hash() { return 2669185397U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
