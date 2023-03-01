// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/TinkererUndetectableInterruptAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTinkererUndetectableInterruptAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBasePerkAnalytics();
// End Cross Module References
class UScriptStruct* FTinkererUndetectableInterruptAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("TinkererUndetectableInterruptAnalytics"), sizeof(FTinkererUndetectableInterruptAnalytics), Get_Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FTinkererUndetectableInterruptAnalytics>()
{
	return FTinkererUndetectableInterruptAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTinkererUndetectableInterruptAnalytics(FTinkererUndetectableInterruptAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("TinkererUndetectableInterruptAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFTinkererUndetectableInterruptAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFTinkererUndetectableInterruptAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TinkererUndetectableInterruptAnalytics")),new UScriptStruct::TCppStructOps<FTinkererUndetectableInterruptAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFTinkererUndetectableInterruptAnalytics;
	struct Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterruptingSlasherMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InterruptingSlasherMirrorsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterruptedSurvivorMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InterruptedSurvivorMirrorsId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TinkererUndetectableInterruptAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTinkererUndetectableInterruptAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::NewProp_InterruptingSlasherMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/TinkererUndetectableInterruptAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::NewProp_InterruptingSlasherMirrorsId = { "InterruptingSlasherMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTinkererUndetectableInterruptAnalytics, InterruptingSlasherMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::NewProp_InterruptingSlasherMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::NewProp_InterruptingSlasherMirrorsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::NewProp_InterruptedSurvivorMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/TinkererUndetectableInterruptAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::NewProp_InterruptedSurvivorMirrorsId = { "InterruptedSurvivorMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTinkererUndetectableInterruptAnalytics, InterruptedSurvivorMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::NewProp_InterruptedSurvivorMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::NewProp_InterruptedSurvivorMirrorsId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::NewProp_InterruptingSlasherMirrorsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::NewProp_InterruptedSurvivorMirrorsId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBasePerkAnalytics,
		&NewStructOps,
		"TinkererUndetectableInterruptAnalytics",
		sizeof(FTinkererUndetectableInterruptAnalytics),
		alignof(FTinkererUndetectableInterruptAnalytics),
		Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TinkererUndetectableInterruptAnalytics"), sizeof(FTinkererUndetectableInterruptAnalytics), Get_Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTinkererUndetectableInterruptAnalytics_Hash() { return 1443773339U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
