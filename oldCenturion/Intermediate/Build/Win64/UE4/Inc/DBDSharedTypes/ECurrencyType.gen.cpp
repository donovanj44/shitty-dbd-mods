// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/ECurrencyType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECurrencyType() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* ECurrencyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("ECurrencyType"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ECurrencyType>()
	{
		return ECurrencyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECurrencyType(ECurrencyType_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("ECurrencyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_ECurrencyType_Hash() { return 2495403630U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECurrencyType"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_ECurrencyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECurrencyType::None", (int64)ECurrencyType::None },
				{ "ECurrencyType::BloodPoints", (int64)ECurrencyType::BloodPoints },
				{ "ECurrencyType::FearTokens", (int64)ECurrencyType::FearTokens },
				{ "ECurrencyType::Cells", (int64)ECurrencyType::Cells },
				{ "ECurrencyType::HalloweenCoins", (int64)ECurrencyType::HalloweenCoins },
				{ "ECurrencyType::LunarNewYearCoins", (int64)ECurrencyType::LunarNewYearCoins },
				{ "ECurrencyType::HalloweenEventCurrency", (int64)ECurrencyType::HalloweenEventCurrency },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BloodPoints.Name", "ECurrencyType::BloodPoints" },
				{ "BlueprintType", "true" },
				{ "Cells.Name", "ECurrencyType::Cells" },
				{ "FearTokens.Name", "ECurrencyType::FearTokens" },
				{ "HalloweenCoins.Name", "ECurrencyType::HalloweenCoins" },
				{ "HalloweenEventCurrency.Name", "ECurrencyType::HalloweenEventCurrency" },
				{ "LunarNewYearCoins.Name", "ECurrencyType::LunarNewYearCoins" },
				{ "ModuleRelativePath", "Public/ECurrencyType.h" },
				{ "None.Name", "ECurrencyType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"ECurrencyType",
				"ECurrencyType",
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
