// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Activation/Public/TestableActivationDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestableActivationDefinition() {}
// Cross Module References
	ACTIVATION_API UScriptStruct* Z_Construct_UScriptStruct_FTestableActivationDefinition();
	UPackage* Z_Construct_UPackage__Script_Activation();
	ACTIVATION_API UScriptStruct* Z_Construct_UScriptStruct_FActivationDefinition();
// End Cross Module References
class UScriptStruct* FTestableActivationDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIVATION_API uint32 Get_Z_Construct_UScriptStruct_FTestableActivationDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestableActivationDefinition, Z_Construct_UPackage__Script_Activation(), TEXT("TestableActivationDefinition"), sizeof(FTestableActivationDefinition), Get_Z_Construct_UScriptStruct_FTestableActivationDefinition_Hash());
	}
	return Singleton;
}
template<> ACTIVATION_API UScriptStruct* StaticStruct<FTestableActivationDefinition>()
{
	return FTestableActivationDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTestableActivationDefinition(FTestableActivationDefinition::StaticStruct, TEXT("/Script/Activation"), TEXT("TestableActivationDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Activation_StaticRegisterNativesFTestableActivationDefinition
{
	FScriptStruct_Activation_StaticRegisterNativesFTestableActivationDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TestableActivationDefinition")),new UScriptStruct::TCppStructOps<FTestableActivationDefinition>);
	}
} ScriptStruct_Activation_StaticRegisterNativesFTestableActivationDefinition;
	struct Z_Construct_UScriptStruct_FTestableActivationDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestableActivationDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestableActivationDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestableActivationDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestableActivationDefinition>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestableActivationDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Activation,
		Z_Construct_UScriptStruct_FActivationDefinition,
		&NewStructOps,
		"TestableActivationDefinition",
		sizeof(FTestableActivationDefinition),
		alignof(FTestableActivationDefinition),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestableActivationDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestableActivationDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestableActivationDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTestableActivationDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Activation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TestableActivationDefinition"), sizeof(FTestableActivationDefinition), Get_Z_Construct_UScriptStruct_FTestableActivationDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTestableActivationDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTestableActivationDefinition_Hash() { return 1528281502U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
