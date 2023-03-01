// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Onboarding/Public/SecretBotMatchNamesDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecretBotMatchNamesDefinition() {}
// Cross Module References
	ONBOARDING_API UScriptStruct* Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition();
	UPackage* Z_Construct_UPackage__Script_Onboarding();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FSecretBotMatchNamesDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONBOARDING_API uint32 Get_Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition, Z_Construct_UPackage__Script_Onboarding(), TEXT("SecretBotMatchNamesDefinition"), sizeof(FSecretBotMatchNamesDefinition), Get_Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Hash());
	}
	return Singleton;
}
template<> ONBOARDING_API UScriptStruct* StaticStruct<FSecretBotMatchNamesDefinition>()
{
	return FSecretBotMatchNamesDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSecretBotMatchNamesDefinition(FSecretBotMatchNamesDefinition::StaticStruct, TEXT("/Script/Onboarding"), TEXT("SecretBotMatchNamesDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Onboarding_StaticRegisterNativesFSecretBotMatchNamesDefinition
{
	FScriptStruct_Onboarding_StaticRegisterNativesFSecretBotMatchNamesDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SecretBotMatchNamesDefinition")),new UScriptStruct::TCppStructOps<FSecretBotMatchNamesDefinition>);
	}
} ScriptStruct_Onboarding_StaticRegisterNativesFSecretBotMatchNamesDefinition;
	struct Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SecretBotMatchNamesDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSecretBotMatchNamesDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::NewProp_name_MetaData[] = {
		{ "Category", "SecretBotMatchNamesDefinition" },
		{ "ModuleRelativePath", "Public/SecretBotMatchNamesDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSecretBotMatchNamesDefinition, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "SecretBotMatchNamesDefinition" },
		{ "ModuleRelativePath", "Public/SecretBotMatchNamesDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSecretBotMatchNamesDefinition, ID), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Onboarding,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"SecretBotMatchNamesDefinition",
		sizeof(FSecretBotMatchNamesDefinition),
		alignof(FSecretBotMatchNamesDefinition),
		Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Onboarding();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SecretBotMatchNamesDefinition"), sizeof(FSecretBotMatchNamesDefinition), Get_Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSecretBotMatchNamesDefinition_Hash() { return 1872066817U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
