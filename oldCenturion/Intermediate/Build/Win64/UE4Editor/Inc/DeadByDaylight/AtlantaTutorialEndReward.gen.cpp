// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaTutorialEndReward.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaTutorialEndReward() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaTutorialEndReward();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FAtlantaTutorialEndReward::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaTutorialEndReward, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaTutorialEndReward"), sizeof(FAtlantaTutorialEndReward), Get_Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaTutorialEndReward>()
{
	return FAtlantaTutorialEndReward::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaTutorialEndReward(FAtlantaTutorialEndReward::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaTutorialEndReward"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaTutorialEndReward
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaTutorialEndReward()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaTutorialEndReward")),new UScriptStruct::TCppStructOps<FAtlantaTutorialEndReward>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaTutorialEndReward;
	struct Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharactersRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharactersRewards;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharactersRewards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FearTokensReward_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FearTokensReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuricCellsRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AuricCellsRewards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodpointReward_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodpointReward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialEndReward.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaTutorialEndReward>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_CharactersRewards_MetaData[] = {
		{ "Category", "AtlantaTutorialEndReward" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialEndReward.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_CharactersRewards = { "CharactersRewards", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaTutorialEndReward, CharactersRewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_CharactersRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_CharactersRewards_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_CharactersRewards_Inner = { "CharactersRewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_FearTokensReward_MetaData[] = {
		{ "Category", "AtlantaTutorialEndReward" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialEndReward.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_FearTokensReward = { "FearTokensReward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaTutorialEndReward, FearTokensReward), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_FearTokensReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_FearTokensReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_AuricCellsRewards_MetaData[] = {
		{ "Category", "AtlantaTutorialEndReward" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialEndReward.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_AuricCellsRewards = { "AuricCellsRewards", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaTutorialEndReward, AuricCellsRewards), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_AuricCellsRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_AuricCellsRewards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_BloodpointReward_MetaData[] = {
		{ "Category", "AtlantaTutorialEndReward" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialEndReward.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_BloodpointReward = { "BloodpointReward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaTutorialEndReward, BloodpointReward), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_BloodpointReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_BloodpointReward_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_CharactersRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_CharactersRewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_FearTokensReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_AuricCellsRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::NewProp_BloodpointReward,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"AtlantaTutorialEndReward",
		sizeof(FAtlantaTutorialEndReward),
		alignof(FAtlantaTutorialEndReward),
		Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaTutorialEndReward()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaTutorialEndReward"), sizeof(FAtlantaTutorialEndReward), Get_Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaTutorialEndReward_Hash() { return 1693271761U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
