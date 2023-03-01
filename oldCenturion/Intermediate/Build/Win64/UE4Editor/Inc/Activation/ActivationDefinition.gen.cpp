// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Activation/Public/ActivationDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivationDefinition() {}
// Cross Module References
	ACTIVATION_API UScriptStruct* Z_Construct_UScriptStruct_FActivationDefinition();
	UPackage* Z_Construct_UPackage__Script_Activation();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ACTIVATION_API UEnum* Z_Construct_UEnum_Activation_EActivationStrategy();
// End Cross Module References
class UScriptStruct* FActivationDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIVATION_API uint32 Get_Z_Construct_UScriptStruct_FActivationDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActivationDefinition, Z_Construct_UPackage__Script_Activation(), TEXT("ActivationDefinition"), sizeof(FActivationDefinition), Get_Z_Construct_UScriptStruct_FActivationDefinition_Hash());
	}
	return Singleton;
}
template<> ACTIVATION_API UScriptStruct* StaticStruct<FActivationDefinition>()
{
	return FActivationDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActivationDefinition(FActivationDefinition::StaticStruct, TEXT("/Script/Activation"), TEXT("ActivationDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Activation_StaticRegisterNativesFActivationDefinition
{
	FScriptStruct_Activation_StaticRegisterNativesFActivationDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActivationDefinition")),new UScriptStruct::TCppStructOps<FActivationDefinition>);
	}
} ScriptStruct_Activation_StaticRegisterNativesFActivationDefinition;
	struct Z_Construct_UScriptStruct_FActivationDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activationTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__activationTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activationStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__activationStrategy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__activationStrategy_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActivationDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActivationDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActivationDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActivationDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActivationDefinition_Statics::NewProp__activationTags_MetaData[] = {
		{ "Category", "ActivationDefinition" },
		{ "ModuleRelativePath", "Public/ActivationDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActivationDefinition_Statics::NewProp__activationTags = { "_activationTags", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActivationDefinition, _activationTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FActivationDefinition_Statics::NewProp__activationTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivationDefinition_Statics::NewProp__activationTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActivationDefinition_Statics::NewProp__activationStrategy_MetaData[] = {
		{ "Category", "ActivationDefinition" },
		{ "ModuleRelativePath", "Public/ActivationDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FActivationDefinition_Statics::NewProp__activationStrategy = { "_activationStrategy", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActivationDefinition, _activationStrategy), Z_Construct_UEnum_Activation_EActivationStrategy, METADATA_PARAMS(Z_Construct_UScriptStruct_FActivationDefinition_Statics::NewProp__activationStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivationDefinition_Statics::NewProp__activationStrategy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActivationDefinition_Statics::NewProp__activationStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActivationDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActivationDefinition_Statics::NewProp__activationTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActivationDefinition_Statics::NewProp__activationStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActivationDefinition_Statics::NewProp__activationStrategy_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActivationDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Activation,
		nullptr,
		&NewStructOps,
		"ActivationDefinition",
		sizeof(FActivationDefinition),
		alignof(FActivationDefinition),
		Z_Construct_UScriptStruct_FActivationDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivationDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActivationDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivationDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActivationDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActivationDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Activation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActivationDefinition"), sizeof(FActivationDefinition), Get_Z_Construct_UScriptStruct_FActivationDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActivationDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActivationDefinition_Hash() { return 565600091U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
