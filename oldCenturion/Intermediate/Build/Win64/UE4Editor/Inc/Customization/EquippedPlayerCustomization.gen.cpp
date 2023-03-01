// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Customization/Public/EquippedPlayerCustomization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquippedPlayerCustomization() {}
// Cross Module References
	CUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FEquippedPlayerCustomization();
	UPackage* Z_Construct_UPackage__Script_Customization();
	CUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FCharmIdSlot();
// End Cross Module References
class UScriptStruct* FEquippedPlayerCustomization::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CUSTOMIZATION_API uint32 Get_Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquippedPlayerCustomization, Z_Construct_UPackage__Script_Customization(), TEXT("EquippedPlayerCustomization"), sizeof(FEquippedPlayerCustomization), Get_Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Hash());
	}
	return Singleton;
}
template<> CUSTOMIZATION_API UScriptStruct* StaticStruct<FEquippedPlayerCustomization>()
{
	return FEquippedPlayerCustomization::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEquippedPlayerCustomization(FEquippedPlayerCustomization::StaticStruct, TEXT("/Script/Customization"), TEXT("EquippedPlayerCustomization"), false, nullptr, nullptr);
static struct FScriptStruct_Customization_StaticRegisterNativesFEquippedPlayerCustomization
{
	FScriptStruct_Customization_StaticRegisterNativesFEquippedPlayerCustomization()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EquippedPlayerCustomization")),new UScriptStruct::TCppStructOps<FEquippedPlayerCustomization>);
	}
} ScriptStruct_Customization_StaticRegisterNativesFEquippedPlayerCustomization;
	struct Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationCharms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__customizationCharms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__customizationCharms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationItemIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__customizationItemIds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__customizationItemIds_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EquippedPlayerCustomization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquippedPlayerCustomization>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::NewProp__customizationCharms_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquippedPlayerCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::NewProp__customizationCharms = { "_customizationCharms", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEquippedPlayerCustomization, _customizationCharms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::NewProp__customizationCharms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::NewProp__customizationCharms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::NewProp__customizationCharms_Inner = { "_customizationCharms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharmIdSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::NewProp__customizationItemIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquippedPlayerCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::NewProp__customizationItemIds = { "_customizationItemIds", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEquippedPlayerCustomization, _customizationItemIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::NewProp__customizationItemIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::NewProp__customizationItemIds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::NewProp__customizationItemIds_Inner = { "_customizationItemIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::NewProp__customizationCharms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::NewProp__customizationCharms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::NewProp__customizationItemIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::NewProp__customizationItemIds_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Customization,
		nullptr,
		&NewStructOps,
		"EquippedPlayerCustomization",
		sizeof(FEquippedPlayerCustomization),
		alignof(FEquippedPlayerCustomization),
		Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquippedPlayerCustomization()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Customization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EquippedPlayerCustomization"), sizeof(FEquippedPlayerCustomization), Get_Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEquippedPlayerCustomization_Hash() { return 1417218166U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
