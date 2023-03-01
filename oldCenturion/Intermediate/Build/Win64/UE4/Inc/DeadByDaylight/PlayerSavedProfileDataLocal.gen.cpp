// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerSavedProfileDataLocal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerSavedProfileDataLocal() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventSavedData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSavedProfileData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSavedStatsData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBloodWebPersistentData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLoadoutData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FFearMarketOfferingInstance();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualContainer();
// End Cross Module References
class UScriptStruct* FPlayerSavedProfileDataLocal::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PlayerSavedProfileDataLocal"), sizeof(FPlayerSavedProfileDataLocal), Get_Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPlayerSavedProfileDataLocal>()
{
	return FPlayerSavedProfileDataLocal::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerSavedProfileDataLocal(FPlayerSavedProfileDataLocal::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PlayerSavedProfileDataLocal"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerSavedProfileDataLocal
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerSavedProfileDataLocal()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerSavedProfileDataLocal")),new UScriptStruct::TCppStructOps<FPlayerSavedProfileDataLocal>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerSavedProfileDataLocal;
	struct Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasBeginnerTooltipsBeenDisabledAtLevel_MetaData[];
#endif
		static void NewProp__hasBeginnerTooltipsBeenDisabledAtLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasBeginnerTooltipsBeenDisabledAtLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__specialEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__specialEvent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__specialEvent_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__specialEvent_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__characterData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__characterData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__characterData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasSeenIridescentShardsOnboardingCurrencyPopup_MetaData[];
#endif
		static void NewProp__hasSeenIridescentShardsOnboardingCurrencyPopup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasSeenIridescentShardsOnboardingCurrencyPopup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasSeenAuricCellsOnboardingCurrencyPopup_MetaData[];
#endif
		static void NewProp__hasSeenAuricCellsOnboardingCurrencyPopup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasSeenAuricCellsOnboardingCurrencyPopup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasSeenBloodpointsOnboardingCurrencyPopup_MetaData[];
#endif
		static void NewProp__hasSeenBloodpointsOnboardingCurrencyPopup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasSeenBloodpointsOnboardingCurrencyPopup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasBeenGivenSurvivorTutorialEndReward_MetaData[];
#endif
		static void NewProp__hasBeenGivenSurvivorTutorialEndReward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasBeenGivenSurvivorTutorialEndReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasBeenGivenKillerTutorialEndReward_MetaData[];
#endif
		static void NewProp__hasBeenGivenKillerTutorialEndReward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasBeenGivenKillerTutorialEndReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__savedPlayerStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__savedPlayerStats;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__savedPlayerStats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cumulativeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cumulativeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ongoingGameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__ongoingGameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoDeclineFriendInvites_MetaData[];
#endif
		static void NewProp_AutoDeclineFriendInvites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoDeclineFriendInvites;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossplayAllowed_MetaData[];
#endif
		static void NewProp_CrossplayAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CrossplayAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodStoreSurvivors_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloodStoreSurvivors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodStoreKillers_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloodStoreKillers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSurvivorMatchEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastSurvivorMatchEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastKillerMatchEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastKillerMatchEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMatchStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastMatchStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMatchEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastMatchEndTime;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Losses_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Losses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wins_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Wins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsecutiveMatchStreak_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConsecutiveMatchStreak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnboardingCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OnboardingCompleted;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OnboardingCompleted_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnboardingCompleted_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatVisible_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ChatVisible;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChatVisible_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ChatVisible_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageVisited_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PageVisited;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PageVisited_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PageVisited_ValueProp;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerSavedProfileDataLocal>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeginnerTooltipsBeenDisabledAtLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeginnerTooltipsBeenDisabledAtLevel_SetBit(void* Obj)
	{
		((FPlayerSavedProfileDataLocal*)Obj)->_hasBeginnerTooltipsBeenDisabledAtLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeginnerTooltipsBeenDisabledAtLevel = { "_hasBeginnerTooltipsBeenDisabledAtLevel", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerSavedProfileDataLocal), &Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeginnerTooltipsBeenDisabledAtLevel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeginnerTooltipsBeenDisabledAtLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeginnerTooltipsBeenDisabledAtLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__specialEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__specialEvent = { "_specialEvent", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, _specialEvent), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__specialEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__specialEvent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__specialEvent_Key_KeyProp = { "_specialEvent_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__specialEvent_ValueProp = { "_specialEvent", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSpecialEventSavedData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__characterData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__characterData = { "_characterData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, _characterData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__characterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__characterData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__characterData_Key_KeyProp = { "_characterData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__characterData_ValueProp = { "_characterData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCharacterSavedProfileData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenIridescentShardsOnboardingCurrencyPopup_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenIridescentShardsOnboardingCurrencyPopup_SetBit(void* Obj)
	{
		((FPlayerSavedProfileDataLocal*)Obj)->_hasSeenIridescentShardsOnboardingCurrencyPopup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenIridescentShardsOnboardingCurrencyPopup = { "_hasSeenIridescentShardsOnboardingCurrencyPopup", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerSavedProfileDataLocal), &Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenIridescentShardsOnboardingCurrencyPopup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenIridescentShardsOnboardingCurrencyPopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenIridescentShardsOnboardingCurrencyPopup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenAuricCellsOnboardingCurrencyPopup_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenAuricCellsOnboardingCurrencyPopup_SetBit(void* Obj)
	{
		((FPlayerSavedProfileDataLocal*)Obj)->_hasSeenAuricCellsOnboardingCurrencyPopup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenAuricCellsOnboardingCurrencyPopup = { "_hasSeenAuricCellsOnboardingCurrencyPopup", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerSavedProfileDataLocal), &Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenAuricCellsOnboardingCurrencyPopup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenAuricCellsOnboardingCurrencyPopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenAuricCellsOnboardingCurrencyPopup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenBloodpointsOnboardingCurrencyPopup_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenBloodpointsOnboardingCurrencyPopup_SetBit(void* Obj)
	{
		((FPlayerSavedProfileDataLocal*)Obj)->_hasSeenBloodpointsOnboardingCurrencyPopup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenBloodpointsOnboardingCurrencyPopup = { "_hasSeenBloodpointsOnboardingCurrencyPopup", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerSavedProfileDataLocal), &Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenBloodpointsOnboardingCurrencyPopup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenBloodpointsOnboardingCurrencyPopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenBloodpointsOnboardingCurrencyPopup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeenGivenSurvivorTutorialEndReward_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeenGivenSurvivorTutorialEndReward_SetBit(void* Obj)
	{
		((FPlayerSavedProfileDataLocal*)Obj)->_hasBeenGivenSurvivorTutorialEndReward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeenGivenSurvivorTutorialEndReward = { "_hasBeenGivenSurvivorTutorialEndReward", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerSavedProfileDataLocal), &Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeenGivenSurvivorTutorialEndReward_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeenGivenSurvivorTutorialEndReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeenGivenSurvivorTutorialEndReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeenGivenKillerTutorialEndReward_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeenGivenKillerTutorialEndReward_SetBit(void* Obj)
	{
		((FPlayerSavedProfileDataLocal*)Obj)->_hasBeenGivenKillerTutorialEndReward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeenGivenKillerTutorialEndReward = { "_hasBeenGivenKillerTutorialEndReward", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerSavedProfileDataLocal), &Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeenGivenKillerTutorialEndReward_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeenGivenKillerTutorialEndReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeenGivenKillerTutorialEndReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__savedPlayerStats_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__savedPlayerStats = { "_savedPlayerStats", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, _savedPlayerStats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__savedPlayerStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__savedPlayerStats_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__savedPlayerStats_Inner = { "_savedPlayerStats", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSavedStatsData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__cumulativeData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__cumulativeData = { "_cumulativeData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, _cumulativeData), Z_Construct_UScriptStruct_FPlayerSavedProfileCumulativeData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__cumulativeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__cumulativeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__ongoingGameTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__ongoingGameTime = { "_ongoingGameTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, _ongoingGameTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__ongoingGameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__ongoingGameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_AutoDeclineFriendInvites_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_AutoDeclineFriendInvites_SetBit(void* Obj)
	{
		((FPlayerSavedProfileDataLocal*)Obj)->AutoDeclineFriendInvites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_AutoDeclineFriendInvites = { "AutoDeclineFriendInvites", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerSavedProfileDataLocal), &Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_AutoDeclineFriendInvites_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_AutoDeclineFriendInvites_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_AutoDeclineFriendInvites_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_CrossplayAllowed_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_CrossplayAllowed_SetBit(void* Obj)
	{
		((FPlayerSavedProfileDataLocal*)Obj)->CrossplayAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_CrossplayAllowed = { "CrossplayAllowed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerSavedProfileDataLocal), &Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_CrossplayAllowed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_CrossplayAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_CrossplayAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_BloodStoreSurvivors_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_BloodStoreSurvivors = { "BloodStoreSurvivors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, BloodStoreSurvivors), Z_Construct_UScriptStruct_FBloodWebPersistentData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_BloodStoreSurvivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_BloodStoreSurvivors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_BloodStoreKillers_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_BloodStoreKillers = { "BloodStoreKillers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, BloodStoreKillers), Z_Construct_UScriptStruct_FBloodWebPersistentData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_BloodStoreKillers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_BloodStoreKillers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastSurvivorMatchEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastSurvivorMatchEndTime = { "LastSurvivorMatchEndTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, LastSurvivorMatchEndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastSurvivorMatchEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastSurvivorMatchEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastKillerMatchEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastKillerMatchEndTime = { "LastKillerMatchEndTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, LastKillerMatchEndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastKillerMatchEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastKillerMatchEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastMatchStartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastMatchStartTime = { "LastMatchStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, LastMatchStartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastMatchStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastMatchStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastMatchEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastMatchEndTime = { "LastMatchEndTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, LastMatchEndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastMatchEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastMatchEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_DisconnectPenaltyTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_DisconnectPenaltyTime = { "DisconnectPenaltyTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, DisconnectPenaltyTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_DisconnectPenaltyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_DisconnectPenaltyTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedCharacterIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedCharacterIndex = { "LastConnectedCharacterIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, LastConnectedCharacterIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedCharacterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedCharacterIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedLoadout_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedLoadout = { "LastConnectedLoadout", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, LastConnectedLoadout), Z_Construct_UScriptStruct_FPlayerLoadoutData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedLoadout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_FearMarket_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_FearMarket = { "FearMarket", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, FearMarket), Z_Construct_UScriptStruct_FFearMarketOfferingInstance, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_FearMarket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_FearMarket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_DailyRituals_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_DailyRituals = { "DailyRituals", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, DailyRituals), Z_Construct_UScriptStruct_FDailyRitualContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_DailyRituals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_DailyRituals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_CurrentSeasonTicks_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_CurrentSeasonTicks = { "CurrentSeasonTicks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, CurrentSeasonTicks), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_CurrentSeasonTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_CurrentSeasonTicks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Losses_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Losses = { "Losses", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, Losses), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Losses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Losses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Wins_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Wins = { "Wins", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, Wins), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Wins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Wins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_ConsecutiveMatchStreak_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_ConsecutiveMatchStreak = { "ConsecutiveMatchStreak", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, ConsecutiveMatchStreak), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_ConsecutiveMatchStreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_ConsecutiveMatchStreak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_OnboardingCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_OnboardingCompleted = { "OnboardingCompleted", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, OnboardingCompleted), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_OnboardingCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_OnboardingCompleted_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_OnboardingCompleted_Key_KeyProp = { "OnboardingCompleted_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_OnboardingCompleted_ValueProp = { "OnboardingCompleted", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_ChatVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_ChatVisible = { "ChatVisible", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, ChatVisible), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_ChatVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_ChatVisible_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_ChatVisible_Key_KeyProp = { "ChatVisible_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_ChatVisible_ValueProp = { "ChatVisible", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_PageVisited_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_PageVisited = { "PageVisited", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, PageVisited), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_PageVisited_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_PageVisited_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_PageVisited_Key_KeyProp = { "PageVisited_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_PageVisited_ValueProp = { "PageVisited", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Offerings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Offerings = { "Offerings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, Offerings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Offerings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Offerings_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Offerings_Inner = { "Offerings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Tokens_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerSavedProfileDataLocal.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Tokens = { "Tokens", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerSavedProfileDataLocal, Tokens), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Tokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Tokens_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeginnerTooltipsBeenDisabledAtLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__specialEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__specialEvent_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__specialEvent_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__characterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__characterData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__characterData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenIridescentShardsOnboardingCurrencyPopup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenAuricCellsOnboardingCurrencyPopup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasSeenBloodpointsOnboardingCurrencyPopup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeenGivenSurvivorTutorialEndReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__hasBeenGivenKillerTutorialEndReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__savedPlayerStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__savedPlayerStats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__cumulativeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp__ongoingGameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_AutoDeclineFriendInvites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_CrossplayAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_BloodStoreSurvivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_BloodStoreKillers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastSurvivorMatchEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastKillerMatchEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastMatchStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastMatchEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_DisconnectPenaltyTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedCharacterIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_LastConnectedLoadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_FearMarket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_DailyRituals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_CurrentSeasonTicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Losses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Wins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_ConsecutiveMatchStreak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_OnboardingCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_OnboardingCompleted_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_OnboardingCompleted_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_ChatVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_ChatVisible_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_ChatVisible_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_PageVisited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_PageVisited_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_PageVisited_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Offerings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Offerings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::NewProp_Tokens,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PlayerSavedProfileDataLocal",
		sizeof(FPlayerSavedProfileDataLocal),
		alignof(FPlayerSavedProfileDataLocal),
		Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerSavedProfileDataLocal"), sizeof(FPlayerSavedProfileDataLocal), Get_Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerSavedProfileDataLocal_Hash() { return 3003805122U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
