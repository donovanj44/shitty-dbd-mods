// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/SurvivorTutorialAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorTutorialAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FSurvivorTutorialAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("SurvivorTutorialAnalytics"), sizeof(FSurvivorTutorialAnalytics), Get_Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FSurvivorTutorialAnalytics>()
{
	return FSurvivorTutorialAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSurvivorTutorialAnalytics(FSurvivorTutorialAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("SurvivorTutorialAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFSurvivorTutorialAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFSurvivorTutorialAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SurvivorTutorialAnalytics")),new UScriptStruct::TCppStructOps<FSurvivorTutorialAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFSurvivorTutorialAnalytics;
	struct Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasHatchEscapeObjectiveCompleted_MetaData[];
#endif
		static void NewProp_WasHatchEscapeObjectiveCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasHatchEscapeObjectiveCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasStealthObjectiveCompleted_MetaData[];
#endif
		static void NewProp_WasStealthObjectiveCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasStealthObjectiveCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasSuccessfulStealthEventTriggered_MetaData[];
#endif
		static void NewProp_WasSuccessfulStealthEventTriggered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasSuccessfulStealthEventTriggered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasRushedActionEventTriggered_MetaData[];
#endif
		static void NewProp_WasRushedActionEventTriggered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasRushedActionEventTriggered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasScratchMarksAndWildlifeEventTriggered_MetaData[];
#endif
		static void NewProp_WasScratchMarksAndWildlifeEventTriggered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasScratchMarksAndWildlifeEventTriggered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsSpentInEscapeSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondsSpentInEscapeSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsSpentInRescueSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondsSpentInRescueSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsSpentInHealthSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondsSpentInHealthSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsSpentInHookSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondsSpentInHookSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsSpentInStealthSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondsSpentInStealthSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsSpentInKillerSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondsSpentInKillerSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsSpentInSkillchecksSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondsSpentInSkillchecksSection;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorTutorialAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSurvivorTutorialAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasHatchEscapeObjectiveCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasHatchEscapeObjectiveCompleted_SetBit(void* Obj)
	{
		((FSurvivorTutorialAnalytics*)Obj)->WasHatchEscapeObjectiveCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasHatchEscapeObjectiveCompleted = { "WasHatchEscapeObjectiveCompleted", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasHatchEscapeObjectiveCompleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasHatchEscapeObjectiveCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasHatchEscapeObjectiveCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasStealthObjectiveCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasStealthObjectiveCompleted_SetBit(void* Obj)
	{
		((FSurvivorTutorialAnalytics*)Obj)->WasStealthObjectiveCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasStealthObjectiveCompleted = { "WasStealthObjectiveCompleted", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasStealthObjectiveCompleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasStealthObjectiveCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasStealthObjectiveCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasSuccessfulStealthEventTriggered_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasSuccessfulStealthEventTriggered_SetBit(void* Obj)
	{
		((FSurvivorTutorialAnalytics*)Obj)->WasSuccessfulStealthEventTriggered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasSuccessfulStealthEventTriggered = { "WasSuccessfulStealthEventTriggered", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasSuccessfulStealthEventTriggered_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasSuccessfulStealthEventTriggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasSuccessfulStealthEventTriggered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasRushedActionEventTriggered_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasRushedActionEventTriggered_SetBit(void* Obj)
	{
		((FSurvivorTutorialAnalytics*)Obj)->WasRushedActionEventTriggered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasRushedActionEventTriggered = { "WasRushedActionEventTriggered", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasRushedActionEventTriggered_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasRushedActionEventTriggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasRushedActionEventTriggered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasScratchMarksAndWildlifeEventTriggered_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasScratchMarksAndWildlifeEventTriggered_SetBit(void* Obj)
	{
		((FSurvivorTutorialAnalytics*)Obj)->WasScratchMarksAndWildlifeEventTriggered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasScratchMarksAndWildlifeEventTriggered = { "WasScratchMarksAndWildlifeEventTriggered", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasScratchMarksAndWildlifeEventTriggered_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasScratchMarksAndWildlifeEventTriggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasScratchMarksAndWildlifeEventTriggered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInEscapeSection_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInEscapeSection = { "SecondsSpentInEscapeSection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurvivorTutorialAnalytics, SecondsSpentInEscapeSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInEscapeSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInEscapeSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInRescueSection_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInRescueSection = { "SecondsSpentInRescueSection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurvivorTutorialAnalytics, SecondsSpentInRescueSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInRescueSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInRescueSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInHealthSection_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInHealthSection = { "SecondsSpentInHealthSection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurvivorTutorialAnalytics, SecondsSpentInHealthSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInHealthSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInHealthSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInHookSection_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInHookSection = { "SecondsSpentInHookSection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurvivorTutorialAnalytics, SecondsSpentInHookSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInHookSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInHookSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInStealthSection_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInStealthSection = { "SecondsSpentInStealthSection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurvivorTutorialAnalytics, SecondsSpentInStealthSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInStealthSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInStealthSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInKillerSection_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInKillerSection = { "SecondsSpentInKillerSection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurvivorTutorialAnalytics, SecondsSpentInKillerSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInKillerSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInKillerSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInSkillchecksSection_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInSkillchecksSection = { "SecondsSpentInSkillchecksSection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurvivorTutorialAnalytics, SecondsSpentInSkillchecksSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInSkillchecksSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInSkillchecksSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInIntroSection_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInIntroSection = { "SecondsSpentInIntroSection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurvivorTutorialAnalytics, SecondsSpentInIntroSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInIntroSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInIntroSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInTutorial_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInTutorial = { "SecondsSpentInTutorial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSurvivorTutorialAnalytics, SecondsSpentInTutorial), METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInTutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInTutorial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasHatchEscapeObjectiveCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasStealthObjectiveCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasSuccessfulStealthEventTriggered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasRushedActionEventTriggered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_WasScratchMarksAndWildlifeEventTriggered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInEscapeSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInRescueSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInHealthSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInHookSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInStealthSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInKillerSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInSkillchecksSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInIntroSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::NewProp_SecondsSpentInTutorial,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"SurvivorTutorialAnalytics",
		sizeof(FSurvivorTutorialAnalytics),
		alignof(FSurvivorTutorialAnalytics),
		Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SurvivorTutorialAnalytics"), sizeof(FSurvivorTutorialAnalytics), Get_Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSurvivorTutorialAnalytics_Hash() { return 1424024322U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
