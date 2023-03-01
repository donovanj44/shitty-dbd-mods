// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/ReportAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReportAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FReportAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FReportAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FReportAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReportAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("ReportAnalytics"), sizeof(FReportAnalytics), Get_Z_Construct_UScriptStruct_FReportAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FReportAnalytics>()
{
	return FReportAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReportAnalytics(FReportAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("ReportAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFReportAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFReportAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReportAnalytics")),new UScriptStruct::TCppStructOps<FReportAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFReportAnalytics;
	struct Z_Construct_UScriptStruct_FReportAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comments_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReportCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReportCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReportType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReportType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleReceiver_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RoleReceiver;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoleReceiver_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleTransmitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RoleTransmitter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoleTransmitter_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorsIdReceiver_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MirrorsIdReceiver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorsIdTransmitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MirrorsIdTransmitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientIdReceiver_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientIdReceiver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientIdTransmitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientIdTransmitter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReportAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReportAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReportAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_Comments_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReportAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_Comments = { "Comments", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReportAnalytics, Comments), METADATA_PARAMS(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_Comments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_Comments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ReportCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReportAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ReportCategory = { "ReportCategory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReportAnalytics, ReportCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ReportCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ReportCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ReportType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReportAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ReportType = { "ReportType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReportAnalytics, ReportType), METADATA_PARAMS(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ReportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ReportType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReportAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReportAnalytics, GameMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReportAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReportAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_RoleReceiver_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReportAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_RoleReceiver = { "RoleReceiver", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReportAnalytics, RoleReceiver), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_RoleReceiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_RoleReceiver_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_RoleReceiver_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_RoleTransmitter_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReportAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_RoleTransmitter = { "RoleTransmitter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReportAnalytics, RoleTransmitter), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_RoleTransmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_RoleTransmitter_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_RoleTransmitter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_MirrorsIdReceiver_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReportAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_MirrorsIdReceiver = { "MirrorsIdReceiver", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReportAnalytics, MirrorsIdReceiver), METADATA_PARAMS(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_MirrorsIdReceiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_MirrorsIdReceiver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_MirrorsIdTransmitter_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReportAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_MirrorsIdTransmitter = { "MirrorsIdTransmitter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReportAnalytics, MirrorsIdTransmitter), METADATA_PARAMS(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_MirrorsIdTransmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_MirrorsIdTransmitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ClientIdReceiver_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReportAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ClientIdReceiver = { "ClientIdReceiver", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReportAnalytics, ClientIdReceiver), METADATA_PARAMS(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ClientIdReceiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ClientIdReceiver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ClientIdTransmitter_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReportAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ClientIdTransmitter = { "ClientIdTransmitter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReportAnalytics, ClientIdTransmitter), METADATA_PARAMS(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ClientIdTransmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ClientIdTransmitter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReportAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_Comments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ReportCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ReportType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_RoleReceiver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_RoleReceiver_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_RoleTransmitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_RoleTransmitter_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_MirrorsIdReceiver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_MirrorsIdTransmitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ClientIdReceiver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReportAnalytics_Statics::NewProp_ClientIdTransmitter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReportAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"ReportAnalytics",
		sizeof(FReportAnalytics),
		alignof(FReportAnalytics),
		Z_Construct_UScriptStruct_FReportAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReportAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReportAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReportAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReportAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReportAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReportAnalytics"), sizeof(FReportAnalytics), Get_Z_Construct_UScriptStruct_FReportAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReportAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReportAnalytics_Hash() { return 2833891658U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
