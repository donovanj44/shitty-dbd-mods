// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PerkLevelText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkLevelText() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPerkLevelText();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FPerkLevelText::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPerkLevelText_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerkLevelText, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PerkLevelText"), sizeof(FPerkLevelText), Get_Z_Construct_UScriptStruct_FPerkLevelText_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPerkLevelText>()
{
	return FPerkLevelText::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerkLevelText(FPerkLevelText::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PerkLevelText"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPerkLevelText
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPerkLevelText()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerkLevelText")),new UScriptStruct::TCppStructOps<FPerkLevelText>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPerkLevelText;
	struct Z_Construct_UScriptStruct_FPerkLevelText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tunables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tunables;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tunables_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkLevelText_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PerkLevelText.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerkLevelText_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerkLevelText>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkLevelText_Statics::NewProp_TextOverride_MetaData[] = {
		{ "Category", "PerkLevelText" },
		{ "ModuleRelativePath", "Public/PerkLevelText.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPerkLevelText_Statics::NewProp_TextOverride = { "TextOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkLevelText, TextOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkLevelText_Statics::NewProp_TextOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkLevelText_Statics::NewProp_TextOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkLevelText_Statics::NewProp_Tunables_MetaData[] = {
		{ "Category", "PerkLevelText" },
		{ "ModuleRelativePath", "Public/PerkLevelText.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPerkLevelText_Statics::NewProp_Tunables = { "Tunables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkLevelText, Tunables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkLevelText_Statics::NewProp_Tunables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkLevelText_Statics::NewProp_Tunables_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerkLevelText_Statics::NewProp_Tunables_Inner = { "Tunables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerkLevelText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkLevelText_Statics::NewProp_TextOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkLevelText_Statics::NewProp_Tunables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkLevelText_Statics::NewProp_Tunables_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerkLevelText_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PerkLevelText",
		sizeof(FPerkLevelText),
		alignof(FPerkLevelText),
		Z_Construct_UScriptStruct_FPerkLevelText_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkLevelText_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkLevelText_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkLevelText_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerkLevelText()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerkLevelText_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerkLevelText"), sizeof(FPerkLevelText), Get_Z_Construct_UScriptStruct_FPerkLevelText_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerkLevelText_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerkLevelText_Hash() { return 3827789243U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
