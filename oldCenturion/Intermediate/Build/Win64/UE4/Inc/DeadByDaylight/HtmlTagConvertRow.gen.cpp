// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/HtmlTagConvertRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHtmlTagConvertRow() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FHtmlTagConvertRow();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
class UScriptStruct* FHtmlTagConvertRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FHtmlTagConvertRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHtmlTagConvertRow, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("HtmlTagConvertRow"), sizeof(FHtmlTagConvertRow), Get_Z_Construct_UScriptStruct_FHtmlTagConvertRow_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FHtmlTagConvertRow>()
{
	return FHtmlTagConvertRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHtmlTagConvertRow(FHtmlTagConvertRow::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("HtmlTagConvertRow"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFHtmlTagConvertRow
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFHtmlTagConvertRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HtmlTagConvertRow")),new UScriptStruct::TCppStructOps<FHtmlTagConvertRow>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFHtmlTagConvertRow;
	struct Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RichTextTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RichTextTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HtmlTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HtmlTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HtmlTagConvertRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHtmlTagConvertRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::NewProp_RichTextTag_MetaData[] = {
		{ "Category", "HtmlTagConvertRow" },
		{ "ModuleRelativePath", "Public/HtmlTagConvertRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::NewProp_RichTextTag = { "RichTextTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHtmlTagConvertRow, RichTextTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::NewProp_RichTextTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::NewProp_RichTextTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::NewProp_HtmlTag_MetaData[] = {
		{ "Category", "HtmlTagConvertRow" },
		{ "ModuleRelativePath", "Public/HtmlTagConvertRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::NewProp_HtmlTag = { "HtmlTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHtmlTagConvertRow, HtmlTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::NewProp_HtmlTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::NewProp_HtmlTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::NewProp_RichTextTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::NewProp_HtmlTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"HtmlTagConvertRow",
		sizeof(FHtmlTagConvertRow),
		alignof(FHtmlTagConvertRow),
		Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHtmlTagConvertRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHtmlTagConvertRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HtmlTagConvertRow"), sizeof(FHtmlTagConvertRow), Get_Z_Construct_UScriptStruct_FHtmlTagConvertRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHtmlTagConvertRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHtmlTagConvertRow_Hash() { return 4068814918U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
