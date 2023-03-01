// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/HillbillyAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHillbillyAnalytics() {}
// Cross Module References
	THEHILLBILLY_API UScriptStruct* Z_Construct_UScriptStruct_FHillbillyAnalytics();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
	THEHILLBILLY_API UScriptStruct* Z_Construct_UScriptStruct_FChainsawAnalytics();
	THEHILLBILLY_API UScriptStruct* Z_Construct_UScriptStruct_FChainsawEvent();
	THEHILLBILLY_API UScriptStruct* Z_Construct_UScriptStruct_FChainsawEventWhileCamping();
// End Cross Module References
class UScriptStruct* FHillbillyAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEHILLBILLY_API uint32 Get_Z_Construct_UScriptStruct_FHillbillyAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHillbillyAnalytics, Z_Construct_UPackage__Script_TheHillbilly(), TEXT("HillbillyAnalytics"), sizeof(FHillbillyAnalytics), Get_Z_Construct_UScriptStruct_FHillbillyAnalytics_Hash());
	}
	return Singleton;
}
template<> THEHILLBILLY_API UScriptStruct* StaticStruct<FHillbillyAnalytics>()
{
	return FHillbillyAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHillbillyAnalytics(FHillbillyAnalytics::StaticStruct, TEXT("/Script/TheHillbilly"), TEXT("HillbillyAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_TheHillbilly_StaticRegisterNativesFHillbillyAnalytics
{
	FScriptStruct_TheHillbilly_StaticRegisterNativesFHillbillyAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HillbillyAnalytics")),new UScriptStruct::TCppStructOps<FHillbillyAnalytics>);
	}
} ScriptStruct_TheHillbilly_StaticRegisterNativesFHillbillyAnalytics;
	struct Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevFromZeroHeatEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RevFromZeroHeatEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RevFromZeroHeatEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverheatWhileCampingEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverheatWhileCampingEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverheatWhileCampingEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverheatWhileSprintingEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverheatWhileSprintingEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverheatWhileSprintingEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverheatEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverheatEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverheatEvents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HillbillyAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHillbillyAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_RevFromZeroHeatEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/HillbillyAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_RevFromZeroHeatEvents = { "RevFromZeroHeatEvents", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHillbillyAnalytics, RevFromZeroHeatEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_RevFromZeroHeatEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_RevFromZeroHeatEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_RevFromZeroHeatEvents_Inner = { "RevFromZeroHeatEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChainsawEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatWhileCampingEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/HillbillyAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatWhileCampingEvents = { "OverheatWhileCampingEvents", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHillbillyAnalytics, OverheatWhileCampingEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatWhileCampingEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatWhileCampingEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatWhileCampingEvents_Inner = { "OverheatWhileCampingEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChainsawEventWhileCamping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatWhileSprintingEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/HillbillyAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatWhileSprintingEvents = { "OverheatWhileSprintingEvents", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHillbillyAnalytics, OverheatWhileSprintingEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatWhileSprintingEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatWhileSprintingEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatWhileSprintingEvents_Inner = { "OverheatWhileSprintingEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChainsawEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/HillbillyAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatEvents = { "OverheatEvents", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHillbillyAnalytics, OverheatEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatEvents_Inner = { "OverheatEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChainsawEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_RevFromZeroHeatEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_RevFromZeroHeatEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatWhileCampingEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatWhileCampingEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatWhileSprintingEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatWhileSprintingEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::NewProp_OverheatEvents_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
		Z_Construct_UScriptStruct_FChainsawAnalytics,
		&NewStructOps,
		"HillbillyAnalytics",
		sizeof(FHillbillyAnalytics),
		alignof(FHillbillyAnalytics),
		Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHillbillyAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHillbillyAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheHillbilly();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HillbillyAnalytics"), sizeof(FHillbillyAnalytics), Get_Z_Construct_UScriptStruct_FHillbillyAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHillbillyAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHillbillyAnalytics_Hash() { return 2841478846U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
