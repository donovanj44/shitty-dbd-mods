// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EmblemTooltipData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmblemTooltipData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEmblemTooltipData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBaseTooltipData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEmblemSlotData();
// End Cross Module References
class UScriptStruct* FEmblemTooltipData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FEmblemTooltipData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmblemTooltipData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EmblemTooltipData"), sizeof(FEmblemTooltipData), Get_Z_Construct_UScriptStruct_FEmblemTooltipData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FEmblemTooltipData>()
{
	return FEmblemTooltipData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEmblemTooltipData(FEmblemTooltipData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("EmblemTooltipData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemTooltipData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemTooltipData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EmblemTooltipData")),new UScriptStruct::TCppStructOps<FEmblemTooltipData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemTooltipData;
	struct Z_Construct_UScriptStruct_FEmblemTooltipData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmblemSlotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmblemSlotData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemTooltipData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EmblemTooltipData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEmblemTooltipData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmblemTooltipData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemTooltipData_Statics::NewProp_EmblemSlotData_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmblemTooltipData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEmblemTooltipData_Statics::NewProp_EmblemSlotData = { "EmblemSlotData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemTooltipData, EmblemSlotData), Z_Construct_UScriptStruct_FEmblemSlotData, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemTooltipData_Statics::NewProp_EmblemSlotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemTooltipData_Statics::NewProp_EmblemSlotData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEmblemTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemTooltipData_Statics::NewProp_EmblemSlotData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEmblemTooltipData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FBaseTooltipData,
		&NewStructOps,
		"EmblemTooltipData",
		sizeof(FEmblemTooltipData),
		alignof(FEmblemTooltipData),
		Z_Construct_UScriptStruct_FEmblemTooltipData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemTooltipData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemTooltipData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemTooltipData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEmblemTooltipData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEmblemTooltipData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EmblemTooltipData"), sizeof(FEmblemTooltipData), Get_Z_Construct_UScriptStruct_FEmblemTooltipData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEmblemTooltipData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEmblemTooltipData_Hash() { return 2592391226U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
