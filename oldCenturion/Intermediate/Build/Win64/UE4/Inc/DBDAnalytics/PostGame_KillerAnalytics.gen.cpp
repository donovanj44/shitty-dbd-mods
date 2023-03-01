// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/PostGame_KillerAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostGame_KillerAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPostGame_KillerAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPostGameAnalyticsBase();
// End Cross Module References
class UScriptStruct* FPostGame_KillerAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("PostGame_KillerAnalytics"), sizeof(FPostGame_KillerAnalytics), Get_Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FPostGame_KillerAnalytics>()
{
	return FPostGame_KillerAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPostGame_KillerAnalytics(FPostGame_KillerAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("PostGame_KillerAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFPostGame_KillerAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFPostGame_KillerAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PostGame_KillerAnalytics")),new UScriptStruct::TCppStructOps<FPostGame_KillerAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFPostGame_KillerAnalytics;
	struct Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedKeyboard_MetaData[];
#endif
		static void NewProp_UsedKeyboard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsedKeyboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedController_MetaData[];
#endif
		static void NewProp_UsedController_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsedController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EGS_reachEnd_MetaData[];
#endif
		static void NewProp_EGS_reachEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EGS_reachEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EGS_sacrifice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EGS_sacrifice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EGS_duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EGS_duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EGS_time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EGS_time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EGS_starter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EGS_starter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratorsDone_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GeneratorsDone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorSpawningPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SurvivorSpawningPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeOpenGate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeOpenGate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BotCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisconnectCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisconnectCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KilledCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KilledCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SacrificedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SacrificedCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeesCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EscapeesCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sacrifice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Sacrifice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hunter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hunter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deviousness_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Deviousness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brutality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Brutality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPostGame_KillerAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_UsedKeyboard_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_UsedKeyboard_SetBit(void* Obj)
	{
		((FPostGame_KillerAnalytics*)Obj)->UsedKeyboard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_UsedKeyboard = { "UsedKeyboard", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPostGame_KillerAnalytics), &Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_UsedKeyboard_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_UsedKeyboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_UsedKeyboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_UsedController_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_UsedController_SetBit(void* Obj)
	{
		((FPostGame_KillerAnalytics*)Obj)->UsedController = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_UsedController = { "UsedController", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPostGame_KillerAnalytics), &Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_UsedController_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_UsedController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_UsedController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_reachEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_reachEnd_SetBit(void* Obj)
	{
		((FPostGame_KillerAnalytics*)Obj)->EGS_reachEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_reachEnd = { "EGS_reachEnd", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPostGame_KillerAnalytics), &Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_reachEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_reachEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_reachEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_sacrifice_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_sacrifice = { "EGS_sacrifice", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_KillerAnalytics, EGS_sacrifice), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_sacrifice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_sacrifice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_duration = { "EGS_duration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_KillerAnalytics, EGS_duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_time_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_time = { "EGS_time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_KillerAnalytics, EGS_time), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_starter_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_starter = { "EGS_starter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_KillerAnalytics, EGS_starter), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_starter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_starter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_GeneratorsDone_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_GeneratorsDone = { "GeneratorsDone", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_KillerAnalytics, GeneratorsDone), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_GeneratorsDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_GeneratorsDone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_SurvivorSpawningPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_SurvivorSpawningPosition = { "SurvivorSpawningPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_KillerAnalytics, SurvivorSpawningPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_SurvivorSpawningPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_SurvivorSpawningPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_TimeOpenGate_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_TimeOpenGate = { "TimeOpenGate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_KillerAnalytics, TimeOpenGate), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_TimeOpenGate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_TimeOpenGate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_BotCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_BotCount = { "BotCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_KillerAnalytics, BotCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_BotCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_BotCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_DisconnectCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_DisconnectCount = { "DisconnectCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_KillerAnalytics, DisconnectCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_DisconnectCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_DisconnectCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_KilledCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_KilledCount = { "KilledCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_KillerAnalytics, KilledCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_KilledCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_KilledCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_SacrificedCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_SacrificedCount = { "SacrificedCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_KillerAnalytics, SacrificedCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_SacrificedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_SacrificedCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EscapeesCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EscapeesCount = { "EscapeesCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_KillerAnalytics, EscapeesCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EscapeesCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EscapeesCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Sacrifice_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Sacrifice = { "Sacrifice", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_KillerAnalytics, Sacrifice), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Sacrifice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Sacrifice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Hunter_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Hunter = { "Hunter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_KillerAnalytics, Hunter), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Hunter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Hunter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Deviousness_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Deviousness = { "Deviousness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_KillerAnalytics, Deviousness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Deviousness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Deviousness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Brutality_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Brutality = { "Brutality", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_KillerAnalytics, Brutality), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Brutality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Brutality_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_UsedKeyboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_UsedController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_reachEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_sacrifice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EGS_starter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_GeneratorsDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_SurvivorSpawningPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_TimeOpenGate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_BotCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_DisconnectCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_KilledCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_SacrificedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_EscapeesCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Sacrifice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Hunter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Deviousness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::NewProp_Brutality,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FPostGameAnalyticsBase,
		&NewStructOps,
		"PostGame_KillerAnalytics",
		sizeof(FPostGame_KillerAnalytics),
		alignof(FPostGame_KillerAnalytics),
		Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPostGame_KillerAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PostGame_KillerAnalytics"), sizeof(FPostGame_KillerAnalytics), Get_Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPostGame_KillerAnalytics_Hash() { return 69667909U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
