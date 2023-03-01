// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/ESkillCheckCustomType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESkillCheckCustomType() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* ESkillCheckCustomType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("ESkillCheckCustomType"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ESkillCheckCustomType>()
	{
		return ESkillCheckCustomType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkillCheckCustomType(ESkillCheckCustomType_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("ESkillCheckCustomType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType_Hash() { return 939264901U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkillCheckCustomType"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkillCheckCustomType::VE_None", (int64)ESkillCheckCustomType::VE_None },
				{ "ESkillCheckCustomType::VE_OnPickedUp", (int64)ESkillCheckCustomType::VE_OnPickedUp },
				{ "ESkillCheckCustomType::VE_OnAttacked", (int64)ESkillCheckCustomType::VE_OnAttacked },
				{ "ESkillCheckCustomType::VE_DecisiveStrikeWhileWiggling", (int64)ESkillCheckCustomType::VE_DecisiveStrikeWhileWiggling },
				{ "ESkillCheckCustomType::VE_GeneratorOvercharge1", (int64)ESkillCheckCustomType::VE_GeneratorOvercharge1 },
				{ "ESkillCheckCustomType::VE_GeneratorOvercharge2", (int64)ESkillCheckCustomType::VE_GeneratorOvercharge2 },
				{ "ESkillCheckCustomType::VE_GeneratorOvercharge3", (int64)ESkillCheckCustomType::VE_GeneratorOvercharge3 },
				{ "ESkillCheckCustomType::VE_BrandNewPart", (int64)ESkillCheckCustomType::VE_BrandNewPart },
				{ "ESkillCheckCustomType::VE_Struggle", (int64)ESkillCheckCustomType::VE_Struggle },
				{ "ESkillCheckCustomType::VE_OppressionPerkGeneratorKicked", (int64)ESkillCheckCustomType::VE_OppressionPerkGeneratorKicked },
				{ "ESkillCheckCustomType::VE_SoulChemical", (int64)ESkillCheckCustomType::VE_SoulChemical },
				{ "ESkillCheckCustomType::VE_Wiggle", (int64)ESkillCheckCustomType::VE_Wiggle },
				{ "ESkillCheckCustomType::VE_YellowGlyph", (int64)ESkillCheckCustomType::VE_YellowGlyph },
				{ "ESkillCheckCustomType::VE_MAX", (int64)ESkillCheckCustomType::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ESkillCheckCustomType.h" },
				{ "VE_BrandNewPart.Name", "ESkillCheckCustomType::VE_BrandNewPart" },
				{ "VE_DecisiveStrikeWhileWiggling.Name", "ESkillCheckCustomType::VE_DecisiveStrikeWhileWiggling" },
				{ "VE_GeneratorOvercharge1.Name", "ESkillCheckCustomType::VE_GeneratorOvercharge1" },
				{ "VE_GeneratorOvercharge2.Name", "ESkillCheckCustomType::VE_GeneratorOvercharge2" },
				{ "VE_GeneratorOvercharge3.Name", "ESkillCheckCustomType::VE_GeneratorOvercharge3" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "ESkillCheckCustomType::VE_MAX" },
				{ "VE_None.Name", "ESkillCheckCustomType::VE_None" },
				{ "VE_OnAttacked.Name", "ESkillCheckCustomType::VE_OnAttacked" },
				{ "VE_OnPickedUp.Name", "ESkillCheckCustomType::VE_OnPickedUp" },
				{ "VE_OppressionPerkGeneratorKicked.Name", "ESkillCheckCustomType::VE_OppressionPerkGeneratorKicked" },
				{ "VE_SoulChemical.Name", "ESkillCheckCustomType::VE_SoulChemical" },
				{ "VE_Struggle.Name", "ESkillCheckCustomType::VE_Struggle" },
				{ "VE_Wiggle.Name", "ESkillCheckCustomType::VE_Wiggle" },
				{ "VE_YellowGlyph.Name", "ESkillCheckCustomType::VE_YellowGlyph" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"ESkillCheckCustomType",
				"ESkillCheckCustomType",
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
