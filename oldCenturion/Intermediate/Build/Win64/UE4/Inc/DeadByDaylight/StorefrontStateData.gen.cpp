// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StorefrontStateData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStorefrontStateData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStorefrontStateData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FStorefrontStateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FStorefrontStateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStorefrontStateData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("StorefrontStateData"), sizeof(FStorefrontStateData), Get_Z_Construct_UScriptStruct_FStorefrontStateData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FStorefrontStateData>()
{
	return FStorefrontStateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStorefrontStateData(FStorefrontStateData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("StorefrontStateData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFStorefrontStateData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFStorefrontStateData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StorefrontStateData")),new UScriptStruct::TCppStructOps<FStorefrontStateData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFStorefrontStateData;
	struct Z_Construct_UScriptStruct_FStorefrontStateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStorefrontStateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StorefrontStateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStorefrontStateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStorefrontStateData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStorefrontStateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"StorefrontStateData",
		sizeof(FStorefrontStateData),
		alignof(FStorefrontStateData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStorefrontStateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStorefrontStateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStorefrontStateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStorefrontStateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StorefrontStateData"), sizeof(FStorefrontStateData), Get_Z_Construct_UScriptStruct_FStorefrontStateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStorefrontStateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStorefrontStateData_Hash() { return 3688992369U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
