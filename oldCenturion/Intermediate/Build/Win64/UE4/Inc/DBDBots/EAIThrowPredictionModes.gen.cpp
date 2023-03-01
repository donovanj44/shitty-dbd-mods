// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EAIThrowPredictionModes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAIThrowPredictionModes() {}
// Cross Module References
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EAIThrowPredictionModes();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	static UEnum* EAIThrowPredictionModes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDBots_EAIThrowPredictionModes, Z_Construct_UPackage__Script_DBDBots(), TEXT("EAIThrowPredictionModes"));
		}
		return Singleton;
	}
	template<> DBDBOTS_API UEnum* StaticEnum<EAIThrowPredictionModes>()
	{
		return EAIThrowPredictionModes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIThrowPredictionModes(EAIThrowPredictionModes_StaticEnum, TEXT("/Script/DBDBots"), TEXT("EAIThrowPredictionModes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDBots_EAIThrowPredictionModes_Hash() { return 2682375830U; }
	UEnum* Z_Construct_UEnum_DBDBots_EAIThrowPredictionModes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIThrowPredictionModes"), 0, Get_Z_Construct_UEnum_DBDBots_EAIThrowPredictionModes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIThrowPredictionModes::FindBestThrowPowerRatio", (int64)EAIThrowPredictionModes::FindBestThrowPowerRatio },
				{ "EAIThrowPredictionModes::FullThrowPowerRatio", (int64)EAIThrowPredictionModes::FullThrowPowerRatio },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FindBestThrowPowerRatio.Name", "EAIThrowPredictionModes::FindBestThrowPowerRatio" },
				{ "FullThrowPowerRatio.Name", "EAIThrowPredictionModes::FullThrowPowerRatio" },
				{ "ModuleRelativePath", "Public/EAIThrowPredictionModes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDBots,
				nullptr,
				"EAIThrowPredictionModes",
				"EAIThrowPredictionModes",
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
