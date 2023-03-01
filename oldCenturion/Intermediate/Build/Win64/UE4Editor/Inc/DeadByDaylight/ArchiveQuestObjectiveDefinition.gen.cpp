// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArchiveQuestObjectiveDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchiveQuestObjectiveDefinition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBaseWithId();
// End Cross Module References
class UScriptStruct* FArchiveQuestObjectiveDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ArchiveQuestObjectiveDefinition"), sizeof(FArchiveQuestObjectiveDefinition), Get_Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FArchiveQuestObjectiveDefinition>()
{
	return FArchiveQuestObjectiveDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArchiveQuestObjectiveDefinition(FArchiveQuestObjectiveDefinition::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ArchiveQuestObjectiveDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFArchiveQuestObjectiveDefinition
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFArchiveQuestObjectiveDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ArchiveQuestObjectiveDefinition")),new UScriptStruct::TCppStructOps<FArchiveQuestObjectiveDefinition>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFArchiveQuestObjectiveDefinition;
	struct Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsProgressionPercentage_MetaData[];
#endif
		static void NewProp_IsProgressionPercentage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsProgressionPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DescriptionParameters;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DescriptionParameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RulesDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_RulesDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchiveQuestObjectiveDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchiveQuestObjectiveDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_IsProgressionPercentage_MetaData[] = {
		{ "Category", "ArchiveQuestObjectiveDefinition" },
		{ "ModuleRelativePath", "Public/ArchiveQuestObjectiveDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_IsProgressionPercentage_SetBit(void* Obj)
	{
		((FArchiveQuestObjectiveDefinition*)Obj)->IsProgressionPercentage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_IsProgressionPercentage = { "IsProgressionPercentage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FArchiveQuestObjectiveDefinition), &Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_IsProgressionPercentage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_IsProgressionPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_IsProgressionPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_DescriptionParameters_MetaData[] = {
		{ "Category", "ArchiveQuestObjectiveDefinition" },
		{ "ModuleRelativePath", "Public/ArchiveQuestObjectiveDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_DescriptionParameters = { "DescriptionParameters", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveQuestObjectiveDefinition, DescriptionParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_DescriptionParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_DescriptionParameters_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_DescriptionParameters_Inner = { "DescriptionParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_RulesDescription_MetaData[] = {
		{ "Category", "ArchiveQuestObjectiveDefinition" },
		{ "ModuleRelativePath", "Public/ArchiveQuestObjectiveDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_RulesDescription = { "RulesDescription", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveQuestObjectiveDefinition, RulesDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_RulesDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_RulesDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ArchiveQuestObjectiveDefinition" },
		{ "ModuleRelativePath", "Public/ArchiveQuestObjectiveDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArchiveQuestObjectiveDefinition, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_IsProgressionPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_DescriptionParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_DescriptionParameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_RulesDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBaseWithId,
		&NewStructOps,
		"ArchiveQuestObjectiveDefinition",
		sizeof(FArchiveQuestObjectiveDefinition),
		alignof(FArchiveQuestObjectiveDefinition),
		Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArchiveQuestObjectiveDefinition"), sizeof(FArchiveQuestObjectiveDefinition), Get_Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArchiveQuestObjectiveDefinition_Hash() { return 2429603307U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
