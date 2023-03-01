// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Halloween2021/Public/EPumpkinType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPumpkinType() {}
// Cross Module References
	HALLOWEEN2021_API UEnum* Z_Construct_UEnum_Halloween2021_EPumpkinType();
	UPackage* Z_Construct_UPackage__Script_Halloween2021();
// End Cross Module References
	static UEnum* EPumpkinType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Halloween2021_EPumpkinType, Z_Construct_UPackage__Script_Halloween2021(), TEXT("EPumpkinType"));
		}
		return Singleton;
	}
	template<> HALLOWEEN2021_API UEnum* StaticEnum<EPumpkinType>()
	{
		return EPumpkinType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPumpkinType(EPumpkinType_StaticEnum, TEXT("/Script/Halloween2021"), TEXT("EPumpkinType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Halloween2021_EPumpkinType_Hash() { return 140578040U; }
	UEnum* Z_Construct_UEnum_Halloween2021_EPumpkinType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Halloween2021();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPumpkinType"), 0, Get_Z_Construct_UEnum_Halloween2021_EPumpkinType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPumpkinType::None", (int64)EPumpkinType::None },
				{ "EPumpkinType::Trick", (int64)EPumpkinType::Trick },
				{ "EPumpkinType::Treat", (int64)EPumpkinType::Treat },
				{ "EPumpkinType::Neutral", (int64)EPumpkinType::Neutral },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EPumpkinType.h" },
				{ "Neutral.Name", "EPumpkinType::Neutral" },
				{ "None.Name", "EPumpkinType::None" },
				{ "Treat.Name", "EPumpkinType::Treat" },
				{ "Trick.Name", "EPumpkinType::Trick" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Halloween2021,
				nullptr,
				"EPumpkinType",
				"EPumpkinType",
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
