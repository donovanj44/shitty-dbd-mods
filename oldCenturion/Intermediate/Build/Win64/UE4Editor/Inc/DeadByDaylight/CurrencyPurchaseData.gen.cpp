// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CurrencyPurchaseData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrencyPurchaseData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyPurchaseData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FCurrencyPurchaseData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCurrencyPurchaseData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurrencyPurchaseData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CurrencyPurchaseData"), sizeof(FCurrencyPurchaseData), Get_Z_Construct_UScriptStruct_FCurrencyPurchaseData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCurrencyPurchaseData>()
{
	return FCurrencyPurchaseData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurrencyPurchaseData(FCurrencyPurchaseData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CurrencyPurchaseData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCurrencyPurchaseData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCurrencyPurchaseData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CurrencyPurchaseData")),new UScriptStruct::TCppStructOps<FCurrencyPurchaseData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCurrencyPurchaseData;
	struct Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasicCurrencyAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BasicCurrencyAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusEndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BonusEndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BonusPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayedPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayedPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrencyAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CurrencyPurchaseData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurrencyPurchaseData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_BasicCurrencyAmount_MetaData[] = {
		{ "Category", "CurrencyPurchaseData" },
		{ "ModuleRelativePath", "Public/CurrencyPurchaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_BasicCurrencyAmount = { "BasicCurrencyAmount", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyPurchaseData, BasicCurrencyAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_BasicCurrencyAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_BasicCurrencyAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_BonusEndDate_MetaData[] = {
		{ "Category", "CurrencyPurchaseData" },
		{ "ModuleRelativePath", "Public/CurrencyPurchaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_BonusEndDate = { "BonusEndDate", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyPurchaseData, BonusEndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_BonusEndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_BonusEndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_BonusPercentage_MetaData[] = {
		{ "Category", "CurrencyPurchaseData" },
		{ "ModuleRelativePath", "Public/CurrencyPurchaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_BonusPercentage = { "BonusPercentage", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyPurchaseData, BonusPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_BonusPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_BonusPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_DisplayedPrice_MetaData[] = {
		{ "Category", "CurrencyPurchaseData" },
		{ "ModuleRelativePath", "Public/CurrencyPurchaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_DisplayedPrice = { "DisplayedPrice", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyPurchaseData, DisplayedPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_DisplayedPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_DisplayedPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_CurrencyAmount_MetaData[] = {
		{ "Category", "CurrencyPurchaseData" },
		{ "ModuleRelativePath", "Public/CurrencyPurchaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_CurrencyAmount = { "CurrencyAmount", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyPurchaseData, CurrencyAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_CurrencyAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_CurrencyAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_CurrencyIcon_MetaData[] = {
		{ "Category", "CurrencyPurchaseData" },
		{ "ModuleRelativePath", "Public/CurrencyPurchaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_CurrencyIcon = { "CurrencyIcon", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyPurchaseData, CurrencyIcon), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_CurrencyIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_CurrencyIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_CurrencyName_MetaData[] = {
		{ "Category", "CurrencyPurchaseData" },
		{ "ModuleRelativePath", "Public/CurrencyPurchaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_CurrencyName = { "CurrencyName", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyPurchaseData, CurrencyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_CurrencyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_CurrencyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_IconPath_MetaData[] = {
		{ "Category", "CurrencyPurchaseData" },
		{ "ModuleRelativePath", "Public/CurrencyPurchaseData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_IconPath = { "IconPath", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyPurchaseData, IconPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_IconPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_IconPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_BasicCurrencyAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_BonusEndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_BonusPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_DisplayedPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_CurrencyAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_CurrencyIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_CurrencyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::NewProp_IconPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CurrencyPurchaseData",
		sizeof(FCurrencyPurchaseData),
		alignof(FCurrencyPurchaseData),
		Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurrencyPurchaseData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurrencyPurchaseData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurrencyPurchaseData"), sizeof(FCurrencyPurchaseData), Get_Z_Construct_UScriptStruct_FCurrencyPurchaseData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCurrencyPurchaseData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurrencyPurchaseData_Hash() { return 337624729U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
