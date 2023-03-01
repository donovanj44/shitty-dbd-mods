// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EDBDScoreCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDBDScoreCategory() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EDBDScoreCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EDBDScoreCategory"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EDBDScoreCategory>()
	{
		return EDBDScoreCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDBDScoreCategory(EDBDScoreCategory_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EDBDScoreCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory_Hash() { return 815661954U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDBDScoreCategory"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDBDScoreCategory::DBD_CamperScoreCat_Objectives", (int64)EDBDScoreCategory::DBD_CamperScoreCat_Objectives },
				{ "EDBDScoreCategory::DBD_CamperScoreCat_Survival", (int64)EDBDScoreCategory::DBD_CamperScoreCat_Survival },
				{ "EDBDScoreCategory::DBD_CamperScoreCat_Altruism", (int64)EDBDScoreCategory::DBD_CamperScoreCat_Altruism },
				{ "EDBDScoreCategory::DBD_CamperScoreCat_Boldness", (int64)EDBDScoreCategory::DBD_CamperScoreCat_Boldness },
				{ "EDBDScoreCategory::DBD_SlasherScoreCat_Brutality", (int64)EDBDScoreCategory::DBD_SlasherScoreCat_Brutality },
				{ "EDBDScoreCategory::DBD_SlasherScoreCat_Deviousness", (int64)EDBDScoreCategory::DBD_SlasherScoreCat_Deviousness },
				{ "EDBDScoreCategory::DBD_SlasherScoreCat_Hunter", (int64)EDBDScoreCategory::DBD_SlasherScoreCat_Hunter },
				{ "EDBDScoreCategory::DBD_SlasherScoreCat_Sacrifice", (int64)EDBDScoreCategory::DBD_SlasherScoreCat_Sacrifice },
				{ "EDBDScoreCategory::DBD_CamperScoreCat_Untracked", (int64)EDBDScoreCategory::DBD_CamperScoreCat_Untracked },
				{ "EDBDScoreCategory::DBD_CamperScoreCat_Streak", (int64)EDBDScoreCategory::DBD_CamperScoreCat_Streak },
				{ "EDBDScoreCategory::DBD_ScoreCat_SpecialEvents", (int64)EDBDScoreCategory::DBD_ScoreCat_SpecialEvents },
				{ "EDBDScoreCategory::Count", (int64)EDBDScoreCategory::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Name", "EDBDScoreCategory::Count" },
				{ "DBD_CamperScoreCat_Altruism.Name", "EDBDScoreCategory::DBD_CamperScoreCat_Altruism" },
				{ "DBD_CamperScoreCat_Boldness.Name", "EDBDScoreCategory::DBD_CamperScoreCat_Boldness" },
				{ "DBD_CamperScoreCat_Objectives.Name", "EDBDScoreCategory::DBD_CamperScoreCat_Objectives" },
				{ "DBD_CamperScoreCat_Streak.Name", "EDBDScoreCategory::DBD_CamperScoreCat_Streak" },
				{ "DBD_CamperScoreCat_Survival.Name", "EDBDScoreCategory::DBD_CamperScoreCat_Survival" },
				{ "DBD_CamperScoreCat_Untracked.Name", "EDBDScoreCategory::DBD_CamperScoreCat_Untracked" },
				{ "DBD_ScoreCat_SpecialEvents.Name", "EDBDScoreCategory::DBD_ScoreCat_SpecialEvents" },
				{ "DBD_SlasherScoreCat_Brutality.Name", "EDBDScoreCategory::DBD_SlasherScoreCat_Brutality" },
				{ "DBD_SlasherScoreCat_Deviousness.Name", "EDBDScoreCategory::DBD_SlasherScoreCat_Deviousness" },
				{ "DBD_SlasherScoreCat_Hunter.Name", "EDBDScoreCategory::DBD_SlasherScoreCat_Hunter" },
				{ "DBD_SlasherScoreCat_Sacrifice.Name", "EDBDScoreCategory::DBD_SlasherScoreCat_Sacrifice" },
				{ "ModuleRelativePath", "Public/EDBDScoreCategory.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EDBDScoreCategory",
				"EDBDScoreCategory",
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
