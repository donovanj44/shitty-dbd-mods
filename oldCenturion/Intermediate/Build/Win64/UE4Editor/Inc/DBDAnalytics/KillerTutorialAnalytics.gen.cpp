// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/KillerTutorialAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerTutorialAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FKillerTutorialAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FKillerTutorialAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKillerTutorialAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("KillerTutorialAnalytics"), sizeof(FKillerTutorialAnalytics), Get_Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FKillerTutorialAnalytics>()
{
	return FKillerTutorialAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKillerTutorialAnalytics(FKillerTutorialAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("KillerTutorialAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFKillerTutorialAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFKillerTutorialAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KillerTutorialAnalytics")),new UScriptStruct::TCppStructOps<FKillerTutorialAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFKillerTutorialAnalytics;
	struct Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasLungeAttackObjectiveCompleted_MetaData[];
#endif
		static void NewProp_WasLungeAttackObjectiveCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasLungeAttackObjectiveCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsSpentInEscapeSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondsSpentInEscapeSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsSpentInChaseSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondsSpentInChaseSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsSpentInIntroSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondsSpentInIntroSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsSpentInTutorial_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondsSpentInTutorial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerTutorialAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKillerTutorialAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_WasLungeAttackObjectiveCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/KillerTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_WasLungeAttackObjectiveCompleted_SetBit(void* Obj)
	{
		((FKillerTutorialAnalytics*)Obj)->WasLungeAttackObjectiveCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_WasLungeAttackObjectiveCompleted = { "WasLungeAttackObjectiveCompleted", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FKillerTutorialAnalytics), &Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_WasLungeAttackObjectiveCompleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_WasLungeAttackObjectiveCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_WasLungeAttackObjectiveCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInEscapeSection_MetaData[] = {
		{ "ModuleRelativePath", "Public/KillerTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInEscapeSection = { "SecondsSpentInEscapeSection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKillerTutorialAnalytics, SecondsSpentInEscapeSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInEscapeSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInEscapeSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInChaseSection_MetaData[] = {
		{ "ModuleRelativePath", "Public/KillerTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInChaseSection = { "SecondsSpentInChaseSection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKillerTutorialAnalytics, SecondsSpentInChaseSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInChaseSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInChaseSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInIntroSection_MetaData[] = {
		{ "ModuleRelativePath", "Public/KillerTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInIntroSection = { "SecondsSpentInIntroSection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKillerTutorialAnalytics, SecondsSpentInIntroSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInIntroSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInIntroSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInTutorial_MetaData[] = {
		{ "ModuleRelativePath", "Public/KillerTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInTutorial = { "SecondsSpentInTutorial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKillerTutorialAnalytics, SecondsSpentInTutorial), METADATA_PARAMS(Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInTutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInTutorial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_WasLungeAttackObjectiveCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInEscapeSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInChaseSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInIntroSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::NewProp_SecondsSpentInTutorial,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"KillerTutorialAnalytics",
		sizeof(FKillerTutorialAnalytics),
		alignof(FKillerTutorialAnalytics),
		Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKillerTutorialAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KillerTutorialAnalytics"), sizeof(FKillerTutorialAnalytics), Get_Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKillerTutorialAnalytics_Hash() { return 4013296514U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
