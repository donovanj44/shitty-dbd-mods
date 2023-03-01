// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/ECharacterStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECharacterStatus() {}
// Cross Module References
	DBDANALYTICS_API UEnum* Z_Construct_UEnum_DBDAnalytics_ECharacterStatus();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
// End Cross Module References
	static UEnum* ECharacterStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDAnalytics_ECharacterStatus, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("ECharacterStatus"));
		}
		return Singleton;
	}
	template<> DBDANALYTICS_API UEnum* StaticEnum<ECharacterStatus>()
	{
		return ECharacterStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterStatus(ECharacterStatus_StaticEnum, TEXT("/Script/DBDAnalytics"), TEXT("ECharacterStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDAnalytics_ECharacterStatus_Hash() { return 1373461820U; }
	UEnum* Z_Construct_UEnum_DBDAnalytics_ECharacterStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterStatus"), 0, Get_Z_Construct_UEnum_DBDAnalytics_ECharacterStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterStatus::Crawling", (int64)ECharacterStatus::Crawling },
				{ "ECharacterStatus::BeingPickedUp", (int64)ECharacterStatus::BeingPickedUp },
				{ "ECharacterStatus::BeingCarried", (int64)ECharacterStatus::BeingCarried },
				{ "ECharacterStatus::BeingHealed", (int64)ECharacterStatus::BeingHealed },
				{ "ECharacterStatus::BeingMended", (int64)ECharacterStatus::BeingMended },
				{ "ECharacterStatus::BeingPutDown", (int64)ECharacterStatus::BeingPutDown },
				{ "ECharacterStatus::BeingPutOnHook", (int64)ECharacterStatus::BeingPutOnHook },
				{ "ECharacterStatus::BeingPulledFromCloset", (int64)ECharacterStatus::BeingPulledFromCloset },
				{ "ECharacterStatus::BeingKilled", (int64)ECharacterStatus::BeingKilled },
				{ "ECharacterStatus::OnHook", (int64)ECharacterStatus::OnHook },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BeingCarried.Name", "ECharacterStatus::BeingCarried" },
				{ "BeingHealed.Name", "ECharacterStatus::BeingHealed" },
				{ "BeingKilled.Name", "ECharacterStatus::BeingKilled" },
				{ "BeingMended.Name", "ECharacterStatus::BeingMended" },
				{ "BeingPickedUp.Name", "ECharacterStatus::BeingPickedUp" },
				{ "BeingPulledFromCloset.Name", "ECharacterStatus::BeingPulledFromCloset" },
				{ "BeingPutDown.Name", "ECharacterStatus::BeingPutDown" },
				{ "BeingPutOnHook.Name", "ECharacterStatus::BeingPutOnHook" },
				{ "Crawling.Name", "ECharacterStatus::Crawling" },
				{ "ModuleRelativePath", "Public/ECharacterStatus.h" },
				{ "OnHook.Name", "ECharacterStatus::OnHook" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDAnalytics,
				nullptr,
				"ECharacterStatus",
				"ECharacterStatus",
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
