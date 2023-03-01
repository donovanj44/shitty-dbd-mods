// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AIGoalWeightContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIGoalWeightContainer() {}
// Cross Module References
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FAIGoalWeightContainer();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FAIGoalWeight();
// End Cross Module References
class UScriptStruct* FAIGoalWeightContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDBOTS_API uint32 Get_Z_Construct_UScriptStruct_FAIGoalWeightContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIGoalWeightContainer, Z_Construct_UPackage__Script_DBDBots(), TEXT("AIGoalWeightContainer"), sizeof(FAIGoalWeightContainer), Get_Z_Construct_UScriptStruct_FAIGoalWeightContainer_Hash());
	}
	return Singleton;
}
template<> DBDBOTS_API UScriptStruct* StaticStruct<FAIGoalWeightContainer>()
{
	return FAIGoalWeightContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIGoalWeightContainer(FAIGoalWeightContainer::StaticStruct, TEXT("/Script/DBDBots"), TEXT("AIGoalWeightContainer"), false, nullptr, nullptr);
static struct FScriptStruct_DBDBots_StaticRegisterNativesFAIGoalWeightContainer
{
	FScriptStruct_DBDBots_StaticRegisterNativesFAIGoalWeightContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIGoalWeightContainer")),new UScriptStruct::TCppStructOps<FAIGoalWeightContainer>);
	}
} ScriptStruct_DBDBots_StaticRegisterNativesFAIGoalWeightContainer;
	struct Z_Construct_UScriptStruct_FAIGoalWeightContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightedGoals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeightedGoals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeightedGoals_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIGoalWeightContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AIGoalWeightContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIGoalWeightContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIGoalWeightContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIGoalWeightContainer_Statics::NewProp_WeightedGoals_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIGoalWeightContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAIGoalWeightContainer_Statics::NewProp_WeightedGoals = { "WeightedGoals", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIGoalWeightContainer, WeightedGoals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIGoalWeightContainer_Statics::NewProp_WeightedGoals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIGoalWeightContainer_Statics::NewProp_WeightedGoals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIGoalWeightContainer_Statics::NewProp_WeightedGoals_Inner = { "WeightedGoals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAIGoalWeight, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIGoalWeightContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIGoalWeightContainer_Statics::NewProp_WeightedGoals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIGoalWeightContainer_Statics::NewProp_WeightedGoals_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIGoalWeightContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
		nullptr,
		&NewStructOps,
		"AIGoalWeightContainer",
		sizeof(FAIGoalWeightContainer),
		alignof(FAIGoalWeightContainer),
		Z_Construct_UScriptStruct_FAIGoalWeightContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIGoalWeightContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIGoalWeightContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIGoalWeightContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIGoalWeightContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIGoalWeightContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIGoalWeightContainer"), sizeof(FAIGoalWeightContainer), Get_Z_Construct_UScriptStruct_FAIGoalWeightContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIGoalWeightContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIGoalWeightContainer_Hash() { return 1382349230U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
