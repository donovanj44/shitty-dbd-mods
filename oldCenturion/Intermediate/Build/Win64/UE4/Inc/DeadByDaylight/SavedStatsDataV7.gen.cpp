// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SavedStatsDataV7.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSavedStatsDataV7() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSavedStatsDataV7();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FSavedStatsDataV7::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSavedStatsDataV7_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavedStatsDataV7, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SavedStatsDataV7"), sizeof(FSavedStatsDataV7), Get_Z_Construct_UScriptStruct_FSavedStatsDataV7_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSavedStatsDataV7>()
{
	return FSavedStatsDataV7::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSavedStatsDataV7(FSavedStatsDataV7::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SavedStatsDataV7"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSavedStatsDataV7
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSavedStatsDataV7()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SavedStatsDataV7")),new UScriptStruct::TCppStructOps<FSavedStatsDataV7>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSavedStatsDataV7;
	struct Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SavedStatsDataV7.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavedStatsDataV7>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/SavedStatsDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSavedStatsDataV7, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/SavedStatsDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSavedStatsDataV7, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SavedStatsDataV7",
		sizeof(FSavedStatsDataV7),
		alignof(FSavedStatsDataV7),
		Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSavedStatsDataV7()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSavedStatsDataV7_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SavedStatsDataV7"), sizeof(FSavedStatsDataV7), Get_Z_Construct_UScriptStruct_FSavedStatsDataV7_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSavedStatsDataV7_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSavedStatsDataV7_Hash() { return 4152969051U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
