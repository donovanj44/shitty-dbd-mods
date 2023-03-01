// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EUIFlowEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUIFlowEvent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EUIFlowEvent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EUIFlowEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EUIFlowEvent, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EUIFlowEvent"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EUIFlowEvent>()
	{
		return EUIFlowEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUIFlowEvent(EUIFlowEvent_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EUIFlowEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EUIFlowEvent_Hash() { return 2165986587U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EUIFlowEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUIFlowEvent"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EUIFlowEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUIFlowEvent::None", (int64)EUIFlowEvent::None },
				{ "EUIFlowEvent::AtlantaRoleSelectionScreenReady", (int64)EUIFlowEvent::AtlantaRoleSelectionScreenReady },
				{ "EUIFlowEvent::AtlantaNavigationScreenReady", (int64)EUIFlowEvent::AtlantaNavigationScreenReady },
				{ "EUIFlowEvent::InGameHudReady", (int64)EUIFlowEvent::InGameHudReady },
				{ "EUIFlowEvent::LoadingScreenReady", (int64)EUIFlowEvent::LoadingScreenReady },
				{ "EUIFlowEvent::OfflineLobbyScreenReady", (int64)EUIFlowEvent::OfflineLobbyScreenReady },
				{ "EUIFlowEvent::OnlineLobbyScreenReady", (int64)EUIFlowEvent::OnlineLobbyScreenReady },
				{ "EUIFlowEvent::RoleSelectionScreenReady", (int64)EUIFlowEvent::RoleSelectionScreenReady },
				{ "EUIFlowEvent::SplashScreenReady", (int64)EUIFlowEvent::SplashScreenReady },
				{ "EUIFlowEvent::TallyScreenReady", (int64)EUIFlowEvent::TallyScreenReady },
				{ "EUIFlowEvent::PartyLobbyScreenReady", (int64)EUIFlowEvent::PartyLobbyScreenReady },
				{ "EUIFlowEvent::StoreScreenReady", (int64)EUIFlowEvent::StoreScreenReady },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AtlantaNavigationScreenReady.Name", "EUIFlowEvent::AtlantaNavigationScreenReady" },
				{ "AtlantaRoleSelectionScreenReady.Name", "EUIFlowEvent::AtlantaRoleSelectionScreenReady" },
				{ "InGameHudReady.Name", "EUIFlowEvent::InGameHudReady" },
				{ "LoadingScreenReady.Name", "EUIFlowEvent::LoadingScreenReady" },
				{ "ModuleRelativePath", "Public/EUIFlowEvent.h" },
				{ "None.Name", "EUIFlowEvent::None" },
				{ "OfflineLobbyScreenReady.Name", "EUIFlowEvent::OfflineLobbyScreenReady" },
				{ "OnlineLobbyScreenReady.Name", "EUIFlowEvent::OnlineLobbyScreenReady" },
				{ "PartyLobbyScreenReady.Name", "EUIFlowEvent::PartyLobbyScreenReady" },
				{ "RoleSelectionScreenReady.Name", "EUIFlowEvent::RoleSelectionScreenReady" },
				{ "SplashScreenReady.Name", "EUIFlowEvent::SplashScreenReady" },
				{ "StoreScreenReady.Name", "EUIFlowEvent::StoreScreenReady" },
				{ "TallyScreenReady.Name", "EUIFlowEvent::TallyScreenReady" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EUIFlowEvent",
				"EUIFlowEvent",
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
