// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/LamentConfigurationPlayerPossessionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLamentConfigurationPlayerPossessionData() {}
// Cross Module References
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
class UScriptStruct* FLamentConfigurationPlayerPossessionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEK25_API uint32 Get_Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData, Z_Construct_UPackage__Script_TheK25(), TEXT("LamentConfigurationPlayerPossessionData"), sizeof(FLamentConfigurationPlayerPossessionData), Get_Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Hash());
	}
	return Singleton;
}
template<> THEK25_API UScriptStruct* StaticStruct<FLamentConfigurationPlayerPossessionData>()
{
	return FLamentConfigurationPlayerPossessionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLamentConfigurationPlayerPossessionData(FLamentConfigurationPlayerPossessionData::StaticStruct, TEXT("/Script/TheK25"), TEXT("LamentConfigurationPlayerPossessionData"), false, nullptr, nullptr);
static struct FScriptStruct_TheK25_StaticRegisterNativesFLamentConfigurationPlayerPossessionData
{
	FScriptStruct_TheK25_StaticRegisterNativesFLamentConfigurationPlayerPossessionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LamentConfigurationPlayerPossessionData")),new UScriptStruct::TCppStructOps<FLamentConfigurationPlayerPossessionData>);
	}
} ScriptStruct_TheK25_StaticRegisterNativesFLamentConfigurationPlayerPossessionData;
	struct Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outcome_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Outcome;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropElapsedMatchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DropElapsedMatchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickUpElapsedMatchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PickUpElapsedMatchTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LamentConfigurationPlayerPossessionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLamentConfigurationPlayerPossessionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::NewProp_Outcome_MetaData[] = {
		{ "ModuleRelativePath", "Public/LamentConfigurationPlayerPossessionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLamentConfigurationPlayerPossessionData, Outcome), METADATA_PARAMS(Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::NewProp_Outcome_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::NewProp_Outcome_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::NewProp_DropElapsedMatchTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/LamentConfigurationPlayerPossessionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::NewProp_DropElapsedMatchTime = { "DropElapsedMatchTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLamentConfigurationPlayerPossessionData, DropElapsedMatchTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::NewProp_DropElapsedMatchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::NewProp_DropElapsedMatchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::NewProp_PickUpElapsedMatchTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/LamentConfigurationPlayerPossessionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::NewProp_PickUpElapsedMatchTime = { "PickUpElapsedMatchTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLamentConfigurationPlayerPossessionData, PickUpElapsedMatchTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::NewProp_PickUpElapsedMatchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::NewProp_PickUpElapsedMatchTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::NewProp_Outcome,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::NewProp_DropElapsedMatchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::NewProp_PickUpElapsedMatchTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
		nullptr,
		&NewStructOps,
		"LamentConfigurationPlayerPossessionData",
		sizeof(FLamentConfigurationPlayerPossessionData),
		alignof(FLamentConfigurationPlayerPossessionData),
		Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheK25();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LamentConfigurationPlayerPossessionData"), sizeof(FLamentConfigurationPlayerPossessionData), Get_Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLamentConfigurationPlayerPossessionData_Hash() { return 1130929017U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
