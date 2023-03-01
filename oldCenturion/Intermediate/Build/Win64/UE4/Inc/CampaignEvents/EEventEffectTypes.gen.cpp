// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CampaignEvents/Public/EEventEffectTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEventEffectTypes() {}
// Cross Module References
	CAMPAIGNEVENTS_API UEnum* Z_Construct_UEnum_CampaignEvents_EEventEffectTypes();
	UPackage* Z_Construct_UPackage__Script_CampaignEvents();
// End Cross Module References
	static UEnum* EEventEffectTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CampaignEvents_EEventEffectTypes, Z_Construct_UPackage__Script_CampaignEvents(), TEXT("EEventEffectTypes"));
		}
		return Singleton;
	}
	template<> CAMPAIGNEVENTS_API UEnum* StaticEnum<EEventEffectTypes>()
	{
		return EEventEffectTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEventEffectTypes(EEventEffectTypes_StaticEnum, TEXT("/Script/CampaignEvents"), TEXT("EEventEffectTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CampaignEvents_EEventEffectTypes_Hash() { return 2667812161U; }
	UEnum* Z_Construct_UEnum_CampaignEvents_EEventEffectTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CampaignEvents();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEventEffectTypes"), 0, Get_Z_Construct_UEnum_CampaignEvents_EEventEffectTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEventEffectTypes::Bloodpoints", (int64)EEventEffectTypes::Bloodpoints },
				{ "EEventEffectTypes::Experience", (int64)EEventEffectTypes::Experience },
				{ "EEventEffectTypes::RetentionRewards", (int64)EEventEffectTypes::RetentionRewards },
				{ "EEventEffectTypes::PromoPack", (int64)EEventEffectTypes::PromoPack },
				{ "EEventEffectTypes::EventItemsPack", (int64)EEventEffectTypes::EventItemsPack },
				{ "EEventEffectTypes::ProvingGroundCharacterRand", (int64)EEventEffectTypes::ProvingGroundCharacterRand },
				{ "EEventEffectTypes::ProvingGroundStore", (int64)EEventEffectTypes::ProvingGroundStore },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bloodpoints.Name", "EEventEffectTypes::Bloodpoints" },
				{ "EventItemsPack.Name", "EEventEffectTypes::EventItemsPack" },
				{ "Experience.Name", "EEventEffectTypes::Experience" },
				{ "ModuleRelativePath", "Public/EEventEffectTypes.h" },
				{ "PromoPack.Name", "EEventEffectTypes::PromoPack" },
				{ "ProvingGroundCharacterRand.Name", "EEventEffectTypes::ProvingGroundCharacterRand" },
				{ "ProvingGroundStore.Name", "EEventEffectTypes::ProvingGroundStore" },
				{ "RetentionRewards.Name", "EEventEffectTypes::RetentionRewards" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CampaignEvents,
				nullptr,
				"EEventEffectTypes",
				"EEventEffectTypes",
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
