// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Activation/Public/DependencyBasedActivationStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDependencyBasedActivationStrategy() {}
// Cross Module References
	ACTIVATION_API UScriptStruct* Z_Construct_UScriptStruct_FDependencyBasedActivationStrategy();
	UPackage* Z_Construct_UPackage__Script_Activation();
// End Cross Module References
class UScriptStruct* FDependencyBasedActivationStrategy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIVATION_API uint32 Get_Z_Construct_UScriptStruct_FDependencyBasedActivationStrategy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDependencyBasedActivationStrategy, Z_Construct_UPackage__Script_Activation(), TEXT("DependencyBasedActivationStrategy"), sizeof(FDependencyBasedActivationStrategy), Get_Z_Construct_UScriptStruct_FDependencyBasedActivationStrategy_Hash());
	}
	return Singleton;
}
template<> ACTIVATION_API UScriptStruct* StaticStruct<FDependencyBasedActivationStrategy>()
{
	return FDependencyBasedActivationStrategy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDependencyBasedActivationStrategy(FDependencyBasedActivationStrategy::StaticStruct, TEXT("/Script/Activation"), TEXT("DependencyBasedActivationStrategy"), false, nullptr, nullptr);
static struct FScriptStruct_Activation_StaticRegisterNativesFDependencyBasedActivationStrategy
{
	FScriptStruct_Activation_StaticRegisterNativesFDependencyBasedActivationStrategy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DependencyBasedActivationStrategy")),new UScriptStruct::TCppStructOps<FDependencyBasedActivationStrategy>);
	}
} ScriptStruct_Activation_StaticRegisterNativesFDependencyBasedActivationStrategy;
	struct Z_Construct_UScriptStruct_FDependencyBasedActivationStrategy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDependencyBasedActivationStrategy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DependencyBasedActivationStrategy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDependencyBasedActivationStrategy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDependencyBasedActivationStrategy>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDependencyBasedActivationStrategy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Activation,
		nullptr,
		&NewStructOps,
		"DependencyBasedActivationStrategy",
		sizeof(FDependencyBasedActivationStrategy),
		alignof(FDependencyBasedActivationStrategy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDependencyBasedActivationStrategy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDependencyBasedActivationStrategy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDependencyBasedActivationStrategy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDependencyBasedActivationStrategy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Activation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DependencyBasedActivationStrategy"), sizeof(FDependencyBasedActivationStrategy), Get_Z_Construct_UScriptStruct_FDependencyBasedActivationStrategy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDependencyBasedActivationStrategy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDependencyBasedActivationStrategy_Hash() { return 285501746U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
