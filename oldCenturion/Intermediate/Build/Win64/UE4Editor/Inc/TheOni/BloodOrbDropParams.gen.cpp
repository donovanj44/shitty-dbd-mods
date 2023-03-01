// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/BloodOrbDropParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodOrbDropParams() {}
// Cross Module References
	THEONI_API UScriptStruct* Z_Construct_UScriptStruct_FBloodOrbDropParams();
	UPackage* Z_Construct_UPackage__Script_TheOni();
// End Cross Module References
class UScriptStruct* FBloodOrbDropParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEONI_API uint32 Get_Z_Construct_UScriptStruct_FBloodOrbDropParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBloodOrbDropParams, Z_Construct_UPackage__Script_TheOni(), TEXT("BloodOrbDropParams"), sizeof(FBloodOrbDropParams), Get_Z_Construct_UScriptStruct_FBloodOrbDropParams_Hash());
	}
	return Singleton;
}
template<> THEONI_API UScriptStruct* StaticStruct<FBloodOrbDropParams>()
{
	return FBloodOrbDropParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBloodOrbDropParams(FBloodOrbDropParams::StaticStruct, TEXT("/Script/TheOni"), TEXT("BloodOrbDropParams"), false, nullptr, nullptr);
static struct FScriptStruct_TheOni_StaticRegisterNativesFBloodOrbDropParams
{
	FScriptStruct_TheOni_StaticRegisterNativesFBloodOrbDropParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BloodOrbDropParams")),new UScriptStruct::TCppStructOps<FBloodOrbDropParams>);
	}
} ScriptStruct_TheOni_StaticRegisterNativesFBloodOrbDropParams;
	struct Z_Construct_UScriptStruct_FBloodOrbDropParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodOrbDropParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BloodOrbDropParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBloodOrbDropParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBloodOrbDropParams>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBloodOrbDropParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
		nullptr,
		&NewStructOps,
		"BloodOrbDropParams",
		sizeof(FBloodOrbDropParams),
		alignof(FBloodOrbDropParams),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodOrbDropParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodOrbDropParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBloodOrbDropParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBloodOrbDropParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheOni();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BloodOrbDropParams"), sizeof(FBloodOrbDropParams), Get_Z_Construct_UScriptStruct_FBloodOrbDropParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBloodOrbDropParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBloodOrbDropParams_Hash() { return 902470300U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
