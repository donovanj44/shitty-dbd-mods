// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EGhostStealthState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGhostStealthState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGhostStealthState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EGhostStealthState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EGhostStealthState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EGhostStealthState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EGhostStealthState>()
	{
		return EGhostStealthState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGhostStealthState(EGhostStealthState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EGhostStealthState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EGhostStealthState_Hash() { return 1158879178U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EGhostStealthState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGhostStealthState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EGhostStealthState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGhostStealthState::AWAITING_ACTIVATION", (int64)EGhostStealthState::AWAITING_ACTIVATION },
				{ "EGhostStealthState::ACTIVATED", (int64)EGhostStealthState::ACTIVATED },
				{ "EGhostStealthState::COOLDOWN", (int64)EGhostStealthState::COOLDOWN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACTIVATED.Name", "EGhostStealthState::ACTIVATED" },
				{ "AWAITING_ACTIVATION.Name", "EGhostStealthState::AWAITING_ACTIVATION" },
				{ "COOLDOWN.Name", "EGhostStealthState::COOLDOWN" },
				{ "ModuleRelativePath", "Public/EGhostStealthState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EGhostStealthState",
				"EGhostStealthState",
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
