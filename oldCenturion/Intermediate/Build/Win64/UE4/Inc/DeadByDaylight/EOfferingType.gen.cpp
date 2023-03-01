// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EOfferingType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOfferingType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EOfferingType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EOfferingType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EOfferingType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EOfferingType>()
	{
		return EOfferingType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOfferingType(EOfferingType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EOfferingType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EOfferingType_Hash() { return 777291280U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOfferingType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EOfferingType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOfferingType::None", (int64)EOfferingType::None },
				{ "EOfferingType::Atmosphere", (int64)EOfferingType::Atmosphere },
				{ "EOfferingType::Lighting", (int64)EOfferingType::Lighting },
				{ "EOfferingType::Points", (int64)EOfferingType::Points },
				{ "EOfferingType::Zone", (int64)EOfferingType::Zone },
				{ "EOfferingType::Position", (int64)EOfferingType::Position },
				{ "EOfferingType::Chest", (int64)EOfferingType::Chest },
				{ "EOfferingType::Hook", (int64)EOfferingType::Hook },
				{ "EOfferingType::Protection", (int64)EOfferingType::Protection },
				{ "EOfferingType::Hatch", (int64)EOfferingType::Hatch },
				{ "EOfferingType::Odds", (int64)EOfferingType::Odds },
				{ "EOfferingType::Killing", (int64)EOfferingType::Killing },
				{ "EOfferingType::World", (int64)EOfferingType::World },
				{ "EOfferingType::Luck", (int64)EOfferingType::Luck },
				{ "EOfferingType::Killer", (int64)EOfferingType::Killer },
				{ "EOfferingType::ProceduralGeneration", (int64)EOfferingType::ProceduralGeneration },
				{ "EOfferingType::CharacterXP", (int64)EOfferingType::CharacterXP },
				{ "EOfferingType::Count", (int64)EOfferingType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Atmosphere.Name", "EOfferingType::Atmosphere" },
				{ "BlueprintType", "true" },
				{ "CharacterXP.Name", "EOfferingType::CharacterXP" },
				{ "Chest.Name", "EOfferingType::Chest" },
				{ "Count.Name", "EOfferingType::Count" },
				{ "Hatch.Name", "EOfferingType::Hatch" },
				{ "Hook.Name", "EOfferingType::Hook" },
				{ "Killer.Name", "EOfferingType::Killer" },
				{ "Killing.Name", "EOfferingType::Killing" },
				{ "Lighting.Name", "EOfferingType::Lighting" },
				{ "Luck.Name", "EOfferingType::Luck" },
				{ "ModuleRelativePath", "Public/EOfferingType.h" },
				{ "None.Name", "EOfferingType::None" },
				{ "Odds.Name", "EOfferingType::Odds" },
				{ "Points.Name", "EOfferingType::Points" },
				{ "Position.Name", "EOfferingType::Position" },
				{ "ProceduralGeneration.Name", "EOfferingType::ProceduralGeneration" },
				{ "Protection.Name", "EOfferingType::Protection" },
				{ "World.Name", "EOfferingType::World" },
				{ "Zone.Name", "EOfferingType::Zone" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EOfferingType",
				"EOfferingType",
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
