// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ESlasherMatchResultScore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESlasherMatchResultScore() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ESlasherMatchResultScore();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ESlasherMatchResultScore_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ESlasherMatchResultScore, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ESlasherMatchResultScore"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ESlasherMatchResultScore>()
	{
		return ESlasherMatchResultScore_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlasherMatchResultScore(ESlasherMatchResultScore_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ESlasherMatchResultScore"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ESlasherMatchResultScore_Hash() { return 2690631821U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ESlasherMatchResultScore()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlasherMatchResultScore"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ESlasherMatchResultScore_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DisgracefulDefeat", (int64)DisgracefulDefeat },
				{ "EntityDispleased", (int64)EntityDispleased },
				{ "BrutalKiller", (int64)BrutalKiller },
				{ "RuthlessKiller", (int64)RuthlessKiller },
				{ "MercilessKiller", (int64)MercilessKiller },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BrutalKiller.Name", "BrutalKiller" },
				{ "DisgracefulDefeat.Name", "DisgracefulDefeat" },
				{ "EntityDispleased.Name", "EntityDispleased" },
				{ "MercilessKiller.Name", "MercilessKiller" },
				{ "ModuleRelativePath", "Public/ESlasherMatchResultScore.h" },
				{ "RuthlessKiller.Name", "RuthlessKiller" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ESlasherMatchResultScore",
				"ESlasherMatchResultScore",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
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
