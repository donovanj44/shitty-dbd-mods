// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGhostface/Public/GhostKillerAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostKillerAnalytics() {}
// Cross Module References
	THEGHOSTFACE_API UScriptStruct* Z_Construct_UScriptStruct_FGhostKillerAnalytics();
	UPackage* Z_Construct_UPackage__Script_TheGhostface();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FGhostKillerAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEGHOSTFACE_API uint32 Get_Z_Construct_UScriptStruct_FGhostKillerAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGhostKillerAnalytics, Z_Construct_UPackage__Script_TheGhostface(), TEXT("GhostKillerAnalytics"), sizeof(FGhostKillerAnalytics), Get_Z_Construct_UScriptStruct_FGhostKillerAnalytics_Hash());
	}
	return Singleton;
}
template<> THEGHOSTFACE_API UScriptStruct* StaticStruct<FGhostKillerAnalytics>()
{
	return FGhostKillerAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGhostKillerAnalytics(FGhostKillerAnalytics::StaticStruct, TEXT("/Script/TheGhostface"), TEXT("GhostKillerAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_TheGhostface_StaticRegisterNativesFGhostKillerAnalytics
{
	FScriptStruct_TheGhostface_StaticRegisterNativesFGhostKillerAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GhostKillerAnalytics")),new UScriptStruct::TCppStructOps<FGhostKillerAnalytics>);
	}
} ScriptStruct_TheGhostface_StaticRegisterNativesFGhostKillerAnalytics;
	struct Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeInStealthMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInStealthMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownExposedSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DownExposedSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lean_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Lean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StalkLean100_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StalkLean100;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StalkLean75_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StalkLean75;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StalkLean50_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StalkLean50;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StalkLean25_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StalkLean25;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stalk100_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Stalk100;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stalk75_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Stalk75;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stalk50_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Stalk50;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stalk25_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Stalk25;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StalkStealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StalkStealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stalk_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Stalk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GhostKillerAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGhostKillerAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_TimeInStealthMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_TimeInStealthMode = { "TimeInStealthMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGhostKillerAnalytics, TimeInStealthMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_TimeInStealthMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_TimeInStealthMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_DownExposedSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_DownExposedSurvivor = { "DownExposedSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGhostKillerAnalytics, DownExposedSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_DownExposedSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_DownExposedSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Lean_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Lean = { "Lean", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGhostKillerAnalytics, Lean), METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Lean_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Lean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean100_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean100 = { "StalkLean100", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGhostKillerAnalytics, StalkLean100), METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean100_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean100_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean75_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean75 = { "StalkLean75", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGhostKillerAnalytics, StalkLean75), METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean75_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean75_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean50_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean50 = { "StalkLean50", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGhostKillerAnalytics, StalkLean50), METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean50_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean50_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean25_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean25 = { "StalkLean25", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGhostKillerAnalytics, StalkLean25), METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean25_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean25_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk100_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk100 = { "Stalk100", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGhostKillerAnalytics, Stalk100), METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk100_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk100_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk75_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk75 = { "Stalk75", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGhostKillerAnalytics, Stalk75), METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk75_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk75_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk50_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk50 = { "Stalk50", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGhostKillerAnalytics, Stalk50), METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk50_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk50_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk25_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk25 = { "Stalk25", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGhostKillerAnalytics, Stalk25), METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk25_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk25_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkStealth_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkStealth = { "StalkStealth", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGhostKillerAnalytics, StalkStealth), METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkStealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkStealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk = { "Stalk", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGhostKillerAnalytics, Stalk), METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/GhostKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGhostKillerAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_TimeInStealthMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_DownExposedSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Lean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean100,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean75,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean50,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkLean25,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk100,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk75,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk50,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk25,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_StalkStealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_Stalk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheGhostface,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"GhostKillerAnalytics",
		sizeof(FGhostKillerAnalytics),
		alignof(FGhostKillerAnalytics),
		Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGhostKillerAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGhostKillerAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheGhostface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GhostKillerAnalytics"), sizeof(FGhostKillerAnalytics), Get_Z_Construct_UScriptStruct_FGhostKillerAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGhostKillerAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGhostKillerAnalytics_Hash() { return 496569338U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
