// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SystemUtilities/Public/DateTimer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDateTimer() {}
// Cross Module References
	SYSTEMUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDateTimer();
	UPackage* Z_Construct_UPackage__Script_SystemUtilities();
// End Cross Module References
class UScriptStruct* FDateTimer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYSTEMUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FDateTimer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDateTimer, Z_Construct_UPackage__Script_SystemUtilities(), TEXT("DateTimer"), sizeof(FDateTimer), Get_Z_Construct_UScriptStruct_FDateTimer_Hash());
	}
	return Singleton;
}
template<> SYSTEMUTILITIES_API UScriptStruct* StaticStruct<FDateTimer>()
{
	return FDateTimer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDateTimer(FDateTimer::StaticStruct, TEXT("/Script/SystemUtilities"), TEXT("DateTimer"), false, nullptr, nullptr);
static struct FScriptStruct_SystemUtilities_StaticRegisterNativesFDateTimer
{
	FScriptStruct_SystemUtilities_StaticRegisterNativesFDateTimer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DateTimer")),new UScriptStruct::TCppStructOps<FDateTimer>);
	}
} ScriptStruct_SystemUtilities_StaticRegisterNativesFDateTimer;
	struct Z_Construct_UScriptStruct_FDateTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDateTimer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DateTimer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDateTimer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDateTimer>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDateTimer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SystemUtilities,
		nullptr,
		&NewStructOps,
		"DateTimer",
		sizeof(FDateTimer),
		alignof(FDateTimer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDateTimer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDateTimer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDateTimer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDateTimer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SystemUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DateTimer"), sizeof(FDateTimer), Get_Z_Construct_UScriptStruct_FDateTimer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDateTimer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDateTimer_Hash() { return 1586966298U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
