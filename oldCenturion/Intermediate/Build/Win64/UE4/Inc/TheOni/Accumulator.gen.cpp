// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/Accumulator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccumulator() {}
// Cross Module References
	THEONI_API UScriptStruct* Z_Construct_UScriptStruct_FAccumulator();
	UPackage* Z_Construct_UPackage__Script_TheOni();
// End Cross Module References
class UScriptStruct* FAccumulator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEONI_API uint32 Get_Z_Construct_UScriptStruct_FAccumulator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccumulator, Z_Construct_UPackage__Script_TheOni(), TEXT("Accumulator"), sizeof(FAccumulator), Get_Z_Construct_UScriptStruct_FAccumulator_Hash());
	}
	return Singleton;
}
template<> THEONI_API UScriptStruct* StaticStruct<FAccumulator>()
{
	return FAccumulator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccumulator(FAccumulator::StaticStruct, TEXT("/Script/TheOni"), TEXT("Accumulator"), false, nullptr, nullptr);
static struct FScriptStruct_TheOni_StaticRegisterNativesFAccumulator
{
	FScriptStruct_TheOni_StaticRegisterNativesFAccumulator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Accumulator")),new UScriptStruct::TCppStructOps<FAccumulator>);
	}
} ScriptStruct_TheOni_StaticRegisterNativesFAccumulator;
	struct Z_Construct_UScriptStruct_FAccumulator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccumulator_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Accumulator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccumulator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccumulator>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccumulator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
		nullptr,
		&NewStructOps,
		"Accumulator",
		sizeof(FAccumulator),
		alignof(FAccumulator),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccumulator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccumulator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccumulator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccumulator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheOni();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Accumulator"), sizeof(FAccumulator), Get_Z_Construct_UScriptStruct_FAccumulator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccumulator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccumulator_Hash() { return 2043517669U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
