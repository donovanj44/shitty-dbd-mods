// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/EFireHarpoonRifleInteractionState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFireHarpoonRifleInteractionState() {}
// Cross Module References
	THEGUNSLINGER_API UEnum* Z_Construct_UEnum_TheGunslinger_EFireHarpoonRifleInteractionState();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
// End Cross Module References
	static UEnum* EFireHarpoonRifleInteractionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheGunslinger_EFireHarpoonRifleInteractionState, Z_Construct_UPackage__Script_TheGunslinger(), TEXT("EFireHarpoonRifleInteractionState"));
		}
		return Singleton;
	}
	template<> THEGUNSLINGER_API UEnum* StaticEnum<EFireHarpoonRifleInteractionState>()
	{
		return EFireHarpoonRifleInteractionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFireHarpoonRifleInteractionState(EFireHarpoonRifleInteractionState_StaticEnum, TEXT("/Script/TheGunslinger"), TEXT("EFireHarpoonRifleInteractionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheGunslinger_EFireHarpoonRifleInteractionState_Hash() { return 1815471548U; }
	UEnum* Z_Construct_UEnum_TheGunslinger_EFireHarpoonRifleInteractionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheGunslinger();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFireHarpoonRifleInteractionState"), 0, Get_Z_Construct_UEnum_TheGunslinger_EFireHarpoonRifleInteractionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFireHarpoonRifleInteractionState::None", (int64)EFireHarpoonRifleInteractionState::None },
				{ "EFireHarpoonRifleInteractionState::Aiming", (int64)EFireHarpoonRifleInteractionState::Aiming },
				{ "EFireHarpoonRifleInteractionState::FirePhase", (int64)EFireHarpoonRifleInteractionState::FirePhase },
				{ "EFireHarpoonRifleInteractionState::MissPhase", (int64)EFireHarpoonRifleInteractionState::MissPhase },
				{ "EFireHarpoonRifleInteractionState::SuccessPhase", (int64)EFireHarpoonRifleInteractionState::SuccessPhase },
				{ "EFireHarpoonRifleInteractionState::EndResult", (int64)EFireHarpoonRifleInteractionState::EndResult },
				{ "EFireHarpoonRifleInteractionState::CanceledAiming", (int64)EFireHarpoonRifleInteractionState::CanceledAiming },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aiming.Name", "EFireHarpoonRifleInteractionState::Aiming" },
				{ "CanceledAiming.Name", "EFireHarpoonRifleInteractionState::CanceledAiming" },
				{ "EndResult.Name", "EFireHarpoonRifleInteractionState::EndResult" },
				{ "FirePhase.Name", "EFireHarpoonRifleInteractionState::FirePhase" },
				{ "MissPhase.Name", "EFireHarpoonRifleInteractionState::MissPhase" },
				{ "ModuleRelativePath", "Public/EFireHarpoonRifleInteractionState.h" },
				{ "None.Name", "EFireHarpoonRifleInteractionState::None" },
				{ "SuccessPhase.Name", "EFireHarpoonRifleInteractionState::SuccessPhase" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheGunslinger,
				nullptr,
				"EFireHarpoonRifleInteractionState",
				"EFireHarpoonRifleInteractionState",
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
