// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RichTextRewardRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextRewardRow() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRichTextRewardRow();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
// End Cross Module References
class UScriptStruct* FRichTextRewardRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FRichTextRewardRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRichTextRewardRow, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("RichTextRewardRow"), sizeof(FRichTextRewardRow), Get_Z_Construct_UScriptStruct_FRichTextRewardRow_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FRichTextRewardRow>()
{
	return FRichTextRewardRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRichTextRewardRow(FRichTextRewardRow::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("RichTextRewardRow"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFRichTextRewardRow
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFRichTextRewardRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RichTextRewardRow")),new UScriptStruct::TCppStructOps<FRichTextRewardRow>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFRichTextRewardRow;
	struct Z_Construct_UScriptStruct_FRichTextRewardRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TintsBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TintsBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RichTextRewardRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRichTextRewardRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "RichTextRewardRow" },
		{ "ModuleRelativePath", "Public/RichTextRewardRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichTextRewardRow, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_BackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_BackgroundBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_TintsBrush_MetaData[] = {
		{ "Category", "RichTextRewardRow" },
		{ "ModuleRelativePath", "Public/RichTextRewardRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_TintsBrush = { "TintsBrush", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichTextRewardRow, TintsBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_TintsBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_TintsBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_Brush_MetaData[] = {
		{ "Category", "RichTextRewardRow" },
		{ "ModuleRelativePath", "Public/RichTextRewardRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichTextRewardRow, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_Brush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_TextMargin_MetaData[] = {
		{ "Category", "RichTextRewardRow" },
		{ "ModuleRelativePath", "Public/RichTextRewardRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_TextMargin = { "TextMargin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichTextRewardRow, TextMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_TextMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_TextMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_TextStyle_MetaData[] = {
		{ "Category", "RichTextRewardRow" },
		{ "ModuleRelativePath", "Public/RichTextRewardRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichTextRewardRow, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_TextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_TextStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_BackgroundBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_TintsBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_Brush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_TextMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::NewProp_TextStyle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"RichTextRewardRow",
		sizeof(FRichTextRewardRow),
		alignof(FRichTextRewardRow),
		Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRichTextRewardRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRichTextRewardRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RichTextRewardRow"), sizeof(FRichTextRewardRow), Get_Z_Construct_UScriptStruct_FRichTextRewardRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRichTextRewardRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRichTextRewardRow_Hash() { return 3116452626U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
