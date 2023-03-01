// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EContextualType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEContextualType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EContextualType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EContextualType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EContextualType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EContextualType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EContextualType>()
	{
		return EContextualType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EContextualType(EContextualType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EContextualType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EContextualType_Hash() { return 939259083U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EContextualType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EContextualType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EContextualType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EContextualType::None", (int64)EContextualType::None },
				{ "EContextualType::RedGlyph", (int64)EContextualType::RedGlyph },
				{ "EContextualType::BlueGlyph", (int64)EContextualType::BlueGlyph },
				{ "EContextualType::YellowGlyph", (int64)EContextualType::YellowGlyph },
				{ "EContextualType::PurpleGlyph", (int64)EContextualType::PurpleGlyph },
				{ "EContextualType::GlyphUpperBound", (int64)EContextualType::GlyphUpperBound },
				{ "EContextualType::ToxinPlantHalloween2020", (int64)EContextualType::ToxinPlantHalloween2020 },
				{ "EContextualType::PumpkinHalloween2021", (int64)EContextualType::PumpkinHalloween2021 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueGlyph.Name", "EContextualType::BlueGlyph" },
				{ "BlueprintType", "true" },
				{ "GlyphUpperBound.Name", "EContextualType::GlyphUpperBound" },
				{ "ModuleRelativePath", "Public/EContextualType.h" },
				{ "None.Name", "EContextualType::None" },
				{ "PumpkinHalloween2021.Name", "EContextualType::PumpkinHalloween2021" },
				{ "PurpleGlyph.Name", "EContextualType::PurpleGlyph" },
				{ "RedGlyph.Name", "EContextualType::RedGlyph" },
				{ "ToxinPlantHalloween2020.Name", "EContextualType::ToxinPlantHalloween2020" },
				{ "YellowGlyph.Name", "EContextualType::YellowGlyph" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EContextualType",
				"EContextualType",
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
