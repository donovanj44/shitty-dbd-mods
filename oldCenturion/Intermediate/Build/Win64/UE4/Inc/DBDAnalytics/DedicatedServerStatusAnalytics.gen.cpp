// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/DedicatedServerStatusAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDedicatedServerStatusAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FDedicatedServerStatusAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("DedicatedServerStatusAnalytics"), sizeof(FDedicatedServerStatusAnalytics), Get_Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FDedicatedServerStatusAnalytics>()
{
	return FDedicatedServerStatusAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDedicatedServerStatusAnalytics(FDedicatedServerStatusAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("DedicatedServerStatusAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFDedicatedServerStatusAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFDedicatedServerStatusAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DedicatedServerStatusAnalytics")),new UScriptStruct::TCppStructOps<FDedicatedServerStatusAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFDedicatedServerStatusAnalytics;
	struct Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DnsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DnsName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IpAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IpAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FleetId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionEndReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionEndReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameLiftSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameLiftSessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DSSessionProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DSSessionProvider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerStatusAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDedicatedServerStatusAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_DnsName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerStatusAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_DnsName = { "DnsName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDedicatedServerStatusAnalytics, DnsName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_DnsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_DnsName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_Port_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerStatusAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDedicatedServerStatusAnalytics, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_IpAddress_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerStatusAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_IpAddress = { "IpAddress", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDedicatedServerStatusAnalytics, IpAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_IpAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_IpAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_FleetId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerStatusAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_FleetId = { "FleetId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDedicatedServerStatusAnalytics, FleetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_FleetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_FleetId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_SessionEndReason_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerStatusAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_SessionEndReason = { "SessionEndReason", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDedicatedServerStatusAnalytics, SessionEndReason), METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_SessionEndReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_SessionEndReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerStatusAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDedicatedServerStatusAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_GameLiftSessionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerStatusAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_GameLiftSessionId = { "GameLiftSessionId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDedicatedServerStatusAnalytics, GameLiftSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_GameLiftSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_GameLiftSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_ServerStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerStatusAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_ServerStatus = { "ServerStatus", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDedicatedServerStatusAnalytics, ServerStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_ServerStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_ServerStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_DSSessionProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerStatusAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_DSSessionProvider = { "DSSessionProvider", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDedicatedServerStatusAnalytics, DSSessionProvider), METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_DSSessionProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_DSSessionProvider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_DnsName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_IpAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_FleetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_SessionEndReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_GameLiftSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_ServerStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::NewProp_DSSessionProvider,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"DedicatedServerStatusAnalytics",
		sizeof(FDedicatedServerStatusAnalytics),
		alignof(FDedicatedServerStatusAnalytics),
		Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DedicatedServerStatusAnalytics"), sizeof(FDedicatedServerStatusAnalytics), Get_Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDedicatedServerStatusAnalytics_Hash() { return 1593784817U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
