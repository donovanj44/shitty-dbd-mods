// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EItemRarity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEItemRarity() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EItemRarity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EItemRarity, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EItemRarity"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EItemRarity>()
	{
		return EItemRarity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemRarity(EItemRarity_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EItemRarity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EItemRarity_Hash() { return 99780894U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemRarity"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EItemRarity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemRarity::Common", (int64)EItemRarity::Common },
				{ "EItemRarity::Uncommon", (int64)EItemRarity::Uncommon },
				{ "EItemRarity::Rare", (int64)EItemRarity::Rare },
				{ "EItemRarity::VeryRare", (int64)EItemRarity::VeryRare },
				{ "EItemRarity::UltraRare", (int64)EItemRarity::UltraRare },
				{ "EItemRarity::Artifact", (int64)EItemRarity::Artifact },
				{ "EItemRarity::Spectral", (int64)EItemRarity::Spectral },
				{ "EItemRarity::Teachable", (int64)EItemRarity::Teachable },
				{ "EItemRarity::SpecialEvent", (int64)EItemRarity::SpecialEvent },
				{ "EItemRarity::Legendary", (int64)EItemRarity::Legendary },
				{ "EItemRarity::Epic", (int64)EItemRarity::Epic },
				{ "EItemRarity::SuperEpic", (int64)EItemRarity::SuperEpic },
				{ "EItemRarity::UltraEpic", (int64)EItemRarity::UltraEpic },
				{ "EItemRarity::Count", (int64)EItemRarity::Count },
				{ "EItemRarity::None", (int64)EItemRarity::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Artifact.Name", "EItemRarity::Artifact" },
				{ "BlueprintType", "true" },
				{ "Common.Name", "EItemRarity::Common" },
				{ "Count.Name", "EItemRarity::Count" },
				{ "Epic.Name", "EItemRarity::Epic" },
				{ "Legendary.Name", "EItemRarity::Legendary" },
				{ "ModuleRelativePath", "Public/EItemRarity.h" },
				{ "None.Name", "EItemRarity::None" },
				{ "Rare.Name", "EItemRarity::Rare" },
				{ "SpecialEvent.Name", "EItemRarity::SpecialEvent" },
				{ "Spectral.Name", "EItemRarity::Spectral" },
				{ "SuperEpic.Name", "EItemRarity::SuperEpic" },
				{ "Teachable.Name", "EItemRarity::Teachable" },
				{ "UltraEpic.Name", "EItemRarity::UltraEpic" },
				{ "UltraRare.Name", "EItemRarity::UltraRare" },
				{ "Uncommon.Name", "EItemRarity::Uncommon" },
				{ "VeryRare.Name", "EItemRarity::VeryRare" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EItemRarity",
				"EItemRarity",
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
