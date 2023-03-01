// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LegacyPlayerSavedProfileDataLocal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacyPlayerSavedProfileDataLocal() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedPlayerLoadoutData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedDailyRitualContainer();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData();
// End Cross Module References
class UScriptStruct* FLegacyPlayerSavedProfileDataLocal::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LegacyPlayerSavedProfileDataLocal"), sizeof(FLegacyPlayerSavedProfileDataLocal), Get_Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLegacyPlayerSavedProfileDataLocal>()
{
	return FLegacyPlayerSavedProfileDataLocal::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal(FLegacyPlayerSavedProfileDataLocal::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LegacyPlayerSavedProfileDataLocal"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacyPlayerSavedProfileDataLocal
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacyPlayerSavedProfileDataLocal()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LegacyPlayerSavedProfileDataLocal")),new UScriptStruct::TCppStructOps<FLegacyPlayerSavedProfileDataLocal>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacyPlayerSavedProfileDataLocal;
	struct Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fearTokensMigrated_MetaData[];
#endif
		static void NewProp__fearTokensMigrated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__fearTokensMigrated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ongoingGameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__ongoingGameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fearTokens_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__fearTokens;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__unclampedBloodpoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__unclampedBloodpoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bonusBloodpoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__bonusBloodpoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodpoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__bloodpoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisconnectPenaltyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisconnectPenaltyTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastConnectedCharacterIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastConnectedCharacterIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastConnectedLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastConnectedLoadout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FearMarket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FearMarket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DailyRituals_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DailyRituals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSeasonTicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_CurrentSeasonTicks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CharacterData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Losses_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Losses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wins_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Wins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasBeenGivenSurvivorTutorialEndReward_MetaData[];
#endif
		static void NewProp_HasBeenGivenSurvivorTutorialEndReward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasBeenGivenSurvivorTutorialEndReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasBeenGivenKillerTutorialEndReward_MetaData[];
#endif
		static void NewProp_HasBeenGivenKillerTutorialEndReward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasBeenGivenKillerTutorialEndReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstTimePlaying_MetaData[];
#endif
		static void NewProp_FirstTimePlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstTimePlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offerings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Offerings;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Offerings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tokens_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Tokens;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLegacyPlayerSavedProfileDataLocal>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__fearTokensMigrated_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__fearTokensMigrated_SetBit(void* Obj)
	{
		((FLegacyPlayerSavedProfileDataLocal*)Obj)->_fearTokensMigrated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__fearTokensMigrated = { "_fearTokensMigrated", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLegacyPlayerSavedProfileDataLocal), &Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__fearTokensMigrated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__fearTokensMigrated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__fearTokensMigrated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__ongoingGameTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__ongoingGameTime = { "_ongoingGameTime", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataLocal, _ongoingGameTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__ongoingGameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__ongoingGameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__fearTokens_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__fearTokens = { "_fearTokens", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataLocal, _fearTokens), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__fearTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__fearTokens_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__unclampedBloodpoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__unclampedBloodpoints = { "_unclampedBloodpoints", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataLocal, _unclampedBloodpoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__unclampedBloodpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__unclampedBloodpoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__bonusBloodpoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__bonusBloodpoints = { "_bonusBloodpoints", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataLocal, _bonusBloodpoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__bonusBloodpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__bonusBloodpoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__bloodpoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__bloodpoints = { "_bloodpoints", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataLocal, _bloodpoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__bloodpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__bloodpoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_DisconnectPenaltyTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_DisconnectPenaltyTime = { "DisconnectPenaltyTime", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataLocal, DisconnectPenaltyTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_DisconnectPenaltyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_DisconnectPenaltyTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedCharacterIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedCharacterIndex = { "LastConnectedCharacterIndex", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataLocal, LastConnectedCharacterIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedCharacterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedCharacterIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedLoadout_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedLoadout = { "LastConnectedLoadout", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataLocal, LastConnectedLoadout), Z_Construct_UScriptStruct_FLegacySavedPlayerLoadoutData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedLoadout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_FearMarket_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_FearMarket = { "FearMarket", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataLocal, FearMarket), Z_Construct_UScriptStruct_FLegacySavedFearMarketOfferingInstance, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_FearMarket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_FearMarket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_DailyRituals_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_DailyRituals = { "DailyRituals", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataLocal, DailyRituals), Z_Construct_UScriptStruct_FLegacySavedDailyRitualContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_DailyRituals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_DailyRituals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_CurrentSeasonTicks_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_CurrentSeasonTicks = { "CurrentSeasonTicks", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataLocal, CurrentSeasonTicks), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_CurrentSeasonTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_CurrentSeasonTicks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_CharacterData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataLocal, CharacterData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_CharacterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_CharacterData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_CharacterData_Key_KeyProp = { "CharacterData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_CharacterData_ValueProp = { "CharacterData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Losses_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Losses = { "Losses", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataLocal, Losses), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Losses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Losses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Wins_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Wins = { "Wins", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataLocal, Wins), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Wins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Wins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_HasBeenGivenSurvivorTutorialEndReward_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_HasBeenGivenSurvivorTutorialEndReward_SetBit(void* Obj)
	{
		((FLegacyPlayerSavedProfileDataLocal*)Obj)->HasBeenGivenSurvivorTutorialEndReward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_HasBeenGivenSurvivorTutorialEndReward = { "HasBeenGivenSurvivorTutorialEndReward", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLegacyPlayerSavedProfileDataLocal), &Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_HasBeenGivenSurvivorTutorialEndReward_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_HasBeenGivenSurvivorTutorialEndReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_HasBeenGivenSurvivorTutorialEndReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_HasBeenGivenKillerTutorialEndReward_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_HasBeenGivenKillerTutorialEndReward_SetBit(void* Obj)
	{
		((FLegacyPlayerSavedProfileDataLocal*)Obj)->HasBeenGivenKillerTutorialEndReward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_HasBeenGivenKillerTutorialEndReward = { "HasBeenGivenKillerTutorialEndReward", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLegacyPlayerSavedProfileDataLocal), &Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_HasBeenGivenKillerTutorialEndReward_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_HasBeenGivenKillerTutorialEndReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_HasBeenGivenKillerTutorialEndReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_FirstTimePlaying_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_FirstTimePlaying_SetBit(void* Obj)
	{
		((FLegacyPlayerSavedProfileDataLocal*)Obj)->FirstTimePlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_FirstTimePlaying = { "FirstTimePlaying", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLegacyPlayerSavedProfileDataLocal), &Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_FirstTimePlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_FirstTimePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_FirstTimePlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Offerings_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Offerings = { "Offerings", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataLocal, Offerings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Offerings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Offerings_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Offerings_Inner = { "Offerings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Tokens_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyPlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Tokens = { "Tokens", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyPlayerSavedProfileDataLocal, Tokens), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Tokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Tokens_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__fearTokensMigrated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__ongoingGameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__fearTokens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__unclampedBloodpoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__bonusBloodpoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp__bloodpoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_DisconnectPenaltyTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedCharacterIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedLoadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_FearMarket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_DailyRituals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_CurrentSeasonTicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_CharacterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_CharacterData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_CharacterData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Losses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Wins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_HasBeenGivenSurvivorTutorialEndReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_HasBeenGivenKillerTutorialEndReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_FirstTimePlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Offerings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Offerings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::NewProp_Tokens,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LegacyPlayerSavedProfileDataLocal",
		sizeof(FLegacyPlayerSavedProfileDataLocal),
		alignof(FLegacyPlayerSavedProfileDataLocal),
		Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LegacyPlayerSavedProfileDataLocal"), sizeof(FLegacyPlayerSavedProfileDataLocal), Get_Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLegacyPlayerSavedProfileDataLocal_Hash() { return 2884958659U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
