// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/EDBDAnalyticsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDBDAnalyticsGameMode() {}
// Cross Module References
	DBDANALYTICS_API UEnum* Z_Construct_UEnum_DBDAnalytics_EDBDAnalyticsGameMode();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
// End Cross Module References
	static UEnum* EDBDAnalyticsGameMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDAnalytics_EDBDAnalyticsGameMode, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("EDBDAnalyticsGameMode"));
		}
		return Singleton;
	}
	template<> DBDANALYTICS_API UEnum* StaticEnum<EDBDAnalyticsGameMode>()
	{
		return EDBDAnalyticsGameMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDBDAnalyticsGameMode(EDBDAnalyticsGameMode_StaticEnum, TEXT("/Script/DBDAnalytics"), TEXT("EDBDAnalyticsGameMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDAnalytics_EDBDAnalyticsGameMode_Hash() { return 3663172487U; }
	UEnum* Z_Construct_UEnum_DBDAnalytics_EDBDAnalyticsGameMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDBDAnalyticsGameMode"), 0, Get_Z_Construct_UEnum_DBDAnalytics_EDBDAnalyticsGameMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDBDAnalyticsGameMode::AnalyticsServer", (int64)EDBDAnalyticsGameMode::AnalyticsServer },
				{ "EDBDAnalyticsGameMode::AnalyticsClient", (int64)EDBDAnalyticsGameMode::AnalyticsClient },
				{ "EDBDAnalyticsGameMode::AnalyticsLoading", (int64)EDBDAnalyticsGameMode::AnalyticsLoading },
				{ "EDBDAnalyticsGameMode::AnalyticsLobby", (int64)EDBDAnalyticsGameMode::AnalyticsLobby },
				{ "EDBDAnalyticsGameMode::AnalyticsMenu", (int64)EDBDAnalyticsGameMode::AnalyticsMenu },
				{ "EDBDAnalyticsGameMode::AnalyticsPostGame", (int64)EDBDAnalyticsGameMode::AnalyticsPostGame },
				{ "EDBDAnalyticsGameMode::AnalyticsPerfTests", (int64)EDBDAnalyticsGameMode::AnalyticsPerfTests },
				{ "EDBDAnalyticsGameMode::AnalyticsSplashScreen", (int64)EDBDAnalyticsGameMode::AnalyticsSplashScreen },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnalyticsClient.Name", "EDBDAnalyticsGameMode::AnalyticsClient" },
				{ "AnalyticsLoading.Name", "EDBDAnalyticsGameMode::AnalyticsLoading" },
				{ "AnalyticsLobby.Name", "EDBDAnalyticsGameMode::AnalyticsLobby" },
				{ "AnalyticsMenu.Name", "EDBDAnalyticsGameMode::AnalyticsMenu" },
				{ "AnalyticsPerfTests.Name", "EDBDAnalyticsGameMode::AnalyticsPerfTests" },
				{ "AnalyticsPostGame.Name", "EDBDAnalyticsGameMode::AnalyticsPostGame" },
				{ "AnalyticsServer.Name", "EDBDAnalyticsGameMode::AnalyticsServer" },
				{ "AnalyticsSplashScreen.Name", "EDBDAnalyticsGameMode::AnalyticsSplashScreen" },
				{ "ModuleRelativePath", "Public/EDBDAnalyticsGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDAnalytics,
				nullptr,
				"EDBDAnalyticsGameMode",
				"EDBDAnalyticsGameMode",
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
