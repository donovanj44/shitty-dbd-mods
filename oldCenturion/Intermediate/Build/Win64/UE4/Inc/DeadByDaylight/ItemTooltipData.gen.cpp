// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ItemTooltipData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemTooltipData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemTooltipData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBaseTooltipData();
// End Cross Module References
class UScriptStruct* FItemTooltipData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FItemTooltipData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemTooltipData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ItemTooltipData"), sizeof(FItemTooltipData), Get_Z_Construct_UScriptStruct_FItemTooltipData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FItemTooltipData>()
{
	return FItemTooltipData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemTooltipData(FItemTooltipData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ItemTooltipData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFItemTooltipData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFItemTooltipData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemTooltipData")),new UScriptStruct::TCppStructOps<FItemTooltipData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFItemTooltipData;
	struct Z_Construct_UScriptStruct_FItemTooltipData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTooltipData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemTooltipData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemTooltipData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemTooltipData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemTooltipData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FBaseTooltipData,
		&NewStructOps,
		"ItemTooltipData",
		sizeof(FItemTooltipData),
		alignof(FItemTooltipData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemTooltipData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTooltipData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemTooltipData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemTooltipData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemTooltipData"), sizeof(FItemTooltipData), Get_Z_Construct_UScriptStruct_FItemTooltipData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemTooltipData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemTooltipData_Hash() { return 3513680853U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
