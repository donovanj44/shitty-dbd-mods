// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EGameFlowStep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGameFlowStep() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameFlowStep();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EGameFlowStep_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EGameFlowStep, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EGameFlowStep"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EGameFlowStep>()
	{
		return EGameFlowStep_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameFlowStep(EGameFlowStep_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EGameFlowStep"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EGameFlowStep_Hash() { return 587797711U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EGameFlowStep()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameFlowStep"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EGameFlowStep_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameFlowStep::None", (int64)EGameFlowStep::None },
				{ "EGameFlowStep::InGame", (int64)EGameFlowStep::InGame },
				{ "EGameFlowStep::OfflineLobby", (int64)EGameFlowStep::OfflineLobby },
				{ "EGameFlowStep::OfflineTally", (int64)EGameFlowStep::OfflineTally },
				{ "EGameFlowStep::OnlineLobby", (int64)EGameFlowStep::OnlineLobby },
				{ "EGameFlowStep::SplashScreen", (int64)EGameFlowStep::SplashScreen },
				{ "EGameFlowStep::PartyLobby", (int64)EGameFlowStep::PartyLobby },
				{ "EGameFlowStep::Store", (int64)EGameFlowStep::Store },
				{ "EGameFlowStep::RoleSelection", (int64)EGameFlowStep::RoleSelection },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "InGame.Name", "EGameFlowStep::InGame" },
				{ "ModuleRelativePath", "Public/EGameFlowStep.h" },
				{ "None.Name", "EGameFlowStep::None" },
				{ "OfflineLobby.Name", "EGameFlowStep::OfflineLobby" },
				{ "OfflineTally.Name", "EGameFlowStep::OfflineTally" },
				{ "OnlineLobby.Name", "EGameFlowStep::OnlineLobby" },
				{ "PartyLobby.Name", "EGameFlowStep::PartyLobby" },
				{ "RoleSelection.Name", "EGameFlowStep::RoleSelection" },
				{ "SplashScreen.Name", "EGameFlowStep::SplashScreen" },
				{ "Store.Name", "EGameFlowStep::Store" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EGameFlowStep",
				"EGameFlowStep",
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
