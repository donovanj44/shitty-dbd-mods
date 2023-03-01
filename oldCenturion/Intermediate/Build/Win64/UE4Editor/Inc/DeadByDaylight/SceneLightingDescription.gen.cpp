// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SceneLightingDescription.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneLightingDescription() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSceneLightingDescription();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLightingSpecifics();
// End Cross Module References
class UScriptStruct* FSceneLightingDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSceneLightingDescription_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSceneLightingDescription, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SceneLightingDescription"), sizeof(FSceneLightingDescription), Get_Z_Construct_UScriptStruct_FSceneLightingDescription_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSceneLightingDescription>()
{
	return FSceneLightingDescription::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSceneLightingDescription(FSceneLightingDescription::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SceneLightingDescription"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSceneLightingDescription
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSceneLightingDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SceneLightingDescription")),new UScriptStruct::TCppStructOps<FSceneLightingDescription>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSceneLightingDescription;
	struct Z_Construct_UScriptStruct_FSceneLightingDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureCube_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TextureCube;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingAtlanta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingAtlanta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingDetailsHighUltra_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingDetailsHighUltra;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingDetailsLowMedium_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingDetailsLowMedium;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ThemeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SceneLightingDescription.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSceneLightingDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_TextureCube_MetaData[] = {
		{ "Category", "SceneLightingDescription" },
		{ "ModuleRelativePath", "Public/SceneLightingDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_TextureCube = { "TextureCube", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSceneLightingDescription, TextureCube), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_TextureCube_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_TextureCube_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_LightingAtlanta_MetaData[] = {
		{ "Category", "SceneLightingDescription" },
		{ "ModuleRelativePath", "Public/SceneLightingDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_LightingAtlanta = { "LightingAtlanta", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSceneLightingDescription, LightingAtlanta), Z_Construct_UScriptStruct_FLightingSpecifics, METADATA_PARAMS(Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_LightingAtlanta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_LightingAtlanta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_LightingDetailsHighUltra_MetaData[] = {
		{ "Category", "SceneLightingDescription" },
		{ "ModuleRelativePath", "Public/SceneLightingDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_LightingDetailsHighUltra = { "LightingDetailsHighUltra", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSceneLightingDescription, LightingDetailsHighUltra), Z_Construct_UScriptStruct_FLightingSpecifics, METADATA_PARAMS(Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_LightingDetailsHighUltra_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_LightingDetailsHighUltra_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_LightingDetailsLowMedium_MetaData[] = {
		{ "Category", "SceneLightingDescription" },
		{ "ModuleRelativePath", "Public/SceneLightingDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_LightingDetailsLowMedium = { "LightingDetailsLowMedium", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSceneLightingDescription, LightingDetailsLowMedium), Z_Construct_UScriptStruct_FLightingSpecifics, METADATA_PARAMS(Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_LightingDetailsLowMedium_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_LightingDetailsLowMedium_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_ThemeName_MetaData[] = {
		{ "Category", "SceneLightingDescription" },
		{ "ModuleRelativePath", "Public/SceneLightingDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_ThemeName = { "ThemeName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSceneLightingDescription, ThemeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_ThemeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_ThemeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_TextureCube,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_LightingAtlanta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_LightingDetailsHighUltra,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_LightingDetailsLowMedium,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::NewProp_ThemeName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SceneLightingDescription",
		sizeof(FSceneLightingDescription),
		alignof(FSceneLightingDescription),
		Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSceneLightingDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSceneLightingDescription_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SceneLightingDescription"), sizeof(FSceneLightingDescription), Get_Z_Construct_UScriptStruct_FSceneLightingDescription_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSceneLightingDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSceneLightingDescription_Hash() { return 4002668885U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
