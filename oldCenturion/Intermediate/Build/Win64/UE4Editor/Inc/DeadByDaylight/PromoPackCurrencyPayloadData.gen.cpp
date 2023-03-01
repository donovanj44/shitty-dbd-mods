// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PromoPackCurrencyPayloadData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePromoPackCurrencyPayloadData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPromoPackCurrencyPayloadData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPromoPackItemPayloadData();
// End Cross Module References
class UScriptStruct* FPromoPackCurrencyPayloadData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPromoPackCurrencyPayloadData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPromoPackCurrencyPayloadData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PromoPackCurrencyPayloadData"), sizeof(FPromoPackCurrencyPayloadData), Get_Z_Construct_UScriptStruct_FPromoPackCurrencyPayloadData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPromoPackCurrencyPayloadData>()
{
	return FPromoPackCurrencyPayloadData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPromoPackCurrencyPayloadData(FPromoPackCurrencyPayloadData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PromoPackCurrencyPayloadData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackCurrencyPayloadData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackCurrencyPayloadData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PromoPackCurrencyPayloadData")),new UScriptStruct::TCppStructOps<FPromoPackCurrencyPayloadData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackCurrencyPayloadData;
	struct Z_Construct_UScriptStruct_FPromoPackCurrencyPayloadData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackCurrencyPayloadData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PromoPackCurrencyPayloadData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPromoPackCurrencyPayloadData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPromoPackCurrencyPayloadData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPromoPackCurrencyPayloadData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FPromoPackItemPayloadData,
		&NewStructOps,
		"PromoPackCurrencyPayloadData",
		sizeof(FPromoPackCurrencyPayloadData),
		alignof(FPromoPackCurrencyPayloadData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackCurrencyPayloadData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackCurrencyPayloadData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPromoPackCurrencyPayloadData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPromoPackCurrencyPayloadData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PromoPackCurrencyPayloadData"), sizeof(FPromoPackCurrencyPayloadData), Get_Z_Construct_UScriptStruct_FPromoPackCurrencyPayloadData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPromoPackCurrencyPayloadData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPromoPackCurrencyPayloadData_Hash() { return 2706573908U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
