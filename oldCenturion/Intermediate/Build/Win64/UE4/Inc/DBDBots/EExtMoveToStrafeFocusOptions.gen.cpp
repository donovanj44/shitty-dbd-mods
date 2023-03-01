// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EExtMoveToStrafeFocusOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEExtMoveToStrafeFocusOptions() {}
// Cross Module References
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EExtMoveToStrafeFocusOptions();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	static UEnum* EExtMoveToStrafeFocusOptions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDBots_EExtMoveToStrafeFocusOptions, Z_Construct_UPackage__Script_DBDBots(), TEXT("EExtMoveToStrafeFocusOptions"));
		}
		return Singleton;
	}
	template<> DBDBOTS_API UEnum* StaticEnum<EExtMoveToStrafeFocusOptions>()
	{
		return EExtMoveToStrafeFocusOptions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EExtMoveToStrafeFocusOptions(EExtMoveToStrafeFocusOptions_StaticEnum, TEXT("/Script/DBDBots"), TEXT("EExtMoveToStrafeFocusOptions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDBots_EExtMoveToStrafeFocusOptions_Hash() { return 2500450092U; }
	UEnum* Z_Construct_UEnum_DBDBots_EExtMoveToStrafeFocusOptions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EExtMoveToStrafeFocusOptions"), 0, Get_Z_Construct_UEnum_DBDBots_EExtMoveToStrafeFocusOptions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EExtMoveToStrafeFocusOptions::Never", (int64)EExtMoveToStrafeFocusOptions::Never },
				{ "EExtMoveToStrafeFocusOptions::NearFocus", (int64)EExtMoveToStrafeFocusOptions::NearFocus },
				{ "EExtMoveToStrafeFocusOptions::NearGoal", (int64)EExtMoveToStrafeFocusOptions::NearGoal },
				{ "EExtMoveToStrafeFocusOptions::Always", (int64)EExtMoveToStrafeFocusOptions::Always },
				{ "EExtMoveToStrafeFocusOptions::Intermittent", (int64)EExtMoveToStrafeFocusOptions::Intermittent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.Name", "EExtMoveToStrafeFocusOptions::Always" },
				{ "Intermittent.Name", "EExtMoveToStrafeFocusOptions::Intermittent" },
				{ "ModuleRelativePath", "Public/EExtMoveToStrafeFocusOptions.h" },
				{ "NearFocus.Name", "EExtMoveToStrafeFocusOptions::NearFocus" },
				{ "NearGoal.Name", "EExtMoveToStrafeFocusOptions::NearGoal" },
				{ "Never.Name", "EExtMoveToStrafeFocusOptions::Never" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDBots,
				nullptr,
				"EExtMoveToStrafeFocusOptions",
				"EExtMoveToStrafeFocusOptions",
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
