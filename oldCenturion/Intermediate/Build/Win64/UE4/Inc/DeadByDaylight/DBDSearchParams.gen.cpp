// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDSearchParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDSearchParams() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDSearchParams();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FDBDSearchParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDBDSearchParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDSearchParams, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DBDSearchParams"), sizeof(FDBDSearchParams), Get_Z_Construct_UScriptStruct_FDBDSearchParams_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDBDSearchParams>()
{
	return FDBDSearchParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDSearchParams(FDBDSearchParams::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DBDSearchParams"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDSearchParams
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDSearchParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDSearchParams")),new UScriptStruct::TCppStructOps<FDBDSearchParams>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDSearchParams;
	struct Z_Construct_UScriptStruct_FDBDSearchParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDSearchParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDSearchParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDSearchParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDSearchParams>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDSearchParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DBDSearchParams",
		sizeof(FDBDSearchParams),
		alignof(FDBDSearchParams),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDSearchParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDSearchParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDSearchParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDSearchParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDSearchParams"), sizeof(FDBDSearchParams), Get_Z_Construct_UScriptStruct_FDBDSearchParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDSearchParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDSearchParams_Hash() { return 2671251202U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
