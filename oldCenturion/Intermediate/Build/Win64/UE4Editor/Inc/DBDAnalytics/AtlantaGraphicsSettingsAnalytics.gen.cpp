// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/AtlantaGraphicsSettingsAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaGraphicsSettingsAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FAtlantaGraphicsSettingsAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("AtlantaGraphicsSettingsAnalytics"), sizeof(FAtlantaGraphicsSettingsAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FAtlantaGraphicsSettingsAnalytics>()
{
	return FAtlantaGraphicsSettingsAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics(FAtlantaGraphicsSettingsAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("AtlantaGraphicsSettingsAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaGraphicsSettingsAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaGraphicsSettingsAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaGraphicsSettingsAnalytics")),new UScriptStruct::TCppStructOps<FAtlantaGraphicsSettingsAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaGraphicsSettingsAnalytics;
	struct Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fpsValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fpsValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAutoScalabilitySet_MetaData[];
#endif
		static void NewProp_isAutoScalabilitySet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAutoScalabilitySet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scalabilityValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_scalabilityValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaGraphicsSettingsAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaGraphicsSettingsAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewProp_fpsValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaGraphicsSettingsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewProp_fpsValue = { "fpsValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaGraphicsSettingsAnalytics, fpsValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewProp_fpsValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewProp_fpsValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewProp_isAutoScalabilitySet_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaGraphicsSettingsAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewProp_isAutoScalabilitySet_SetBit(void* Obj)
	{
		((FAtlantaGraphicsSettingsAnalytics*)Obj)->isAutoScalabilitySet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewProp_isAutoScalabilitySet = { "isAutoScalabilitySet", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaGraphicsSettingsAnalytics), &Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewProp_isAutoScalabilitySet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewProp_isAutoScalabilitySet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewProp_isAutoScalabilitySet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewProp_scalabilityValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaGraphicsSettingsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewProp_scalabilityValue = { "scalabilityValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaGraphicsSettingsAnalytics, scalabilityValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewProp_scalabilityValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewProp_scalabilityValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewProp_fpsValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewProp_isAutoScalabilitySet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::NewProp_scalabilityValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"AtlantaGraphicsSettingsAnalytics",
		sizeof(FAtlantaGraphicsSettingsAnalytics),
		alignof(FAtlantaGraphicsSettingsAnalytics),
		Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaGraphicsSettingsAnalytics"), sizeof(FAtlantaGraphicsSettingsAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaGraphicsSettingsAnalytics_Hash() { return 1619017781U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
