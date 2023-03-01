// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EAIHideInLockerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAIHideInLockerState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAIHideInLockerState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EAIHideInLockerState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EAIHideInLockerState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EAIHideInLockerState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EAIHideInLockerState>()
	{
		return EAIHideInLockerState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIHideInLockerState(EAIHideInLockerState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EAIHideInLockerState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EAIHideInLockerState_Hash() { return 1596395682U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EAIHideInLockerState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIHideInLockerState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EAIHideInLockerState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIHideInLockerState::WalkToLocker", (int64)EAIHideInLockerState::WalkToLocker },
				{ "EAIHideInLockerState::GetIntoLocker", (int64)EAIHideInLockerState::GetIntoLocker },
				{ "EAIHideInLockerState::HidingInLocker", (int64)EAIHideInLockerState::HidingInLocker },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "GetIntoLocker.Name", "EAIHideInLockerState::GetIntoLocker" },
				{ "HidingInLocker.Name", "EAIHideInLockerState::HidingInLocker" },
				{ "ModuleRelativePath", "Public/EAIHideInLockerState.h" },
				{ "WalkToLocker.Name", "EAIHideInLockerState::WalkToLocker" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EAIHideInLockerState",
				"EAIHideInLockerState",
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
