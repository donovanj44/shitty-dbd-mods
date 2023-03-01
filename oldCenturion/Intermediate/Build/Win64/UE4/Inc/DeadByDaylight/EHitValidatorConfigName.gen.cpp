// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EHitValidatorConfigName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHitValidatorConfigName() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EHitValidatorConfigName();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EHitValidatorConfigName_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EHitValidatorConfigName, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EHitValidatorConfigName"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EHitValidatorConfigName>()
	{
		return EHitValidatorConfigName_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHitValidatorConfigName(EHitValidatorConfigName_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EHitValidatorConfigName"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EHitValidatorConfigName_Hash() { return 3626834532U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EHitValidatorConfigName()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHitValidatorConfigName"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EHitValidatorConfigName_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHitValidatorConfigName::Default", (int64)EHitValidatorConfigName::Default },
				{ "EHitValidatorConfigName::Hatchet", (int64)EHitValidatorConfigName::Hatchet },
				{ "EHitValidatorConfigName::Bomb", (int64)EHitValidatorConfigName::Bomb },
				{ "EHitValidatorConfigName::Harpoon", (int64)EHitValidatorConfigName::Harpoon },
				{ "EHitValidatorConfigName::Oni", (int64)EHitValidatorConfigName::Oni },
				{ "EHitValidatorConfigName::Whip", (int64)EHitValidatorConfigName::Whip },
				{ "EHitValidatorConfigName::DefaultProjectile", (int64)EHitValidatorConfigName::DefaultProjectile },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Bomb.Name", "EHitValidatorConfigName::Bomb" },
				{ "Default.Name", "EHitValidatorConfigName::Default" },
				{ "DefaultProjectile.Name", "EHitValidatorConfigName::DefaultProjectile" },
				{ "Harpoon.Name", "EHitValidatorConfigName::Harpoon" },
				{ "Hatchet.Name", "EHitValidatorConfigName::Hatchet" },
				{ "ModuleRelativePath", "Public/EHitValidatorConfigName.h" },
				{ "Oni.Name", "EHitValidatorConfigName::Oni" },
				{ "Whip.Name", "EHitValidatorConfigName::Whip" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EHitValidatorConfigName",
				"EHitValidatorConfigName",
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
