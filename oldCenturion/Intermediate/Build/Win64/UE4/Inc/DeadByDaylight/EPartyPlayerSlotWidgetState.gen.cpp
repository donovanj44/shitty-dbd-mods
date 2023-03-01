// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EPartyPlayerSlotWidgetState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPartyPlayerSlotWidgetState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPartyPlayerSlotWidgetState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EPartyPlayerSlotWidgetState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EPartyPlayerSlotWidgetState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EPartyPlayerSlotWidgetState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EPartyPlayerSlotWidgetState>()
	{
		return EPartyPlayerSlotWidgetState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPartyPlayerSlotWidgetState(EPartyPlayerSlotWidgetState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EPartyPlayerSlotWidgetState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EPartyPlayerSlotWidgetState_Hash() { return 3378434891U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EPartyPlayerSlotWidgetState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPartyPlayerSlotWidgetState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EPartyPlayerSlotWidgetState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPartyPlayerSlotWidgetState::None", (int64)EPartyPlayerSlotWidgetState::None },
				{ "EPartyPlayerSlotWidgetState::Empty", (int64)EPartyPlayerSlotWidgetState::Empty },
				{ "EPartyPlayerSlotWidgetState::NotReady", (int64)EPartyPlayerSlotWidgetState::NotReady },
				{ "EPartyPlayerSlotWidgetState::Ready", (int64)EPartyPlayerSlotWidgetState::Ready },
				{ "EPartyPlayerSlotWidgetState::Hidden", (int64)EPartyPlayerSlotWidgetState::Hidden },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Empty.Name", "EPartyPlayerSlotWidgetState::Empty" },
				{ "Hidden.Name", "EPartyPlayerSlotWidgetState::Hidden" },
				{ "ModuleRelativePath", "Public/EPartyPlayerSlotWidgetState.h" },
				{ "None.Name", "EPartyPlayerSlotWidgetState::None" },
				{ "NotReady.Name", "EPartyPlayerSlotWidgetState::NotReady" },
				{ "Ready.Name", "EPartyPlayerSlotWidgetState::Ready" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EPartyPlayerSlotWidgetState",
				"EPartyPlayerSlotWidgetState",
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
