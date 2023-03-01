// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EAIDifficultyLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAIDifficultyLevel() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EAIDifficultyLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EAIDifficultyLevel"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EAIDifficultyLevel>()
	{
		return EAIDifficultyLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIDifficultyLevel(EAIDifficultyLevel_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EAIDifficultyLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel_Hash() { return 3875069150U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIDifficultyLevel"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIDifficultyLevel::VeryEasy", (int64)EAIDifficultyLevel::VeryEasy },
				{ "EAIDifficultyLevel::Easy", (int64)EAIDifficultyLevel::Easy },
				{ "EAIDifficultyLevel::Medium", (int64)EAIDifficultyLevel::Medium },
				{ "EAIDifficultyLevel::Hard", (int64)EAIDifficultyLevel::Hard },
				{ "EAIDifficultyLevel::Suggested", (int64)EAIDifficultyLevel::Suggested },
				{ "EAIDifficultyLevel::Random", (int64)EAIDifficultyLevel::Random },
				{ "EAIDifficultyLevel::None", (int64)EAIDifficultyLevel::None },
				{ "EAIDifficultyLevel::Max", (int64)EAIDifficultyLevel::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Easy.Name", "EAIDifficultyLevel::Easy" },
				{ "Hard.Name", "EAIDifficultyLevel::Hard" },
				{ "Max.Name", "EAIDifficultyLevel::Max" },
				{ "Medium.Name", "EAIDifficultyLevel::Medium" },
				{ "ModuleRelativePath", "Public/EAIDifficultyLevel.h" },
				{ "None.Name", "EAIDifficultyLevel::None" },
				{ "Random.Name", "EAIDifficultyLevel::Random" },
				{ "Suggested.Name", "EAIDifficultyLevel::Suggested" },
				{ "VeryEasy.Name", "EAIDifficultyLevel::VeryEasy" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EAIDifficultyLevel",
				"EAIDifficultyLevel",
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
