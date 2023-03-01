// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ETileVariation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETileVariation() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETileVariation();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ETileVariation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ETileVariation, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ETileVariation"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ETileVariation>()
	{
		return ETileVariation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETileVariation(ETileVariation_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ETileVariation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ETileVariation_Hash() { return 51381495U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ETileVariation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETileVariation"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ETileVariation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETileVariation::None", (int64)ETileVariation::None },
				{ "ETileVariation::BlueTag", (int64)ETileVariation::BlueTag },
				{ "ETileVariation::PinkTag", (int64)ETileVariation::PinkTag },
				{ "ETileVariation::YellowTag", (int64)ETileVariation::YellowTag },
				{ "ETileVariation::GreenTag", (int64)ETileVariation::GreenTag },
				{ "ETileVariation::Empty", (int64)ETileVariation::Empty },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BlueTag.Name", "ETileVariation::BlueTag" },
				{ "Empty.Name", "ETileVariation::Empty" },
				{ "GreenTag.Name", "ETileVariation::GreenTag" },
				{ "ModuleRelativePath", "Public/ETileVariation.h" },
				{ "None.Name", "ETileVariation::None" },
				{ "PinkTag.Name", "ETileVariation::PinkTag" },
				{ "YellowTag.Name", "ETileVariation::YellowTag" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ETileVariation",
				"ETileVariation",
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
