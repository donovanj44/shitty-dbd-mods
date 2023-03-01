// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/EBloodOrbState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBloodOrbState() {}
// Cross Module References
	THEONI_API UEnum* Z_Construct_UEnum_TheOni_EBloodOrbState();
	UPackage* Z_Construct_UPackage__Script_TheOni();
// End Cross Module References
	static UEnum* EBloodOrbState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheOni_EBloodOrbState, Z_Construct_UPackage__Script_TheOni(), TEXT("EBloodOrbState"));
		}
		return Singleton;
	}
	template<> THEONI_API UEnum* StaticEnum<EBloodOrbState>()
	{
		return EBloodOrbState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBloodOrbState(EBloodOrbState_StaticEnum, TEXT("/Script/TheOni"), TEXT("EBloodOrbState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheOni_EBloodOrbState_Hash() { return 29229226U; }
	UEnum* Z_Construct_UEnum_TheOni_EBloodOrbState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheOni();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBloodOrbState"), 0, Get_Z_Construct_UEnum_TheOni_EBloodOrbState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBloodOrbState::Invalid", (int64)EBloodOrbState::Invalid },
				{ "EBloodOrbState::BeingDropped", (int64)EBloodOrbState::BeingDropped },
				{ "EBloodOrbState::Idle", (int64)EBloodOrbState::Idle },
				{ "EBloodOrbState::WaitingToMove", (int64)EBloodOrbState::WaitingToMove },
				{ "EBloodOrbState::Attracted", (int64)EBloodOrbState::Attracted },
				{ "EBloodOrbState::Absorbed", (int64)EBloodOrbState::Absorbed },
				{ "EBloodOrbState::Destroyed", (int64)EBloodOrbState::Destroyed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Absorbed.Name", "EBloodOrbState::Absorbed" },
				{ "Attracted.Name", "EBloodOrbState::Attracted" },
				{ "BeingDropped.Name", "EBloodOrbState::BeingDropped" },
				{ "Destroyed.Name", "EBloodOrbState::Destroyed" },
				{ "Idle.Name", "EBloodOrbState::Idle" },
				{ "Invalid.Name", "EBloodOrbState::Invalid" },
				{ "ModuleRelativePath", "Public/EBloodOrbState.h" },
				{ "WaitingToMove.Name", "EBloodOrbState::WaitingToMove" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheOni,
				nullptr,
				"EBloodOrbState",
				"EBloodOrbState",
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
