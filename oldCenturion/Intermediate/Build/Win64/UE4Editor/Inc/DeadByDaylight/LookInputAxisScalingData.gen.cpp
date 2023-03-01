// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LookInputAxisScalingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookInputAxisScalingData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLookInputAxisScalingData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTimer();
// End Cross Module References
class UScriptStruct* FLookInputAxisScalingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLookInputAxisScalingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLookInputAxisScalingData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LookInputAxisScalingData"), sizeof(FLookInputAxisScalingData), Get_Z_Construct_UScriptStruct_FLookInputAxisScalingData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLookInputAxisScalingData>()
{
	return FLookInputAxisScalingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLookInputAxisScalingData(FLookInputAxisScalingData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LookInputAxisScalingData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLookInputAxisScalingData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLookInputAxisScalingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LookInputAxisScalingData")),new UScriptStruct::TCppStructOps<FLookInputAxisScalingData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLookInputAxisScalingData;
	struct Z_Construct_UScriptStruct_FLookInputAxisScalingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalingTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScalingTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLookInputAxisScalingData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LookInputAxisScalingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLookInputAxisScalingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLookInputAxisScalingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLookInputAxisScalingData_Statics::NewProp_ScalingTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/LookInputAxisScalingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLookInputAxisScalingData_Statics::NewProp_ScalingTimer = { "ScalingTimer", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLookInputAxisScalingData, ScalingTimer), Z_Construct_UScriptStruct_FDBDTimer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLookInputAxisScalingData_Statics::NewProp_ScalingTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLookInputAxisScalingData_Statics::NewProp_ScalingTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLookInputAxisScalingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLookInputAxisScalingData_Statics::NewProp_ScalingTimer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLookInputAxisScalingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LookInputAxisScalingData",
		sizeof(FLookInputAxisScalingData),
		alignof(FLookInputAxisScalingData),
		Z_Construct_UScriptStruct_FLookInputAxisScalingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLookInputAxisScalingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLookInputAxisScalingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLookInputAxisScalingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLookInputAxisScalingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLookInputAxisScalingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LookInputAxisScalingData"), sizeof(FLookInputAxisScalingData), Get_Z_Construct_UScriptStruct_FLookInputAxisScalingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLookInputAxisScalingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLookInputAxisScalingData_Hash() { return 828851257U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
