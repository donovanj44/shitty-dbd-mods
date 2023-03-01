// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DedicatedSessionSearchCompletedEventData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDedicatedSessionSearchCompletedEventData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FDedicatedSessionSearchCompletedEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DedicatedSessionSearchCompletedEventData"), sizeof(FDedicatedSessionSearchCompletedEventData), Get_Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDedicatedSessionSearchCompletedEventData>()
{
	return FDedicatedSessionSearchCompletedEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDedicatedSessionSearchCompletedEventData(FDedicatedSessionSearchCompletedEventData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DedicatedSessionSearchCompletedEventData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDedicatedSessionSearchCompletedEventData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDedicatedSessionSearchCompletedEventData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DedicatedSessionSearchCompletedEventData")),new UScriptStruct::TCppStructOps<FDedicatedSessionSearchCompletedEventData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDedicatedSessionSearchCompletedEventData;
	struct Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameLiftSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameLiftSessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DedicatedSessionSearchCompletedEventData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDedicatedSessionSearchCompletedEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_DnsName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedSessionSearchCompletedEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_DnsName = { "DnsName", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDedicatedSessionSearchCompletedEventData, DnsName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_DnsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_DnsName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_Port_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedSessionSearchCompletedEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDedicatedSessionSearchCompletedEventData, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_IpAddress_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedSessionSearchCompletedEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_IpAddress = { "IpAddress", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDedicatedSessionSearchCompletedEventData, IpAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_IpAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_IpAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_FleetId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedSessionSearchCompletedEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_FleetId = { "FleetId", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDedicatedSessionSearchCompletedEventData, FleetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_FleetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_FleetId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedSessionSearchCompletedEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDedicatedSessionSearchCompletedEventData, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_GameLiftSessionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedSessionSearchCompletedEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_GameLiftSessionId = { "GameLiftSessionId", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDedicatedSessionSearchCompletedEventData, GameLiftSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_GameLiftSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_GameLiftSessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_DnsName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_IpAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_FleetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::NewProp_GameLiftSessionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DedicatedSessionSearchCompletedEventData",
		sizeof(FDedicatedSessionSearchCompletedEventData),
		alignof(FDedicatedSessionSearchCompletedEventData),
		Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DedicatedSessionSearchCompletedEventData"), sizeof(FDedicatedSessionSearchCompletedEventData), Get_Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDedicatedSessionSearchCompletedEventData_Hash() { return 3416920607U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
