// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EOfferingSequenceState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOfferingSequenceState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingSequenceState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EOfferingSequenceState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EOfferingSequenceState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EOfferingSequenceState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EOfferingSequenceState>()
	{
		return EOfferingSequenceState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOfferingSequenceState(EOfferingSequenceState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EOfferingSequenceState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EOfferingSequenceState_Hash() { return 4086144950U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingSequenceState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOfferingSequenceState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EOfferingSequenceState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOfferingSequenceState::SmokeIn", (int64)EOfferingSequenceState::SmokeIn },
				{ "EOfferingSequenceState::FadeOut", (int64)EOfferingSequenceState::FadeOut },
				{ "EOfferingSequenceState::FadeIn", (int64)EOfferingSequenceState::FadeIn },
				{ "EOfferingSequenceState::NotInitialized", (int64)EOfferingSequenceState::NotInitialized },
				{ "EOfferingSequenceState::Idle", (int64)EOfferingSequenceState::Idle },
				{ "EOfferingSequenceState::Init", (int64)EOfferingSequenceState::Init },
				{ "EOfferingSequenceState::InitDone", (int64)EOfferingSequenceState::InitDone },
				{ "EOfferingSequenceState::Reveal", (int64)EOfferingSequenceState::Reveal },
				{ "EOfferingSequenceState::RevealDone", (int64)EOfferingSequenceState::RevealDone },
				{ "EOfferingSequenceState::ShowInteraction", (int64)EOfferingSequenceState::ShowInteraction },
				{ "EOfferingSequenceState::Finalize", (int64)EOfferingSequenceState::Finalize },
				{ "EOfferingSequenceState::Done", (int64)EOfferingSequenceState::Done },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Done.Name", "EOfferingSequenceState::Done" },
				{ "FadeIn.Name", "EOfferingSequenceState::FadeIn" },
				{ "FadeOut.Name", "EOfferingSequenceState::FadeOut" },
				{ "Finalize.Name", "EOfferingSequenceState::Finalize" },
				{ "Idle.Name", "EOfferingSequenceState::Idle" },
				{ "Init.Name", "EOfferingSequenceState::Init" },
				{ "InitDone.Name", "EOfferingSequenceState::InitDone" },
				{ "ModuleRelativePath", "Public/EOfferingSequenceState.h" },
				{ "NotInitialized.Name", "EOfferingSequenceState::NotInitialized" },
				{ "Reveal.Name", "EOfferingSequenceState::Reveal" },
				{ "RevealDone.Name", "EOfferingSequenceState::RevealDone" },
				{ "ShowInteraction.Name", "EOfferingSequenceState::ShowInteraction" },
				{ "SmokeIn.Name", "EOfferingSequenceState::SmokeIn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EOfferingSequenceState",
				"EOfferingSequenceState",
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
