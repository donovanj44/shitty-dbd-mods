// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EFreeTicketButtonState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFreeTicketButtonState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EFreeTicketButtonState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EFreeTicketButtonState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EFreeTicketButtonState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EFreeTicketButtonState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EFreeTicketButtonState>()
	{
		return EFreeTicketButtonState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFreeTicketButtonState(EFreeTicketButtonState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EFreeTicketButtonState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EFreeTicketButtonState_Hash() { return 4246371969U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EFreeTicketButtonState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFreeTicketButtonState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EFreeTicketButtonState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFreeTicketButtonState::Disabled", (int64)EFreeTicketButtonState::Disabled },
				{ "EFreeTicketButtonState::Enabled", (int64)EFreeTicketButtonState::Enabled },
				{ "EFreeTicketButtonState::InEffect", (int64)EFreeTicketButtonState::InEffect },
				{ "EFreeTicketButtonState::None", (int64)EFreeTicketButtonState::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Disabled.Name", "EFreeTicketButtonState::Disabled" },
				{ "Enabled.Name", "EFreeTicketButtonState::Enabled" },
				{ "InEffect.Name", "EFreeTicketButtonState::InEffect" },
				{ "ModuleRelativePath", "Public/EFreeTicketButtonState.h" },
				{ "None.Name", "EFreeTicketButtonState::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EFreeTicketButtonState",
				"EFreeTicketButtonState",
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
