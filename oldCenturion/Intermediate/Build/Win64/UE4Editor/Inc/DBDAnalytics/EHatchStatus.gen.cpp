// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/EHatchStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHatchStatus() {}
// Cross Module References
	DBDANALYTICS_API UEnum* Z_Construct_UEnum_DBDAnalytics_EHatchStatus();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
// End Cross Module References
	static UEnum* EHatchStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDAnalytics_EHatchStatus, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("EHatchStatus"));
		}
		return Singleton;
	}
	template<> DBDANALYTICS_API UEnum* StaticEnum<EHatchStatus>()
	{
		return EHatchStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHatchStatus(EHatchStatus_StaticEnum, TEXT("/Script/DBDAnalytics"), TEXT("EHatchStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDAnalytics_EHatchStatus_Hash() { return 2841303874U; }
	UEnum* Z_Construct_UEnum_DBDAnalytics_EHatchStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHatchStatus"), 0, Get_Z_Construct_UEnum_DBDAnalytics_EHatchStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHatchStatus::Hidden", (int64)EHatchStatus::Hidden },
				{ "EHatchStatus::Visible", (int64)EHatchStatus::Visible },
				{ "EHatchStatus::Open", (int64)EHatchStatus::Open },
				{ "EHatchStatus::Closed", (int64)EHatchStatus::Closed },
				{ "EHatchStatus::ClosedOrHidden", (int64)EHatchStatus::ClosedOrHidden },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Closed.Name", "EHatchStatus::Closed" },
				{ "ClosedOrHidden.Name", "EHatchStatus::ClosedOrHidden" },
				{ "Hidden.Name", "EHatchStatus::Hidden" },
				{ "ModuleRelativePath", "Public/EHatchStatus.h" },
				{ "Open.Name", "EHatchStatus::Open" },
				{ "Visible.Name", "EHatchStatus::Visible" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDAnalytics,
				nullptr,
				"EHatchStatus",
				"EHatchStatus",
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
