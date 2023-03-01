// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SpecialEventEntryPopupData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecialEventEntryPopupData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventEntryPopupData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FSpecialEventEntryPopupData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpecialEventEntryPopupData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SpecialEventEntryPopupData"), sizeof(FSpecialEventEntryPopupData), Get_Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSpecialEventEntryPopupData>()
{
	return FSpecialEventEntryPopupData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpecialEventEntryPopupData(FSpecialEventEntryPopupData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SpecialEventEntryPopupData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventEntryPopupData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventEntryPopupData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpecialEventEntryPopupData")),new UScriptStruct::TCppStructOps<FSpecialEventEntryPopupData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventEntryPopupData;
	struct Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageBannerText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ImageBannerText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FrameLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpecialEventEntryPopupData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpecialEventEntryPopupData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_ImageBannerText_MetaData[] = {
		{ "Category", "SpecialEventEntryPopupData" },
		{ "ModuleRelativePath", "Public/SpecialEventEntryPopupData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_ImageBannerText = { "ImageBannerText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventEntryPopupData, ImageBannerText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_ImageBannerText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_ImageBannerText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_FrameLabel_MetaData[] = {
		{ "Category", "SpecialEventEntryPopupData" },
		{ "ModuleRelativePath", "Public/SpecialEventEntryPopupData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_FrameLabel = { "FrameLabel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventEntryPopupData, FrameLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_FrameLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_FrameLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_ImagePath_MetaData[] = {
		{ "Category", "SpecialEventEntryPopupData" },
		{ "ModuleRelativePath", "Public/SpecialEventEntryPopupData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventEntryPopupData, ImagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_ImagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_ImagePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "SpecialEventEntryPopupData" },
		{ "ModuleRelativePath", "Public/SpecialEventEntryPopupData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventEntryPopupData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "SpecialEventEntryPopupData" },
		{ "ModuleRelativePath", "Public/SpecialEventEntryPopupData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventEntryPopupData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_Title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_ImageBannerText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_FrameLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_ImagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::NewProp_Title,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SpecialEventEntryPopupData",
		sizeof(FSpecialEventEntryPopupData),
		alignof(FSpecialEventEntryPopupData),
		Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventEntryPopupData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpecialEventEntryPopupData"), sizeof(FSpecialEventEntryPopupData), Get_Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpecialEventEntryPopupData_Hash() { return 90850616U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
