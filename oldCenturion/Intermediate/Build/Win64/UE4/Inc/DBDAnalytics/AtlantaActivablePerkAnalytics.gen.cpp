// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/AtlantaActivablePerkAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaActivablePerkAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FAtlantaActivablePerkAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("AtlantaActivablePerkAnalytics"), sizeof(FAtlantaActivablePerkAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FAtlantaActivablePerkAnalytics>()
{
	return FAtlantaActivablePerkAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaActivablePerkAnalytics(FAtlantaActivablePerkAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("AtlantaActivablePerkAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaActivablePerkAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaActivablePerkAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaActivablePerkAnalytics")),new UScriptStruct::TCppStructOps<FAtlantaActivablePerkAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaActivablePerkAnalytics;
	struct Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedOnPerksWidget_MetaData[];
#endif
		static void NewProp_ClickedOnPerksWidget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClickedOnPerksWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PerkId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaActivablePerkAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaActivablePerkAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::NewProp_ClickedOnPerksWidget_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaActivablePerkAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::NewProp_ClickedOnPerksWidget_SetBit(void* Obj)
	{
		((FAtlantaActivablePerkAnalytics*)Obj)->ClickedOnPerksWidget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::NewProp_ClickedOnPerksWidget = { "ClickedOnPerksWidget", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaActivablePerkAnalytics), &Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::NewProp_ClickedOnPerksWidget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::NewProp_ClickedOnPerksWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::NewProp_ClickedOnPerksWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::NewProp_PerkId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaActivablePerkAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::NewProp_PerkId = { "PerkId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaActivablePerkAnalytics, PerkId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::NewProp_PerkId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::NewProp_PerkId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::NewProp_ClickedOnPerksWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::NewProp_PerkId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"AtlantaActivablePerkAnalytics",
		sizeof(FAtlantaActivablePerkAnalytics),
		alignof(FAtlantaActivablePerkAnalytics),
		Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaActivablePerkAnalytics"), sizeof(FAtlantaActivablePerkAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaActivablePerkAnalytics_Hash() { return 2561717930U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
