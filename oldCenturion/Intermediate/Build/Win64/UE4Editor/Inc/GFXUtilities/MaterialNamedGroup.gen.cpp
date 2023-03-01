// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/MaterialNamedGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialNamedGroup() {}
// Cross Module References
	GFXUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialNamedGroup();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	GFXUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialMap();
// End Cross Module References
class UScriptStruct* FMaterialNamedGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GFXUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FMaterialNamedGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialNamedGroup, Z_Construct_UPackage__Script_GFXUtilities(), TEXT("MaterialNamedGroup"), sizeof(FMaterialNamedGroup), Get_Z_Construct_UScriptStruct_FMaterialNamedGroup_Hash());
	}
	return Singleton;
}
template<> GFXUTILITIES_API UScriptStruct* StaticStruct<FMaterialNamedGroup>()
{
	return FMaterialNamedGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialNamedGroup(FMaterialNamedGroup::StaticStruct, TEXT("/Script/GFXUtilities"), TEXT("MaterialNamedGroup"), false, nullptr, nullptr);
static struct FScriptStruct_GFXUtilities_StaticRegisterNativesFMaterialNamedGroup
{
	FScriptStruct_GFXUtilities_StaticRegisterNativesFMaterialNamedGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialNamedGroup")),new UScriptStruct::TCppStructOps<FMaterialNamedGroup>);
	}
} ScriptStruct_GFXUtilities_StaticRegisterNativesFMaterialNamedGroup;
	struct Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Maps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Maps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Maps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MaterialNamedGroup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialNamedGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::NewProp_Maps_MetaData[] = {
		{ "Category", "MaterialNamedGroup" },
		{ "ModuleRelativePath", "Public/MaterialNamedGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::NewProp_Maps = { "Maps", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialNamedGroup, Maps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::NewProp_Maps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::NewProp_Maps_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::NewProp_Maps_Inner = { "Maps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialMap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "MaterialNamedGroup" },
		{ "ModuleRelativePath", "Public/MaterialNamedGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialNamedGroup, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::NewProp_GroupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::NewProp_Maps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::NewProp_Maps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::NewProp_GroupName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
		nullptr,
		&NewStructOps,
		"MaterialNamedGroup",
		sizeof(FMaterialNamedGroup),
		alignof(FMaterialNamedGroup),
		Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialNamedGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialNamedGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GFXUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialNamedGroup"), sizeof(FMaterialNamedGroup), Get_Z_Construct_UScriptStruct_FMaterialNamedGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialNamedGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialNamedGroup_Hash() { return 182933716U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
