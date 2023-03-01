// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EFrameRateLimitButtonSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFrameRateLimitButtonSetting() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EFrameRateLimitButtonSetting();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EFrameRateLimitButtonSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EFrameRateLimitButtonSetting, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EFrameRateLimitButtonSetting"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EFrameRateLimitButtonSetting>()
	{
		return EFrameRateLimitButtonSetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFrameRateLimitButtonSetting(EFrameRateLimitButtonSetting_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EFrameRateLimitButtonSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EFrameRateLimitButtonSetting_Hash() { return 1299295283U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EFrameRateLimitButtonSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFrameRateLimitButtonSetting"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EFrameRateLimitButtonSetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFrameRateLimitButtonSetting::ThirtyFPS", (int64)EFrameRateLimitButtonSetting::ThirtyFPS },
				{ "EFrameRateLimitButtonSetting::SixtyFPS", (int64)EFrameRateLimitButtonSetting::SixtyFPS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EFrameRateLimitButtonSetting.h" },
				{ "SixtyFPS.Name", "EFrameRateLimitButtonSetting::SixtyFPS" },
				{ "ThirtyFPS.Name", "EFrameRateLimitButtonSetting::ThirtyFPS" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EFrameRateLimitButtonSetting",
				"EFrameRateLimitButtonSetting",
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
