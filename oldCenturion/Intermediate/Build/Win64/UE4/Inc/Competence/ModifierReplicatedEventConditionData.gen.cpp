// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/ModifierReplicatedEventConditionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifierReplicatedEventConditionData() {}
// Cross Module References
	COMPETENCE_API UScriptStruct* Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData();
	UPackage* Z_Construct_UPackage__Script_Competence();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition_NoRegister();
// End Cross Module References
class UScriptStruct* FModifierReplicatedEventConditionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMPETENCE_API uint32 Get_Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData, Z_Construct_UPackage__Script_Competence(), TEXT("ModifierReplicatedEventConditionData"), sizeof(FModifierReplicatedEventConditionData), Get_Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Hash());
	}
	return Singleton;
}
template<> COMPETENCE_API UScriptStruct* StaticStruct<FModifierReplicatedEventConditionData>()
{
	return FModifierReplicatedEventConditionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModifierReplicatedEventConditionData(FModifierReplicatedEventConditionData::StaticStruct, TEXT("/Script/Competence"), TEXT("ModifierReplicatedEventConditionData"), false, nullptr, nullptr);
static struct FScriptStruct_Competence_StaticRegisterNativesFModifierReplicatedEventConditionData
{
	FScriptStruct_Competence_StaticRegisterNativesFModifierReplicatedEventConditionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModifierReplicatedEventConditionData")),new UScriptStruct::TCppStructOps<FModifierReplicatedEventConditionData>);
	}
} ScriptStruct_Competence_StaticRegisterNativesFModifierReplicatedEventConditionData;
	struct Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventDrivenCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventDrivenCondition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModifierReplicatedEventConditionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifierReplicatedEventConditionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_AuthorityDataSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModifierReplicatedEventConditionData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_AuthorityDataSet_SetBit(void* Obj)
	{
		((FModifierReplicatedEventConditionData*)Obj)->AuthorityDataSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_AuthorityDataSet = { "AuthorityDataSet", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FModifierReplicatedEventConditionData), &Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_AuthorityDataSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_AuthorityDataSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_AuthorityDataSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_HasCondition_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModifierReplicatedEventConditionData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_HasCondition_SetBit(void* Obj)
	{
		((FModifierReplicatedEventConditionData*)Obj)->HasCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_HasCondition = { "HasCondition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FModifierReplicatedEventConditionData), &Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_HasCondition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_HasCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_HasCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_EventDrivenCondition_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModifierReplicatedEventConditionData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_EventDrivenCondition = { "EventDrivenCondition", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModifierReplicatedEventConditionData, EventDrivenCondition), Z_Construct_UClass_UEventDrivenModifierCondition_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_EventDrivenCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_EventDrivenCondition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_AuthorityDataSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_HasCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::NewProp_EventDrivenCondition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
		nullptr,
		&NewStructOps,
		"ModifierReplicatedEventConditionData",
		sizeof(FModifierReplicatedEventConditionData),
		alignof(FModifierReplicatedEventConditionData),
		Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Competence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModifierReplicatedEventConditionData"), sizeof(FModifierReplicatedEventConditionData), Get_Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData_Hash() { return 3260738546U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
