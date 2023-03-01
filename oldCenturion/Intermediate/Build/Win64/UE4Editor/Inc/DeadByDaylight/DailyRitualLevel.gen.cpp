// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DailyRitualLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyRitualLevel() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualLevel();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FDailyRitualLevel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDailyRitualLevel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDailyRitualLevel, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DailyRitualLevel"), sizeof(FDailyRitualLevel), Get_Z_Construct_UScriptStruct_FDailyRitualLevel_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDailyRitualLevel>()
{
	return FDailyRitualLevel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDailyRitualLevel(FDailyRitualLevel::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DailyRitualLevel"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRitualLevel
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRitualLevel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DailyRitualLevel")),new UScriptStruct::TCppStructOps<FDailyRitualLevel>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDailyRitualLevel;
	struct Z_Construct_UScriptStruct_FDailyRitualLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodpointsReward_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloodpointsReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisplayTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DailyRitualLevel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDailyRitualLevel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_BloodpointsReward_MetaData[] = {
		{ "Category", "DailyRitualLevel" },
		{ "ModuleRelativePath", "Public/DailyRitualLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_BloodpointsReward = { "BloodpointsReward", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualLevel, BloodpointsReward), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_BloodpointsReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_BloodpointsReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_DisplayTotal_MetaData[] = {
		{ "Category", "DailyRitualLevel" },
		{ "ModuleRelativePath", "Public/DailyRitualLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_DisplayTotal = { "DisplayTotal", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualLevel, DisplayTotal), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_DisplayTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_DisplayTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "DailyRitualLevel" },
		{ "ModuleRelativePath", "Public/DailyRitualLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualLevel, Tolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_Tolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "DailyRitualLevel" },
		{ "ModuleRelativePath", "Public/DailyRitualLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualLevel, Threshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_Threshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_BloodpointsReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_DisplayTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_Tolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::NewProp_Threshold,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DailyRitualLevel",
		sizeof(FDailyRitualLevel),
		alignof(FDailyRitualLevel),
		Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualLevel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDailyRitualLevel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DailyRitualLevel"), sizeof(FDailyRitualLevel), Get_Z_Construct_UScriptStruct_FDailyRitualLevel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDailyRitualLevel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDailyRitualLevel_Hash() { return 3452161261U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
