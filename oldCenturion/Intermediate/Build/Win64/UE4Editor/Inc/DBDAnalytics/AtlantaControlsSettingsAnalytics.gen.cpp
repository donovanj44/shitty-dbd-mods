// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/AtlantaControlsSettingsAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaControlsSettingsAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FAtlantaControlsSettingsAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("AtlantaControlsSettingsAnalytics"), sizeof(FAtlantaControlsSettingsAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FAtlantaControlsSettingsAnalytics>()
{
	return FAtlantaControlsSettingsAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaControlsSettingsAnalytics(FAtlantaControlsSettingsAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("AtlantaControlsSettingsAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaControlsSettingsAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaControlsSettingsAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaControlsSettingsAnalytics")),new UScriptStruct::TCppStructOps<FAtlantaControlsSettingsAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaControlsSettingsAnalytics;
	struct Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ControlType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSurvivorInvertY_MetaData[];
#endif
		static void NewProp_IsSurvivorInvertY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSurvivorInvertY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsKillerInvertY_MetaData[];
#endif
		static void NewProp_IsKillerInvertY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsKillerInvertY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbSurvivorCustomizedHuds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NbSurvivorCustomizedHuds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbKillerCustomizedHuds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NbKillerCustomizedHuds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUsingCustomizedHuds_MetaData[];
#endif
		static void NewProp_IsUsingCustomizedHuds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUsingCustomizedHuds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaControlsSettingsAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaControlsSettingsAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_ControlType_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaControlsSettingsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_ControlType = { "ControlType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaControlsSettingsAnalytics, ControlType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_ControlType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_ControlType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsSurvivorInvertY_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaControlsSettingsAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsSurvivorInvertY_SetBit(void* Obj)
	{
		((FAtlantaControlsSettingsAnalytics*)Obj)->IsSurvivorInvertY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsSurvivorInvertY = { "IsSurvivorInvertY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaControlsSettingsAnalytics), &Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsSurvivorInvertY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsSurvivorInvertY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsSurvivorInvertY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsKillerInvertY_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaControlsSettingsAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsKillerInvertY_SetBit(void* Obj)
	{
		((FAtlantaControlsSettingsAnalytics*)Obj)->IsKillerInvertY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsKillerInvertY = { "IsKillerInvertY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaControlsSettingsAnalytics), &Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsKillerInvertY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsKillerInvertY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsKillerInvertY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_NbSurvivorCustomizedHuds_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaControlsSettingsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_NbSurvivorCustomizedHuds = { "NbSurvivorCustomizedHuds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaControlsSettingsAnalytics, NbSurvivorCustomizedHuds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_NbSurvivorCustomizedHuds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_NbSurvivorCustomizedHuds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_NbKillerCustomizedHuds_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaControlsSettingsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_NbKillerCustomizedHuds = { "NbKillerCustomizedHuds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaControlsSettingsAnalytics, NbKillerCustomizedHuds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_NbKillerCustomizedHuds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_NbKillerCustomizedHuds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsUsingCustomizedHuds_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaControlsSettingsAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsUsingCustomizedHuds_SetBit(void* Obj)
	{
		((FAtlantaControlsSettingsAnalytics*)Obj)->IsUsingCustomizedHuds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsUsingCustomizedHuds = { "IsUsingCustomizedHuds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaControlsSettingsAnalytics), &Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsUsingCustomizedHuds_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsUsingCustomizedHuds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsUsingCustomizedHuds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_ControlType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsSurvivorInvertY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsKillerInvertY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_NbSurvivorCustomizedHuds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_NbKillerCustomizedHuds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::NewProp_IsUsingCustomizedHuds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"AtlantaControlsSettingsAnalytics",
		sizeof(FAtlantaControlsSettingsAnalytics),
		alignof(FAtlantaControlsSettingsAnalytics),
		Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaControlsSettingsAnalytics"), sizeof(FAtlantaControlsSettingsAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaControlsSettingsAnalytics_Hash() { return 985478476U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
