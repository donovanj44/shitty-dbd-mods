// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GameplayElementSubstitutions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayElementSubstitutions() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayElementSubstitutions();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FElementSubstitutions();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameplayElementType();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSubstitutionElements();
// End Cross Module References
class UScriptStruct* FGameplayElementSubstitutions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayElementSubstitutions, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("GameplayElementSubstitutions"), sizeof(FGameplayElementSubstitutions), Get_Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FGameplayElementSubstitutions>()
{
	return FGameplayElementSubstitutions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayElementSubstitutions(FGameplayElementSubstitutions::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("GameplayElementSubstitutions"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFGameplayElementSubstitutions
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFGameplayElementSubstitutions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayElementSubstitutions")),new UScriptStruct::TCppStructOps<FGameplayElementSubstitutions>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFGameplayElementSubstitutions;
	struct Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__replacements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__replacements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__replacements_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayElementSubstitutions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayElementSubstitutions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::NewProp__type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayElementSubstitutions" },
		{ "ModuleRelativePath", "Public/GameplayElementSubstitutions.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayElementSubstitutions, _type), Z_Construct_UEnum_DeadByDaylight_EGameplayElementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::NewProp__type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::NewProp__type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::NewProp__replacements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayElementSubstitutions" },
		{ "ModuleRelativePath", "Public/GameplayElementSubstitutions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::NewProp__replacements = { "_replacements", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayElementSubstitutions, _replacements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::NewProp__replacements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::NewProp__replacements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::NewProp__replacements_Inner = { "_replacements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSubstitutionElements, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::NewProp__type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::NewProp__type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::NewProp__replacements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::NewProp__replacements_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FElementSubstitutions,
		&NewStructOps,
		"GameplayElementSubstitutions",
		sizeof(FGameplayElementSubstitutions),
		alignof(FGameplayElementSubstitutions),
		Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayElementSubstitutions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayElementSubstitutions"), sizeof(FGameplayElementSubstitutions), Get_Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayElementSubstitutions_Hash() { return 2855864266U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
