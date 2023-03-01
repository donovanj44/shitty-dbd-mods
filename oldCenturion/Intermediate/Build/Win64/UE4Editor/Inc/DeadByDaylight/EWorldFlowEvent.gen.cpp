// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EWorldFlowEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWorldFlowEvent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EWorldFlowEvent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EWorldFlowEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EWorldFlowEvent, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EWorldFlowEvent"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EWorldFlowEvent>()
	{
		return EWorldFlowEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWorldFlowEvent(EWorldFlowEvent_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EWorldFlowEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EWorldFlowEvent_Hash() { return 4183085193U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EWorldFlowEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWorldFlowEvent"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EWorldFlowEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWorldFlowEvent::None", (int64)EWorldFlowEvent::None },
				{ "EWorldFlowEvent::GameLevelLoaded", (int64)EWorldFlowEvent::GameLevelLoaded },
				{ "EWorldFlowEvent::LoadingGameLevel", (int64)EWorldFlowEvent::LoadingGameLevel },
				{ "EWorldFlowEvent::LoadingOfflineParadise", (int64)EWorldFlowEvent::LoadingOfflineParadise },
				{ "EWorldFlowEvent::LoadingOnlineLobbyLevel", (int64)EWorldFlowEvent::LoadingOnlineLobbyLevel },
				{ "EWorldFlowEvent::OfflineLobbyMapLoaded", (int64)EWorldFlowEvent::OfflineLobbyMapLoaded },
				{ "EWorldFlowEvent::OfflineParadiseLoaded", (int64)EWorldFlowEvent::OfflineParadiseLoaded },
				{ "EWorldFlowEvent::OnlineLobbyMapLoaded", (int64)EWorldFlowEvent::OnlineLobbyMapLoaded },
				{ "EWorldFlowEvent::StartScreenMapLoaded", (int64)EWorldFlowEvent::StartScreenMapLoaded },
				{ "EWorldFlowEvent::LoadingSplashScreen", (int64)EWorldFlowEvent::LoadingSplashScreen },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "GameLevelLoaded.Name", "EWorldFlowEvent::GameLevelLoaded" },
				{ "LoadingGameLevel.Name", "EWorldFlowEvent::LoadingGameLevel" },
				{ "LoadingOfflineParadise.Name", "EWorldFlowEvent::LoadingOfflineParadise" },
				{ "LoadingOnlineLobbyLevel.Name", "EWorldFlowEvent::LoadingOnlineLobbyLevel" },
				{ "LoadingSplashScreen.Name", "EWorldFlowEvent::LoadingSplashScreen" },
				{ "ModuleRelativePath", "Public/EWorldFlowEvent.h" },
				{ "None.Name", "EWorldFlowEvent::None" },
				{ "OfflineLobbyMapLoaded.Name", "EWorldFlowEvent::OfflineLobbyMapLoaded" },
				{ "OfflineParadiseLoaded.Name", "EWorldFlowEvent::OfflineParadiseLoaded" },
				{ "OnlineLobbyMapLoaded.Name", "EWorldFlowEvent::OnlineLobbyMapLoaded" },
				{ "StartScreenMapLoaded.Name", "EWorldFlowEvent::StartScreenMapLoaded" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EWorldFlowEvent",
				"EWorldFlowEvent",
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
