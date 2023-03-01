// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PromoPackPurchaseUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePromoPackPurchaseUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPromoPackPurchaseUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseCurrencyData();
// End Cross Module References
class UScriptStruct* FPromoPackPurchaseUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPromoPackPurchaseUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PromoPackPurchaseUIData"), sizeof(FPromoPackPurchaseUIData), Get_Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPromoPackPurchaseUIData>()
{
	return FPromoPackPurchaseUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPromoPackPurchaseUIData(FPromoPackPurchaseUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PromoPackPurchaseUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackPurchaseUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackPurchaseUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PromoPackPurchaseUIData")),new UScriptStruct::TCppStructOps<FPromoPackPurchaseUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackPurchaseUIData;
	struct Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasIridescentShards_MetaData[];
#endif
		static void NewProp_HasIridescentShards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasIridescentShards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IridescentShardsPurchaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IridescentShardsPurchaseData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasAuricCellsData_MetaData[];
#endif
		static void NewProp_HasAuricCellsData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasAuricCellsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuricCellsPurchaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AuricCellsPurchaseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PromoPackPurchaseUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPromoPackPurchaseUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_HasIridescentShards_MetaData[] = {
		{ "Category", "PromoPackPurchaseUIData" },
		{ "ModuleRelativePath", "Public/PromoPackPurchaseUIData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_HasIridescentShards_SetBit(void* Obj)
	{
		((FPromoPackPurchaseUIData*)Obj)->HasIridescentShards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_HasIridescentShards = { "HasIridescentShards", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPromoPackPurchaseUIData), &Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_HasIridescentShards_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_HasIridescentShards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_HasIridescentShards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_IridescentShardsPurchaseData_MetaData[] = {
		{ "Category", "PromoPackPurchaseUIData" },
		{ "ModuleRelativePath", "Public/PromoPackPurchaseUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_IridescentShardsPurchaseData = { "IridescentShardsPurchaseData", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPromoPackPurchaseUIData, IridescentShardsPurchaseData), Z_Construct_UScriptStruct_FPurchaseCurrencyData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_IridescentShardsPurchaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_IridescentShardsPurchaseData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_HasAuricCellsData_MetaData[] = {
		{ "Category", "PromoPackPurchaseUIData" },
		{ "ModuleRelativePath", "Public/PromoPackPurchaseUIData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_HasAuricCellsData_SetBit(void* Obj)
	{
		((FPromoPackPurchaseUIData*)Obj)->HasAuricCellsData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_HasAuricCellsData = { "HasAuricCellsData", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPromoPackPurchaseUIData), &Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_HasAuricCellsData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_HasAuricCellsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_HasAuricCellsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_AuricCellsPurchaseData_MetaData[] = {
		{ "Category", "PromoPackPurchaseUIData" },
		{ "ModuleRelativePath", "Public/PromoPackPurchaseUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_AuricCellsPurchaseData = { "AuricCellsPurchaseData", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPromoPackPurchaseUIData, AuricCellsPurchaseData), Z_Construct_UScriptStruct_FPurchaseCurrencyData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_AuricCellsPurchaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_AuricCellsPurchaseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_HasIridescentShards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_IridescentShardsPurchaseData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_HasAuricCellsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::NewProp_AuricCellsPurchaseData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PromoPackPurchaseUIData",
		sizeof(FPromoPackPurchaseUIData),
		alignof(FPromoPackPurchaseUIData),
		Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPromoPackPurchaseUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PromoPackPurchaseUIData"), sizeof(FPromoPackPurchaseUIData), Get_Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPromoPackPurchaseUIData_Hash() { return 267181960U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
