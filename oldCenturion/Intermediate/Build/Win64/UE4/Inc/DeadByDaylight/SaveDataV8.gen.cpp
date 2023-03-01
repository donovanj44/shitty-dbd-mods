// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SaveDataV8.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataV8() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSaveDataV8();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSaveDataBase();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FKeyTupleBool();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSavedSpecialEventDataV7();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSavedStatsDataV7();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FConsoleUserSettings();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedPlayerLoadoutData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSavedFearMarketOfferingInstanceV7();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSavedDailyRitualContainerV7();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterKeyTuple();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FSaveDataV8::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSaveDataV8_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveDataV8, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SaveDataV8"), sizeof(FSaveDataV8), Get_Z_Construct_UScriptStruct_FSaveDataV8_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSaveDataV8>()
{
	return FSaveDataV8::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveDataV8(FSaveDataV8::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SaveDataV8"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSaveDataV8
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSaveDataV8()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SaveDataV8")),new UScriptStruct::TCppStructOps<FSaveDataV8>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSaveDataV8;
	struct Z_Construct_UScriptStruct_FSaveDataV8_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowPortraitBorder_MetaData[];
#endif
		static void NewProp_ShowPortraitBorder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowPortraitBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasBeginnerTooltipsBeenDisabledAtLevel_MetaData[];
#endif
		static void NewProp_HasBeginnerTooltipsBeenDisabledAtLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasBeginnerTooltipsBeenDisabledAtLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoDeclineFriendInvites_MetaData[];
#endif
		static void NewProp_AutoDeclineFriendInvites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoDeclineFriendInvites;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCrossplayAllowed_MetaData[];
#endif
		static void NewProp_IsCrossplayAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCrossplayAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBoardingCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OnBoardingCompleted;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnBoardingCompleted_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodStoreSurvivors_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloodStoreSurvivors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodStoreKillers_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloodStoreKillers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpecialEvent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecialEvent_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnedContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OwnedContent;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OwnedContent_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStatProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerStatProgression;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerStatProgression_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleUserSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConsoleUserSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastLoadout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FearMarket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FearMarket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DailyRituals_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DailyRituals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnedCharms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OwnedCharms;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OwnedCharms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativePlaytime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CumulativePlaytime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeSessions_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeSessions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSessionTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastSessionTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMatchTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastMatchTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeMatchesAsKillerNoFriends_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeMatchesAsKillerNoFriends;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeMatchesAsSurvivorNoFriends_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeMatchesAsSurvivorNoFriends;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeMatchesAsKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeMatchesAsKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeMatchesAsSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeMatchesAsSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatVisible_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChatVisible;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatVisible_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageVisited_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PageVisited;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PageVisited_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CumulativeMatches_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CumulativeMatches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OngoingGameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OngoingGameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSurvivorMatchEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastSurvivorMatchEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastKillerMatchEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastKillerMatchEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMatchStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastMatchStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMatchEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastMatchEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisconnectPenaltyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisconnectPenaltyTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastConnectedCharacterIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastConnectedCharacterIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSeasonTicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_CurrentSeasonTicks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasSeenIridescentShardsOnboardingCurrencyPopup_MetaData[];
#endif
		static void NewProp_HasSeenIridescentShardsOnboardingCurrencyPopup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasSeenIridescentShardsOnboardingCurrencyPopup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasSeenAuricCellsOnboardingCurrencyPopup_MetaData[];
#endif
		static void NewProp_HasSeenAuricCellsOnboardingCurrencyPopup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasSeenAuricCellsOnboardingCurrencyPopup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasSeenBloodpointsOnboardingCurrencyPopup_MetaData[];
#endif
		static void NewProp_HasSeenBloodpointsOnboardingCurrencyPopup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasSeenBloodpointsOnboardingCurrencyPopup;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsecutiveMatchStreak_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConsecutiveMatchStreak;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedSlasherIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedSlasherIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCamperIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedCamperIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveDataV8>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ShowPortraitBorder_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ShowPortraitBorder_SetBit(void* Obj)
	{
		((FSaveDataV8*)Obj)->ShowPortraitBorder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ShowPortraitBorder = { "ShowPortraitBorder", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveDataV8), &Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ShowPortraitBorder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ShowPortraitBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ShowPortraitBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeginnerTooltipsBeenDisabledAtLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeginnerTooltipsBeenDisabledAtLevel_SetBit(void* Obj)
	{
		((FSaveDataV8*)Obj)->HasBeginnerTooltipsBeenDisabledAtLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeginnerTooltipsBeenDisabledAtLevel = { "HasBeginnerTooltipsBeenDisabledAtLevel", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveDataV8), &Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeginnerTooltipsBeenDisabledAtLevel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeginnerTooltipsBeenDisabledAtLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeginnerTooltipsBeenDisabledAtLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_AutoDeclineFriendInvites_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_AutoDeclineFriendInvites_SetBit(void* Obj)
	{
		((FSaveDataV8*)Obj)->AutoDeclineFriendInvites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_AutoDeclineFriendInvites = { "AutoDeclineFriendInvites", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveDataV8), &Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_AutoDeclineFriendInvites_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_AutoDeclineFriendInvites_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_AutoDeclineFriendInvites_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_IsCrossplayAllowed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_IsCrossplayAllowed_SetBit(void* Obj)
	{
		((FSaveDataV8*)Obj)->IsCrossplayAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_IsCrossplayAllowed = { "IsCrossplayAllowed", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveDataV8), &Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_IsCrossplayAllowed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_IsCrossplayAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_IsCrossplayAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OnBoardingCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OnBoardingCompleted = { "OnBoardingCompleted", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, OnBoardingCompleted), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OnBoardingCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OnBoardingCompleted_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OnBoardingCompleted_Inner = { "OnBoardingCompleted", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyTupleBool, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_BloodStoreSurvivors_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_BloodStoreSurvivors = { "BloodStoreSurvivors", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, BloodStoreSurvivors), Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_BloodStoreSurvivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_BloodStoreSurvivors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_BloodStoreKillers_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_BloodStoreKillers = { "BloodStoreKillers", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, BloodStoreKillers), Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_BloodStoreKillers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_BloodStoreKillers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_SpecialEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_SpecialEvent = { "SpecialEvent", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, SpecialEvent), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_SpecialEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_SpecialEvent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_SpecialEvent_Inner = { "SpecialEvent", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSavedSpecialEventDataV7, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OwnedContent_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OwnedContent = { "OwnedContent", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, OwnedContent), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OwnedContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OwnedContent_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OwnedContent_Inner = { "OwnedContent", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PlayerStatProgression_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PlayerStatProgression = { "PlayerStatProgression", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, PlayerStatProgression), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PlayerStatProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PlayerStatProgression_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PlayerStatProgression_Inner = { "PlayerStatProgression", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSavedStatsDataV7, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ConsoleUserSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ConsoleUserSettings = { "ConsoleUserSettings", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, ConsoleUserSettings), Z_Construct_UScriptStruct_FConsoleUserSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ConsoleUserSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ConsoleUserSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastLoadout_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastLoadout = { "LastLoadout", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, LastLoadout), Z_Construct_UScriptStruct_FLegacySavedPlayerLoadoutData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastLoadout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_FearMarket_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_FearMarket = { "FearMarket", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, FearMarket), Z_Construct_UScriptStruct_FSavedFearMarketOfferingInstanceV7, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_FearMarket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_FearMarket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_DailyRituals_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_DailyRituals = { "DailyRituals", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, DailyRituals), Z_Construct_UScriptStruct_FSavedDailyRitualContainerV7, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_DailyRituals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_DailyRituals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OwnedCharms_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OwnedCharms = { "OwnedCharms", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, OwnedCharms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OwnedCharms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OwnedCharms_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OwnedCharms_Inner = { "OwnedCharms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CharacterData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, CharacterData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CharacterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CharacterData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CharacterData_Inner = { "CharacterData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharacterKeyTuple, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativePlaytime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativePlaytime = { "CumulativePlaytime", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, CumulativePlaytime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativePlaytime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativePlaytime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeSessions_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeSessions = { "CumulativeSessions", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, CumulativeSessions), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeSessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeSessions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastSessionTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastSessionTimestamp = { "LastSessionTimestamp", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, LastSessionTimestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastSessionTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastSessionTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastMatchTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastMatchTimestamp = { "LastMatchTimestamp", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, LastMatchTimestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastMatchTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastMatchTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsKillerNoFriends_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsKillerNoFriends = { "CumulativeMatchesAsKillerNoFriends", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, CumulativeMatchesAsKillerNoFriends), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsKillerNoFriends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsKillerNoFriends_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsSurvivorNoFriends_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsSurvivorNoFriends = { "CumulativeMatchesAsSurvivorNoFriends", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, CumulativeMatchesAsSurvivorNoFriends), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsSurvivorNoFriends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsSurvivorNoFriends_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsKiller = { "CumulativeMatchesAsKiller", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, CumulativeMatchesAsKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsSurvivor = { "CumulativeMatchesAsSurvivor", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, CumulativeMatchesAsSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ChatVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ChatVisible = { "ChatVisible", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, ChatVisible), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ChatVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ChatVisible_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ChatVisible_Inner = { "ChatVisible", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyTupleBool, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PageVisited_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PageVisited = { "PageVisited", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, PageVisited), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PageVisited_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PageVisited_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PageVisited_Inner = { "PageVisited", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyTupleBool, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatches_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatches = { "CumulativeMatches", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, CumulativeMatches), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OngoingGameTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OngoingGameTime = { "OngoingGameTime", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, OngoingGameTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OngoingGameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OngoingGameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastSurvivorMatchEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastSurvivorMatchEndTime = { "LastSurvivorMatchEndTime", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, LastSurvivorMatchEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastSurvivorMatchEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastSurvivorMatchEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastKillerMatchEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastKillerMatchEndTime = { "LastKillerMatchEndTime", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, LastKillerMatchEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastKillerMatchEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastKillerMatchEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastMatchStartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastMatchStartTime = { "LastMatchStartTime", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, LastMatchStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastMatchStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastMatchStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastMatchEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastMatchEndTime = { "LastMatchEndTime", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, LastMatchEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastMatchEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastMatchEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_DisconnectPenaltyTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_DisconnectPenaltyTime = { "DisconnectPenaltyTime", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, DisconnectPenaltyTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_DisconnectPenaltyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_DisconnectPenaltyTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastConnectedCharacterIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastConnectedCharacterIndex = { "LastConnectedCharacterIndex", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, LastConnectedCharacterIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastConnectedCharacterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastConnectedCharacterIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CurrentSeasonTicks_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CurrentSeasonTicks = { "CurrentSeasonTicks", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, CurrentSeasonTicks), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CurrentSeasonTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CurrentSeasonTicks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenIridescentShardsOnboardingCurrencyPopup_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenIridescentShardsOnboardingCurrencyPopup_SetBit(void* Obj)
	{
		((FSaveDataV8*)Obj)->HasSeenIridescentShardsOnboardingCurrencyPopup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenIridescentShardsOnboardingCurrencyPopup = { "HasSeenIridescentShardsOnboardingCurrencyPopup", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveDataV8), &Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenIridescentShardsOnboardingCurrencyPopup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenIridescentShardsOnboardingCurrencyPopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenIridescentShardsOnboardingCurrencyPopup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenAuricCellsOnboardingCurrencyPopup_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenAuricCellsOnboardingCurrencyPopup_SetBit(void* Obj)
	{
		((FSaveDataV8*)Obj)->HasSeenAuricCellsOnboardingCurrencyPopup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenAuricCellsOnboardingCurrencyPopup = { "HasSeenAuricCellsOnboardingCurrencyPopup", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveDataV8), &Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenAuricCellsOnboardingCurrencyPopup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenAuricCellsOnboardingCurrencyPopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenAuricCellsOnboardingCurrencyPopup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenBloodpointsOnboardingCurrencyPopup_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenBloodpointsOnboardingCurrencyPopup_SetBit(void* Obj)
	{
		((FSaveDataV8*)Obj)->HasSeenBloodpointsOnboardingCurrencyPopup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenBloodpointsOnboardingCurrencyPopup = { "HasSeenBloodpointsOnboardingCurrencyPopup", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveDataV8), &Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenBloodpointsOnboardingCurrencyPopup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenBloodpointsOnboardingCurrencyPopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenBloodpointsOnboardingCurrencyPopup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeenGivenSurvivorTutorialEndReward_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeenGivenSurvivorTutorialEndReward_SetBit(void* Obj)
	{
		((FSaveDataV8*)Obj)->HasBeenGivenSurvivorTutorialEndReward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeenGivenSurvivorTutorialEndReward = { "HasBeenGivenSurvivorTutorialEndReward", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveDataV8), &Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeenGivenSurvivorTutorialEndReward_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeenGivenSurvivorTutorialEndReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeenGivenSurvivorTutorialEndReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeenGivenKillerTutorialEndReward_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeenGivenKillerTutorialEndReward_SetBit(void* Obj)
	{
		((FSaveDataV8*)Obj)->HasBeenGivenKillerTutorialEndReward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeenGivenKillerTutorialEndReward = { "HasBeenGivenKillerTutorialEndReward", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveDataV8), &Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeenGivenKillerTutorialEndReward_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeenGivenKillerTutorialEndReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeenGivenKillerTutorialEndReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ConsecutiveMatchStreak_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ConsecutiveMatchStreak = { "ConsecutiveMatchStreak", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, ConsecutiveMatchStreak), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ConsecutiveMatchStreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ConsecutiveMatchStreak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_FirstTimePlaying_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_FirstTimePlaying_SetBit(void* Obj)
	{
		((FSaveDataV8*)Obj)->FirstTimePlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_FirstTimePlaying = { "FirstTimePlaying", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveDataV8), &Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_FirstTimePlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_FirstTimePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_FirstTimePlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_Offerings_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_Offerings = { "Offerings", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, Offerings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_Offerings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_Offerings_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_Offerings_Inner = { "Offerings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_SelectedSlasherIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_SelectedSlasherIndex = { "SelectedSlasherIndex", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, SelectedSlasherIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_SelectedSlasherIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_SelectedSlasherIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_SelectedCamperIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_SelectedCamperIndex = { "SelectedCamperIndex", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, SelectedCamperIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_SelectedCamperIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_SelectedCamperIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PlayerUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveDataV8.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PlayerUID = { "PlayerUID", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataV8, PlayerUID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PlayerUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PlayerUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveDataV8_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ShowPortraitBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeginnerTooltipsBeenDisabledAtLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_AutoDeclineFriendInvites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_IsCrossplayAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OnBoardingCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OnBoardingCompleted_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_BloodStoreSurvivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_BloodStoreKillers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_SpecialEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_SpecialEvent_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OwnedContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OwnedContent_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PlayerStatProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PlayerStatProgression_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ConsoleUserSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastLoadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_FearMarket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_DailyRituals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OwnedCharms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OwnedCharms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CharacterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CharacterData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativePlaytime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeSessions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastSessionTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastMatchTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsKillerNoFriends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsSurvivorNoFriends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatchesAsSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ChatVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ChatVisible_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PageVisited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PageVisited_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CumulativeMatches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_OngoingGameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastSurvivorMatchEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastKillerMatchEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastMatchStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastMatchEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_DisconnectPenaltyTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_LastConnectedCharacterIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_CurrentSeasonTicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenIridescentShardsOnboardingCurrencyPopup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenAuricCellsOnboardingCurrencyPopup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasSeenBloodpointsOnboardingCurrencyPopup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeenGivenSurvivorTutorialEndReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_HasBeenGivenKillerTutorialEndReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_ConsecutiveMatchStreak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_FirstTimePlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_Offerings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_Offerings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_SelectedSlasherIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_SelectedCamperIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataV8_Statics::NewProp_PlayerUID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveDataV8_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FSaveDataBase,
		&NewStructOps,
		"SaveDataV8",
		sizeof(FSaveDataV8),
		alignof(FSaveDataV8),
		Z_Construct_UScriptStruct_FSaveDataV8_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataV8_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataV8_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveDataV8()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveDataV8_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveDataV8"), sizeof(FSaveDataV8), Get_Z_Construct_UScriptStruct_FSaveDataV8_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveDataV8_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveDataV8_Hash() { return 32777691U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
