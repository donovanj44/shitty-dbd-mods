// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/StadiaLivestreamAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStadiaLivestreamAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FStadiaLivestreamAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("StadiaLivestreamAnalytics"), sizeof(FStadiaLivestreamAnalytics), Get_Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FStadiaLivestreamAnalytics>()
{
	return FStadiaLivestreamAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStadiaLivestreamAnalytics(FStadiaLivestreamAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("StadiaLivestreamAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFStadiaLivestreamAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFStadiaLivestreamAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StadiaLivestreamAnalytics")),new UScriptStruct::TCppStructOps<FStadiaLivestreamAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFStadiaLivestreamAnalytics;
	struct Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdChoiceEnabled_MetaData[];
#endif
		static void NewProp_CrowdChoiceEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CrowdChoiceEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdPlayEnabled_MetaData[];
#endif
		static void NewProp_CrowdPlayEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CrowdPlayEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StreamStartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StadiaLivestreamAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStadiaLivestreamAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_CrowdChoiceEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/StadiaLivestreamAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_CrowdChoiceEnabled_SetBit(void* Obj)
	{
		((FStadiaLivestreamAnalytics*)Obj)->CrowdChoiceEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_CrowdChoiceEnabled = { "CrowdChoiceEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStadiaLivestreamAnalytics), &Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_CrowdChoiceEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_CrowdChoiceEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_CrowdChoiceEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_CrowdPlayEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/StadiaLivestreamAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_CrowdPlayEnabled_SetBit(void* Obj)
	{
		((FStadiaLivestreamAnalytics*)Obj)->CrowdPlayEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_CrowdPlayEnabled = { "CrowdPlayEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStadiaLivestreamAnalytics), &Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_CrowdPlayEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_CrowdPlayEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_CrowdPlayEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_UserId_MetaData[] = {
		{ "ModuleRelativePath", "Public/StadiaLivestreamAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaLivestreamAnalytics, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_StreamStartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/StadiaLivestreamAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_StreamStartTime = { "StreamStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStadiaLivestreamAnalytics, StreamStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_StreamStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_StreamStartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_CrowdChoiceEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_CrowdPlayEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::NewProp_StreamStartTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"StadiaLivestreamAnalytics",
		sizeof(FStadiaLivestreamAnalytics),
		alignof(FStadiaLivestreamAnalytics),
		Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StadiaLivestreamAnalytics"), sizeof(FStadiaLivestreamAnalytics), Get_Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStadiaLivestreamAnalytics_Hash() { return 2543347041U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
