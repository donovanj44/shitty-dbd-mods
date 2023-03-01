// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EBloodwebNodeState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBloodwebNodeState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EBloodwebNodeState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EBloodwebNodeState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EBloodwebNodeState>()
	{
		return EBloodwebNodeState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBloodwebNodeState(EBloodwebNodeState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EBloodwebNodeState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeState_Hash() { return 1235869236U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBloodwebNodeState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBloodwebNodeState::Inactive", (int64)EBloodwebNodeState::Inactive },
				{ "EBloodwebNodeState::Available", (int64)EBloodwebNodeState::Available },
				{ "EBloodwebNodeState::Locked_Do_Not_Use_Deprecated", (int64)EBloodwebNodeState::Locked_Do_Not_Use_Deprecated },
				{ "EBloodwebNodeState::Collected", (int64)EBloodwebNodeState::Collected },
				{ "EBloodwebNodeState::Consumed", (int64)EBloodwebNodeState::Consumed },
				{ "EBloodwebNodeState::Count", (int64)EBloodwebNodeState::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Available.Name", "EBloodwebNodeState::Available" },
				{ "Collected.Name", "EBloodwebNodeState::Collected" },
				{ "Consumed.Name", "EBloodwebNodeState::Consumed" },
				{ "Count.Name", "EBloodwebNodeState::Count" },
				{ "Inactive.Name", "EBloodwebNodeState::Inactive" },
				{ "Locked_Do_Not_Use_Deprecated.Name", "EBloodwebNodeState::Locked_Do_Not_Use_Deprecated" },
				{ "ModuleRelativePath", "Public/EBloodwebNodeState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EBloodwebNodeState",
				"EBloodwebNodeState",
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
