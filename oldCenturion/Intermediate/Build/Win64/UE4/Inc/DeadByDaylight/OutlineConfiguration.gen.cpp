// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OutlineConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutlineConfiguration() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOutlineConfiguration();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FOutlineConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FOutlineConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutlineConfiguration, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("OutlineConfiguration"), sizeof(FOutlineConfiguration), Get_Z_Construct_UScriptStruct_FOutlineConfiguration_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FOutlineConfiguration>()
{
	return FOutlineConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOutlineConfiguration(FOutlineConfiguration::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("OutlineConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFOutlineConfiguration
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFOutlineConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OutlineConfiguration")),new UScriptStruct::TCppStructOps<FOutlineConfiguration>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFOutlineConfiguration;
	struct Z_Construct_UScriptStruct_FOutlineConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocallyControlledTranslucencyMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocallyControlledTranslucencyMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocallyControlledTranslucencyMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucencyMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TranslucencyMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucencyMaterials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OutlineConfiguration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutlineConfiguration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::NewProp_LocallyControlledTranslucencyMaterials_MetaData[] = {
		{ "Category", "OutlineConfiguration" },
		{ "ModuleRelativePath", "Public/OutlineConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::NewProp_LocallyControlledTranslucencyMaterials = { "LocallyControlledTranslucencyMaterials", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutlineConfiguration, LocallyControlledTranslucencyMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::NewProp_LocallyControlledTranslucencyMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::NewProp_LocallyControlledTranslucencyMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::NewProp_LocallyControlledTranslucencyMaterials_Inner = { "LocallyControlledTranslucencyMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::NewProp_TranslucencyMaterials_MetaData[] = {
		{ "Category", "OutlineConfiguration" },
		{ "ModuleRelativePath", "Public/OutlineConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::NewProp_TranslucencyMaterials = { "TranslucencyMaterials", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutlineConfiguration, TranslucencyMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::NewProp_TranslucencyMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::NewProp_TranslucencyMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::NewProp_TranslucencyMaterials_Inner = { "TranslucencyMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::NewProp_LocallyControlledTranslucencyMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::NewProp_LocallyControlledTranslucencyMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::NewProp_TranslucencyMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::NewProp_TranslucencyMaterials_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"OutlineConfiguration",
		sizeof(FOutlineConfiguration),
		alignof(FOutlineConfiguration),
		Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOutlineConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOutlineConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OutlineConfiguration"), sizeof(FOutlineConfiguration), Get_Z_Construct_UScriptStruct_FOutlineConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOutlineConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOutlineConfiguration_Hash() { return 71210359U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
