// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ModifierTickableConditionReplicatedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifierTickableConditionReplicatedData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COMPETENCE_API UClass* Z_Construct_UClass_UBaseModifierCondition_NoRegister();
// End Cross Module References
class UScriptStruct* FModifierTickableConditionReplicatedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ModifierTickableConditionReplicatedData"), sizeof(FModifierTickableConditionReplicatedData), Get_Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FModifierTickableConditionReplicatedData>()
{
	return FModifierTickableConditionReplicatedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModifierTickableConditionReplicatedData(FModifierTickableConditionReplicatedData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ModifierTickableConditionReplicatedData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFModifierTickableConditionReplicatedData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFModifierTickableConditionReplicatedData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModifierTickableConditionReplicatedData")),new UScriptStruct::TCppStructOps<FModifierTickableConditionReplicatedData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFModifierTickableConditionReplicatedData;
	struct Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthorityDataSet_MetaData[];
#endif
		static void NewProp_AuthorityDataSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AuthorityDataSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasCondition_MetaData[];
#endif
		static void NewProp_HasCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conditions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModifierTickableConditionReplicatedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifierTickableConditionReplicatedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_AuthorityDataSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModifierTickableConditionReplicatedData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_AuthorityDataSet_SetBit(void* Obj)
	{
		((FModifierTickableConditionReplicatedData*)Obj)->AuthorityDataSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_AuthorityDataSet = { "AuthorityDataSet", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FModifierTickableConditionReplicatedData), &Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_AuthorityDataSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_AuthorityDataSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_AuthorityDataSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_HasCondition_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModifierTickableConditionReplicatedData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_HasCondition_SetBit(void* Obj)
	{
		((FModifierTickableConditionReplicatedData*)Obj)->HasCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_HasCondition = { "HasCondition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FModifierTickableConditionReplicatedData), &Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_HasCondition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_HasCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_HasCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_Conditions_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModifierTickableConditionReplicatedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModifierTickableConditionReplicatedData, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_Conditions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBaseModifierCondition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_AuthorityDataSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_HasCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_Conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::NewProp_Conditions_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ModifierTickableConditionReplicatedData",
		sizeof(FModifierTickableConditionReplicatedData),
		alignof(FModifierTickableConditionReplicatedData),
		Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModifierTickableConditionReplicatedData"), sizeof(FModifierTickableConditionReplicatedData), Get_Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData_Hash() { return 970446340U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
