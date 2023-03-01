// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EAtlantaTutorialRewardPopupState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtlantaTutorialRewardPopupState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAtlantaTutorialRewardPopupState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EAtlantaTutorialRewardPopupState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EAtlantaTutorialRewardPopupState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EAtlantaTutorialRewardPopupState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EAtlantaTutorialRewardPopupState>()
	{
		return EAtlantaTutorialRewardPopupState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtlantaTutorialRewardPopupState(EAtlantaTutorialRewardPopupState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EAtlantaTutorialRewardPopupState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EAtlantaTutorialRewardPopupState_Hash() { return 1519141873U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EAtlantaTutorialRewardPopupState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtlantaTutorialRewardPopupState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EAtlantaTutorialRewardPopupState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtlantaTutorialRewardPopupState::Starting", (int64)EAtlantaTutorialRewardPopupState::Starting },
				{ "EAtlantaTutorialRewardPopupState::Skipped", (int64)EAtlantaTutorialRewardPopupState::Skipped },
				{ "EAtlantaTutorialRewardPopupState::Done", (int64)EAtlantaTutorialRewardPopupState::Done },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Done.Name", "EAtlantaTutorialRewardPopupState::Done" },
				{ "ModuleRelativePath", "Public/EAtlantaTutorialRewardPopupState.h" },
				{ "Skipped.Name", "EAtlantaTutorialRewardPopupState::Skipped" },
				{ "Starting.Name", "EAtlantaTutorialRewardPopupState::Starting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EAtlantaTutorialRewardPopupState",
				"EAtlantaTutorialRewardPopupState",
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
