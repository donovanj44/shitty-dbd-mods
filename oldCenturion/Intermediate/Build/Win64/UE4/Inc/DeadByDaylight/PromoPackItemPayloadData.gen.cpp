// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PromoPackItemPayloadData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePromoPackItemPayloadData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPromoPackItemPayloadData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FPromoPackItemPayloadData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPromoPackItemPayloadData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPromoPackItemPayloadData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PromoPackItemPayloadData"), sizeof(FPromoPackItemPayloadData), Get_Z_Construct_UScriptStruct_FPromoPackItemPayloadData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPromoPackItemPayloadData>()
{
	return FPromoPackItemPayloadData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPromoPackItemPayloadData(FPromoPackItemPayloadData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PromoPackItemPayloadData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackItemPayloadData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackItemPayloadData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PromoPackItemPayloadData")),new UScriptStruct::TCppStructOps<FPromoPackItemPayloadData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackItemPayloadData;
	struct Z_Construct_UScriptStruct_FPromoPackItemPayloadData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackItemPayloadData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PromoPackItemPayloadData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPromoPackItemPayloadData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPromoPackItemPayloadData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPromoPackItemPayloadData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PromoPackItemPayloadData",
		sizeof(FPromoPackItemPayloadData),
		alignof(FPromoPackItemPayloadData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackItemPayloadData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackItemPayloadData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPromoPackItemPayloadData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPromoPackItemPayloadData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PromoPackItemPayloadData"), sizeof(FPromoPackItemPayloadData), Get_Z_Construct_UScriptStruct_FPromoPackItemPayloadData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPromoPackItemPayloadData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPromoPackItemPayloadData_Hash() { return 2136680417U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
