// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ERequestState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERequestState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ERequestState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ERequestState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ERequestState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ERequestState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ERequestState>()
	{
		return ERequestState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERequestState(ERequestState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ERequestState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ERequestState_Hash() { return 2842483989U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ERequestState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERequestState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ERequestState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERequestState::VE_None", (int64)ERequestState::VE_None },
				{ "ERequestState::VE_Pending", (int64)ERequestState::VE_Pending },
				{ "ERequestState::VE_Success", (int64)ERequestState::VE_Success },
				{ "ERequestState::VE_Fail", (int64)ERequestState::VE_Fail },
				{ "ERequestState::VE_MAX", (int64)ERequestState::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ERequestState.h" },
				{ "VE_Fail.Name", "ERequestState::VE_Fail" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "ERequestState::VE_MAX" },
				{ "VE_None.Name", "ERequestState::VE_None" },
				{ "VE_Pending.Name", "ERequestState::VE_Pending" },
				{ "VE_Success.Name", "ERequestState::VE_Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ERequestState",
				"ERequestState",
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
