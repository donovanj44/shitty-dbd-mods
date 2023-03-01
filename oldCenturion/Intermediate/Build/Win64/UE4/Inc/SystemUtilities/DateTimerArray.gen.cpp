// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SystemUtilities/Public/DateTimerArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDateTimerArray() {}
// Cross Module References
	SYSTEMUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDateTimerArray();
	UPackage* Z_Construct_UPackage__Script_SystemUtilities();
// End Cross Module References
class UScriptStruct* FDateTimerArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYSTEMUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FDateTimerArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDateTimerArray, Z_Construct_UPackage__Script_SystemUtilities(), TEXT("DateTimerArray"), sizeof(FDateTimerArray), Get_Z_Construct_UScriptStruct_FDateTimerArray_Hash());
	}
	return Singleton;
}
template<> SYSTEMUTILITIES_API UScriptStruct* StaticStruct<FDateTimerArray>()
{
	return FDateTimerArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDateTimerArray(FDateTimerArray::StaticStruct, TEXT("/Script/SystemUtilities"), TEXT("DateTimerArray"), false, nullptr, nullptr);
static struct FScriptStruct_SystemUtilities_StaticRegisterNativesFDateTimerArray
{
	FScriptStruct_SystemUtilities_StaticRegisterNativesFDateTimerArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DateTimerArray")),new UScriptStruct::TCppStructOps<FDateTimerArray>);
	}
} ScriptStruct_SystemUtilities_StaticRegisterNativesFDateTimerArray;
	struct Z_Construct_UScriptStruct_FDateTimerArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDateTimerArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DateTimerArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDateTimerArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDateTimerArray>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDateTimerArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SystemUtilities,
		nullptr,
		&NewStructOps,
		"DateTimerArray",
		sizeof(FDateTimerArray),
		alignof(FDateTimerArray),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDateTimerArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDateTimerArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDateTimerArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDateTimerArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SystemUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DateTimerArray"), sizeof(FDateTimerArray), Get_Z_Construct_UScriptStruct_FDateTimerArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDateTimerArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDateTimerArray_Hash() { return 3838895105U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
