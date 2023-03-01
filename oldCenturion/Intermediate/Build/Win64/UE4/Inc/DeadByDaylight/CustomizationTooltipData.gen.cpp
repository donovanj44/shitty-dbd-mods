// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CustomizationTooltipData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizationTooltipData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationTooltipData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBaseTooltipData();
// End Cross Module References
class UScriptStruct* FCustomizationTooltipData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCustomizationTooltipData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizationTooltipData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CustomizationTooltipData"), sizeof(FCustomizationTooltipData), Get_Z_Construct_UScriptStruct_FCustomizationTooltipData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCustomizationTooltipData>()
{
	return FCustomizationTooltipData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomizationTooltipData(FCustomizationTooltipData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CustomizationTooltipData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomizationTooltipData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomizationTooltipData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomizationTooltipData")),new UScriptStruct::TCppStructOps<FCustomizationTooltipData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomizationTooltipData;
	struct Z_Construct_UScriptStruct_FCustomizationTooltipData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationTooltipData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationTooltipData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizationTooltipData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizationTooltipData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizationTooltipData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FBaseTooltipData,
		&NewStructOps,
		"CustomizationTooltipData",
		sizeof(FCustomizationTooltipData),
		alignof(FCustomizationTooltipData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationTooltipData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizationTooltipData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomizationTooltipData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomizationTooltipData"), sizeof(FCustomizationTooltipData), Get_Z_Construct_UScriptStruct_FCustomizationTooltipData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomizationTooltipData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomizationTooltipData_Hash() { return 3016369551U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
