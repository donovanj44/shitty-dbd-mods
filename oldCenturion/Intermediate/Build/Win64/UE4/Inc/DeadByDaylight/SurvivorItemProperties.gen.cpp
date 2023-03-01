// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SurvivorItemProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorItemProperties() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivorItemProperties();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECollectableCategory();
// End Cross Module References
class UScriptStruct* FSurvivorItemProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSurvivorItemProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSurvivorItemProperties, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SurvivorItemProperties"), sizeof(FSurvivorItemProperties), Get_Z_Construct_UScriptStruct_FSurvivorItemProperties_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSurvivorItemProperties>()
{
	return FSurvivorItemProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSurvivorItemProperties(FSurvivorItemProperties::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SurvivorItemProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSurvivorItemProperties
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSurvivorItemProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SurvivorItemProperties")),new UScriptStruct::TCppStructOps<FSurvivorItemProperties>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSurvivorItemProperties;
	struct Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPopulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPopulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SurvivorItemProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSurvivorItemProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewProp_MaxPopulation_MetaData[] = {
		{ "Category", "SurvivorItemProperties" },
		{ "ModuleRelativePath", "Public/SurvivorItemProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewProp_MaxPopulation = { "MaxPopulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurvivorItemProperties, MaxPopulation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewProp_MaxPopulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewProp_MaxPopulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "SurvivorItemProperties" },
		{ "ModuleRelativePath", "Public/SurvivorItemProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurvivorItemProperties, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "SurvivorItemProperties" },
		{ "ModuleRelativePath", "Public/SurvivorItemProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurvivorItemProperties, Category), Z_Construct_UEnum_DeadByDaylight_ECollectableCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewProp_MaxPopulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::NewProp_Category_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SurvivorItemProperties",
		sizeof(FSurvivorItemProperties),
		alignof(FSurvivorItemProperties),
		Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSurvivorItemProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSurvivorItemProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SurvivorItemProperties"), sizeof(FSurvivorItemProperties), Get_Z_Construct_UScriptStruct_FSurvivorItemProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSurvivorItemProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSurvivorItemProperties_Hash() { return 3603954891U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
