// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CloudInventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloudInventoryItem() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCloudInventoryItem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FCloudInventoryItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCloudInventoryItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudInventoryItem, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CloudInventoryItem"), sizeof(FCloudInventoryItem), Get_Z_Construct_UScriptStruct_FCloudInventoryItem_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCloudInventoryItem>()
{
	return FCloudInventoryItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudInventoryItem(FCloudInventoryItem::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CloudInventoryItem"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCloudInventoryItem
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCloudInventoryItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CloudInventoryItem")),new UScriptStruct::TCppStructOps<FCloudInventoryItem>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCloudInventoryItem;
	struct Z_Construct_UScriptStruct_FCloudInventoryItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_InstanceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefinitionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefinitionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CloudInventoryItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudInventoryItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::NewProp_InstanceId_MetaData[] = {
		{ "ModuleRelativePath", "Public/CloudInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudInventoryItem, InstanceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::NewProp_DefinitionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/CloudInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::NewProp_DefinitionId = { "DefinitionId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudInventoryItem, DefinitionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::NewProp_DefinitionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::NewProp_DefinitionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::NewProp_InstanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::NewProp_DefinitionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CloudInventoryItem",
		sizeof(FCloudInventoryItem),
		alignof(FCloudInventoryItem),
		Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudInventoryItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudInventoryItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudInventoryItem"), sizeof(FCloudInventoryItem), Get_Z_Construct_UScriptStruct_FCloudInventoryItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudInventoryItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudInventoryItem_Hash() { return 562054402U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
