// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ResolutionQualityPair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResolutionQualityPair() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FResolutionQualityPair();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FResolutionQualityPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FResolutionQualityPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResolutionQualityPair, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ResolutionQualityPair"), sizeof(FResolutionQualityPair), Get_Z_Construct_UScriptStruct_FResolutionQualityPair_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FResolutionQualityPair>()
{
	return FResolutionQualityPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResolutionQualityPair(FResolutionQualityPair::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ResolutionQualityPair"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFResolutionQualityPair
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFResolutionQualityPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ResolutionQualityPair")),new UScriptStruct::TCppStructOps<FResolutionQualityPair>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFResolutionQualityPair;
	struct Z_Construct_UScriptStruct_FResolutionQualityPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScreenResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenScaleForWindowedMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScreenScaleForWindowedMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAdjust_MetaData[];
#endif
		static void NewProp_AutoAdjust_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoAdjust;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ResolutionQualityPair.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResolutionQualityPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ScreenResolution_MetaData[] = {
		{ "Category", "ResolutionQualityPair" },
		{ "ModuleRelativePath", "Public/ResolutionQualityPair.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ScreenResolution = { "ScreenResolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResolutionQualityPair, ScreenResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ScreenResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ScreenResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ScreenScaleForWindowedMode_MetaData[] = {
		{ "Category", "ResolutionQualityPair" },
		{ "ModuleRelativePath", "Public/ResolutionQualityPair.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ScreenScaleForWindowedMode = { "ScreenScaleForWindowedMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResolutionQualityPair, ScreenScaleForWindowedMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ScreenScaleForWindowedMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ScreenScaleForWindowedMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_AutoAdjust_MetaData[] = {
		{ "Category", "ResolutionQualityPair" },
		{ "ModuleRelativePath", "Public/ResolutionQualityPair.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_AutoAdjust_SetBit(void* Obj)
	{
		((FResolutionQualityPair*)Obj)->AutoAdjust = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_AutoAdjust = { "AutoAdjust", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FResolutionQualityPair), &Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_AutoAdjust_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_AutoAdjust_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_AutoAdjust_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_Quality_MetaData[] = {
		{ "Category", "ResolutionQualityPair" },
		{ "ModuleRelativePath", "Public/ResolutionQualityPair.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResolutionQualityPair, Quality), METADATA_PARAMS(Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_Quality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_Quality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ResY_MetaData[] = {
		{ "Category", "ResolutionQualityPair" },
		{ "ModuleRelativePath", "Public/ResolutionQualityPair.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ResY = { "ResY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResolutionQualityPair, ResY), METADATA_PARAMS(Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ResY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ResY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ResX_MetaData[] = {
		{ "Category", "ResolutionQualityPair" },
		{ "ModuleRelativePath", "Public/ResolutionQualityPair.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ResX = { "ResX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResolutionQualityPair, ResX), METADATA_PARAMS(Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ResX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ResX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ScreenResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ScreenScaleForWindowedMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_AutoAdjust,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_Quality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ResY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::NewProp_ResX,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"ResolutionQualityPair",
		sizeof(FResolutionQualityPair),
		alignof(FResolutionQualityPair),
		Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResolutionQualityPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResolutionQualityPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ResolutionQualityPair"), sizeof(FResolutionQualityPair), Get_Z_Construct_UScriptStruct_FResolutionQualityPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResolutionQualityPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResolutionQualityPair_Hash() { return 3492678174U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
