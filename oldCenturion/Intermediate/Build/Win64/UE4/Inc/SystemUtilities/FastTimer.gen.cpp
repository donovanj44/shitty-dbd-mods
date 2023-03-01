// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SystemUtilities/Public/FastTimer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFastTimer() {}
// Cross Module References
	SYSTEMUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FFastTimer();
	UPackage* Z_Construct_UPackage__Script_SystemUtilities();
// End Cross Module References
class UScriptStruct* FFastTimer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYSTEMUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FFastTimer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFastTimer, Z_Construct_UPackage__Script_SystemUtilities(), TEXT("FastTimer"), sizeof(FFastTimer), Get_Z_Construct_UScriptStruct_FFastTimer_Hash());
	}
	return Singleton;
}
template<> SYSTEMUTILITIES_API UScriptStruct* StaticStruct<FFastTimer>()
{
	return FFastTimer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFastTimer(FFastTimer::StaticStruct, TEXT("/Script/SystemUtilities"), TEXT("FastTimer"), false, nullptr, nullptr);
static struct FScriptStruct_SystemUtilities_StaticRegisterNativesFFastTimer
{
	FScriptStruct_SystemUtilities_StaticRegisterNativesFFastTimer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FastTimer")),new UScriptStruct::TCppStructOps<FFastTimer>);
	}
} ScriptStruct_SystemUtilities_StaticRegisterNativesFFastTimer;
	struct Z_Construct_UScriptStruct_FFastTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFastTimer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FastTimer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFastTimer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFastTimer>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFastTimer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SystemUtilities,
		nullptr,
		&NewStructOps,
		"FastTimer",
		sizeof(FFastTimer),
		alignof(FFastTimer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFastTimer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastTimer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFastTimer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFastTimer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SystemUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FastTimer"), sizeof(FFastTimer), Get_Z_Construct_UScriptStruct_FFastTimer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFastTimer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFastTimer_Hash() { return 3918485412U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
