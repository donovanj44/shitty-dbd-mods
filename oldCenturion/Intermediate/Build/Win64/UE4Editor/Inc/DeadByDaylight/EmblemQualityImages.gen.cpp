// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EmblemQualityImages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmblemQualityImages() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEmblemQualityImages();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
class UScriptStruct* FEmblemQualityImages::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FEmblemQualityImages_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmblemQualityImages, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EmblemQualityImages"), sizeof(FEmblemQualityImages), Get_Z_Construct_UScriptStruct_FEmblemQualityImages_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FEmblemQualityImages>()
{
	return FEmblemQualityImages::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEmblemQualityImages(FEmblemQualityImages::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("EmblemQualityImages"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemQualityImages
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemQualityImages()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EmblemQualityImages")),new UScriptStruct::TCppStructOps<FEmblemQualityImages>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemQualityImages;
	struct Z_Construct_UScriptStruct_FEmblemQualityImages_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DarkImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DarkImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighlightImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HighlightImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EmblemQualityImages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmblemQualityImages>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::NewProp_DarkImage_MetaData[] = {
		{ "Category", "EmblemQualityImages" },
		{ "ModuleRelativePath", "Public/EmblemQualityImages.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::NewProp_DarkImage = { "DarkImage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemQualityImages, DarkImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::NewProp_DarkImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::NewProp_DarkImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::NewProp_HighlightImage_MetaData[] = {
		{ "Category", "EmblemQualityImages" },
		{ "ModuleRelativePath", "Public/EmblemQualityImages.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::NewProp_HighlightImage = { "HighlightImage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemQualityImages, HighlightImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::NewProp_HighlightImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::NewProp_HighlightImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::NewProp_DarkImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::NewProp_HighlightImage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"EmblemQualityImages",
		sizeof(FEmblemQualityImages),
		alignof(FEmblemQualityImages),
		Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEmblemQualityImages()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEmblemQualityImages_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EmblemQualityImages"), sizeof(FEmblemQualityImages), Get_Z_Construct_UScriptStruct_FEmblemQualityImages_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEmblemQualityImages_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEmblemQualityImages_Hash() { return 3927506802U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
