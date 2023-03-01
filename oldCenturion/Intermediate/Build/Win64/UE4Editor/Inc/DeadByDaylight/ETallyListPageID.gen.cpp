// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ETallyListPageID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETallyListPageID() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETallyListPageID();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ETallyListPageID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ETallyListPageID, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ETallyListPageID"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ETallyListPageID>()
	{
		return ETallyListPageID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETallyListPageID(ETallyListPageID_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ETallyListPageID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ETallyListPageID_Hash() { return 3613044733U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ETallyListPageID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETallyListPageID"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ETallyListPageID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETallyListPageID::Scoreboard", (int64)ETallyListPageID::Scoreboard },
				{ "ETallyListPageID::Bloodpoints", (int64)ETallyListPageID::Bloodpoints },
				{ "ETallyListPageID::Rank", (int64)ETallyListPageID::Rank },
				{ "ETallyListPageID::PlayerLevel", (int64)ETallyListPageID::PlayerLevel },
				{ "ETallyListPageID::CharacterLevel", (int64)ETallyListPageID::CharacterLevel },
				{ "ETallyListPageID::NumberOfPages", (int64)ETallyListPageID::NumberOfPages },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bloodpoints.Name", "ETallyListPageID::Bloodpoints" },
				{ "CharacterLevel.Name", "ETallyListPageID::CharacterLevel" },
				{ "ModuleRelativePath", "Public/ETallyListPageID.h" },
				{ "NumberOfPages.Name", "ETallyListPageID::NumberOfPages" },
				{ "PlayerLevel.Name", "ETallyListPageID::PlayerLevel" },
				{ "Rank.Name", "ETallyListPageID::Rank" },
				{ "Scoreboard.Name", "ETallyListPageID::Scoreboard" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ETallyListPageID",
				"ETallyListPageID",
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
