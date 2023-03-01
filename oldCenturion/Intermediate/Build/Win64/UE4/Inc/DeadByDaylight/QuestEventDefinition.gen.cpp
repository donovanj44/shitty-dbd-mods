// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/QuestEventDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEventDefinition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FQuestEventDefinition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBaseWithId();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FQuestEventDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FQuestEventDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestEventDefinition, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("QuestEventDefinition"), sizeof(FQuestEventDefinition), Get_Z_Construct_UScriptStruct_FQuestEventDefinition_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FQuestEventDefinition>()
{
	return FQuestEventDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestEventDefinition(FQuestEventDefinition::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("QuestEventDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFQuestEventDefinition
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFQuestEventDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestEventDefinition")),new UScriptStruct::TCppStructOps<FQuestEventDefinition>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFQuestEventDefinition;
	struct Z_Construct_UScriptStruct_FQuestEventDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestEventEvaluator_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_QuestEventEvaluator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedGameEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackedGameEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackedGameEvents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuestEventDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestEventDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::NewProp_QuestEventEvaluator_MetaData[] = {
		{ "Category", "QuestEventDefinition" },
		{ "ModuleRelativePath", "Public/QuestEventDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::NewProp_QuestEventEvaluator = { "QuestEventEvaluator", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestEventDefinition, QuestEventEvaluator), Z_Construct_UClass_UQuestEventEvaluatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::NewProp_QuestEventEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::NewProp_QuestEventEvaluator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::NewProp_TrackedGameEvents_MetaData[] = {
		{ "Category", "QuestEventDefinition" },
		{ "ModuleRelativePath", "Public/QuestEventDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::NewProp_TrackedGameEvents = { "TrackedGameEvents", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestEventDefinition, TrackedGameEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::NewProp_TrackedGameEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::NewProp_TrackedGameEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::NewProp_TrackedGameEvents_Inner = { "TrackedGameEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::NewProp_QuestEventEvaluator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::NewProp_TrackedGameEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::NewProp_TrackedGameEvents_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBaseWithId,
		&NewStructOps,
		"QuestEventDefinition",
		sizeof(FQuestEventDefinition),
		alignof(FQuestEventDefinition),
		Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestEventDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestEventDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestEventDefinition"), sizeof(FQuestEventDefinition), Get_Z_Construct_UScriptStruct_FQuestEventDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestEventDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestEventDefinition_Hash() { return 1297824047U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
