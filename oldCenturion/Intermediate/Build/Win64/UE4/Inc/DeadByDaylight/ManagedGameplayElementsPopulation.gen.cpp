// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ManagedGameplayElementsPopulation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManagedGameplayElementsPopulation() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameplayElementType();
// End Cross Module References
class UScriptStruct* FManagedGameplayElementsPopulation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ManagedGameplayElementsPopulation"), sizeof(FManagedGameplayElementsPopulation), Get_Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FManagedGameplayElementsPopulation>()
{
	return FManagedGameplayElementsPopulation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FManagedGameplayElementsPopulation(FManagedGameplayElementsPopulation::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ManagedGameplayElementsPopulation"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFManagedGameplayElementsPopulation
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFManagedGameplayElementsPopulation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ManagedGameplayElementsPopulation")),new UScriptStruct::TCppStructOps<FManagedGameplayElementsPopulation>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFManagedGameplayElementsPopulation;
	struct Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPopulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinPopulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayElementBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_GameplayElementBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementsPopulation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManagedGameplayElementsPopulation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_MaxPopulation_MetaData[] = {
		{ "Category", "ManagedGameplayElementsPopulation" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementsPopulation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_MaxPopulation = { "MaxPopulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManagedGameplayElementsPopulation, MaxPopulation), METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_MaxPopulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_MaxPopulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_MinPopulation_MetaData[] = {
		{ "Category", "ManagedGameplayElementsPopulation" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementsPopulation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_MinPopulation = { "MinPopulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManagedGameplayElementsPopulation, MinPopulation), METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_MinPopulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_MinPopulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_MinDistance_MetaData[] = {
		{ "Category", "ManagedGameplayElementsPopulation" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementsPopulation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManagedGameplayElementsPopulation, MinDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_MinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_MinDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_GameplayElementBlueprint_MetaData[] = {
		{ "Category", "ManagedGameplayElementsPopulation" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementsPopulation.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_GameplayElementBlueprint = { "GameplayElementBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManagedGameplayElementsPopulation, GameplayElementBlueprint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_GameplayElementBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_GameplayElementBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "ManagedGameplayElementsPopulation" },
		{ "ModuleRelativePath", "Public/ManagedGameplayElementsPopulation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManagedGameplayElementsPopulation, Type), Z_Construct_UEnum_DeadByDaylight_EGameplayElementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_MaxPopulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_MinPopulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_MinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_GameplayElementBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ManagedGameplayElementsPopulation",
		sizeof(FManagedGameplayElementsPopulation),
		alignof(FManagedGameplayElementsPopulation),
		Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ManagedGameplayElementsPopulation"), sizeof(FManagedGameplayElementsPopulation), Get_Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FManagedGameplayElementsPopulation_Hash() { return 4212501449U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
