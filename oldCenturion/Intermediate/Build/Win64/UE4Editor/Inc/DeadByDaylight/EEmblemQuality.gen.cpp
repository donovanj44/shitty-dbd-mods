// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EEmblemQuality.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEmblemQuality() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEmblemQuality();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EEmblemQuality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EEmblemQuality, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EEmblemQuality"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EEmblemQuality>()
	{
		return EEmblemQuality_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEmblemQuality(EEmblemQuality_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EEmblemQuality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EEmblemQuality_Hash() { return 2479281012U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EEmblemQuality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEmblemQuality"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EEmblemQuality_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEmblemQuality::None", (int64)EEmblemQuality::None },
				{ "EEmblemQuality::Bronze", (int64)EEmblemQuality::Bronze },
				{ "EEmblemQuality::Silver", (int64)EEmblemQuality::Silver },
				{ "EEmblemQuality::Gold", (int64)EEmblemQuality::Gold },
				{ "EEmblemQuality::Iridescent", (int64)EEmblemQuality::Iridescent },
				{ "EEmblemQuality::Count", (int64)EEmblemQuality::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Bronze.Name", "EEmblemQuality::Bronze" },
				{ "Count.Name", "EEmblemQuality::Count" },
				{ "Gold.Name", "EEmblemQuality::Gold" },
				{ "Iridescent.Name", "EEmblemQuality::Iridescent" },
				{ "ModuleRelativePath", "Public/EEmblemQuality.h" },
				{ "None.Name", "EEmblemQuality::None" },
				{ "Silver.Name", "EEmblemQuality::Silver" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EEmblemQuality",
				"EEmblemQuality",
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
