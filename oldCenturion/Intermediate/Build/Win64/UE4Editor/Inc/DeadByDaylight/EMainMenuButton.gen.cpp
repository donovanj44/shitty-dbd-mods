// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EMainMenuButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMainMenuButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EMainMenuButton();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EMainMenuButton_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EMainMenuButton, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EMainMenuButton"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EMainMenuButton>()
	{
		return EMainMenuButton_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMainMenuButton(EMainMenuButton_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EMainMenuButton"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EMainMenuButton_Hash() { return 1932469901U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EMainMenuButton()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMainMenuButton"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EMainMenuButton_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMainMenuButton::News", (int64)EMainMenuButton::News },
				{ "EMainMenuButton::PlaySurvivor", (int64)EMainMenuButton::PlaySurvivor },
				{ "EMainMenuButton::PlayKiller", (int64)EMainMenuButton::PlayKiller },
				{ "EMainMenuButton::KillYourFriends", (int64)EMainMenuButton::KillYourFriends },
				{ "EMainMenuButton::DailyRituals", (int64)EMainMenuButton::DailyRituals },
				{ "EMainMenuButton::Store", (int64)EMainMenuButton::Store },
				{ "EMainMenuButton::Settings", (int64)EMainMenuButton::Settings },
				{ "EMainMenuButton::Onboarding", (int64)EMainMenuButton::Onboarding },
				{ "EMainMenuButton::Credits", (int64)EMainMenuButton::Credits },
				{ "EMainMenuButton::QuitGame", (int64)EMainMenuButton::QuitGame },
				{ "EMainMenuButton::Friends", (int64)EMainMenuButton::Friends },
				{ "EMainMenuButton::Archives", (int64)EMainMenuButton::Archives },
				{ "EMainMenuButton::CrowdChoice", (int64)EMainMenuButton::CrowdChoice },
				{ "EMainMenuButton::Support", (int64)EMainMenuButton::Support },
				{ "EMainMenuButton::PlaySurvivorFromCrowdChoice", (int64)EMainMenuButton::PlaySurvivorFromCrowdChoice },
				{ "EMainMenuButton::PlayKillerFromCrowdChoice", (int64)EMainMenuButton::PlayKillerFromCrowdChoice },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Archives.Name", "EMainMenuButton::Archives" },
				{ "BlueprintType", "true" },
				{ "Credits.Name", "EMainMenuButton::Credits" },
				{ "CrowdChoice.Name", "EMainMenuButton::CrowdChoice" },
				{ "DailyRituals.Name", "EMainMenuButton::DailyRituals" },
				{ "Friends.Name", "EMainMenuButton::Friends" },
				{ "KillYourFriends.Name", "EMainMenuButton::KillYourFriends" },
				{ "ModuleRelativePath", "Public/EMainMenuButton.h" },
				{ "News.Name", "EMainMenuButton::News" },
				{ "Onboarding.Name", "EMainMenuButton::Onboarding" },
				{ "PlayKiller.Name", "EMainMenuButton::PlayKiller" },
				{ "PlayKillerFromCrowdChoice.Name", "EMainMenuButton::PlayKillerFromCrowdChoice" },
				{ "PlaySurvivor.Name", "EMainMenuButton::PlaySurvivor" },
				{ "PlaySurvivorFromCrowdChoice.Name", "EMainMenuButton::PlaySurvivorFromCrowdChoice" },
				{ "QuitGame.Name", "EMainMenuButton::QuitGame" },
				{ "Settings.Name", "EMainMenuButton::Settings" },
				{ "Store.Name", "EMainMenuButton::Store" },
				{ "Support.Name", "EMainMenuButton::Support" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EMainMenuButton",
				"EMainMenuButton",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
