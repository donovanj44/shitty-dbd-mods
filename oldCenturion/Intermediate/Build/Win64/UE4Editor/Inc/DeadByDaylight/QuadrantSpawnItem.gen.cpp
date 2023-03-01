// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/QuadrantSpawnItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuadrantSpawnItem() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FQuadrantSpawnItem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FWeightedItem();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EQuadrantSpawnType();
// End Cross Module References
class UScriptStruct* FQuadrantSpawnItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FQuadrantSpawnItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuadrantSpawnItem, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("QuadrantSpawnItem"), sizeof(FQuadrantSpawnItem), Get_Z_Construct_UScriptStruct_FQuadrantSpawnItem_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FQuadrantSpawnItem>()
{
	return FQuadrantSpawnItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuadrantSpawnItem(FQuadrantSpawnItem::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("QuadrantSpawnItem"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFQuadrantSpawnItem
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFQuadrantSpawnItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuadrantSpawnItem")),new UScriptStruct::TCppStructOps<FQuadrantSpawnItem>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFQuadrantSpawnItem;
	struct Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Elements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Elements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuadrantSpawnItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuadrantSpawnItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::NewProp_Elements_MetaData[] = {
		{ "Category", "QuadrantSpawnItem" },
		{ "ModuleRelativePath", "Public/QuadrantSpawnItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuadrantSpawnItem, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::NewProp_Elements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::NewProp_Elements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWeightedItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "QuadrantSpawnItem" },
		{ "ModuleRelativePath", "Public/QuadrantSpawnItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuadrantSpawnItem, Type), Z_Construct_UEnum_DeadByDaylight_EQuadrantSpawnType, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::NewProp_Elements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::NewProp_Elements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"QuadrantSpawnItem",
		sizeof(FQuadrantSpawnItem),
		alignof(FQuadrantSpawnItem),
		Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuadrantSpawnItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuadrantSpawnItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuadrantSpawnItem"), sizeof(FQuadrantSpawnItem), Get_Z_Construct_UScriptStruct_FQuadrantSpawnItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuadrantSpawnItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuadrantSpawnItem_Hash() { return 2663313971U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
