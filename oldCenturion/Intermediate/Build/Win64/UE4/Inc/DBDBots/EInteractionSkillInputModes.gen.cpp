// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EInteractionSkillInputModes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEInteractionSkillInputModes() {}
// Cross Module References
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EInteractionSkillInputModes();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	static UEnum* EInteractionSkillInputModes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDBots_EInteractionSkillInputModes, Z_Construct_UPackage__Script_DBDBots(), TEXT("EInteractionSkillInputModes"));
		}
		return Singleton;
	}
	template<> DBDBOTS_API UEnum* StaticEnum<EInteractionSkillInputModes>()
	{
		return EInteractionSkillInputModes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInteractionSkillInputModes(EInteractionSkillInputModes_StaticEnum, TEXT("/Script/DBDBots"), TEXT("EInteractionSkillInputModes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDBots_EInteractionSkillInputModes_Hash() { return 10879653U; }
	UEnum* Z_Construct_UEnum_DBDBots_EInteractionSkillInputModes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInteractionSkillInputModes"), 0, Get_Z_Construct_UEnum_DBDBots_EInteractionSkillInputModes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInteractionSkillInputModes::Once", (int64)EInteractionSkillInputModes::Once },
				{ "EInteractionSkillInputModes::Hold", (int64)EInteractionSkillInputModes::Hold },
				{ "EInteractionSkillInputModes::Toggle", (int64)EInteractionSkillInputModes::Toggle },
				{ "EInteractionSkillInputModes::ToggleHold", (int64)EInteractionSkillInputModes::ToggleHold },
				{ "EInteractionSkillInputModes::OneClickHold", (int64)EInteractionSkillInputModes::OneClickHold },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Hold.Name", "EInteractionSkillInputModes::Hold" },
				{ "ModuleRelativePath", "Public/EInteractionSkillInputModes.h" },
				{ "Once.Name", "EInteractionSkillInputModes::Once" },
				{ "OneClickHold.Name", "EInteractionSkillInputModes::OneClickHold" },
				{ "Toggle.Name", "EInteractionSkillInputModes::Toggle" },
				{ "ToggleHold.Name", "EInteractionSkillInputModes::ToggleHold" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDBots,
				nullptr,
				"EInteractionSkillInputModes",
				"EInteractionSkillInputModes",
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
