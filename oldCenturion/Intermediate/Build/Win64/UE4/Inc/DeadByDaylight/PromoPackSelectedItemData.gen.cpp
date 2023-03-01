// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PromoPackSelectedItemData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePromoPackSelectedItemData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPromoPackSelectedItemData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPromoPackItemWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FPromoPackSelectedItemData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPromoPackSelectedItemData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PromoPackSelectedItemData"), sizeof(FPromoPackSelectedItemData), Get_Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPromoPackSelectedItemData>()
{
	return FPromoPackSelectedItemData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPromoPackSelectedItemData(FPromoPackSelectedItemData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PromoPackSelectedItemData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackSelectedItemData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackSelectedItemData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PromoPackSelectedItemData")),new UScriptStruct::TCppStructOps<FPromoPackSelectedItemData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackSelectedItemData;
	struct Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSubTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemSubTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemTypeIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemTypeIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PromoPackSelectedItemData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPromoPackSelectedItemData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PromoPackSelectedItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPromoPackSelectedItemData, Widget), Z_Construct_UClass_UUMGPromoPackItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "PromoPackSelectedItemData" },
		{ "ModuleRelativePath", "Public/PromoPackSelectedItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPromoPackSelectedItemData, ItemDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemSubTitle_MetaData[] = {
		{ "Category", "PromoPackSelectedItemData" },
		{ "ModuleRelativePath", "Public/PromoPackSelectedItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemSubTitle = { "ItemSubTitle", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPromoPackSelectedItemData, ItemSubTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemSubTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemSubTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "PromoPackSelectedItemData" },
		{ "ModuleRelativePath", "Public/PromoPackSelectedItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPromoPackSelectedItemData, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemTypeIcon_MetaData[] = {
		{ "Category", "PromoPackSelectedItemData" },
		{ "ModuleRelativePath", "Public/PromoPackSelectedItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemTypeIcon = { "ItemTypeIcon", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPromoPackSelectedItemData, ItemTypeIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemTypeIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemTypeIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemSubTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::NewProp_ItemTypeIcon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PromoPackSelectedItemData",
		sizeof(FPromoPackSelectedItemData),
		alignof(FPromoPackSelectedItemData),
		Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPromoPackSelectedItemData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PromoPackSelectedItemData"), sizeof(FPromoPackSelectedItemData), Get_Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPromoPackSelectedItemData_Hash() { return 1997926859U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
