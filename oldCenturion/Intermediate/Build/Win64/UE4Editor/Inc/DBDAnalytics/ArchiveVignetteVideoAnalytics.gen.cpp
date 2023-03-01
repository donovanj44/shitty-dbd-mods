// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/ArchiveVignetteVideoAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveVignetteVideoAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FArchiveVignetteVideoAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("ArchiveVignetteVideoAnalytics"), sizeof(FArchiveVignetteVideoAnalytics), Get_Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FArchiveVignetteVideoAnalytics>()
{
	return FArchiveVignetteVideoAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchiveVignetteVideoAnalytics(FArchiveVignetteVideoAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("ArchiveVignetteVideoAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFArchiveVignetteVideoAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFArchiveVignetteVideoAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ArchiveVignetteVideoAnalytics")),new UScriptStruct::TCppStructOps<FArchiveVignetteVideoAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFArchiveVignetteVideoAnalytics;
	struct Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasVideoWatchUntilEnd_MetaData[];
#endif
		static void NewProp_WasVideoWatchUntilEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasVideoWatchUntilEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoTimeSpent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_VideoTimeSpent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartVideoTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartVideoTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VideoId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VignetteId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArchiveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ArchiveId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteVideoAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchiveVignetteVideoAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_WasVideoWatchUntilEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteVideoAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_WasVideoWatchUntilEnd_SetBit(void* Obj)
	{
		((FArchiveVignetteVideoAnalytics*)Obj)->WasVideoWatchUntilEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_WasVideoWatchUntilEnd = { "WasVideoWatchUntilEnd", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FArchiveVignetteVideoAnalytics), &Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_WasVideoWatchUntilEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_WasVideoWatchUntilEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_WasVideoWatchUntilEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_VideoTimeSpent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteVideoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_VideoTimeSpent = { "VideoTimeSpent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveVignetteVideoAnalytics, VideoTimeSpent), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_VideoTimeSpent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_VideoTimeSpent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_StartVideoTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteVideoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_StartVideoTimestamp = { "StartVideoTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveVignetteVideoAnalytics, StartVideoTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_StartVideoTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_StartVideoTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_VideoId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteVideoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_VideoId = { "VideoId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveVignetteVideoAnalytics, VideoId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_VideoId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_VideoId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_VignetteId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteVideoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_VignetteId = { "VignetteId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveVignetteVideoAnalytics, VignetteId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_VignetteId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_VignetteId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_ArchiveId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArchiveVignetteVideoAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_ArchiveId = { "ArchiveId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveVignetteVideoAnalytics, ArchiveId), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_ArchiveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_ArchiveId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_WasVideoWatchUntilEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_VideoTimeSpent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_StartVideoTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_VideoId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_VignetteId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::NewProp_ArchiveId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"ArchiveVignetteVideoAnalytics",
		sizeof(FArchiveVignetteVideoAnalytics),
		alignof(FArchiveVignetteVideoAnalytics),
		Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchiveVignetteVideoAnalytics"), sizeof(FArchiveVignetteVideoAnalytics), Get_Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchiveVignetteVideoAnalytics_Hash() { return 4202285638U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
