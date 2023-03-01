// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EUMGDailyRewardWidgetState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUMGDailyRewardWidgetState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EUMGDailyRewardWidgetState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EUMGDailyRewardWidgetState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EUMGDailyRewardWidgetState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EUMGDailyRewardWidgetState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EUMGDailyRewardWidgetState>()
	{
		return EUMGDailyRewardWidgetState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUMGDailyRewardWidgetState(EUMGDailyRewardWidgetState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EUMGDailyRewardWidgetState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EUMGDailyRewardWidgetState_Hash() { return 4209738394U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EUMGDailyRewardWidgetState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUMGDailyRewardWidgetState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EUMGDailyRewardWidgetState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUMGDailyRewardWidgetState::Unknown", (int64)EUMGDailyRewardWidgetState::Unknown },
				{ "EUMGDailyRewardWidgetState::Locked", (int64)EUMGDailyRewardWidgetState::Locked },
				{ "EUMGDailyRewardWidgetState::ReadyToCollect", (int64)EUMGDailyRewardWidgetState::ReadyToCollect },
				{ "EUMGDailyRewardWidgetState::NewlyCollected", (int64)EUMGDailyRewardWidgetState::NewlyCollected },
				{ "EUMGDailyRewardWidgetState::Collected", (int64)EUMGDailyRewardWidgetState::Collected },
				{ "EUMGDailyRewardWidgetState::MysteryLocked", (int64)EUMGDailyRewardWidgetState::MysteryLocked },
				{ "EUMGDailyRewardWidgetState::MysteryReadyToDiscover", (int64)EUMGDailyRewardWidgetState::MysteryReadyToDiscover },
				{ "EUMGDailyRewardWidgetState::MysteryNewlyDiscovered", (int64)EUMGDailyRewardWidgetState::MysteryNewlyDiscovered },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Collected.Name", "EUMGDailyRewardWidgetState::Collected" },
				{ "Locked.Name", "EUMGDailyRewardWidgetState::Locked" },
				{ "ModuleRelativePath", "Public/EUMGDailyRewardWidgetState.h" },
				{ "MysteryLocked.Name", "EUMGDailyRewardWidgetState::MysteryLocked" },
				{ "MysteryNewlyDiscovered.Name", "EUMGDailyRewardWidgetState::MysteryNewlyDiscovered" },
				{ "MysteryReadyToDiscover.Name", "EUMGDailyRewardWidgetState::MysteryReadyToDiscover" },
				{ "NewlyCollected.Name", "EUMGDailyRewardWidgetState::NewlyCollected" },
				{ "ReadyToCollect.Name", "EUMGDailyRewardWidgetState::ReadyToCollect" },
				{ "Unknown.Name", "EUMGDailyRewardWidgetState::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EUMGDailyRewardWidgetState",
				"EUMGDailyRewardWidgetState",
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
