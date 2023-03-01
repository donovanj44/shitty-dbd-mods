// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/DisconnectionAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisconnectionAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FDisconnectionAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FDisconnectionAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FDisconnectionAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisconnectionAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("DisconnectionAnalytics"), sizeof(FDisconnectionAnalytics), Get_Z_Construct_UScriptStruct_FDisconnectionAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FDisconnectionAnalytics>()
{
	return FDisconnectionAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDisconnectionAnalytics(FDisconnectionAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("DisconnectionAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFDisconnectionAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFDisconnectionAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DisconnectionAnalytics")),new UScriptStruct::TCppStructOps<FDisconnectionAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFDisconnectionAnalytics;
	struct Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailureType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FailureType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ThemeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnrealMapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnrealMapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameFlowStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameFlowStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSinceLastPacket_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSinceLastPacket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisconnectionAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisconnectionAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_ErrorString_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_ErrorString = { "ErrorString", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionAnalytics, ErrorString), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_ErrorString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_ErrorString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_FailureType_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionAnalytics, FailureType), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_FailureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_FailureType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_ThemeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_ThemeName = { "ThemeName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionAnalytics, ThemeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_ThemeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_ThemeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_MapName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionAnalytics, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_UnrealMapName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_UnrealMapName = { "UnrealMapName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionAnalytics, UnrealMapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_UnrealMapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_UnrealMapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_GameFlowStep_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_GameFlowStep = { "GameFlowStep", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionAnalytics, GameFlowStep), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_GameFlowStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_GameFlowStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_TimeSinceLastPacket_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisconnectionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_TimeSinceLastPacket = { "TimeSinceLastPacket", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisconnectionAnalytics, TimeSinceLastPacket), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_TimeSinceLastPacket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_TimeSinceLastPacket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_ErrorString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_FailureType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_ThemeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_UnrealMapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_GameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::NewProp_TimeSinceLastPacket,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"DisconnectionAnalytics",
		sizeof(FDisconnectionAnalytics),
		alignof(FDisconnectionAnalytics),
		Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisconnectionAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDisconnectionAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DisconnectionAnalytics"), sizeof(FDisconnectionAnalytics), Get_Z_Construct_UScriptStruct_FDisconnectionAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDisconnectionAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDisconnectionAnalytics_Hash() { return 1049118998U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
