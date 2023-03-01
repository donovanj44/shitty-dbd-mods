// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDBidirectionalTimer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDBidirectionalTimer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDBidirectionalTimer();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTimer();
// End Cross Module References
class UScriptStruct* FDBDBidirectionalTimer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDBDBidirectionalTimer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDBidirectionalTimer, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DBDBidirectionalTimer"), sizeof(FDBDBidirectionalTimer), Get_Z_Construct_UScriptStruct_FDBDBidirectionalTimer_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDBDBidirectionalTimer>()
{
	return FDBDBidirectionalTimer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDBidirectionalTimer(FDBDBidirectionalTimer::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DBDBidirectionalTimer"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDBidirectionalTimer
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDBidirectionalTimer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDBidirectionalTimer")),new UScriptStruct::TCppStructOps<FDBDBidirectionalTimer>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDBidirectionalTimer;
	struct Z_Construct_UScriptStruct_FDBDBidirectionalTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDBidirectionalTimer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DBDBidirectionalTimer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDBidirectionalTimer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDBidirectionalTimer>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDBidirectionalTimer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTimer,
		&NewStructOps,
		"DBDBidirectionalTimer",
		sizeof(FDBDBidirectionalTimer),
		alignof(FDBDBidirectionalTimer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDBidirectionalTimer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDBidirectionalTimer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDBidirectionalTimer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDBidirectionalTimer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDBidirectionalTimer"), sizeof(FDBDBidirectionalTimer), Get_Z_Construct_UScriptStruct_FDBDBidirectionalTimer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDBidirectionalTimer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDBidirectionalTimer_Hash() { return 2524681501U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
