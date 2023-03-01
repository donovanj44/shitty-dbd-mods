// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OfferingTriggerPositionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOfferingTriggerPositionData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOfferingTriggerPositionData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FOfferingTriggerPositionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOfferingTriggerPositionData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("OfferingTriggerPositionData"), sizeof(FOfferingTriggerPositionData), Get_Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FOfferingTriggerPositionData>()
{
	return FOfferingTriggerPositionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOfferingTriggerPositionData(FOfferingTriggerPositionData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("OfferingTriggerPositionData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFOfferingTriggerPositionData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFOfferingTriggerPositionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OfferingTriggerPositionData")),new UScriptStruct::TCppStructOps<FOfferingTriggerPositionData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFOfferingTriggerPositionData;
	struct Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CardIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CardIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OfferingTriggerPositionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOfferingTriggerPositionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_CardIndex_MetaData[] = {
		{ "Category", "OfferingTriggerPositionData" },
		{ "ModuleRelativePath", "Public/OfferingTriggerPositionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_CardIndex = { "CardIndex", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOfferingTriggerPositionData, CardIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_CardIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_CardIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_PosY_MetaData[] = {
		{ "Category", "OfferingTriggerPositionData" },
		{ "ModuleRelativePath", "Public/OfferingTriggerPositionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_PosY = { "PosY", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOfferingTriggerPositionData, PosY), METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_PosY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_PosY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_PosX_MetaData[] = {
		{ "Category", "OfferingTriggerPositionData" },
		{ "ModuleRelativePath", "Public/OfferingTriggerPositionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_PosX = { "PosX", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOfferingTriggerPositionData, PosX), METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_PosX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_PosX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "OfferingTriggerPositionData" },
		{ "ModuleRelativePath", "Public/OfferingTriggerPositionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOfferingTriggerPositionData, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_CardIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_PosY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_PosX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::NewProp_Index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"OfferingTriggerPositionData",
		sizeof(FOfferingTriggerPositionData),
		alignof(FOfferingTriggerPositionData),
		Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOfferingTriggerPositionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OfferingTriggerPositionData"), sizeof(FOfferingTriggerPositionData), Get_Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOfferingTriggerPositionData_Hash() { return 4204778717U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
