// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EDiceRollType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiceRollType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDiceRollType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EDiceRollType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EDiceRollType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EDiceRollType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EDiceRollType>()
	{
		return EDiceRollType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiceRollType(EDiceRollType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EDiceRollType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EDiceRollType_Hash() { return 1346056582U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EDiceRollType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiceRollType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EDiceRollType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiceRollType::VE_EscapeHook", (int64)EDiceRollType::VE_EscapeHook },
				{ "EDiceRollType::VE_EscapeTrap", (int64)EDiceRollType::VE_EscapeTrap },
				{ "EDiceRollType::VE_TrapInflictsDying", (int64)EDiceRollType::VE_TrapInflictsDying },
				{ "EDiceRollType::VE_TriggerSkillCheck", (int64)EDiceRollType::VE_TriggerSkillCheck },
				{ "EDiceRollType::VE_TriggerFootNoise", (int64)EDiceRollType::VE_TriggerFootNoise },
				{ "EDiceRollType::VE_TriggerCrowAlert", (int64)EDiceRollType::VE_TriggerCrowAlert },
				{ "EDiceRollType::VE_MAX", (int64)EDiceRollType::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EDiceRollType.h" },
				{ "VE_EscapeHook.Name", "EDiceRollType::VE_EscapeHook" },
				{ "VE_EscapeTrap.Name", "EDiceRollType::VE_EscapeTrap" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EDiceRollType::VE_MAX" },
				{ "VE_TrapInflictsDying.Name", "EDiceRollType::VE_TrapInflictsDying" },
				{ "VE_TriggerCrowAlert.Name", "EDiceRollType::VE_TriggerCrowAlert" },
				{ "VE_TriggerFootNoise.Name", "EDiceRollType::VE_TriggerFootNoise" },
				{ "VE_TriggerSkillCheck.Name", "EDiceRollType::VE_TriggerSkillCheck" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EDiceRollType",
				"EDiceRollType",
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
