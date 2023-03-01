// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BlindPackData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlindPackData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBlindPackData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBaseItemData();
// End Cross Module References
class UScriptStruct* FBlindPackData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FBlindPackData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlindPackData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("BlindPackData"), sizeof(FBlindPackData), Get_Z_Construct_UScriptStruct_FBlindPackData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FBlindPackData>()
{
	return FBlindPackData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlindPackData(FBlindPackData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("BlindPackData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFBlindPackData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFBlindPackData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlindPackData")),new UScriptStruct::TCppStructOps<FBlindPackData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFBlindPackData;
	struct Z_Construct_UScriptStruct_FBlindPackData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlindPackData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlindPackData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlindPackData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlindPackData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlindPackData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FBaseItemData,
		&NewStructOps,
		"BlindPackData",
		sizeof(FBlindPackData),
		alignof(FBlindPackData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlindPackData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlindPackData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlindPackData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlindPackData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlindPackData"), sizeof(FBlindPackData), Get_Z_Construct_UScriptStruct_FBlindPackData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlindPackData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlindPackData_Hash() { return 716578690U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
