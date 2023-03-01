// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EOfferingAnimState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOfferingAnimState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingAnimState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EOfferingAnimState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EOfferingAnimState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EOfferingAnimState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EOfferingAnimState>()
	{
		return EOfferingAnimState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOfferingAnimState(EOfferingAnimState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EOfferingAnimState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EOfferingAnimState_Hash() { return 2854709220U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingAnimState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOfferingAnimState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EOfferingAnimState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOfferingAnimState::None", (int64)EOfferingAnimState::None },
				{ "EOfferingAnimState::Idle", (int64)EOfferingAnimState::Idle },
				{ "EOfferingAnimState::Init", (int64)EOfferingAnimState::Init },
				{ "EOfferingAnimState::Reveal", (int64)EOfferingAnimState::Reveal },
				{ "EOfferingAnimState::ShowInteraction", (int64)EOfferingAnimState::ShowInteraction },
				{ "EOfferingAnimState::Burned", (int64)EOfferingAnimState::Burned },
				{ "EOfferingAnimState::Returned", (int64)EOfferingAnimState::Returned },
				{ "EOfferingAnimState::Cancel", (int64)EOfferingAnimState::Cancel },
				{ "EOfferingAnimState::Hidden", (int64)EOfferingAnimState::Hidden },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Burned.Name", "EOfferingAnimState::Burned" },
				{ "Cancel.Name", "EOfferingAnimState::Cancel" },
				{ "Hidden.Name", "EOfferingAnimState::Hidden" },
				{ "Idle.Name", "EOfferingAnimState::Idle" },
				{ "Init.Name", "EOfferingAnimState::Init" },
				{ "ModuleRelativePath", "Public/EOfferingAnimState.h" },
				{ "None.Name", "EOfferingAnimState::None" },
				{ "Returned.Name", "EOfferingAnimState::Returned" },
				{ "Reveal.Name", "EOfferingAnimState::Reveal" },
				{ "ShowInteraction.Name", "EOfferingAnimState::ShowInteraction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EOfferingAnimState",
				"EOfferingAnimState",
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
