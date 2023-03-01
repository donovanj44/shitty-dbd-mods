// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/GamePlayModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamePlayModifier() {}
// Cross Module References
	COMPETENCE_API UScriptStruct* Z_Construct_UScriptStruct_FGamePlayModifier();
	UPackage* Z_Construct_UPackage__Script_Competence();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FGamePlayModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMPETENCE_API uint32 Get_Z_Construct_UScriptStruct_FGamePlayModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGamePlayModifier, Z_Construct_UPackage__Script_Competence(), TEXT("GamePlayModifier"), sizeof(FGamePlayModifier), Get_Z_Construct_UScriptStruct_FGamePlayModifier_Hash());
	}
	return Singleton;
}
template<> COMPETENCE_API UScriptStruct* StaticStruct<FGamePlayModifier>()
{
	return FGamePlayModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGamePlayModifier(FGamePlayModifier::StaticStruct, TEXT("/Script/Competence"), TEXT("GamePlayModifier"), false, nullptr, nullptr);
static struct FScriptStruct_Competence_StaticRegisterNativesFGamePlayModifier
{
	FScriptStruct_Competence_StaticRegisterNativesFGamePlayModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GamePlayModifier")),new UScriptStruct::TCppStructOps<FGamePlayModifier>);
	}
} ScriptStruct_Competence_StaticRegisterNativesFGamePlayModifier;
	struct Z_Construct_UScriptStruct_FGamePlayModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModifierValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePlayModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GamePlayModifier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGamePlayModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGamePlayModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePlayModifier_Statics::NewProp_ModifierValue_MetaData[] = {
		{ "Category", "GamePlayModifier" },
		{ "ModuleRelativePath", "Public/GamePlayModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGamePlayModifier_Statics::NewProp_ModifierValue = { "ModifierValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamePlayModifier, ModifierValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePlayModifier_Statics::NewProp_ModifierValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePlayModifier_Statics::NewProp_ModifierValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamePlayModifier_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "GamePlayModifier" },
		{ "ModuleRelativePath", "Public/GamePlayModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGamePlayModifier_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamePlayModifier, Type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePlayModifier_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePlayModifier_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGamePlayModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePlayModifier_Statics::NewProp_ModifierValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamePlayModifier_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGamePlayModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
		nullptr,
		&NewStructOps,
		"GamePlayModifier",
		sizeof(FGamePlayModifier),
		alignof(FGamePlayModifier),
		Z_Construct_UScriptStruct_FGamePlayModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePlayModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGamePlayModifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamePlayModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGamePlayModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGamePlayModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Competence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GamePlayModifier"), sizeof(FGamePlayModifier), Get_Z_Construct_UScriptStruct_FGamePlayModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGamePlayModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGamePlayModifier_Hash() { return 1950815567U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
