// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/PostGame_SurvivorAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostGame_SurvivorAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPostGameAnalyticsBase();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperDamageState();
// End Cross Module References
class UScriptStruct* FPostGame_SurvivorAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("PostGame_SurvivorAnalytics"), sizeof(FPostGame_SurvivorAnalytics), Get_Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FPostGame_SurvivorAnalytics>()
{
	return FPostGame_SurvivorAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPostGame_SurvivorAnalytics(FPostGame_SurvivorAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("PostGame_SurvivorAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFPostGame_SurvivorAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFPostGame_SurvivorAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PostGame_SurvivorAnalytics")),new UScriptStruct::TCppStructOps<FPostGame_SurvivorAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFPostGame_SurvivorAnalytics;
	struct Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HookedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HookedCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outcome_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Outcome;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boldness_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Boldness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Altruism_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Altruism;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Survival_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Survival;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objectives_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Objectives;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PostGame_SurvivorAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPostGame_SurvivorAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_UsedKeyboard_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_SurvivorAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_UsedKeyboard_SetBit(void* Obj)
	{
		((FPostGame_SurvivorAnalytics*)Obj)->UsedKeyboard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_UsedKeyboard = { "UsedKeyboard", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPostGame_SurvivorAnalytics), &Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_UsedKeyboard_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_UsedKeyboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_UsedKeyboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_UsedController_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_SurvivorAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_UsedController_SetBit(void* Obj)
	{
		((FPostGame_SurvivorAnalytics*)Obj)->UsedController = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_UsedController = { "UsedController", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPostGame_SurvivorAnalytics), &Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_UsedController_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_UsedController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_UsedController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_HookedCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_HookedCount = { "HookedCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_SurvivorAnalytics, HookedCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_HookedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_HookedCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_DamageState_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_DamageState = { "DamageState", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_SurvivorAnalytics, DamageState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_DamageState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_DamageState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_DamageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Outcome_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_SurvivorAnalytics, Outcome), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Outcome_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Outcome_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Boldness_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Boldness = { "Boldness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_SurvivorAnalytics, Boldness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Boldness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Boldness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Altruism_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Altruism = { "Altruism", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_SurvivorAnalytics, Altruism), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Altruism_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Altruism_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Survival_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Survival = { "Survival", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_SurvivorAnalytics, Survival), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Survival_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Survival_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Objectives_MetaData[] = {
		{ "ModuleRelativePath", "Public/PostGame_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Objectives = { "Objectives", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostGame_SurvivorAnalytics, Objectives), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Objectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Objectives_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_UsedKeyboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_UsedController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_HookedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_DamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_DamageState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Outcome,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Boldness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Altruism,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Survival,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::NewProp_Objectives,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FPostGameAnalyticsBase,
		&NewStructOps,
		"PostGame_SurvivorAnalytics",
		sizeof(FPostGame_SurvivorAnalytics),
		alignof(FPostGame_SurvivorAnalytics),
		Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PostGame_SurvivorAnalytics"), sizeof(FPostGame_SurvivorAnalytics), Get_Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPostGame_SurvivorAnalytics_Hash() { return 2808158279U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
