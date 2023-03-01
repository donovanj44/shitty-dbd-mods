// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/NewKillerTutorialAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewKillerTutorialAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FNewKillerTutorialAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("NewKillerTutorialAnalytics"), sizeof(FNewKillerTutorialAnalytics), Get_Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FNewKillerTutorialAnalytics>()
{
	return FNewKillerTutorialAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNewKillerTutorialAnalytics(FNewKillerTutorialAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("NewKillerTutorialAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFNewKillerTutorialAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFNewKillerTutorialAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NewKillerTutorialAnalytics")),new UScriptStruct::TCppStructOps<FNewKillerTutorialAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFNewKillerTutorialAnalytics;
	struct Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToCompleteAreaThree_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeToCompleteAreaThree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsKillSurvivorComplete_MetaData[];
#endif
		static void NewProp_IsKillSurvivorComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsKillSurvivorComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCloseHatchComplete_MetaData[];
#endif
		static void NewProp_IsCloseHatchComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCloseHatchComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHookSurvivorComplete_MetaData[];
#endif
		static void NewProp_IsHookSurvivorComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHookSurvivorComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPickupSurvivorComplete_MetaData[];
#endif
		static void NewProp_IsPickupSurvivorComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPickupSurvivorComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsKoSurvivorComplete_MetaData[];
#endif
		static void NewProp_IsKoSurvivorComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsKoSurvivorComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHitSurvivorComplete_MetaData[];
#endif
		static void NewProp_IsHitSurvivorComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHitSurvivorComplete;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDestroyPalletComplete_MetaData[];
#endif
		static void NewProp_IsDestroyPalletComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDestroyPalletComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToCompleteAreaOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeToCompleteAreaOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFollowSurvivorComplete_MetaData[];
#endif
		static void NewProp_IsFollowSurvivorComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFollowSurvivorComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsKickGeneratorComplete_MetaData[];
#endif
		static void NewProp_IsKickGeneratorComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsKickGeneratorComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NewKillerTutorialAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNewKillerTutorialAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TutorialId_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewKillerTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TutorialId = { "TutorialId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNewKillerTutorialAnalytics, TutorialId), METADATA_PARAMS(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TutorialId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TutorialId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TotalTimeInTutorial_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewKillerTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TotalTimeInTutorial = { "TotalTimeInTutorial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNewKillerTutorialAnalytics, TotalTimeInTutorial), METADATA_PARAMS(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TotalTimeInTutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TotalTimeInTutorial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaThree_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewKillerTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaThree = { "TimeToCompleteAreaThree", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNewKillerTutorialAnalytics, TimeToCompleteAreaThree), METADATA_PARAMS(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaThree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaThree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKillSurvivorComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewKillerTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKillSurvivorComplete_SetBit(void* Obj)
	{
		((FNewKillerTutorialAnalytics*)Obj)->IsKillSurvivorComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKillSurvivorComplete = { "IsKillSurvivorComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewKillerTutorialAnalytics), &Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKillSurvivorComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKillSurvivorComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKillSurvivorComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsCloseHatchComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewKillerTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsCloseHatchComplete_SetBit(void* Obj)
	{
		((FNewKillerTutorialAnalytics*)Obj)->IsCloseHatchComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsCloseHatchComplete = { "IsCloseHatchComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewKillerTutorialAnalytics), &Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsCloseHatchComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsCloseHatchComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsCloseHatchComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsHookSurvivorComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewKillerTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsHookSurvivorComplete_SetBit(void* Obj)
	{
		((FNewKillerTutorialAnalytics*)Obj)->IsHookSurvivorComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsHookSurvivorComplete = { "IsHookSurvivorComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewKillerTutorialAnalytics), &Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsHookSurvivorComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsHookSurvivorComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsHookSurvivorComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsPickupSurvivorComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewKillerTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsPickupSurvivorComplete_SetBit(void* Obj)
	{
		((FNewKillerTutorialAnalytics*)Obj)->IsPickupSurvivorComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsPickupSurvivorComplete = { "IsPickupSurvivorComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewKillerTutorialAnalytics), &Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsPickupSurvivorComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsPickupSurvivorComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsPickupSurvivorComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKoSurvivorComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewKillerTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKoSurvivorComplete_SetBit(void* Obj)
	{
		((FNewKillerTutorialAnalytics*)Obj)->IsKoSurvivorComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKoSurvivorComplete = { "IsKoSurvivorComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewKillerTutorialAnalytics), &Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKoSurvivorComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKoSurvivorComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKoSurvivorComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsHitSurvivorComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewKillerTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsHitSurvivorComplete_SetBit(void* Obj)
	{
		((FNewKillerTutorialAnalytics*)Obj)->IsHitSurvivorComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsHitSurvivorComplete = { "IsHitSurvivorComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewKillerTutorialAnalytics), &Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsHitSurvivorComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsHitSurvivorComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsHitSurvivorComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsBeartrapComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewKillerTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsBeartrapComplete_SetBit(void* Obj)
	{
		((FNewKillerTutorialAnalytics*)Obj)->IsBeartrapComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsBeartrapComplete = { "IsBeartrapComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewKillerTutorialAnalytics), &Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsBeartrapComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsBeartrapComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsBeartrapComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaTwo_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewKillerTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaTwo = { "TimeToCompleteAreaTwo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNewKillerTutorialAnalytics, TimeToCompleteAreaTwo), METADATA_PARAMS(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaTwo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsDestroyPalletComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewKillerTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsDestroyPalletComplete_SetBit(void* Obj)
	{
		((FNewKillerTutorialAnalytics*)Obj)->IsDestroyPalletComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsDestroyPalletComplete = { "IsDestroyPalletComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewKillerTutorialAnalytics), &Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsDestroyPalletComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsDestroyPalletComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsDestroyPalletComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaOne_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewKillerTutorialAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaOne = { "TimeToCompleteAreaOne", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNewKillerTutorialAnalytics, TimeToCompleteAreaOne), METADATA_PARAMS(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsFollowSurvivorComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewKillerTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsFollowSurvivorComplete_SetBit(void* Obj)
	{
		((FNewKillerTutorialAnalytics*)Obj)->IsFollowSurvivorComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsFollowSurvivorComplete = { "IsFollowSurvivorComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewKillerTutorialAnalytics), &Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsFollowSurvivorComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsFollowSurvivorComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsFollowSurvivorComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKickGeneratorComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewKillerTutorialAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKickGeneratorComplete_SetBit(void* Obj)
	{
		((FNewKillerTutorialAnalytics*)Obj)->IsKickGeneratorComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKickGeneratorComplete = { "IsKickGeneratorComplete", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNewKillerTutorialAnalytics), &Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKickGeneratorComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKickGeneratorComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKickGeneratorComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TutorialId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TotalTimeInTutorial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaThree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKillSurvivorComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsCloseHatchComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsHookSurvivorComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsPickupSurvivorComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKoSurvivorComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsHitSurvivorComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsBeartrapComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsDestroyPalletComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_TimeToCompleteAreaOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsFollowSurvivorComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::NewProp_IsKickGeneratorComplete,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"NewKillerTutorialAnalytics",
		sizeof(FNewKillerTutorialAnalytics),
		alignof(FNewKillerTutorialAnalytics),
		Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NewKillerTutorialAnalytics"), sizeof(FNewKillerTutorialAnalytics), Get_Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNewKillerTutorialAnalytics_Hash() { return 1362656360U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
