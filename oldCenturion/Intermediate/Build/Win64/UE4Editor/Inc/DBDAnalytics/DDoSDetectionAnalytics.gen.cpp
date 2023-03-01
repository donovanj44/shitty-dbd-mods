// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/DDoSDetectionAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDoSDetectionAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FDDoSDetectionAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FDDoSDetectionAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("DDoSDetectionAnalytics"), sizeof(FDDoSDetectionAnalytics), Get_Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FDDoSDetectionAnalytics>()
{
	return FDDoSDetectionAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDDoSDetectionAnalytics(FDDoSDetectionAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("DDoSDetectionAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFDDoSDetectionAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFDDoSDetectionAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DDoSDetectionAnalytics")),new UScriptStruct::TCppStructOps<FDDoSDetectionAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFDDoSDetectionAnalytics;
	struct Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroppedPacketCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DroppedPacketCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorPacketCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorPacketCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BadPacketCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BadPacketCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisconnPacketCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisconnPacketCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetConnPacketCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NetConnPacketCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonConnPacketCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NonConnPacketCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Severity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Severity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDoSDetectionAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDDoSDetectionAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_DroppedPacketCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/DDoSDetectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_DroppedPacketCounter = { "DroppedPacketCounter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDDoSDetectionAnalytics, DroppedPacketCounter), METADATA_PARAMS(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_DroppedPacketCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_DroppedPacketCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_ErrorPacketCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/DDoSDetectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_ErrorPacketCounter = { "ErrorPacketCounter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDDoSDetectionAnalytics, ErrorPacketCounter), METADATA_PARAMS(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_ErrorPacketCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_ErrorPacketCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_BadPacketCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/DDoSDetectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_BadPacketCounter = { "BadPacketCounter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDDoSDetectionAnalytics, BadPacketCounter), METADATA_PARAMS(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_BadPacketCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_BadPacketCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_DisconnPacketCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/DDoSDetectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_DisconnPacketCounter = { "DisconnPacketCounter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDDoSDetectionAnalytics, DisconnPacketCounter), METADATA_PARAMS(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_DisconnPacketCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_DisconnPacketCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_NetConnPacketCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/DDoSDetectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_NetConnPacketCounter = { "NetConnPacketCounter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDDoSDetectionAnalytics, NetConnPacketCounter), METADATA_PARAMS(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_NetConnPacketCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_NetConnPacketCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_NonConnPacketCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/DDoSDetectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_NonConnPacketCounter = { "NonConnPacketCounter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDDoSDetectionAnalytics, NonConnPacketCounter), METADATA_PARAMS(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_NonConnPacketCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_NonConnPacketCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DDoSDetectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDDoSDetectionAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_Severity_MetaData[] = {
		{ "ModuleRelativePath", "Public/DDoSDetectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDDoSDetectionAnalytics, Severity), METADATA_PARAMS(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_Severity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_Severity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_DroppedPacketCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_ErrorPacketCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_BadPacketCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_DisconnPacketCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_NetConnPacketCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_NonConnPacketCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::NewProp_Severity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"DDoSDetectionAnalytics",
		sizeof(FDDoSDetectionAnalytics),
		alignof(FDDoSDetectionAnalytics),
		Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDDoSDetectionAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DDoSDetectionAnalytics"), sizeof(FDDoSDetectionAnalytics), Get_Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDDoSDetectionAnalytics_Hash() { return 483709803U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
