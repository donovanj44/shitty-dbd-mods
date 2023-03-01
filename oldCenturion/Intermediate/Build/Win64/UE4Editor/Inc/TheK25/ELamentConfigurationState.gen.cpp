// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/ELamentConfigurationState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELamentConfigurationState() {}
// Cross Module References
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_ELamentConfigurationState();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	static UEnum* ELamentConfigurationState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheK25_ELamentConfigurationState, Z_Construct_UPackage__Script_TheK25(), TEXT("ELamentConfigurationState"));
		}
		return Singleton;
	}
	template<> THEK25_API UEnum* StaticEnum<ELamentConfigurationState>()
	{
		return ELamentConfigurationState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELamentConfigurationState(ELamentConfigurationState_StaticEnum, TEXT("/Script/TheK25"), TEXT("ELamentConfigurationState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheK25_ELamentConfigurationState_Hash() { return 3607555217U; }
	UEnum* Z_Construct_UEnum_TheK25_ELamentConfigurationState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheK25();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELamentConfigurationState"), 0, Get_Z_Construct_UEnum_TheK25_ELamentConfigurationState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELamentConfigurationState::SurvivorEscapedWithLamentConfiguration", (int64)ELamentConfigurationState::SurvivorEscapedWithLamentConfiguration },
				{ "ELamentConfigurationState::WaitingToSpawn", (int64)ELamentConfigurationState::WaitingToSpawn },
				{ "ELamentConfigurationState::Spawned", (int64)ELamentConfigurationState::Spawned },
				{ "ELamentConfigurationState::IsBeingPickedUp", (int64)ELamentConfigurationState::IsBeingPickedUp },
				{ "ELamentConfigurationState::CarriedBySurvivor", (int64)ELamentConfigurationState::CarriedBySurvivor },
				{ "ELamentConfigurationState::HoldingSurvivorHostage", (int64)ELamentConfigurationState::HoldingSurvivorHostage },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CarriedBySurvivor.Name", "ELamentConfigurationState::CarriedBySurvivor" },
				{ "HoldingSurvivorHostage.Name", "ELamentConfigurationState::HoldingSurvivorHostage" },
				{ "IsBeingPickedUp.Name", "ELamentConfigurationState::IsBeingPickedUp" },
				{ "ModuleRelativePath", "Public/ELamentConfigurationState.h" },
				{ "Spawned.Name", "ELamentConfigurationState::Spawned" },
				{ "SurvivorEscapedWithLamentConfiguration.Name", "ELamentConfigurationState::SurvivorEscapedWithLamentConfiguration" },
				{ "WaitingToSpawn.Name", "ELamentConfigurationState::WaitingToSpawn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheK25,
				nullptr,
				"ELamentConfigurationState",
				"ELamentConfigurationState",
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
