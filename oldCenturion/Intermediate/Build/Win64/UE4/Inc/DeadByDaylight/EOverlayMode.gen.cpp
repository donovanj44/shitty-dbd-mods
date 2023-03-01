// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EOverlayMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOverlayMode() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOverlayMode();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EOverlayMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EOverlayMode, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EOverlayMode"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EOverlayMode>()
	{
		return EOverlayMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOverlayMode(EOverlayMode_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EOverlayMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EOverlayMode_Hash() { return 2364829061U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EOverlayMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOverlayMode"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EOverlayMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOverlayMode::Default", (int64)EOverlayMode::Default },
				{ "EOverlayMode::TrialOrTally", (int64)EOverlayMode::TrialOrTally },
				{ "EOverlayMode::TutorialLevel", (int64)EOverlayMode::TutorialLevel },
				{ "EOverlayMode::TutorialBotMatch", (int64)EOverlayMode::TutorialBotMatch },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Default.Name", "EOverlayMode::Default" },
				{ "ModuleRelativePath", "Public/EOverlayMode.h" },
				{ "TrialOrTally.Name", "EOverlayMode::TrialOrTally" },
				{ "TutorialBotMatch.Name", "EOverlayMode::TutorialBotMatch" },
				{ "TutorialLevel.Name", "EOverlayMode::TutorialLevel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EOverlayMode",
				"EOverlayMode",
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
