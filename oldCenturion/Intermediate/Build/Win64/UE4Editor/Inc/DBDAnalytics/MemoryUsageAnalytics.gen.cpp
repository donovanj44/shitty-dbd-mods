// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/MemoryUsageAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMemoryUsageAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FMemoryUsageAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FMemoryUsageAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMemoryUsageAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("MemoryUsageAnalytics"), sizeof(FMemoryUsageAnalytics), Get_Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FMemoryUsageAnalytics>()
{
	return FMemoryUsageAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMemoryUsageAnalytics(FMemoryUsageAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("MemoryUsageAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFMemoryUsageAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFMemoryUsageAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MemoryUsageAnalytics")),new UScriptStruct::TCppStructOps<FMemoryUsageAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFMemoryUsageAnalytics;
	struct Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableVirtual_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_AvailableVirtual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailablePhysical_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_AvailablePhysical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeakUsedVirtual_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_PeakUsedVirtual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeakUsedPhysical_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_PeakUsedPhysical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalVirtual_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_TotalVirtual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalPhysical_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_TotalPhysical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameFlowStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameFlowStep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MemoryUsageAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMemoryUsageAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_AvailableVirtual_MetaData[] = {
		{ "ModuleRelativePath", "Public/MemoryUsageAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_AvailableVirtual = { "AvailableVirtual", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMemoryUsageAnalytics, AvailableVirtual), METADATA_PARAMS(Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_AvailableVirtual_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_AvailableVirtual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_AvailablePhysical_MetaData[] = {
		{ "ModuleRelativePath", "Public/MemoryUsageAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_AvailablePhysical = { "AvailablePhysical", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMemoryUsageAnalytics, AvailablePhysical), METADATA_PARAMS(Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_AvailablePhysical_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_AvailablePhysical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_PeakUsedVirtual_MetaData[] = {
		{ "ModuleRelativePath", "Public/MemoryUsageAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_PeakUsedVirtual = { "PeakUsedVirtual", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMemoryUsageAnalytics, PeakUsedVirtual), METADATA_PARAMS(Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_PeakUsedVirtual_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_PeakUsedVirtual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_PeakUsedPhysical_MetaData[] = {
		{ "ModuleRelativePath", "Public/MemoryUsageAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_PeakUsedPhysical = { "PeakUsedPhysical", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMemoryUsageAnalytics, PeakUsedPhysical), METADATA_PARAMS(Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_PeakUsedPhysical_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_PeakUsedPhysical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_TotalVirtual_MetaData[] = {
		{ "ModuleRelativePath", "Public/MemoryUsageAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_TotalVirtual = { "TotalVirtual", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMemoryUsageAnalytics, TotalVirtual), METADATA_PARAMS(Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_TotalVirtual_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_TotalVirtual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_TotalPhysical_MetaData[] = {
		{ "ModuleRelativePath", "Public/MemoryUsageAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_TotalPhysical = { "TotalPhysical", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMemoryUsageAnalytics, TotalPhysical), METADATA_PARAMS(Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_TotalPhysical_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_TotalPhysical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_GameFlowStep_MetaData[] = {
		{ "ModuleRelativePath", "Public/MemoryUsageAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_GameFlowStep = { "GameFlowStep", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMemoryUsageAnalytics, GameFlowStep), METADATA_PARAMS(Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_GameFlowStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_GameFlowStep_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_AvailableVirtual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_AvailablePhysical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_PeakUsedVirtual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_PeakUsedPhysical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_TotalVirtual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_TotalPhysical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::NewProp_GameFlowStep,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"MemoryUsageAnalytics",
		sizeof(FMemoryUsageAnalytics),
		alignof(FMemoryUsageAnalytics),
		Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMemoryUsageAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MemoryUsageAnalytics"), sizeof(FMemoryUsageAnalytics), Get_Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMemoryUsageAnalytics_Hash() { return 3370838063U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
