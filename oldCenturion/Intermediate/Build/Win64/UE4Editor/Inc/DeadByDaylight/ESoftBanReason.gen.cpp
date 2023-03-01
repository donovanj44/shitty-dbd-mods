// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ESoftBanReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESoftBanReason() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ESoftBanReason();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ESoftBanReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ESoftBanReason, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ESoftBanReason"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ESoftBanReason>()
	{
		return ESoftBanReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESoftBanReason(ESoftBanReason_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ESoftBanReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ESoftBanReason_Hash() { return 2418794845U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ESoftBanReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESoftBanReason"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ESoftBanReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESoftBanReason::Invalid", (int64)ESoftBanReason::Invalid },
				{ "ESoftBanReason::Harassment", (int64)ESoftBanReason::Harassment },
				{ "ESoftBanReason::Griefing", (int64)ESoftBanReason::Griefing },
				{ "ESoftBanReason::Exploits", (int64)ESoftBanReason::Exploits },
				{ "ESoftBanReason::Unsportsmanlike", (int64)ESoftBanReason::Unsportsmanlike },
				{ "ESoftBanReason::Count", (int64)ESoftBanReason::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Count.Name", "ESoftBanReason::Count" },
				{ "Exploits.Name", "ESoftBanReason::Exploits" },
				{ "Griefing.Name", "ESoftBanReason::Griefing" },
				{ "Harassment.Name", "ESoftBanReason::Harassment" },
				{ "Invalid.Name", "ESoftBanReason::Invalid" },
				{ "ModuleRelativePath", "Public/ESoftBanReason.h" },
				{ "Unsportsmanlike.Name", "ESoftBanReason::Unsportsmanlike" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ESoftBanReason",
				"ESoftBanReason",
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
