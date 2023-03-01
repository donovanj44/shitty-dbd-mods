// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkUtilities/Public/ETimerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETimerState() {}
// Cross Module References
	NETWORKUTILITIES_API UEnum* Z_Construct_UEnum_NetworkUtilities_ETimerState();
	UPackage* Z_Construct_UPackage__Script_NetworkUtilities();
// End Cross Module References
	static UEnum* ETimerState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NetworkUtilities_ETimerState, Z_Construct_UPackage__Script_NetworkUtilities(), TEXT("ETimerState"));
		}
		return Singleton;
	}
	template<> NETWORKUTILITIES_API UEnum* StaticEnum<ETimerState>()
	{
		return ETimerState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETimerState(ETimerState_StaticEnum, TEXT("/Script/NetworkUtilities"), TEXT("ETimerState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NetworkUtilities_ETimerState_Hash() { return 2021956457U; }
	UEnum* Z_Construct_UEnum_NetworkUtilities_ETimerState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NetworkUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETimerState"), 0, Get_Z_Construct_UEnum_NetworkUtilities_ETimerState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETimerState::Cleared", (int64)ETimerState::Cleared },
				{ "ETimerState::Started", (int64)ETimerState::Started },
				{ "ETimerState::Paused", (int64)ETimerState::Paused },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Cleared.Name", "ETimerState::Cleared" },
				{ "ModuleRelativePath", "Public/ETimerState.h" },
				{ "Paused.Name", "ETimerState::Paused" },
				{ "Started.Name", "ETimerState::Started" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NetworkUtilities,
				nullptr,
				"ETimerState",
				"ETimerState",
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
