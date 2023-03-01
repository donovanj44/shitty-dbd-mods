// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EGameType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGameType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EGameType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EGameType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EGameType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EGameType>()
	{
		return EGameType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameType(EGameType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EGameType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EGameType_Hash() { return 504449962U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EGameType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EGameType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameType::Online", (int64)EGameType::Online },
				{ "EGameType::KillYourFriends", (int64)EGameType::KillYourFriends },
				{ "EGameType::SurvivorGroup", (int64)EGameType::SurvivorGroup },
				{ "EGameType::Tutorial", (int64)EGameType::Tutorial },
				{ "EGameType::TutorialBotMatch", (int64)EGameType::TutorialBotMatch },
				{ "EGameType::SecretBotMatch", (int64)EGameType::SecretBotMatch },
				{ "EGameType::None", (int64)EGameType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "KillYourFriends.Name", "EGameType::KillYourFriends" },
				{ "ModuleRelativePath", "Public/EGameType.h" },
				{ "None.Name", "EGameType::None" },
				{ "Online.Name", "EGameType::Online" },
				{ "SecretBotMatch.Name", "EGameType::SecretBotMatch" },
				{ "SurvivorGroup.Name", "EGameType::SurvivorGroup" },
				{ "Tutorial.Name", "EGameType::Tutorial" },
				{ "TutorialBotMatch.Name", "EGameType::TutorialBotMatch" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EGameType",
				"EGameType",
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
