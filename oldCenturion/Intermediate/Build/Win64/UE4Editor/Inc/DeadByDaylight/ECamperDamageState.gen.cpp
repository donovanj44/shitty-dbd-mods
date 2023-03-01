// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ECamperDamageState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECamperDamageState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperDamageState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ECamperDamageState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ECamperDamageState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ECamperDamageState>()
	{
		return ECamperDamageState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECamperDamageState(ECamperDamageState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ECamperDamageState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ECamperDamageState_Hash() { return 2145818789U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperDamageState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECamperDamageState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ECamperDamageState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECamperDamageState::VE_Healthy", (int64)ECamperDamageState::VE_Healthy },
				{ "ECamperDamageState::VE_Injured", (int64)ECamperDamageState::VE_Injured },
				{ "ECamperDamageState::VE_KO", (int64)ECamperDamageState::VE_KO },
				{ "ECamperDamageState::VE_Dead", (int64)ECamperDamageState::VE_Dead },
				{ "ECamperDamageState::VE_MAX", (int64)ECamperDamageState::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ECamperDamageState.h" },
				{ "VE_Dead.Name", "ECamperDamageState::VE_Dead" },
				{ "VE_Healthy.Name", "ECamperDamageState::VE_Healthy" },
				{ "VE_Injured.Name", "ECamperDamageState::VE_Injured" },
				{ "VE_KO.Name", "ECamperDamageState::VE_KO" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "ECamperDamageState::VE_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ECamperDamageState",
				"ECamperDamageState",
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
