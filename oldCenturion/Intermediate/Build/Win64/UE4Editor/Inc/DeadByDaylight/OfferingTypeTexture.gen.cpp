// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OfferingTypeTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOfferingTypeTexture() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOfferingTypeTexture();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
class UScriptStruct* FOfferingTypeTexture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FOfferingTypeTexture_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOfferingTypeTexture, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("OfferingTypeTexture"), sizeof(FOfferingTypeTexture), Get_Z_Construct_UScriptStruct_FOfferingTypeTexture_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FOfferingTypeTexture>()
{
	return FOfferingTypeTexture::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOfferingTypeTexture(FOfferingTypeTexture::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("OfferingTypeTexture"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFOfferingTypeTexture
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFOfferingTypeTexture()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OfferingTypeTexture")),new UScriptStruct::TCppStructOps<FOfferingTypeTexture>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFOfferingTypeTexture;
	struct Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OfferingTypeTexture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOfferingTypeTexture>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::NewProp_TextureBack_MetaData[] = {
		{ "Category", "OfferingTypeTexture" },
		{ "ModuleRelativePath", "Public/OfferingTypeTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::NewProp_TextureBack = { "TextureBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOfferingTypeTexture, TextureBack), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::NewProp_TextureBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::NewProp_TextureBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "OfferingTypeTexture" },
		{ "ModuleRelativePath", "Public/OfferingTypeTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOfferingTypeTexture, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::NewProp_TextureBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"OfferingTypeTexture",
		sizeof(FOfferingTypeTexture),
		alignof(FOfferingTypeTexture),
		Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOfferingTypeTexture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOfferingTypeTexture_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OfferingTypeTexture"), sizeof(FOfferingTypeTexture), Get_Z_Construct_UScriptStruct_FOfferingTypeTexture_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOfferingTypeTexture_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOfferingTypeTexture_Hash() { return 438010707U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
