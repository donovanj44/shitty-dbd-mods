// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/NewSurvivorTutorialAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewSurvivorTutorialAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FNewSurvivorTutorialAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("NewSurvivorTutorialAnalytics"), sizeof(FNewSurvivorTutorialAnalytics), Get_Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FNewSurvivorTutorialAnalytics>()
{
	return FNewSurvivorTutorialAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNewSurvivorTutorialAnalytics(FNewSurvivorTutorialAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("NewSurvivorTutorialAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFNewSurvivorTutorialAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFNewSurvivorTutorialAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NewSurvivorTutorialAnalytics")),new UScriptStruct::TCppStructOps<FNewSurvivorTutorialAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFNewSurvivorTutorialAnalytics;
	struct Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TutorialId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalTimeInTutorial_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalTimeInTutorial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToCompleteAreaFour_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeToCompleteAreaFour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEscapeComplete_MetaData[];
#endif
		static void NewProp_IsEscapeComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEscapeComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOpenGateComplete_MetaData[];
#endif
		static void NewProp_IsOpenGateComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOpenGateComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsGetHealedComplete_MetaData[];
#endif
		static void NewProp_IsGetHealedComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGetHealedComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHealMegComplete_MetaData[];
#endif
		static void NewProp_IsHealMegComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHealMegComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsGetUnhookedComplete_MetaData[];
#endif
		static void NewProp_IsGetUnhookedComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGetUnhookedComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLockerComplete_MetaData[];
#endif
		static void NewProp_IsLockerComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLockerComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUnhookMegComplete_MetaData[];
#endif
		static void NewProp_IsUnhookMegComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUnhookMegComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPalletComplete_MetaData[];
#endif
		static void NewProp_IsPalletComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPalletComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToCompleteAreaThree_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeToCompleteAreaThree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBeartrapComplete_MetaData[];
#endif
		static void NewProp_IsBeartrapComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBeartrapComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToCompleteAreaTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeToCompleteAreaTwo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSecondVaultComplete_MetaData[];
#endif
		static void NewProp_IsSecondVaultComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSecondVaultComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsGeneratorComplete_MetaData[];
#endif
		static void NewProp_IsGeneratorComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGeneratorComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToCompleteAreaOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeToCompleteAreaOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFirstVaultComplete_MetaData[];
#endif
		static void NewProp_IsFirstVaultComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFirstVaultComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCrouchComplete_MetaData[];
#endif
		static void NewProp_IsCrouchComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCrouchComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRunningComplete_MetaData[];
#endif
		static void NewProp_IsRunningComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRunningComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsWalkAroundComplete_MetaData[];
#endif
		static void NewProp_IsWalkAroundComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsWalkAroundComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLookAroundComplete_MetaData[];
#endif
		static void NewProp_IsLookAroundComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLookAroundComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNewSurvivorTutorialAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TutorialId_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TutorialId = { "TutorialId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNewSurvivorTutorialAnalytics, TutorialId), METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TutorialId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TutorialId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TotalTimeInTutorial_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TotalTimeInTutorial = { "TotalTimeInTutorial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNewSurvivorTutorialAnalytics, TotalTimeInTutorial), METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TotalTimeInTutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TotalTimeInTutorial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaFour_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaFour = { "TimeToCompleteAreaFour", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNewSurvivorTutorialAnalytics, TimeToCompleteAreaFour), METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaFour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaFour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsEscapeComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsEscapeComplete_SetBit(void* Obj)
	{
		((FNewSurvivorTutorialAnalytics*)Obj)->IsEscapeComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsEscapeComplete = { "IsEscapeComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsEscapeComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsEscapeComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsEscapeComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsOpenGateComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsOpenGateComplete_SetBit(void* Obj)
	{
		((FNewSurvivorTutorialAnalytics*)Obj)->IsOpenGateComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsOpenGateComplete = { "IsOpenGateComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsOpenGateComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsOpenGateComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsOpenGateComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGetHealedComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGetHealedComplete_SetBit(void* Obj)
	{
		((FNewSurvivorTutorialAnalytics*)Obj)->IsGetHealedComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGetHealedComplete = { "IsGetHealedComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGetHealedComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGetHealedComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGetHealedComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsHealMegComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsHealMegComplete_SetBit(void* Obj)
	{
		((FNewSurvivorTutorialAnalytics*)Obj)->IsHealMegComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsHealMegComplete = { "IsHealMegComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsHealMegComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsHealMegComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsHealMegComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGetUnhookedComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGetUnhookedComplete_SetBit(void* Obj)
	{
		((FNewSurvivorTutorialAnalytics*)Obj)->IsGetUnhookedComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGetUnhookedComplete = { "IsGetUnhookedComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGetUnhookedComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGetUnhookedComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGetUnhookedComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsLockerComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsLockerComplete_SetBit(void* Obj)
	{
		((FNewSurvivorTutorialAnalytics*)Obj)->IsLockerComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsLockerComplete = { "IsLockerComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsLockerComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsLockerComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsLockerComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsUnhookMegComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsUnhookMegComplete_SetBit(void* Obj)
	{
		((FNewSurvivorTutorialAnalytics*)Obj)->IsUnhookMegComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsUnhookMegComplete = { "IsUnhookMegComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsUnhookMegComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsUnhookMegComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsUnhookMegComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsPalletComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsPalletComplete_SetBit(void* Obj)
	{
		((FNewSurvivorTutorialAnalytics*)Obj)->IsPalletComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsPalletComplete = { "IsPalletComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsPalletComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsPalletComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsPalletComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaThree_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaThree = { "TimeToCompleteAreaThree", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNewSurvivorTutorialAnalytics, TimeToCompleteAreaThree), METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaThree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaThree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsBeartrapComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsBeartrapComplete_SetBit(void* Obj)
	{
		((FNewSurvivorTutorialAnalytics*)Obj)->IsBeartrapComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsBeartrapComplete = { "IsBeartrapComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsBeartrapComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsBeartrapComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsBeartrapComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaTwo_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaTwo = { "TimeToCompleteAreaTwo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNewSurvivorTutorialAnalytics, TimeToCompleteAreaTwo), METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaTwo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsSecondVaultComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsSecondVaultComplete_SetBit(void* Obj)
	{
		((FNewSurvivorTutorialAnalytics*)Obj)->IsSecondVaultComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsSecondVaultComplete = { "IsSecondVaultComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsSecondVaultComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsSecondVaultComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsSecondVaultComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGeneratorComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGeneratorComplete_SetBit(void* Obj)
	{
		((FNewSurvivorTutorialAnalytics*)Obj)->IsGeneratorComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGeneratorComplete = { "IsGeneratorComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGeneratorComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGeneratorComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGeneratorComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaOne_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaOne = { "TimeToCompleteAreaOne", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNewSurvivorTutorialAnalytics, TimeToCompleteAreaOne), METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsFirstVaultComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsFirstVaultComplete_SetBit(void* Obj)
	{
		((FNewSurvivorTutorialAnalytics*)Obj)->IsFirstVaultComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsFirstVaultComplete = { "IsFirstVaultComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsFirstVaultComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsFirstVaultComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsFirstVaultComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsCrouchComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsCrouchComplete_SetBit(void* Obj)
	{
		((FNewSurvivorTutorialAnalytics*)Obj)->IsCrouchComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsCrouchComplete = { "IsCrouchComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsCrouchComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsCrouchComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsCrouchComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsRunningComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsRunningComplete_SetBit(void* Obj)
	{
		((FNewSurvivorTutorialAnalytics*)Obj)->IsRunningComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsRunningComplete = { "IsRunningComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsRunningComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsRunningComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsRunningComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsWalkAroundComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsWalkAroundComplete_SetBit(void* Obj)
	{
		((FNewSurvivorTutorialAnalytics*)Obj)->IsWalkAroundComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsWalkAroundComplete = { "IsWalkAroundComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsWalkAroundComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsWalkAroundComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsWalkAroundComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsLookAroundComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewSurvivorTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsLookAroundComplete_SetBit(void* Obj)
	{
		((FNewSurvivorTutorialAnalytics*)Obj)->IsLookAroundComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsLookAroundComplete = { "IsLookAroundComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewSurvivorTutorialAnalytics), &Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsLookAroundComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsLookAroundComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsLookAroundComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TutorialId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TotalTimeInTutorial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaFour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsEscapeComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsOpenGateComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGetHealedComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsHealMegComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGetUnhookedComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsLockerComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsUnhookMegComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsPalletComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaThree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsBeartrapComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsSecondVaultComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsGeneratorComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsFirstVaultComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsCrouchComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsRunningComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsWalkAroundComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::NewProp_IsLookAroundComplete,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"NewSurvivorTutorialAnalytics",
		sizeof(FNewSurvivorTutorialAnalytics),
		alignof(FNewSurvivorTutorialAnalytics),
		Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NewSurvivorTutorialAnalytics"), sizeof(FNewSurvivorTutorialAnalytics), Get_Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNewSurvivorTutorialAnalytics_Hash() { return 3217636141U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
