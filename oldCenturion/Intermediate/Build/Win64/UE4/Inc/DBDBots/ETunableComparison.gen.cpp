// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/ETunableComparison.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETunableComparison() {}
// Cross Module References
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_ETunableComparison();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	static UEnum* ETunableComparison_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDBots_ETunableComparison, Z_Construct_UPackage__Script_DBDBots(), TEXT("ETunableComparison"));
		}
		return Singleton;
	}
	template<> DBDBOTS_API UEnum* StaticEnum<ETunableComparison::Type>()
	{
		return ETunableComparison_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETunableComparison(ETunableComparison_StaticEnum, TEXT("/Script/DBDBots"), TEXT("ETunableComparison"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDBots_ETunableComparison_Hash() { return 4135204425U; }
	UEnum* Z_Construct_UEnum_DBDBots_ETunableComparison()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETunableComparison"), 0, Get_Z_Construct_UEnum_DBDBots_ETunableComparison_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETunableComparison::Equal", (int64)ETunableComparison::Equal },
				{ "ETunableComparison::NotEqual", (int64)ETunableComparison::NotEqual },
				{ "ETunableComparison::Less", (int64)ETunableComparison::Less },
				{ "ETunableComparison::LessOrEqual", (int64)ETunableComparison::LessOrEqual },
				{ "ETunableComparison::Greater", (int64)ETunableComparison::Greater },
				{ "ETunableComparison::GreaterOrEqual", (int64)ETunableComparison::GreaterOrEqual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Equal.Name", "ETunableComparison::Equal" },
				{ "Greater.Name", "ETunableComparison::Greater" },
				{ "GreaterOrEqual.Name", "ETunableComparison::GreaterOrEqual" },
				{ "Less.Name", "ETunableComparison::Less" },
				{ "LessOrEqual.Name", "ETunableComparison::LessOrEqual" },
				{ "ModuleRelativePath", "Public/ETunableComparison.h" },
				{ "NotEqual.Name", "ETunableComparison::NotEqual" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDBots,
				nullptr,
				"ETunableComparison",
				"ETunableComparison::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
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
