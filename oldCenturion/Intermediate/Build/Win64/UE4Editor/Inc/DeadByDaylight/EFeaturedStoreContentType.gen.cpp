// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EFeaturedStoreContentType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFeaturedStoreContentType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EFeaturedStoreContentType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EFeaturedStoreContentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EFeaturedStoreContentType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EFeaturedStoreContentType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EFeaturedStoreContentType>()
	{
		return EFeaturedStoreContentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFeaturedStoreContentType(EFeaturedStoreContentType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EFeaturedStoreContentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EFeaturedStoreContentType_Hash() { return 3742813772U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EFeaturedStoreContentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFeaturedStoreContentType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EFeaturedStoreContentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFeaturedStoreContentType::None", (int64)EFeaturedStoreContentType::None },
				{ "EFeaturedStoreContentType::Character", (int64)EFeaturedStoreContentType::Character },
				{ "EFeaturedStoreContentType::Customization", (int64)EFeaturedStoreContentType::Customization },
				{ "EFeaturedStoreContentType::Outfit", (int64)EFeaturedStoreContentType::Outfit },
				{ "EFeaturedStoreContentType::Count", (int64)EFeaturedStoreContentType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Character.Name", "EFeaturedStoreContentType::Character" },
				{ "Count.Name", "EFeaturedStoreContentType::Count" },
				{ "Customization.Name", "EFeaturedStoreContentType::Customization" },
				{ "ModuleRelativePath", "Public/EFeaturedStoreContentType.h" },
				{ "None.Name", "EFeaturedStoreContentType::None" },
				{ "Outfit.Name", "EFeaturedStoreContentType::Outfit" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EFeaturedStoreContentType",
				"EFeaturedStoreContentType",
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
