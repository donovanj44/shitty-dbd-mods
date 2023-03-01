// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaAuricCellPacksUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaAuricCellPacksUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyPurchaseData();
// End Cross Module References
class UScriptStruct* FAtlantaAuricCellPacksUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaAuricCellPacksUIData"), sizeof(FAtlantaAuricCellPacksUIData), Get_Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaAuricCellPacksUIData>()
{
	return FAtlantaAuricCellPacksUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaAuricCellPacksUIData(FAtlantaAuricCellPacksUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaAuricCellPacksUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaAuricCellPacksUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaAuricCellPacksUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaAuricCellPacksUIData")),new UScriptStruct::TCppStructOps<FAtlantaAuricCellPacksUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaAuricCellPacksUIData;
	struct Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSet_MetaData[];
#endif
		static void NewProp_IsSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPurchaseBundleMultiplierEndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstPurchaseBundleMultiplierEndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPurchaseBundleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstPurchaseBundleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyPurchaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrencyPurchaseData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrencyPurchaseData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaAuricCellPacksUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaAuricCellPacksUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_IsSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaAuricCellPacksUIData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_IsSet_SetBit(void* Obj)
	{
		((FAtlantaAuricCellPacksUIData*)Obj)->IsSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_IsSet = { "IsSet", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaAuricCellPacksUIData), &Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_IsSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_IsSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_IsSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_FirstPurchaseBundleMultiplierEndDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaAuricCellPacksUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_FirstPurchaseBundleMultiplierEndDate = { "FirstPurchaseBundleMultiplierEndDate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaAuricCellPacksUIData, FirstPurchaseBundleMultiplierEndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_FirstPurchaseBundleMultiplierEndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_FirstPurchaseBundleMultiplierEndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_FirstPurchaseBundleMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaAuricCellPacksUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_FirstPurchaseBundleMultiplier = { "FirstPurchaseBundleMultiplier", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaAuricCellPacksUIData, FirstPurchaseBundleMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_FirstPurchaseBundleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_FirstPurchaseBundleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_CurrencyPurchaseData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaAuricCellPacksUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_CurrencyPurchaseData = { "CurrencyPurchaseData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaAuricCellPacksUIData, CurrencyPurchaseData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_CurrencyPurchaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_CurrencyPurchaseData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_CurrencyPurchaseData_Inner = { "CurrencyPurchaseData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCurrencyPurchaseData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_IsSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_FirstPurchaseBundleMultiplierEndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_FirstPurchaseBundleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_CurrencyPurchaseData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::NewProp_CurrencyPurchaseData_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AtlantaAuricCellPacksUIData",
		sizeof(FAtlantaAuricCellPacksUIData),
		alignof(FAtlantaAuricCellPacksUIData),
		Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaAuricCellPacksUIData"), sizeof(FAtlantaAuricCellPacksUIData), Get_Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaAuricCellPacksUIData_Hash() { return 1405545099U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
