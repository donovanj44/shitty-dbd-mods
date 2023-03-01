// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EEventItemContentType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEventItemContentType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEventItemContentType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EEventItemContentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EEventItemContentType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EEventItemContentType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EEventItemContentType>()
	{
		return EEventItemContentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEventItemContentType(EEventItemContentType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EEventItemContentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EEventItemContentType_Hash() { return 3066223995U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EEventItemContentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEventItemContentType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EEventItemContentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEventItemContentType::None", (int64)EEventItemContentType::None },
				{ "EEventItemContentType::Cells", (int64)EEventItemContentType::Cells },
				{ "EEventItemContentType::Character", (int64)EEventItemContentType::Character },
				{ "EEventItemContentType::Customization", (int64)EEventItemContentType::Customization },
				{ "EEventItemContentType::NameChangeCard", (int64)EEventItemContentType::NameChangeCard },
				{ "EEventItemContentType::FreeTicket", (int64)EEventItemContentType::FreeTicket },
				{ "EEventItemContentType::OtherCurrency", (int64)EEventItemContentType::OtherCurrency },
				{ "EEventItemContentType::Item", (int64)EEventItemContentType::Item },
				{ "EEventItemContentType::Addon", (int64)EEventItemContentType::Addon },
				{ "EEventItemContentType::Offering", (int64)EEventItemContentType::Offering },
				{ "EEventItemContentType::Count", (int64)EEventItemContentType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Addon.Name", "EEventItemContentType::Addon" },
				{ "Cells.Name", "EEventItemContentType::Cells" },
				{ "Character.Name", "EEventItemContentType::Character" },
				{ "Count.Name", "EEventItemContentType::Count" },
				{ "Customization.Name", "EEventItemContentType::Customization" },
				{ "FreeTicket.Name", "EEventItemContentType::FreeTicket" },
				{ "Item.Name", "EEventItemContentType::Item" },
				{ "ModuleRelativePath", "Public/EEventItemContentType.h" },
				{ "NameChangeCard.Name", "EEventItemContentType::NameChangeCard" },
				{ "None.Name", "EEventItemContentType::None" },
				{ "Offering.Name", "EEventItemContentType::Offering" },
				{ "OtherCurrency.Name", "EEventItemContentType::OtherCurrency" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EEventItemContentType",
				"EEventItemContentType",
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
