// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlCookedMapDescription.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlCookedMapDescription() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlCookedMapDescription();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
class UScriptStruct* FAtlCookedMapDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlCookedMapDescription_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlCookedMapDescription, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlCookedMapDescription"), sizeof(FAtlCookedMapDescription), Get_Z_Construct_UScriptStruct_FAtlCookedMapDescription_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlCookedMapDescription>()
{
	return FAtlCookedMapDescription::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlCookedMapDescription(FAtlCookedMapDescription::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlCookedMapDescription"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlCookedMapDescription
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlCookedMapDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlCookedMapDescription")),new UScriptStruct::TCppStructOps<FAtlCookedMapDescription>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlCookedMapDescription;
	struct Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MapAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ThemeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtlCookedMapDescription.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlCookedMapDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::NewProp_MapAsset_MetaData[] = {
		{ "Category", "AtlCookedMapDescription" },
		{ "ModuleRelativePath", "Public/AtlCookedMapDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::NewProp_MapAsset = { "MapAsset", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlCookedMapDescription, MapAsset), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::NewProp_MapAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::NewProp_MapAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::NewProp_ThemeName_MetaData[] = {
		{ "Category", "AtlCookedMapDescription" },
		{ "ModuleRelativePath", "Public/AtlCookedMapDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::NewProp_ThemeName = { "ThemeName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlCookedMapDescription, ThemeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::NewProp_ThemeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::NewProp_ThemeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::NewProp_MapAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::NewProp_ThemeName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AtlCookedMapDescription",
		sizeof(FAtlCookedMapDescription),
		alignof(FAtlCookedMapDescription),
		Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlCookedMapDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlCookedMapDescription_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlCookedMapDescription"), sizeof(FAtlCookedMapDescription), Get_Z_Construct_UScriptStruct_FAtlCookedMapDescription_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlCookedMapDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlCookedMapDescription_Hash() { return 2650926138U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
