// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ConditionalMaterialReplacer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConditionalMaterialReplacer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalMaterialReplacer();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialReplacerArray();
// End Cross Module References
class UScriptStruct* FConditionalMaterialReplacer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConditionalMaterialReplacer, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ConditionalMaterialReplacer"), sizeof(FConditionalMaterialReplacer), Get_Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FConditionalMaterialReplacer>()
{
	return FConditionalMaterialReplacer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConditionalMaterialReplacer(FConditionalMaterialReplacer::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ConditionalMaterialReplacer"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFConditionalMaterialReplacer
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFConditionalMaterialReplacer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConditionalMaterialReplacer")),new UScriptStruct::TCppStructOps<FConditionalMaterialReplacer>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFConditionalMaterialReplacer;
	struct Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionalMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ConditionalMaterials;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ConditionalMaterials_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalMaterials_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConditionalMaterialReplacer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConditionalMaterialReplacer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::NewProp_ConditionalMaterials_MetaData[] = {
		{ "Category", "ConditionalMaterialReplacer" },
		{ "ModuleRelativePath", "Public/ConditionalMaterialReplacer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::NewProp_ConditionalMaterials = { "ConditionalMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConditionalMaterialReplacer, ConditionalMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::NewProp_ConditionalMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::NewProp_ConditionalMaterials_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::NewProp_ConditionalMaterials_Key_KeyProp = { "ConditionalMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::NewProp_ConditionalMaterials_ValueProp = { "ConditionalMaterials", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMaterialReplacerArray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::NewProp_ItemTag_MetaData[] = {
		{ "Category", "ConditionalMaterialReplacer" },
		{ "ModuleRelativePath", "Public/ConditionalMaterialReplacer.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::NewProp_ItemTag = { "ItemTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConditionalMaterialReplacer, ItemTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::NewProp_ItemTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::NewProp_ItemTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::NewProp_ConditionalMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::NewProp_ConditionalMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::NewProp_ConditionalMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::NewProp_ItemTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ConditionalMaterialReplacer",
		sizeof(FConditionalMaterialReplacer),
		alignof(FConditionalMaterialReplacer),
		Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConditionalMaterialReplacer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConditionalMaterialReplacer"), sizeof(FConditionalMaterialReplacer), Get_Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConditionalMaterialReplacer_Hash() { return 1265062669U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
