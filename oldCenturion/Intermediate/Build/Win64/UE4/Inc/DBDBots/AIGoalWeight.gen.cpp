// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AIGoalWeight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIGoalWeight() {}
// Cross Module References
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FAIGoalWeight();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FAIGoal();
// End Cross Module References
class UScriptStruct* FAIGoalWeight::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDBOTS_API uint32 Get_Z_Construct_UScriptStruct_FAIGoalWeight_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIGoalWeight, Z_Construct_UPackage__Script_DBDBots(), TEXT("AIGoalWeight"), sizeof(FAIGoalWeight), Get_Z_Construct_UScriptStruct_FAIGoalWeight_Hash());
	}
	return Singleton;
}
template<> DBDBOTS_API UScriptStruct* StaticStruct<FAIGoalWeight>()
{
	return FAIGoalWeight::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIGoalWeight(FAIGoalWeight::StaticStruct, TEXT("/Script/DBDBots"), TEXT("AIGoalWeight"), false, nullptr, nullptr);
static struct FScriptStruct_DBDBots_StaticRegisterNativesFAIGoalWeight
{
	FScriptStruct_DBDBots_StaticRegisterNativesFAIGoalWeight()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIGoalWeight")),new UScriptStruct::TCppStructOps<FAIGoalWeight>);
	}
} ScriptStruct_DBDBots_StaticRegisterNativesFAIGoalWeight;
	struct Z_Construct_UScriptStruct_FAIGoalWeight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightDebug_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeightDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIGoalWeight_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AIGoalWeight.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIGoalWeight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIGoalWeight>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIGoalWeight_Statics::NewProp_WeightDebug_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIGoalWeight.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIGoalWeight_Statics::NewProp_WeightDebug = { "WeightDebug", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIGoalWeight, WeightDebug), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIGoalWeight_Statics::NewProp_WeightDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIGoalWeight_Statics::NewProp_WeightDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIGoalWeight_Statics::NewProp_Weight_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIGoalWeight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIGoalWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIGoalWeight, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIGoalWeight_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIGoalWeight_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIGoalWeight_Statics::NewProp_GoalInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIGoalWeight.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIGoalWeight_Statics::NewProp_GoalInfo = { "GoalInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIGoalWeight, GoalInfo), Z_Construct_UScriptStruct_FAIGoal, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIGoalWeight_Statics::NewProp_GoalInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIGoalWeight_Statics::NewProp_GoalInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIGoalWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIGoalWeight_Statics::NewProp_WeightDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIGoalWeight_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIGoalWeight_Statics::NewProp_GoalInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIGoalWeight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
		nullptr,
		&NewStructOps,
		"AIGoalWeight",
		sizeof(FAIGoalWeight),
		alignof(FAIGoalWeight),
		Z_Construct_UScriptStruct_FAIGoalWeight_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIGoalWeight_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIGoalWeight_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIGoalWeight_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIGoalWeight()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIGoalWeight_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIGoalWeight"), sizeof(FAIGoalWeight), Get_Z_Construct_UScriptStruct_FAIGoalWeight_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIGoalWeight_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIGoalWeight_Hash() { return 2583475992U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
