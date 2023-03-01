// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BloodwebCostModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodwebCostModifier() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBloodwebCostModifier();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeContentType();
// End Cross Module References
class UScriptStruct* FBloodwebCostModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FBloodwebCostModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBloodwebCostModifier, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("BloodwebCostModifier"), sizeof(FBloodwebCostModifier), Get_Z_Construct_UScriptStruct_FBloodwebCostModifier_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FBloodwebCostModifier>()
{
	return FBloodwebCostModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBloodwebCostModifier(FBloodwebCostModifier::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("BloodwebCostModifier"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebCostModifier
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebCostModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BloodwebCostModifier")),new UScriptStruct::TCppStructOps<FBloodwebCostModifier>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebCostModifier;
	struct Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CostModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CostModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BloodwebCostModifier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBloodwebCostModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::NewProp_CostModifier_MetaData[] = {
		{ "Category", "BloodwebCostModifier" },
		{ "ModuleRelativePath", "Public/BloodwebCostModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::NewProp_CostModifier = { "CostModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebCostModifier, CostModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::NewProp_CostModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::NewProp_CostModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "BloodwebCostModifier" },
		{ "ModuleRelativePath", "Public/BloodwebCostModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebCostModifier, Type), Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeContentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::NewProp_CostModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"BloodwebCostModifier",
		sizeof(FBloodwebCostModifier),
		alignof(FBloodwebCostModifier),
		Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBloodwebCostModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBloodwebCostModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BloodwebCostModifier"), sizeof(FBloodwebCostModifier), Get_Z_Construct_UScriptStruct_FBloodwebCostModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBloodwebCostModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBloodwebCostModifier_Hash() { return 3458820411U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
