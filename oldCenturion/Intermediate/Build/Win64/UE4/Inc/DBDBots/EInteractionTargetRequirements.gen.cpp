// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EInteractionTargetRequirements.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEInteractionTargetRequirements() {}
// Cross Module References
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EInteractionTargetRequirements();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	static UEnum* EInteractionTargetRequirements_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDBots_EInteractionTargetRequirements, Z_Construct_UPackage__Script_DBDBots(), TEXT("EInteractionTargetRequirements"));
		}
		return Singleton;
	}
	template<> DBDBOTS_API UEnum* StaticEnum<EInteractionTargetRequirements>()
	{
		return EInteractionTargetRequirements_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInteractionTargetRequirements(EInteractionTargetRequirements_StaticEnum, TEXT("/Script/DBDBots"), TEXT("EInteractionTargetRequirements"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDBots_EInteractionTargetRequirements_Hash() { return 3961603427U; }
	UEnum* Z_Construct_UEnum_DBDBots_EInteractionTargetRequirements()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInteractionTargetRequirements"), 0, Get_Z_Construct_UEnum_DBDBots_EInteractionTargetRequirements_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInteractionTargetRequirements::BestTargetMustBeValid", (int64)EInteractionTargetRequirements::BestTargetMustBeValid },
				{ "EInteractionTargetRequirements::AnyValidTarget", (int64)EInteractionTargetRequirements::AnyValidTarget },
				{ "EInteractionTargetRequirements::AnyTarget", (int64)EInteractionTargetRequirements::AnyTarget },
				{ "EInteractionTargetRequirements::NoTarget", (int64)EInteractionTargetRequirements::NoTarget },
				{ "EInteractionTargetRequirements::None", (int64)EInteractionTargetRequirements::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnyTarget.Name", "EInteractionTargetRequirements::AnyTarget" },
				{ "AnyValidTarget.Name", "EInteractionTargetRequirements::AnyValidTarget" },
				{ "BestTargetMustBeValid.Name", "EInteractionTargetRequirements::BestTargetMustBeValid" },
				{ "ModuleRelativePath", "Public/EInteractionTargetRequirements.h" },
				{ "None.Name", "EInteractionTargetRequirements::None" },
				{ "NoTarget.Name", "EInteractionTargetRequirements::NoTarget" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDBots,
				nullptr,
				"EInteractionTargetRequirements",
				"EInteractionTargetRequirements",
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
