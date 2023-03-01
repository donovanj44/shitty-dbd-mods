// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PromoPackCharacterPayloadData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePromoPackCharacterPayloadData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPromoPackCharacterPayloadData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPromoPackItemPayloadData();
// End Cross Module References
class UScriptStruct* FPromoPackCharacterPayloadData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPromoPackCharacterPayloadData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPromoPackCharacterPayloadData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PromoPackCharacterPayloadData"), sizeof(FPromoPackCharacterPayloadData), Get_Z_Construct_UScriptStruct_FPromoPackCharacterPayloadData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPromoPackCharacterPayloadData>()
{
	return FPromoPackCharacterPayloadData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPromoPackCharacterPayloadData(FPromoPackCharacterPayloadData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PromoPackCharacterPayloadData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackCharacterPayloadData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackCharacterPayloadData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PromoPackCharacterPayloadData")),new UScriptStruct::TCppStructOps<FPromoPackCharacterPayloadData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackCharacterPayloadData;
	struct Z_Construct_UScriptStruct_FPromoPackCharacterPayloadData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackCharacterPayloadData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PromoPackCharacterPayloadData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPromoPackCharacterPayloadData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPromoPackCharacterPayloadData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPromoPackCharacterPayloadData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FPromoPackItemPayloadData,
		&NewStructOps,
		"PromoPackCharacterPayloadData",
		sizeof(FPromoPackCharacterPayloadData),
		alignof(FPromoPackCharacterPayloadData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackCharacterPayloadData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackCharacterPayloadData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPromoPackCharacterPayloadData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPromoPackCharacterPayloadData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PromoPackCharacterPayloadData"), sizeof(FPromoPackCharacterPayloadData), Get_Z_Construct_UScriptStruct_FPromoPackCharacterPayloadData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPromoPackCharacterPayloadData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPromoPackCharacterPayloadData_Hash() { return 4108622494U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
