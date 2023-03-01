// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EInventoryGridFormat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEInventoryGridFormat() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInventoryGridFormat();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EInventoryGridFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EInventoryGridFormat, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EInventoryGridFormat"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EInventoryGridFormat>()
	{
		return EInventoryGridFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInventoryGridFormat(EInventoryGridFormat_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EInventoryGridFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EInventoryGridFormat_Hash() { return 242335721U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EInventoryGridFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInventoryGridFormat"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EInventoryGridFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInventoryGridFormat::DEFAULT", (int64)EInventoryGridFormat::DEFAULT },
				{ "EInventoryGridFormat::DIAMOND", (int64)EInventoryGridFormat::DIAMOND },
				{ "EInventoryGridFormat::HONEYCOMB", (int64)EInventoryGridFormat::HONEYCOMB },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DEFAULT.Name", "EInventoryGridFormat::DEFAULT" },
				{ "DIAMOND.Name", "EInventoryGridFormat::DIAMOND" },
				{ "HONEYCOMB.Name", "EInventoryGridFormat::HONEYCOMB" },
				{ "ModuleRelativePath", "Public/EInventoryGridFormat.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EInventoryGridFormat",
				"EInventoryGridFormat",
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
