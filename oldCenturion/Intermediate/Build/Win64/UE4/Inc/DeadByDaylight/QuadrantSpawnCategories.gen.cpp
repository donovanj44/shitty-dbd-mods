// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/QuadrantSpawnCategories.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuadrantSpawnCategories() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FQuadrantSpawnCategories();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FQuadrantSpawnItem();
// End Cross Module References
class UScriptStruct* FQuadrantSpawnCategories::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuadrantSpawnCategories, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("QuadrantSpawnCategories"), sizeof(FQuadrantSpawnCategories), Get_Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FQuadrantSpawnCategories>()
{
	return FQuadrantSpawnCategories::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuadrantSpawnCategories(FQuadrantSpawnCategories::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("QuadrantSpawnCategories"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFQuadrantSpawnCategories
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFQuadrantSpawnCategories()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuadrantSpawnCategories")),new UScriptStruct::TCppStructOps<FQuadrantSpawnCategories>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFQuadrantSpawnCategories;
	struct Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuadrantSpawnTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_QuadrantSpawnTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuadrantSpawnCategories.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuadrantSpawnCategories>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "QuadrantSpawnCategories" },
		{ "ModuleRelativePath", "Public/QuadrantSpawnCategories.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuadrantSpawnCategories, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuadrantSpawnItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::NewProp_QuadrantSpawnTag_MetaData[] = {
		{ "Category", "QuadrantSpawnCategories" },
		{ "ModuleRelativePath", "Public/QuadrantSpawnCategories.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::NewProp_QuadrantSpawnTag = { "QuadrantSpawnTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuadrantSpawnCategories, QuadrantSpawnTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::NewProp_QuadrantSpawnTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::NewProp_QuadrantSpawnTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::NewProp_QuadrantSpawnTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"QuadrantSpawnCategories",
		sizeof(FQuadrantSpawnCategories),
		alignof(FQuadrantSpawnCategories),
		Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuadrantSpawnCategories()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuadrantSpawnCategories"), sizeof(FQuadrantSpawnCategories), Get_Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuadrantSpawnCategories_Hash() { return 2524583140U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
