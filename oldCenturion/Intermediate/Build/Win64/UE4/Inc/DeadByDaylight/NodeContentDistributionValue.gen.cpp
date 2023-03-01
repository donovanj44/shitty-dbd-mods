// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/NodeContentDistributionValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeContentDistributionValue() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FNodeContentDistributionValue();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FNodeContentDistributionValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FNodeContentDistributionValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeContentDistributionValue, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("NodeContentDistributionValue"), sizeof(FNodeContentDistributionValue), Get_Z_Construct_UScriptStruct_FNodeContentDistributionValue_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FNodeContentDistributionValue>()
{
	return FNodeContentDistributionValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeContentDistributionValue(FNodeContentDistributionValue::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("NodeContentDistributionValue"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFNodeContentDistributionValue
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFNodeContentDistributionValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeContentDistributionValue")),new UScriptStruct::TCppStructOps<FNodeContentDistributionValue>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFNodeContentDistributionValue;
	struct Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chests_MaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Chests_MaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chests_MinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Chests_MinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chests_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Chests_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddOn_MaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddOn_MaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddOn_MinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddOn_MinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddOn_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddOn_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Items_MaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Items_MinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Items_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offerings_MaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offerings_MaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offerings_MinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offerings_MinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offerings_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offerings_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerksPacks_MaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerksPacks_MaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerksPacks_MinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerksPacks_MinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerksPacks_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerksPacks_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Perks_MaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Perks_MaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Perks_MinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Perks_MinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Perks_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Perks_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Empty_MaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Empty_MaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Empty_MinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Empty_MinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Empty_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Empty_Weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeContentDistributionValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Chests_MaxCount_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Chests_MaxCount = { "Chests_MaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, Chests_MaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Chests_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Chests_MaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Chests_MinCount_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Chests_MinCount = { "Chests_MinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, Chests_MinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Chests_MinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Chests_MinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Chests_Weight_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Chests_Weight = { "Chests_Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, Chests_Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Chests_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Chests_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_AddOn_MaxCount_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_AddOn_MaxCount = { "AddOn_MaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, AddOn_MaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_AddOn_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_AddOn_MaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_AddOn_MinCount_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_AddOn_MinCount = { "AddOn_MinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, AddOn_MinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_AddOn_MinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_AddOn_MinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_AddOn_Weight_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_AddOn_Weight = { "AddOn_Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, AddOn_Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_AddOn_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_AddOn_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Items_MaxCount_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Items_MaxCount = { "Items_MaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, Items_MaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Items_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Items_MaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Items_MinCount_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Items_MinCount = { "Items_MinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, Items_MinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Items_MinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Items_MinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Items_Weight_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Items_Weight = { "Items_Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, Items_Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Items_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Items_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Offerings_MaxCount_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Offerings_MaxCount = { "Offerings_MaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, Offerings_MaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Offerings_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Offerings_MaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Offerings_MinCount_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Offerings_MinCount = { "Offerings_MinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, Offerings_MinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Offerings_MinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Offerings_MinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Offerings_Weight_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Offerings_Weight = { "Offerings_Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, Offerings_Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Offerings_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Offerings_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_PerksPacks_MaxCount_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_PerksPacks_MaxCount = { "PerksPacks_MaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, PerksPacks_MaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_PerksPacks_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_PerksPacks_MaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_PerksPacks_MinCount_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_PerksPacks_MinCount = { "PerksPacks_MinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, PerksPacks_MinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_PerksPacks_MinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_PerksPacks_MinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_PerksPacks_Weight_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_PerksPacks_Weight = { "PerksPacks_Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, PerksPacks_Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_PerksPacks_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_PerksPacks_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Perks_MaxCount_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Perks_MaxCount = { "Perks_MaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, Perks_MaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Perks_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Perks_MaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Perks_MinCount_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Perks_MinCount = { "Perks_MinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, Perks_MinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Perks_MinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Perks_MinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Perks_Weight_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Perks_Weight = { "Perks_Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, Perks_Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Perks_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Perks_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Empty_MaxCount_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Empty_MaxCount = { "Empty_MaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, Empty_MaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Empty_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Empty_MaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Empty_MinCount_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Empty_MinCount = { "Empty_MinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, Empty_MinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Empty_MinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Empty_MinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Empty_Weight_MetaData[] = {
		{ "Category", "NodeContentDistributionValue" },
		{ "ModuleRelativePath", "Public/NodeContentDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Empty_Weight = { "Empty_Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeContentDistributionValue, Empty_Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Empty_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Empty_Weight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Chests_MaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Chests_MinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Chests_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_AddOn_MaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_AddOn_MinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_AddOn_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Items_MaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Items_MinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Items_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Offerings_MaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Offerings_MinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Offerings_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_PerksPacks_MaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_PerksPacks_MinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_PerksPacks_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Perks_MaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Perks_MinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Perks_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Empty_MaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Empty_MinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::NewProp_Empty_Weight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"NodeContentDistributionValue",
		sizeof(FNodeContentDistributionValue),
		alignof(FNodeContentDistributionValue),
		Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeContentDistributionValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeContentDistributionValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeContentDistributionValue"), sizeof(FNodeContentDistributionValue), Get_Z_Construct_UScriptStruct_FNodeContentDistributionValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNodeContentDistributionValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeContentDistributionValue_Hash() { return 570218197U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
