// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EStoreState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStoreState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EStoreState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EStoreState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EStoreState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EStoreState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EStoreState>()
	{
		return EStoreState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStoreState(EStoreState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EStoreState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EStoreState_Hash() { return 2658956488U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EStoreState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStoreState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EStoreState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStoreState::None", (int64)EStoreState::None },
				{ "EStoreState::Featured", (int64)EStoreState::Featured },
				{ "EStoreState::CharacterSelection", (int64)EStoreState::CharacterSelection },
				{ "EStoreState::CharacterStory", (int64)EStoreState::CharacterStory },
				{ "EStoreState::CharacterCatalog", (int64)EStoreState::CharacterCatalog },
				{ "EStoreState::BuyCurrency", (int64)EStoreState::BuyCurrency },
				{ "EStoreState::ShrineOfSecrets", (int64)EStoreState::ShrineOfSecrets },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BuyCurrency.Name", "EStoreState::BuyCurrency" },
				{ "CharacterCatalog.Name", "EStoreState::CharacterCatalog" },
				{ "CharacterSelection.Name", "EStoreState::CharacterSelection" },
				{ "CharacterStory.Name", "EStoreState::CharacterStory" },
				{ "Featured.Name", "EStoreState::Featured" },
				{ "ModuleRelativePath", "Public/EStoreState.h" },
				{ "None.Name", "EStoreState::None" },
				{ "ShrineOfSecrets.Name", "EStoreState::ShrineOfSecrets" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EStoreState",
				"EStoreState",
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
