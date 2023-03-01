// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoreUtilities/Public/DelegateHandleWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelegateHandleWrapper() {}
// Cross Module References
	COREUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDelegateHandleWrapper();
	UPackage* Z_Construct_UPackage__Script_CoreUtilities();
// End Cross Module References
class UScriptStruct* FDelegateHandleWrapper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COREUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FDelegateHandleWrapper_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDelegateHandleWrapper, Z_Construct_UPackage__Script_CoreUtilities(), TEXT("DelegateHandleWrapper"), sizeof(FDelegateHandleWrapper), Get_Z_Construct_UScriptStruct_FDelegateHandleWrapper_Hash());
	}
	return Singleton;
}
template<> COREUTILITIES_API UScriptStruct* StaticStruct<FDelegateHandleWrapper>()
{
	return FDelegateHandleWrapper::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDelegateHandleWrapper(FDelegateHandleWrapper::StaticStruct, TEXT("/Script/CoreUtilities"), TEXT("DelegateHandleWrapper"), false, nullptr, nullptr);
static struct FScriptStruct_CoreUtilities_StaticRegisterNativesFDelegateHandleWrapper
{
	FScriptStruct_CoreUtilities_StaticRegisterNativesFDelegateHandleWrapper()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DelegateHandleWrapper")),new UScriptStruct::TCppStructOps<FDelegateHandleWrapper>);
	}
} ScriptStruct_CoreUtilities_StaticRegisterNativesFDelegateHandleWrapper;
	struct Z_Construct_UScriptStruct_FDelegateHandleWrapper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateHandleWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DelegateHandleWrapper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDelegateHandleWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDelegateHandleWrapper>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDelegateHandleWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CoreUtilities,
		nullptr,
		&NewStructOps,
		"DelegateHandleWrapper",
		sizeof(FDelegateHandleWrapper),
		alignof(FDelegateHandleWrapper),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateHandleWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateHandleWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDelegateHandleWrapper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDelegateHandleWrapper_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CoreUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DelegateHandleWrapper"), sizeof(FDelegateHandleWrapper), Get_Z_Construct_UScriptStruct_FDelegateHandleWrapper_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDelegateHandleWrapper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDelegateHandleWrapper_Hash() { return 788727655U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
