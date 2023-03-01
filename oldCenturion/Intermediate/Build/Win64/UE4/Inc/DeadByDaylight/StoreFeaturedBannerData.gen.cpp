// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StoreFeaturedBannerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreFeaturedBannerData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStoreFeaturedBannerData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETextBannerPosition();
// End Cross Module References
class UScriptStruct* FStoreFeaturedBannerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoreFeaturedBannerData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("StoreFeaturedBannerData"), sizeof(FStoreFeaturedBannerData), Get_Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FStoreFeaturedBannerData>()
{
	return FStoreFeaturedBannerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStoreFeaturedBannerData(FStoreFeaturedBannerData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("StoreFeaturedBannerData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFStoreFeaturedBannerData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFStoreFeaturedBannerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StoreFeaturedBannerData")),new UScriptStruct::TCppStructOps<FStoreFeaturedBannerData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFStoreFeaturedBannerData;
	struct Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextPosition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextPosition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedCombinedOutfitId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssociatedCombinedOutfitId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedCombinedItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssociatedCombinedItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedDlcId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssociatedDlcId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Subtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StoreFeaturedBannerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoreFeaturedBannerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_TextPosition_MetaData[] = {
		{ "Category", "StoreFeaturedBannerData" },
		{ "ModuleRelativePath", "Public/StoreFeaturedBannerData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_TextPosition = { "TextPosition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreFeaturedBannerData, TextPosition), Z_Construct_UEnum_DeadByDaylight_ETextBannerPosition, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_TextPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_TextPosition_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_TextPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_AssociatedCombinedOutfitId_MetaData[] = {
		{ "Category", "StoreFeaturedBannerData" },
		{ "ModuleRelativePath", "Public/StoreFeaturedBannerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_AssociatedCombinedOutfitId = { "AssociatedCombinedOutfitId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreFeaturedBannerData, AssociatedCombinedOutfitId), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_AssociatedCombinedOutfitId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_AssociatedCombinedOutfitId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_AssociatedCombinedItemId_MetaData[] = {
		{ "Category", "StoreFeaturedBannerData" },
		{ "ModuleRelativePath", "Public/StoreFeaturedBannerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_AssociatedCombinedItemId = { "AssociatedCombinedItemId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreFeaturedBannerData, AssociatedCombinedItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_AssociatedCombinedItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_AssociatedCombinedItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_AssociatedDlcId_MetaData[] = {
		{ "Category", "StoreFeaturedBannerData" },
		{ "ModuleRelativePath", "Public/StoreFeaturedBannerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_AssociatedDlcId = { "AssociatedDlcId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreFeaturedBannerData, AssociatedDlcId), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_AssociatedDlcId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_AssociatedDlcId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_ImagePath_MetaData[] = {
		{ "Category", "StoreFeaturedBannerData" },
		{ "ModuleRelativePath", "Public/StoreFeaturedBannerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreFeaturedBannerData, ImagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_ImagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_ImagePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_Subtitle_MetaData[] = {
		{ "Category", "StoreFeaturedBannerData" },
		{ "ModuleRelativePath", "Public/StoreFeaturedBannerData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreFeaturedBannerData, Subtitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_Subtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_Subtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "StoreFeaturedBannerData" },
		{ "ModuleRelativePath", "Public/StoreFeaturedBannerData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreFeaturedBannerData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_Title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_TextPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_TextPosition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_AssociatedCombinedOutfitId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_AssociatedCombinedItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_AssociatedDlcId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_ImagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_Subtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::NewProp_Title,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"StoreFeaturedBannerData",
		sizeof(FStoreFeaturedBannerData),
		alignof(FStoreFeaturedBannerData),
		Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStoreFeaturedBannerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StoreFeaturedBannerData"), sizeof(FStoreFeaturedBannerData), Get_Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStoreFeaturedBannerData_Hash() { return 3591681694U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
