// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/AtlantaSurvivorTutorialAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaSurvivorTutorialAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FAtlantaSurvivorTutorialAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("AtlantaSurvivorTutorialAnalytics"), sizeof(FAtlantaSurvivorTutorialAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FAtlantaSurvivorTutorialAnalytics>()
{
	return FAtlantaSurvivorTutorialAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics(FAtlantaSurvivorTutorialAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("AtlantaSurvivorTutorialAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaSurvivorTutorialAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaSurvivorTutorialAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaSurvivorTutorialAnalytics")),new UScriptStruct::TCppStructOps<FAtlantaSurvivorTutorialAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaSurvivorTutorialAnalytics;
	struct Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorTutorialSkipped_MetaData[];
#endif
		static void NewProp_SurvivorTutorialSkipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SurvivorTutorialSkipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorTutorialCompleted_MetaData[];
#endif
		static void NewProp_SurvivorTutorialCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SurvivorTutorialCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaSurvivorTutorialAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaSurvivorTutorialAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::NewProp_SurvivorTutorialSkipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::NewProp_SurvivorTutorialSkipped_SetBit(void* Obj)
	{
		((FAtlantaSurvivorTutorialAnalytics*)Obj)->SurvivorTutorialSkipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::NewProp_SurvivorTutorialSkipped = { "SurvivorTutorialSkipped", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::NewProp_SurvivorTutorialSkipped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::NewProp_SurvivorTutorialSkipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::NewProp_SurvivorTutorialSkipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::NewProp_SurvivorTutorialCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::NewProp_SurvivorTutorialCompleted_SetBit(void* Obj)
	{
		((FAtlantaSurvivorTutorialAnalytics*)Obj)->SurvivorTutorialCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::NewProp_SurvivorTutorialCompleted = { "SurvivorTutorialCompleted", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::NewProp_SurvivorTutorialCompleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::NewProp_SurvivorTutorialCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::NewProp_SurvivorTutorialCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::NewProp_SurvivorTutorialSkipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::NewProp_SurvivorTutorialCompleted,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"AtlantaSurvivorTutorialAnalytics",
		sizeof(FAtlantaSurvivorTutorialAnalytics),
		alignof(FAtlantaSurvivorTutorialAnalytics),
		Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaSurvivorTutorialAnalytics"), sizeof(FAtlantaSurvivorTutorialAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaSurvivorTutorialAnalytics_Hash() { return 2377508038U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
