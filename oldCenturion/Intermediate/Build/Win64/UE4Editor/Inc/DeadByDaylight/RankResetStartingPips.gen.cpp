// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RankResetStartingPips.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRankResetStartingPips() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRankResetStartingPips();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FRankResetStartingPips::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FRankResetStartingPips_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRankResetStartingPips, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("RankResetStartingPips"), sizeof(FRankResetStartingPips), Get_Z_Construct_UScriptStruct_FRankResetStartingPips_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FRankResetStartingPips>()
{
	return FRankResetStartingPips::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRankResetStartingPips(FRankResetStartingPips::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("RankResetStartingPips"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFRankResetStartingPips
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFRankResetStartingPips()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RankResetStartingPips")),new UScriptStruct::TCppStructOps<FRankResetStartingPips>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFRankResetStartingPips;
	struct Z_Construct_UScriptStruct_FRankResetStartingPips_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPipAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewPipAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankResetStartingPips_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RankResetStartingPips.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRankResetStartingPips_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRankResetStartingPips>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankResetStartingPips_Statics::NewProp_NewPipAmount_MetaData[] = {
		{ "Category", "RankResetStartingPips" },
		{ "ModuleRelativePath", "Public/RankResetStartingPips.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRankResetStartingPips_Statics::NewProp_NewPipAmount = { "NewPipAmount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankResetStartingPips, NewPipAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankResetStartingPips_Statics::NewProp_NewPipAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankResetStartingPips_Statics::NewProp_NewPipAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRankResetStartingPips_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankResetStartingPips_Statics::NewProp_NewPipAmount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRankResetStartingPips_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"RankResetStartingPips",
		sizeof(FRankResetStartingPips),
		alignof(FRankResetStartingPips),
		Z_Construct_UScriptStruct_FRankResetStartingPips_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankResetStartingPips_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRankResetStartingPips_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankResetStartingPips_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRankResetStartingPips()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRankResetStartingPips_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RankResetStartingPips"), sizeof(FRankResetStartingPips), Get_Z_Construct_UScriptStruct_FRankResetStartingPips_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRankResetStartingPips_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRankResetStartingPips_Hash() { return 416818151U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
