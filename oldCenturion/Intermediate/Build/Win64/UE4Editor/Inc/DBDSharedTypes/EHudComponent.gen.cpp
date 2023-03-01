// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EHudComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHudComponent() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EHudComponent();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EHudComponent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EHudComponent, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EHudComponent"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EHudComponent>()
	{
		return EHudComponent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHudComponent(EHudComponent_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EHudComponent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EHudComponent_Hash() { return 611495495U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EHudComponent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHudComponent"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EHudComponent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHudComponent::ACTION_PROMPT", (int64)EHudComponent::ACTION_PROMPT },
				{ "EHudComponent::ACTION_PROGRESS_BAR", (int64)EHudComponent::ACTION_PROGRESS_BAR },
				{ "EHudComponent::GENERATOR_ICON", (int64)EHudComponent::GENERATOR_ICON },
				{ "EHudComponent::HATCH_ICON", (int64)EHudComponent::HATCH_ICON },
				{ "EHudComponent::EXIT_ICON", (int64)EHudComponent::EXIT_ICON },
				{ "EHudComponent::LOCAL_PLAYER_STATUS", (int64)EHudComponent::LOCAL_PLAYER_STATUS },
				{ "EHudComponent::OTHER_PLAYER_STATUSES", (int64)EHudComponent::OTHER_PLAYER_STATUSES },
				{ "EHudComponent::SURVIVOR_HOOK_COUNT", (int64)EHudComponent::SURVIVOR_HOOK_COUNT },
				{ "EHudComponent::CROUCH_BUTTON", (int64)EHudComponent::CROUCH_BUTTON },
				{ "EHudComponent::CENTER_INTERACT_BUTTON", (int64)EHudComponent::CENTER_INTERACT_BUTTON },
				{ "EHudComponent::DIRECTIONAL_STICK", (int64)EHudComponent::DIRECTIONAL_STICK },
				{ "EHudComponent::WIGGLE_BUTTONS", (int64)EHudComponent::WIGGLE_BUTTONS },
				{ "EHudComponent::STRUGGLE_BUTTONS", (int64)EHudComponent::STRUGGLE_BUTTONS },
				{ "EHudComponent::POWER_BUTTON", (int64)EHudComponent::POWER_BUTTON },
				{ "EHudComponent::ATTACK_BUTTON", (int64)EHudComponent::ATTACK_BUTTON },
				{ "EHudComponent::OBJECTIVES", (int64)EHudComponent::OBJECTIVES },
				{ "EHudComponent::LOUD_NOISE_INDICATOR", (int64)EHudComponent::LOUD_NOISE_INDICATOR },
				{ "EHudComponent::SECOND_ABILITY_BUTTON", (int64)EHudComponent::SECOND_ABILITY_BUTTON },
				{ "EHudComponent::ACTION_BUTTON", (int64)EHudComponent::ACTION_BUTTON },
				{ "EHudComponent::CANCEL_BUTTON", (int64)EHudComponent::CANCEL_BUTTON },
				{ "EHudComponent::DROP_SURVIVOR_BUTTON", (int64)EHudComponent::DROP_SURVIVOR_BUTTON },
				{ "EHudComponent::LOOK_BACK_BUTTON", (int64)EHudComponent::LOOK_BACK_BUTTON },
				{ "EHudComponent::CENTER_ITEM_CONTAINER", (int64)EHudComponent::CENTER_ITEM_CONTAINER },
				{ "EHudComponent::MOVEMENT_LOCK", (int64)EHudComponent::MOVEMENT_LOCK },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACTION_BUTTON.Name", "EHudComponent::ACTION_BUTTON" },
				{ "ACTION_PROGRESS_BAR.Name", "EHudComponent::ACTION_PROGRESS_BAR" },
				{ "ACTION_PROMPT.Name", "EHudComponent::ACTION_PROMPT" },
				{ "ATTACK_BUTTON.Name", "EHudComponent::ATTACK_BUTTON" },
				{ "CANCEL_BUTTON.Name", "EHudComponent::CANCEL_BUTTON" },
				{ "CENTER_INTERACT_BUTTON.Name", "EHudComponent::CENTER_INTERACT_BUTTON" },
				{ "CENTER_ITEM_CONTAINER.Name", "EHudComponent::CENTER_ITEM_CONTAINER" },
				{ "CROUCH_BUTTON.Name", "EHudComponent::CROUCH_BUTTON" },
				{ "DIRECTIONAL_STICK.Name", "EHudComponent::DIRECTIONAL_STICK" },
				{ "DROP_SURVIVOR_BUTTON.Name", "EHudComponent::DROP_SURVIVOR_BUTTON" },
				{ "EXIT_ICON.Name", "EHudComponent::EXIT_ICON" },
				{ "GENERATOR_ICON.Name", "EHudComponent::GENERATOR_ICON" },
				{ "HATCH_ICON.Name", "EHudComponent::HATCH_ICON" },
				{ "LOCAL_PLAYER_STATUS.Name", "EHudComponent::LOCAL_PLAYER_STATUS" },
				{ "LOOK_BACK_BUTTON.Name", "EHudComponent::LOOK_BACK_BUTTON" },
				{ "LOUD_NOISE_INDICATOR.Name", "EHudComponent::LOUD_NOISE_INDICATOR" },
				{ "ModuleRelativePath", "Public/EHudComponent.h" },
				{ "MOVEMENT_LOCK.Name", "EHudComponent::MOVEMENT_LOCK" },
				{ "OBJECTIVES.Name", "EHudComponent::OBJECTIVES" },
				{ "OTHER_PLAYER_STATUSES.Name", "EHudComponent::OTHER_PLAYER_STATUSES" },
				{ "POWER_BUTTON.Name", "EHudComponent::POWER_BUTTON" },
				{ "SECOND_ABILITY_BUTTON.Name", "EHudComponent::SECOND_ABILITY_BUTTON" },
				{ "STRUGGLE_BUTTONS.Name", "EHudComponent::STRUGGLE_BUTTONS" },
				{ "SURVIVOR_HOOK_COUNT.Name", "EHudComponent::SURVIVOR_HOOK_COUNT" },
				{ "WIGGLE_BUTTONS.Name", "EHudComponent::WIGGLE_BUTTONS" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EHudComponent",
				"EHudComponent",
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
