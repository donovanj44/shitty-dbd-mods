// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ETextBannerPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETextBannerPosition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETextBannerPosition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ETextBannerPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ETextBannerPosition, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ETextBannerPosition"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ETextBannerPosition>()
	{
		return ETextBannerPosition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextBannerPosition(ETextBannerPosition_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ETextBannerPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ETextBannerPosition_Hash() { return 2665886421U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ETextBannerPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextBannerPosition"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ETextBannerPosition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETextBannerPosition::TopLeft", (int64)ETextBannerPosition::TopLeft },
				{ "ETextBannerPosition::MiddleLeft", (int64)ETextBannerPosition::MiddleLeft },
				{ "ETextBannerPosition::BottomLeft", (int64)ETextBannerPosition::BottomLeft },
				{ "ETextBannerPosition::MiddleRight", (int64)ETextBannerPosition::MiddleRight },
				{ "ETextBannerPosition::BottomRight", (int64)ETextBannerPosition::BottomRight },
				{ "ETextBannerPosition::TopCenter", (int64)ETextBannerPosition::TopCenter },
				{ "ETextBannerPosition::MiddleCenter", (int64)ETextBannerPosition::MiddleCenter },
				{ "ETextBannerPosition::BottomCenter", (int64)ETextBannerPosition::BottomCenter },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BottomCenter.Name", "ETextBannerPosition::BottomCenter" },
				{ "BottomLeft.Name", "ETextBannerPosition::BottomLeft" },
				{ "BottomRight.Name", "ETextBannerPosition::BottomRight" },
				{ "MiddleCenter.Name", "ETextBannerPosition::MiddleCenter" },
				{ "MiddleLeft.Name", "ETextBannerPosition::MiddleLeft" },
				{ "MiddleRight.Name", "ETextBannerPosition::MiddleRight" },
				{ "ModuleRelativePath", "Public/ETextBannerPosition.h" },
				{ "TopCenter.Name", "ETextBannerPosition::TopCenter" },
				{ "TopLeft.Name", "ETextBannerPosition::TopLeft" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ETextBannerPosition",
				"ETextBannerPosition",
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
