// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/EHealthStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHealthStatus() {}
// Cross Module References
	DBDANALYTICS_API UEnum* Z_Construct_UEnum_DBDAnalytics_EHealthStatus();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
// End Cross Module References
	static UEnum* EHealthStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDAnalytics_EHealthStatus, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("EHealthStatus"));
		}
		return Singleton;
	}
	template<> DBDANALYTICS_API UEnum* StaticEnum<EHealthStatus>()
	{
		return EHealthStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHealthStatus(EHealthStatus_StaticEnum, TEXT("/Script/DBDAnalytics"), TEXT("EHealthStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDAnalytics_EHealthStatus_Hash() { return 1272305105U; }
	UEnum* Z_Construct_UEnum_DBDAnalytics_EHealthStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHealthStatus"), 0, Get_Z_Construct_UEnum_DBDAnalytics_EHealthStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHealthStatus::Healthy", (int64)EHealthStatus::Healthy },
				{ "EHealthStatus::Wounded", (int64)EHealthStatus::Wounded },
				{ "EHealthStatus::DeepWounded", (int64)EHealthStatus::DeepWounded },
				{ "EHealthStatus::Dying", (int64)EHealthStatus::Dying },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DeepWounded.Name", "EHealthStatus::DeepWounded" },
				{ "Dying.Name", "EHealthStatus::Dying" },
				{ "Healthy.Name", "EHealthStatus::Healthy" },
				{ "ModuleRelativePath", "Public/EHealthStatus.h" },
				{ "Wounded.Name", "EHealthStatus::Wounded" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDAnalytics,
				nullptr,
				"EHealthStatus",
				"EHealthStatus",
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
