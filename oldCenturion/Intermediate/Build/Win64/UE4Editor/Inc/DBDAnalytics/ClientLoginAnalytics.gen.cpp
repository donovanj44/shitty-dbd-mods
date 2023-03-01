// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/ClientLoginAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientLoginAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FClientLoginAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FClientLoginAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FClientLoginAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientLoginAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("ClientLoginAnalytics"), sizeof(FClientLoginAnalytics), Get_Z_Construct_UScriptStruct_FClientLoginAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FClientLoginAnalytics>()
{
	return FClientLoginAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientLoginAnalytics(FClientLoginAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("ClientLoginAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFClientLoginAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFClientLoginAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClientLoginAnalytics")),new UScriptStruct::TCppStructOps<FClientLoginAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFClientLoginAnalytics;
	struct Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoginResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientMirrorsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientPlatformAccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientPlatformAccountId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientKillerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientKillerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientSurvivorIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientSurvivorIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientRole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientGameType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientGameType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientMatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClientLoginAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientLoginAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_LoginResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClientLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_LoginResult = { "LoginResult", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginAnalytics, LoginResult), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_LoginResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_LoginResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClientLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientName = { "ClientName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginAnalytics, ClientName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClientLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientProvider = { "ClientProvider", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginAnalytics, ClientProvider), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientPlatform_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClientLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientPlatform = { "ClientPlatform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginAnalytics, ClientPlatform), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClientLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientMirrorsId = { "ClientMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginAnalytics, ClientMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientMirrorsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientPlatformAccountId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClientLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientPlatformAccountId = { "ClientPlatformAccountId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginAnalytics, ClientPlatformAccountId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientPlatformAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientPlatformAccountId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientKillerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClientLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientKillerIndex = { "ClientKillerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginAnalytics, ClientKillerIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientKillerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientKillerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientSurvivorIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClientLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientSurvivorIndex = { "ClientSurvivorIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginAnalytics, ClientSurvivorIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientSurvivorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientSurvivorIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClientLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientRole = { "ClientRole", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginAnalytics, ClientRole), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientRole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientGameType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClientLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientGameType = { "ClientGameType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginAnalytics, ClientGameType), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientGameType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientGameType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientMatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClientLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientMatchId = { "ClientMatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginAnalytics, ClientMatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientMatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientMatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientOptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClientLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientOptions = { "ClientOptions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginAnalytics, ClientOptions), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_LoginResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientMirrorsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientPlatformAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientKillerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientSurvivorIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientGameType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientMatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::NewProp_ClientOptions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"ClientLoginAnalytics",
		sizeof(FClientLoginAnalytics),
		alignof(FClientLoginAnalytics),
		Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientLoginAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientLoginAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientLoginAnalytics"), sizeof(FClientLoginAnalytics), Get_Z_Construct_UScriptStruct_FClientLoginAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientLoginAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientLoginAnalytics_Hash() { return 1389531600U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
