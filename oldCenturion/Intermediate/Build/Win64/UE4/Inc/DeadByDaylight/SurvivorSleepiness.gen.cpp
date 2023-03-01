// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SurvivorSleepiness.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorSleepiness() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivorSleepiness();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FSurvivorSleepiness::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSurvivorSleepiness_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSurvivorSleepiness, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SurvivorSleepiness"), sizeof(FSurvivorSleepiness), Get_Z_Construct_UScriptStruct_FSurvivorSleepiness_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSurvivorSleepiness>()
{
	return FSurvivorSleepiness::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSurvivorSleepiness(FSurvivorSleepiness::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SurvivorSleepiness"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSurvivorSleepiness
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSurvivorSleepiness()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SurvivorSleepiness")),new UScriptStruct::TCppStructOps<FSurvivorSleepiness>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSurvivorSleepiness;
	struct Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sleepThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sleepThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sleepiness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sleepiness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SurvivorSleepiness.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSurvivorSleepiness>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::NewProp__sleepThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurvivorSleepiness" },
		{ "ModuleRelativePath", "Public/SurvivorSleepiness.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::NewProp__sleepThreshold = { "_sleepThreshold", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurvivorSleepiness, _sleepThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::NewProp__sleepThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::NewProp__sleepThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::NewProp__sleepiness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurvivorSleepiness" },
		{ "ModuleRelativePath", "Public/SurvivorSleepiness.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::NewProp__sleepiness = { "_sleepiness", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurvivorSleepiness, _sleepiness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::NewProp__sleepiness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::NewProp__sleepiness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::NewProp__sleepThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::NewProp__sleepiness,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SurvivorSleepiness",
		sizeof(FSurvivorSleepiness),
		alignof(FSurvivorSleepiness),
		Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSurvivorSleepiness()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSurvivorSleepiness_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SurvivorSleepiness"), sizeof(FSurvivorSleepiness), Get_Z_Construct_UScriptStruct_FSurvivorSleepiness_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSurvivorSleepiness_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSurvivorSleepiness_Hash() { return 1603805862U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
