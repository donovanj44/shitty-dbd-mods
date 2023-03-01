// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EAudioCustomizationCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAudioCustomizationCategory() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAudioCustomizationCategory();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EAudioCustomizationCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EAudioCustomizationCategory, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EAudioCustomizationCategory"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EAudioCustomizationCategory>()
	{
		return EAudioCustomizationCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAudioCustomizationCategory(EAudioCustomizationCategory_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EAudioCustomizationCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EAudioCustomizationCategory_Hash() { return 489496534U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EAudioCustomizationCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAudioCustomizationCategory"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EAudioCustomizationCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAudioCustomizationCategory::AudioCharacterName", (int64)EAudioCustomizationCategory::AudioCharacterName },
				{ "EAudioCustomizationCategory::AudioCharacterSubName", (int64)EAudioCustomizationCategory::AudioCharacterSubName },
				{ "EAudioCustomizationCategory::AudioCharacterHead", (int64)EAudioCustomizationCategory::AudioCharacterHead },
				{ "EAudioCustomizationCategory::AudioCharacterClothes", (int64)EAudioCustomizationCategory::AudioCharacterClothes },
				{ "EAudioCustomizationCategory::AudioCharacterShoes", (int64)EAudioCustomizationCategory::AudioCharacterShoes },
				{ "EAudioCustomizationCategory::AudioCharacterWeapon", (int64)EAudioCustomizationCategory::AudioCharacterWeapon },
				{ "EAudioCustomizationCategory::AudioCharacterAmbiance", (int64)EAudioCustomizationCategory::AudioCharacterAmbiance },
				{ "EAudioCustomizationCategory::AudioCharacterState", (int64)EAudioCustomizationCategory::AudioCharacterState },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AudioCharacterAmbiance.Name", "EAudioCustomizationCategory::AudioCharacterAmbiance" },
				{ "AudioCharacterClothes.Name", "EAudioCustomizationCategory::AudioCharacterClothes" },
				{ "AudioCharacterHead.Name", "EAudioCustomizationCategory::AudioCharacterHead" },
				{ "AudioCharacterName.Name", "EAudioCustomizationCategory::AudioCharacterName" },
				{ "AudioCharacterShoes.Name", "EAudioCustomizationCategory::AudioCharacterShoes" },
				{ "AudioCharacterState.Name", "EAudioCustomizationCategory::AudioCharacterState" },
				{ "AudioCharacterSubName.Name", "EAudioCustomizationCategory::AudioCharacterSubName" },
				{ "AudioCharacterWeapon.Name", "EAudioCustomizationCategory::AudioCharacterWeapon" },
				{ "ModuleRelativePath", "Public/EAudioCustomizationCategory.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EAudioCustomizationCategory",
				"EAudioCustomizationCategory",
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
