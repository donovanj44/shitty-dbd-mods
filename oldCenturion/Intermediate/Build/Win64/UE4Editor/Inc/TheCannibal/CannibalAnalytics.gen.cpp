// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheCannibal/Public/CannibalAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannibalAnalytics() {}
// Cross Module References
	THECANNIBAL_API UScriptStruct* Z_Construct_UScriptStruct_FCannibalAnalytics();
	UPackage* Z_Construct_UPackage__Script_TheCannibal();
	THEHILLBILLY_API UScriptStruct* Z_Construct_UScriptStruct_FChainsawAnalytics();
	THEHILLBILLY_API UScriptStruct* Z_Construct_UScriptStruct_FChainsawEvent();
	THECANNIBAL_API UScriptStruct* Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge();
// End Cross Module References
class UScriptStruct* FCannibalAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THECANNIBAL_API uint32 Get_Z_Construct_UScriptStruct_FCannibalAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCannibalAnalytics, Z_Construct_UPackage__Script_TheCannibal(), TEXT("CannibalAnalytics"), sizeof(FCannibalAnalytics), Get_Z_Construct_UScriptStruct_FCannibalAnalytics_Hash());
	}
	return Singleton;
}
template<> THECANNIBAL_API UScriptStruct* StaticStruct<FCannibalAnalytics>()
{
	return FCannibalAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCannibalAnalytics(FCannibalAnalytics::StaticStruct, TEXT("/Script/TheCannibal"), TEXT("CannibalAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_TheCannibal_StaticRegisterNativesFCannibalAnalytics
{
	FScriptStruct_TheCannibal_StaticRegisterNativesFCannibalAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CannibalAnalytics")),new UScriptStruct::TCppStructOps<FCannibalAnalytics>);
	}
} ScriptStruct_TheCannibal_StaticRegisterNativesFCannibalAnalytics;
	struct Z_Construct_UScriptStruct_FCannibalAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevToTantrumEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RevToTantrumEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RevToTantrumEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitWithPowerChargeEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitWithPowerChargeEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitWithPowerChargeEvents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CannibalAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCannibalAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::NewProp_RevToTantrumEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/CannibalAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::NewProp_RevToTantrumEvents = { "RevToTantrumEvents", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCannibalAnalytics, RevToTantrumEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::NewProp_RevToTantrumEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::NewProp_RevToTantrumEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::NewProp_RevToTantrumEvents_Inner = { "RevToTantrumEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChainsawEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::NewProp_HitWithPowerChargeEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/CannibalAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::NewProp_HitWithPowerChargeEvents = { "HitWithPowerChargeEvents", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCannibalAnalytics, HitWithPowerChargeEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::NewProp_HitWithPowerChargeEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::NewProp_HitWithPowerChargeEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::NewProp_HitWithPowerChargeEvents_Inner = { "HitWithPowerChargeEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::NewProp_RevToTantrumEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::NewProp_RevToTantrumEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::NewProp_HitWithPowerChargeEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::NewProp_HitWithPowerChargeEvents_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheCannibal,
		Z_Construct_UScriptStruct_FChainsawAnalytics,
		&NewStructOps,
		"CannibalAnalytics",
		sizeof(FCannibalAnalytics),
		alignof(FCannibalAnalytics),
		Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCannibalAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCannibalAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheCannibal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CannibalAnalytics"), sizeof(FCannibalAnalytics), Get_Z_Construct_UScriptStruct_FCannibalAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCannibalAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCannibalAnalytics_Hash() { return 2396357425U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
