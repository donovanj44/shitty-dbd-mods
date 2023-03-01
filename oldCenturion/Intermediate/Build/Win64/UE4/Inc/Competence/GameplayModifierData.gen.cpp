// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/GameplayModifierData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayModifierData() {}
// Cross Module References
	COMPETENCE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierData();
	UPackage* Z_Construct_UPackage__Script_Competence();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COMPETENCE_API UScriptStruct* Z_Construct_UScriptStruct_FGamePlayModifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMPETENCE_API UClass* Z_Construct_UClass_UBaseModifierCondition_NoRegister();
// End Cross Module References
class UScriptStruct* FGameplayModifierData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMPETENCE_API uint32 Get_Z_Construct_UScriptStruct_FGameplayModifierData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayModifierData, Z_Construct_UPackage__Script_Competence(), TEXT("GameplayModifierData"), sizeof(FGameplayModifierData), Get_Z_Construct_UScriptStruct_FGameplayModifierData_Hash());
	}
	return Singleton;
}
template<> COMPETENCE_API UScriptStruct* StaticStruct<FGameplayModifierData>()
{
	return FGameplayModifierData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayModifierData(FGameplayModifierData::StaticStruct, TEXT("/Script/Competence"), TEXT("GameplayModifierData"), false, nullptr, nullptr);
static struct FScriptStruct_Competence_StaticRegisterNativesFGameplayModifierData
{
	FScriptStruct_Competence_StaticRegisterNativesFGameplayModifierData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayModifierData")),new UScriptStruct::TCppStructOps<FGameplayModifierData>);
	}
} ScriptStruct_Competence_StaticRegisterNativesFGameplayModifierData;
	struct Z_Construct_UScriptStruct_FGameplayModifierData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaggedFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TaggedFlags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TaggedFlags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conditions;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Conditions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayModifierData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayModifierData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_TaggedFlags_MetaData[] = {
		{ "Category", "GameplayModifierData" },
		{ "ModuleRelativePath", "Public/GameplayModifierData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_TaggedFlags = { "TaggedFlags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayModifierData, TaggedFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_TaggedFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_TaggedFlags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_TaggedFlags_Inner = { "TaggedFlags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Category", "GameplayModifierData" },
		{ "ModuleRelativePath", "Public/GameplayModifierData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayModifierData, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_Modifiers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGamePlayModifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_Conditions_MetaData[] = {
		{ "Category", "GameplayModifierData" },
		{ "ModuleRelativePath", "Public/GameplayModifierData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayModifierData, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_Conditions_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBaseModifierCondition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayModifierData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_TaggedFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_TaggedFlags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_Modifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_Modifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_Conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierData_Statics::NewProp_Conditions_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayModifierData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
		nullptr,
		&NewStructOps,
		"GameplayModifierData",
		sizeof(FGameplayModifierData),
		alignof(FGameplayModifierData),
		Z_Construct_UScriptStruct_FGameplayModifierData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayModifierData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Competence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayModifierData"), sizeof(FGameplayModifierData), Get_Z_Construct_UScriptStruct_FGameplayModifierData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayModifierData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayModifierData_Hash() { return 2355362782U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
