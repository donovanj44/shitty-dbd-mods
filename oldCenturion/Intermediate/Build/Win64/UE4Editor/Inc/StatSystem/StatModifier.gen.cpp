// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatSystem/Public/StatModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatModifier() {}
// Cross Module References
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatModifier();
	UPackage* Z_Construct_UPackage__Script_StatSystem();
	STATSYSTEM_API UEnum* Z_Construct_UEnum_StatSystem_EModifierCompoundStrategy();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATSYSTEM_API UEnum* Z_Construct_UEnum_StatSystem_EModifierOperationStrategy();
// End Cross Module References
class UScriptStruct* FStatModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FStatModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatModifier, Z_Construct_UPackage__Script_StatSystem(), TEXT("StatModifier"), sizeof(FStatModifier), Get_Z_Construct_UScriptStruct_FStatModifier_Hash());
	}
	return Singleton;
}
template<> STATSYSTEM_API UScriptStruct* StaticStruct<FStatModifier>()
{
	return FStatModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStatModifier(FStatModifier::StaticStruct, TEXT("/Script/StatSystem"), TEXT("StatModifier"), false, nullptr, nullptr);
static struct FScriptStruct_StatSystem_StaticRegisterNativesFStatModifier
{
	FScriptStruct_StatSystem_StaticRegisterNativesFStatModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StatModifier")),new UScriptStruct::TCppStructOps<FStatModifier>);
	}
} ScriptStruct_StatSystem_StaticRegisterNativesFStatModifier;
	struct Z_Construct_UScriptStruct_FStatModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompoundStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompoundStrategy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompoundStrategy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifierTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OperationStrategy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OperationStrategy_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StatModifier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_CompoundStrategy_MetaData[] = {
		{ "Category", "StatModifier" },
		{ "ModuleRelativePath", "Public/StatModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_CompoundStrategy = { "CompoundStrategy", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatModifier, CompoundStrategy), Z_Construct_UEnum_StatSystem_EModifierCompoundStrategy, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_CompoundStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_CompoundStrategy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_CompoundStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_ModifierTag_MetaData[] = {
		{ "Category", "StatModifier" },
		{ "ModuleRelativePath", "Public/StatModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_ModifierTag = { "ModifierTag", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatModifier, ModifierTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_ModifierTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_ModifierTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_OperationStrategy_MetaData[] = {
		{ "Category", "StatModifier" },
		{ "ModuleRelativePath", "Public/StatModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_OperationStrategy = { "OperationStrategy", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatModifier, OperationStrategy), Z_Construct_UEnum_StatSystem_EModifierOperationStrategy, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_OperationStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_OperationStrategy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_OperationStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_CompoundStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_CompoundStrategy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_ModifierTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_OperationStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatModifier_Statics::NewProp_OperationStrategy_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StatSystem,
		nullptr,
		&NewStructOps,
		"StatModifier",
		sizeof(FStatModifier),
		alignof(FStatModifier),
		Z_Construct_UScriptStruct_FStatModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatModifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStatModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StatSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StatModifier"), sizeof(FStatModifier), Get_Z_Construct_UScriptStruct_FStatModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStatModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStatModifier_Hash() { return 3192579949U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
