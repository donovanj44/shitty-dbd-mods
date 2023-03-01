// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EOnboardingTutorialType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOnboardingTutorialType() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EOnboardingTutorialType();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EOnboardingTutorialType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EOnboardingTutorialType, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EOnboardingTutorialType"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EOnboardingTutorialType>()
	{
		return EOnboardingTutorialType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnboardingTutorialType(EOnboardingTutorialType_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EOnboardingTutorialType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EOnboardingTutorialType_Hash() { return 4206523284U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EOnboardingTutorialType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnboardingTutorialType"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EOnboardingTutorialType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOnboardingTutorialType::TutorialLevel", (int64)EOnboardingTutorialType::TutorialLevel },
				{ "EOnboardingTutorialType::BotMatchLevel", (int64)EOnboardingTutorialType::BotMatchLevel },
				{ "EOnboardingTutorialType::FinalReward", (int64)EOnboardingTutorialType::FinalReward },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BotMatchLevel.Name", "EOnboardingTutorialType::BotMatchLevel" },
				{ "FinalReward.Name", "EOnboardingTutorialType::FinalReward" },
				{ "ModuleRelativePath", "Public/EOnboardingTutorialType.h" },
				{ "TutorialLevel.Name", "EOnboardingTutorialType::TutorialLevel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EOnboardingTutorialType",
				"EOnboardingTutorialType",
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
