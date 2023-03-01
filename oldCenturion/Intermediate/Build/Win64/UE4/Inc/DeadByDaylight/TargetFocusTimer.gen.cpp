// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TargetFocusTimer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetFocusTimer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTargetFocusTimer();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTimer();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
class UScriptStruct* FTargetFocusTimer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FTargetFocusTimer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetFocusTimer, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("TargetFocusTimer"), sizeof(FTargetFocusTimer), Get_Z_Construct_UScriptStruct_FTargetFocusTimer_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FTargetFocusTimer>()
{
	return FTargetFocusTimer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetFocusTimer(FTargetFocusTimer::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("TargetFocusTimer"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFTargetFocusTimer
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFTargetFocusTimer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetFocusTimer")),new UScriptStruct::TCppStructOps<FTargetFocusTimer>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFTargetFocusTimer;
	struct Z_Construct_UScriptStruct_FTargetFocusTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__totalTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__totalTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cooldownTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__camper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TargetFocusTimer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetFocusTimer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::NewProp__totalTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/TargetFocusTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::NewProp__totalTime = { "_totalTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetFocusTimer, _totalTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::NewProp__totalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::NewProp__totalTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::NewProp__cooldownTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/TargetFocusTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::NewProp__cooldownTimer = { "_cooldownTimer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetFocusTimer, _cooldownTimer), Z_Construct_UScriptStruct_FDBDTimer, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::NewProp__cooldownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::NewProp__cooldownTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::NewProp__camper_MetaData[] = {
		{ "ModuleRelativePath", "Public/TargetFocusTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::NewProp__camper = { "_camper", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTargetFocusTimer, _camper), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::NewProp__camper_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::NewProp__camper_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::NewProp__totalTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::NewProp__cooldownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::NewProp__camper,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"TargetFocusTimer",
		sizeof(FTargetFocusTimer),
		alignof(FTargetFocusTimer),
		Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetFocusTimer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetFocusTimer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetFocusTimer"), sizeof(FTargetFocusTimer), Get_Z_Construct_UScriptStruct_FTargetFocusTimer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetFocusTimer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetFocusTimer_Hash() { return 2118717414U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
