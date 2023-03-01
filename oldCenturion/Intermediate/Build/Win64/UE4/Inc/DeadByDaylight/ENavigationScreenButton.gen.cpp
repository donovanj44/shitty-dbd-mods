// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ENavigationScreenButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENavigationScreenButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ENavigationScreenButton();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ENavigationScreenButton_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ENavigationScreenButton, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ENavigationScreenButton"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ENavigationScreenButton>()
	{
		return ENavigationScreenButton_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENavigationScreenButton(ENavigationScreenButton_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ENavigationScreenButton"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ENavigationScreenButton_Hash() { return 2857558846U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ENavigationScreenButton()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENavigationScreenButton"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ENavigationScreenButton_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENavigationScreenButton::AddCurrency", (int64)ENavigationScreenButton::AddCurrency },
				{ "ENavigationScreenButton::Back", (int64)ENavigationScreenButton::Back },
				{ "ENavigationScreenButton::Bloodweb", (int64)ENavigationScreenButton::Bloodweb },
				{ "ENavigationScreenButton::ChangeRole", (int64)ENavigationScreenButton::ChangeRole },
				{ "ENavigationScreenButton::CharacterSelection", (int64)ENavigationScreenButton::CharacterSelection },
				{ "ENavigationScreenButton::Customization", (int64)ENavigationScreenButton::Customization },
				{ "ENavigationScreenButton::InviteFriend", (int64)ENavigationScreenButton::InviteFriend },
				{ "ENavigationScreenButton::Loadout", (int64)ENavigationScreenButton::Loadout },
				{ "ENavigationScreenButton::Start", (int64)ENavigationScreenButton::Start },
				{ "ENavigationScreenButton::Subscriptions", (int64)ENavigationScreenButton::Subscriptions },
				{ "ENavigationScreenButton::EditCustomGame", (int64)ENavigationScreenButton::EditCustomGame },
				{ "ENavigationScreenButton::CustomGameRequestRole", (int64)ENavigationScreenButton::CustomGameRequestRole },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AddCurrency.Name", "ENavigationScreenButton::AddCurrency" },
				{ "Back.Name", "ENavigationScreenButton::Back" },
				{ "Bloodweb.Name", "ENavigationScreenButton::Bloodweb" },
				{ "ChangeRole.Name", "ENavigationScreenButton::ChangeRole" },
				{ "CharacterSelection.Name", "ENavigationScreenButton::CharacterSelection" },
				{ "CustomGameRequestRole.Name", "ENavigationScreenButton::CustomGameRequestRole" },
				{ "Customization.Name", "ENavigationScreenButton::Customization" },
				{ "EditCustomGame.Name", "ENavigationScreenButton::EditCustomGame" },
				{ "InviteFriend.Name", "ENavigationScreenButton::InviteFriend" },
				{ "Loadout.Name", "ENavigationScreenButton::Loadout" },
				{ "ModuleRelativePath", "Public/ENavigationScreenButton.h" },
				{ "Start.Name", "ENavigationScreenButton::Start" },
				{ "Subscriptions.Name", "ENavigationScreenButton::Subscriptions" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ENavigationScreenButton",
				"ENavigationScreenButton",
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
