// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SurvivorHookTimer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorHookTimer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivorHookTimer();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FSurvivorHookTimer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSurvivorHookTimer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSurvivorHookTimer, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SurvivorHookTimer"), sizeof(FSurvivorHookTimer), Get_Z_Construct_UScriptStruct_FSurvivorHookTimer_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSurvivorHookTimer>()
{
	return FSurvivorHookTimer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSurvivorHookTimer(FSurvivorHookTimer::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SurvivorHookTimer"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSurvivorHookTimer
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSurvivorHookTimer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SurvivorHookTimer")),new UScriptStruct::TCppStructOps<FSurvivorHookTimer>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSurvivorHookTimer;
	struct Z_Construct_UScriptStruct_FSurvivorHookTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorHookTimer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorHookTimer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSurvivorHookTimer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSurvivorHookTimer>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSurvivorHookTimer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SurvivorHookTimer",
		sizeof(FSurvivorHookTimer),
		alignof(FSurvivorHookTimer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorHookTimer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorHookTimer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSurvivorHookTimer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSurvivorHookTimer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SurvivorHookTimer"), sizeof(FSurvivorHookTimer), Get_Z_Construct_UScriptStruct_FSurvivorHookTimer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSurvivorHookTimer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSurvivorHookTimer_Hash() { return 111322207U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
