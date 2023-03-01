// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EEventsType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEventsType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEventsType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EEventsType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EEventsType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EEventsType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EEventsType>()
	{
		return EEventsType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEventsType(EEventsType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EEventsType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EEventsType_Hash() { return 2423112655U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EEventsType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEventsType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EEventsType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEventsType::Generic", (int64)EEventsType::Generic },
				{ "EEventsType::Calendar", (int64)EEventsType::Calendar },
				{ "EEventsType::BonusACEvent", (int64)EEventsType::BonusACEvent },
				{ "EEventsType::FirstPremiumPurchase", (int64)EEventsType::FirstPremiumPurchase },
				{ "EEventsType::MonthlyPass", (int64)EEventsType::MonthlyPass },
				{ "EEventsType::Count", (int64)EEventsType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BonusACEvent.Name", "EEventsType::BonusACEvent" },
				{ "Calendar.Name", "EEventsType::Calendar" },
				{ "Count.Name", "EEventsType::Count" },
				{ "FirstPremiumPurchase.Name", "EEventsType::FirstPremiumPurchase" },
				{ "Generic.Name", "EEventsType::Generic" },
				{ "ModuleRelativePath", "Public/EEventsType.h" },
				{ "MonthlyPass.Name", "EEventsType::MonthlyPass" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EEventsType",
				"EEventsType",
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
