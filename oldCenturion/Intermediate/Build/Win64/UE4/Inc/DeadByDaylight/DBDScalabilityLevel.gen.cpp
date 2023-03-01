// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDScalabilityLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDScalabilityLevel() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_DBDScalabilityLevel();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* DBDScalabilityLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_DBDScalabilityLevel, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DBDScalabilityLevel"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<DBDScalabilityLevel>()
	{
		return DBDScalabilityLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_DBDScalabilityLevel(DBDScalabilityLevel_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("DBDScalabilityLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_DBDScalabilityLevel_Hash() { return 141255129U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_DBDScalabilityLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("DBDScalabilityLevel"), 0, Get_Z_Construct_UEnum_DeadByDaylight_DBDScalabilityLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DBDScalabilityLevel::LOW", (int64)DBDScalabilityLevel::LOW },
				{ "DBDScalabilityLevel::MEDIUM", (int64)DBDScalabilityLevel::MEDIUM },
				{ "DBDScalabilityLevel::HIGH", (int64)DBDScalabilityLevel::HIGH },
				{ "DBDScalabilityLevel::EPIC", (int64)DBDScalabilityLevel::EPIC },
				{ "DBDScalabilityLevel::ULTRA", (int64)DBDScalabilityLevel::ULTRA },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EPIC.Name", "DBDScalabilityLevel::EPIC" },
				{ "HIGH.Name", "DBDScalabilityLevel::HIGH" },
				{ "LOW.Name", "DBDScalabilityLevel::LOW" },
				{ "MEDIUM.Name", "DBDScalabilityLevel::MEDIUM" },
				{ "ModuleRelativePath", "Public/DBDScalabilityLevel.h" },
				{ "ULTRA.Name", "DBDScalabilityLevel::ULTRA" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"DBDScalabilityLevel",
				"DBDScalabilityLevel",
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
