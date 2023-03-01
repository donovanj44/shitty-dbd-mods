// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LookInputScalingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookInputScalingData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLookInputScalingData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FLookInputScalingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLookInputScalingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLookInputScalingData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LookInputScalingData"), sizeof(FLookInputScalingData), Get_Z_Construct_UScriptStruct_FLookInputScalingData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLookInputScalingData>()
{
	return FLookInputScalingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLookInputScalingData(FLookInputScalingData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LookInputScalingData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLookInputScalingData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLookInputScalingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LookInputScalingData")),new UScriptStruct::TCppStructOps<FLookInputScalingData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLookInputScalingData;
	struct Z_Construct_UScriptStruct_FLookInputScalingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLookInputScalingData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LookInputScalingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLookInputScalingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLookInputScalingData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLookInputScalingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LookInputScalingData",
		sizeof(FLookInputScalingData),
		alignof(FLookInputScalingData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLookInputScalingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLookInputScalingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLookInputScalingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLookInputScalingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LookInputScalingData"), sizeof(FLookInputScalingData), Get_Z_Construct_UScriptStruct_FLookInputScalingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLookInputScalingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLookInputScalingData_Hash() { return 1636766131U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
