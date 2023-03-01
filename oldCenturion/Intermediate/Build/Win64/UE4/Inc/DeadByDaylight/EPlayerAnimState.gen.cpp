// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EPlayerAnimState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPlayerAnimState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPlayerAnimState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EPlayerAnimState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EPlayerAnimState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EPlayerAnimState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EPlayerAnimState>()
	{
		return EPlayerAnimState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerAnimState(EPlayerAnimState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EPlayerAnimState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EPlayerAnimState_Hash() { return 3245698133U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EPlayerAnimState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerAnimState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EPlayerAnimState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerAnimState::VE_Default", (int64)EPlayerAnimState::VE_Default },
				{ "EPlayerAnimState::VE_Injured", (int64)EPlayerAnimState::VE_Injured },
				{ "EPlayerAnimState::VE_InjuredCrouch", (int64)EPlayerAnimState::VE_InjuredCrouch },
				{ "EPlayerAnimState::VE_Crouch", (int64)EPlayerAnimState::VE_Crouch },
				{ "EPlayerAnimState::VE_MAX", (int64)EPlayerAnimState::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EPlayerAnimState.h" },
				{ "VE_Crouch.Name", "EPlayerAnimState::VE_Crouch" },
				{ "VE_Default.Name", "EPlayerAnimState::VE_Default" },
				{ "VE_Injured.Name", "EPlayerAnimState::VE_Injured" },
				{ "VE_InjuredCrouch.Name", "EPlayerAnimState::VE_InjuredCrouch" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EPlayerAnimState::VE_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EPlayerAnimState",
				"EPlayerAnimState",
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
