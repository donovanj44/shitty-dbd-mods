// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EEmblemProgressionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEmblemProgressionType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEmblemProgressionType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EEmblemProgressionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EEmblemProgressionType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EEmblemProgressionType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EEmblemProgressionType>()
	{
		return EEmblemProgressionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEmblemProgressionType(EEmblemProgressionType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EEmblemProgressionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EEmblemProgressionType_Hash() { return 2703960098U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EEmblemProgressionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEmblemProgressionType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EEmblemProgressionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEmblemProgressionType::SurvivorLightbringerStartingValue", (int64)EEmblemProgressionType::SurvivorLightbringerStartingValue },
				{ "EEmblemProgressionType::SurvivorLightbringerGeneratorRepair", (int64)EEmblemProgressionType::SurvivorLightbringerGeneratorRepair },
				{ "EEmblemProgressionType::SurvivorLightbringerTotemCleanse", (int64)EEmblemProgressionType::SurvivorLightbringerTotemCleanse },
				{ "EEmblemProgressionType::SurvivorLightbringerKillerDiversion", (int64)EEmblemProgressionType::SurvivorLightbringerKillerDiversion },
				{ "EEmblemProgressionType::SurvivorLightbringerExitGameOpen", (int64)EEmblemProgressionType::SurvivorLightbringerExitGameOpen },
				{ "EEmblemProgressionType::SurvivorUnbrokenTimeAlive", (int64)EEmblemProgressionType::SurvivorUnbrokenTimeAlive },
				{ "EEmblemProgressionType::SurvivorBenevolentStartingValue", (int64)EEmblemProgressionType::SurvivorBenevolentStartingValue },
				{ "EEmblemProgressionType::SurvivorBenevolentHealing", (int64)EEmblemProgressionType::SurvivorBenevolentHealing },
				{ "EEmblemProgressionType::SurvivorBenevolentHooked", (int64)EEmblemProgressionType::SurvivorBenevolentHooked },
				{ "EEmblemProgressionType::SurvivorBenevolentUnhook", (int64)EEmblemProgressionType::SurvivorBenevolentUnhook },
				{ "EEmblemProgressionType::SurvivorBenevolentPerformUnhook", (int64)EEmblemProgressionType::SurvivorBenevolentPerformUnhook },
				{ "EEmblemProgressionType::SurvivorBenevolentSaveFromKiller", (int64)EEmblemProgressionType::SurvivorBenevolentSaveFromKiller },
				{ "EEmblemProgressionType::SurvivorBenevolentUnsafeUnhook", (int64)EEmblemProgressionType::SurvivorBenevolentUnsafeUnhook },
				{ "EEmblemProgressionType::SurvivorBenevolentHitWhileCarrying", (int64)EEmblemProgressionType::SurvivorBenevolentHitWhileCarrying },
				{ "EEmblemProgressionType::SurvivorEvaderStartingValue", (int64)EEmblemProgressionType::SurvivorEvaderStartingValue },
				{ "EEmblemProgressionType::SurvivorEvaderSneaking", (int64)EEmblemProgressionType::SurvivorEvaderSneaking },
				{ "EEmblemProgressionType::SurvivorEvaderChaseWon", (int64)EEmblemProgressionType::SurvivorEvaderChaseWon },
				{ "EEmblemProgressionType::SurvivorEvaderChaseLost", (int64)EEmblemProgressionType::SurvivorEvaderChaseLost },
				{ "EEmblemProgressionType::SurvivorEvaderPalletStun", (int64)EEmblemProgressionType::SurvivorEvaderPalletStun },
				{ "EEmblemProgressionType::KillerGatekeeperStartingValue", (int64)EEmblemProgressionType::KillerGatekeeperStartingValue },
				{ "EEmblemProgressionType::KillerGatekeeperGeneratorDefense", (int64)EEmblemProgressionType::KillerGatekeeperGeneratorDefense },
				{ "EEmblemProgressionType::KillerGatekeeperGatesClosed", (int64)EEmblemProgressionType::KillerGatekeeperGatesClosed },
				{ "EEmblemProgressionType::KillerDevoutStartingValue", (int64)EEmblemProgressionType::KillerDevoutStartingValue },
				{ "EEmblemProgressionType::KillerDevoutSacrifice", (int64)EEmblemProgressionType::KillerDevoutSacrifice },
				{ "EEmblemProgressionType::KillerDevoutDisconnect", (int64)EEmblemProgressionType::KillerDevoutDisconnect },
				{ "EEmblemProgressionType::KillerDevoutMoris", (int64)EEmblemProgressionType::KillerDevoutMoris },
				{ "EEmblemProgressionType::KillerDevoutAllSurvivorsHooked", (int64)EEmblemProgressionType::KillerDevoutAllSurvivorsHooked },
				{ "EEmblemProgressionType::KillerDevoutHooksBonus", (int64)EEmblemProgressionType::KillerDevoutHooksBonus },
				{ "EEmblemProgressionType::KillerMaliciousStartingValue", (int64)EEmblemProgressionType::KillerMaliciousStartingValue },
				{ "EEmblemProgressionType::KillerMaliciousInjuries", (int64)EEmblemProgressionType::KillerMaliciousInjuries },
				{ "EEmblemProgressionType::KillerMaliciousHookStages", (int64)EEmblemProgressionType::KillerMaliciousHookStages },
				{ "EEmblemProgressionType::KillerMaliciousInjuriesHealed", (int64)EEmblemProgressionType::KillerMaliciousInjuriesHealed },
				{ "EEmblemProgressionType::KillerMaliciousEscapeGrasp", (int64)EEmblemProgressionType::KillerMaliciousEscapeGrasp },
				{ "EEmblemProgressionType::KillerMaliciousDisconnect", (int64)EEmblemProgressionType::KillerMaliciousDisconnect },
				{ "EEmblemProgressionType::KillerChaserStartingValue", (int64)EEmblemProgressionType::KillerChaserStartingValue },
				{ "EEmblemProgressionType::KillerChaserSurvivorFound", (int64)EEmblemProgressionType::KillerChaserSurvivorFound },
				{ "EEmblemProgressionType::KillerChaserSurvivorLost", (int64)EEmblemProgressionType::KillerChaserSurvivorLost },
				{ "EEmblemProgressionType::KillerChaserHit", (int64)EEmblemProgressionType::KillerChaserHit },
				{ "EEmblemProgressionType::KillerChaserChaseWon", (int64)EEmblemProgressionType::KillerChaserChaseWon },
				{ "EEmblemProgressionType::KillerChaserProximityToHookPenalty", (int64)EEmblemProgressionType::KillerChaserProximityToHookPenalty },
				{ "EEmblemProgressionType::Invalid", (int64)EEmblemProgressionType::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Invalid.Name", "EEmblemProgressionType::Invalid" },
				{ "KillerChaserChaseWon.Name", "EEmblemProgressionType::KillerChaserChaseWon" },
				{ "KillerChaserHit.Name", "EEmblemProgressionType::KillerChaserHit" },
				{ "KillerChaserProximityToHookPenalty.Name", "EEmblemProgressionType::KillerChaserProximityToHookPenalty" },
				{ "KillerChaserStartingValue.Name", "EEmblemProgressionType::KillerChaserStartingValue" },
				{ "KillerChaserSurvivorFound.Name", "EEmblemProgressionType::KillerChaserSurvivorFound" },
				{ "KillerChaserSurvivorLost.Name", "EEmblemProgressionType::KillerChaserSurvivorLost" },
				{ "KillerDevoutAllSurvivorsHooked.Name", "EEmblemProgressionType::KillerDevoutAllSurvivorsHooked" },
				{ "KillerDevoutDisconnect.Name", "EEmblemProgressionType::KillerDevoutDisconnect" },
				{ "KillerDevoutHooksBonus.Name", "EEmblemProgressionType::KillerDevoutHooksBonus" },
				{ "KillerDevoutMoris.Name", "EEmblemProgressionType::KillerDevoutMoris" },
				{ "KillerDevoutSacrifice.Name", "EEmblemProgressionType::KillerDevoutSacrifice" },
				{ "KillerDevoutStartingValue.Name", "EEmblemProgressionType::KillerDevoutStartingValue" },
				{ "KillerGatekeeperGatesClosed.Name", "EEmblemProgressionType::KillerGatekeeperGatesClosed" },
				{ "KillerGatekeeperGeneratorDefense.Name", "EEmblemProgressionType::KillerGatekeeperGeneratorDefense" },
				{ "KillerGatekeeperStartingValue.Name", "EEmblemProgressionType::KillerGatekeeperStartingValue" },
				{ "KillerMaliciousDisconnect.Name", "EEmblemProgressionType::KillerMaliciousDisconnect" },
				{ "KillerMaliciousEscapeGrasp.Name", "EEmblemProgressionType::KillerMaliciousEscapeGrasp" },
				{ "KillerMaliciousHookStages.Name", "EEmblemProgressionType::KillerMaliciousHookStages" },
				{ "KillerMaliciousInjuries.Name", "EEmblemProgressionType::KillerMaliciousInjuries" },
				{ "KillerMaliciousInjuriesHealed.Name", "EEmblemProgressionType::KillerMaliciousInjuriesHealed" },
				{ "KillerMaliciousStartingValue.Name", "EEmblemProgressionType::KillerMaliciousStartingValue" },
				{ "ModuleRelativePath", "Public/EEmblemProgressionType.h" },
				{ "SurvivorBenevolentHealing.Name", "EEmblemProgressionType::SurvivorBenevolentHealing" },
				{ "SurvivorBenevolentHitWhileCarrying.Name", "EEmblemProgressionType::SurvivorBenevolentHitWhileCarrying" },
				{ "SurvivorBenevolentHooked.Name", "EEmblemProgressionType::SurvivorBenevolentHooked" },
				{ "SurvivorBenevolentPerformUnhook.Name", "EEmblemProgressionType::SurvivorBenevolentPerformUnhook" },
				{ "SurvivorBenevolentSaveFromKiller.Name", "EEmblemProgressionType::SurvivorBenevolentSaveFromKiller" },
				{ "SurvivorBenevolentStartingValue.Name", "EEmblemProgressionType::SurvivorBenevolentStartingValue" },
				{ "SurvivorBenevolentUnhook.Name", "EEmblemProgressionType::SurvivorBenevolentUnhook" },
				{ "SurvivorBenevolentUnsafeUnhook.Name", "EEmblemProgressionType::SurvivorBenevolentUnsafeUnhook" },
				{ "SurvivorEvaderChaseLost.Name", "EEmblemProgressionType::SurvivorEvaderChaseLost" },
				{ "SurvivorEvaderChaseWon.Name", "EEmblemProgressionType::SurvivorEvaderChaseWon" },
				{ "SurvivorEvaderPalletStun.Name", "EEmblemProgressionType::SurvivorEvaderPalletStun" },
				{ "SurvivorEvaderSneaking.Name", "EEmblemProgressionType::SurvivorEvaderSneaking" },
				{ "SurvivorEvaderStartingValue.Name", "EEmblemProgressionType::SurvivorEvaderStartingValue" },
				{ "SurvivorLightbringerExitGameOpen.Name", "EEmblemProgressionType::SurvivorLightbringerExitGameOpen" },
				{ "SurvivorLightbringerGeneratorRepair.Name", "EEmblemProgressionType::SurvivorLightbringerGeneratorRepair" },
				{ "SurvivorLightbringerKillerDiversion.Name", "EEmblemProgressionType::SurvivorLightbringerKillerDiversion" },
				{ "SurvivorLightbringerStartingValue.Name", "EEmblemProgressionType::SurvivorLightbringerStartingValue" },
				{ "SurvivorLightbringerTotemCleanse.Name", "EEmblemProgressionType::SurvivorLightbringerTotemCleanse" },
				{ "SurvivorUnbrokenTimeAlive.Name", "EEmblemProgressionType::SurvivorUnbrokenTimeAlive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EEmblemProgressionType",
				"EEmblemProgressionType",
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
