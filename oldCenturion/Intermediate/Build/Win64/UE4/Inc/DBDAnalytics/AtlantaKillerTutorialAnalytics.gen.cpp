// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/AtlantaKillerTutorialAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaKillerTutorialAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FAtlantaKillerTutorialAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("AtlantaKillerTutorialAnalytics"), sizeof(FAtlantaKillerTutorialAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FAtlantaKillerTutorialAnalytics>()
{
	return FAtlantaKillerTutorialAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaKillerTutorialAnalytics(FAtlantaKillerTutorialAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("AtlantaKillerTutorialAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaKillerTutorialAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaKillerTutorialAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaKillerTutorialAnalytics")),new UScriptStruct::TCppStructOps<FAtlantaKillerTutorialAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaKillerTutorialAnalytics;
	struct Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerTutorialSkipped_MetaData[];
#endif
		static void NewProp_KillerTutorialSkipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_KillerTutorialSkipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerTutorialCompleted_MetaData[];
#endif
		static void NewProp_KillerTutorialCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_KillerTutorialCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaKillerTutorialAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaKillerTutorialAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::NewProp_KillerTutorialSkipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaKillerTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::NewProp_KillerTutorialSkipped_SetBit(void* Obj)
	{
		((FAtlantaKillerTutorialAnalytics*)Obj)->KillerTutorialSkipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::NewProp_KillerTutorialSkipped = { "KillerTutorialSkipped", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaKillerTutorialAnalytics), &Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::NewProp_KillerTutorialSkipped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::NewProp_KillerTutorialSkipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::NewProp_KillerTutorialSkipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::NewProp_KillerTutorialCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaKillerTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::NewProp_KillerTutorialCompleted_SetBit(void* Obj)
	{
		((FAtlantaKillerTutorialAnalytics*)Obj)->KillerTutorialCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::NewProp_KillerTutorialCompleted = { "KillerTutorialCompleted", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaKillerTutorialAnalytics), &Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::NewProp_KillerTutorialCompleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::NewProp_KillerTutorialCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::NewProp_KillerTutorialCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::NewProp_KillerTutorialSkipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::NewProp_KillerTutorialCompleted,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"AtlantaKillerTutorialAnalytics",
		sizeof(FAtlantaKillerTutorialAnalytics),
		alignof(FAtlantaKillerTutorialAnalytics),
		Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaKillerTutorialAnalytics"), sizeof(FAtlantaKillerTutorialAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaKillerTutorialAnalytics_Hash() { return 3272830018U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
