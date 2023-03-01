// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LandingPageTabData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandingPageTabData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLandingPageTabData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	ENGINE_API UClass* Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FLandingPageTabData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLandingPageTabData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandingPageTabData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LandingPageTabData"), sizeof(FLandingPageTabData), Get_Z_Construct_UScriptStruct_FLandingPageTabData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLandingPageTabData>()
{
	return FLandingPageTabData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandingPageTabData(FLandingPageTabData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LandingPageTabData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLandingPageTabData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLandingPageTabData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandingPageTabData")),new UScriptStruct::TCppStructOps<FLandingPageTabData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLandingPageTabData;
	struct Z_Construct_UScriptStruct_FLandingPageTabData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsButtonEnabled_MetaData[];
#endif
		static void NewProp_IsButtonEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsButtonEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BannerBackgroudColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BannerBackgroudColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_DefaultImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DefaultText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandingPageTabData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LandingPageTabData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandingPageTabData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_IsButtonEnabled_MetaData[] = {
		{ "Category", "LandingPageTabData" },
		{ "ModuleRelativePath", "Public/LandingPageTabData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_IsButtonEnabled_SetBit(void* Obj)
	{
		((FLandingPageTabData*)Obj)->IsButtonEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_IsButtonEnabled = { "IsButtonEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLandingPageTabData), &Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_IsButtonEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_IsButtonEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_IsButtonEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_BannerBackgroudColor_MetaData[] = {
		{ "Category", "LandingPageTabData" },
		{ "ModuleRelativePath", "Public/LandingPageTabData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_BannerBackgroudColor = { "BannerBackgroudColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandingPageTabData, BannerBackgroudColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_BannerBackgroudColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_BannerBackgroudColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_DefaultImage_MetaData[] = {
		{ "Category", "LandingPageTabData" },
		{ "ModuleRelativePath", "Public/LandingPageTabData.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_DefaultImage = { "DefaultImage", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandingPageTabData, DefaultImage), Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_DefaultImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_DefaultImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_DefaultText_MetaData[] = {
		{ "Category", "LandingPageTabData" },
		{ "ModuleRelativePath", "Public/LandingPageTabData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_DefaultText = { "DefaultText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandingPageTabData, DefaultText), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_DefaultText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_DefaultText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandingPageTabData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_IsButtonEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_BannerBackgroudColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_DefaultImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandingPageTabData_Statics::NewProp_DefaultText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandingPageTabData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LandingPageTabData",
		sizeof(FLandingPageTabData),
		alignof(FLandingPageTabData),
		Z_Construct_UScriptStruct_FLandingPageTabData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandingPageTabData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandingPageTabData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandingPageTabData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandingPageTabData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandingPageTabData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandingPageTabData"), sizeof(FLandingPageTabData), Get_Z_Construct_UScriptStruct_FLandingPageTabData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandingPageTabData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandingPageTabData_Hash() { return 1565173028U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
