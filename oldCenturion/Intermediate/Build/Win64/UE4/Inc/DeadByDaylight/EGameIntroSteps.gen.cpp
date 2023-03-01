// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EGameIntroSteps.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGameIntroSteps() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameIntroSteps();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EGameIntroSteps_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EGameIntroSteps, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EGameIntroSteps"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EGameIntroSteps>()
	{
		return EGameIntroSteps_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameIntroSteps(EGameIntroSteps_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EGameIntroSteps"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EGameIntroSteps_Hash() { return 3814509396U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EGameIntroSteps()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameIntroSteps"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EGameIntroSteps_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameIntroSteps::Idling", (int64)EGameIntroSteps::Idling },
				{ "EGameIntroSteps::PlayingIntro", (int64)EGameIntroSteps::PlayingIntro },
				{ "EGameIntroSteps::LoopingCamView", (int64)EGameIntroSteps::LoopingCamView },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Idling.Name", "EGameIntroSteps::Idling" },
				{ "LoopingCamView.Name", "EGameIntroSteps::LoopingCamView" },
				{ "ModuleRelativePath", "Public/EGameIntroSteps.h" },
				{ "PlayingIntro.Name", "EGameIntroSteps::PlayingIntro" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EGameIntroSteps",
				"EGameIntroSteps",
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
