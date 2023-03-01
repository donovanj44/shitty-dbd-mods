// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ETileSpawnPointType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETileSpawnPointType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETileSpawnPointType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ETileSpawnPointType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ETileSpawnPointType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ETileSpawnPointType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ETileSpawnPointType>()
	{
		return ETileSpawnPointType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETileSpawnPointType(ETileSpawnPointType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ETileSpawnPointType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ETileSpawnPointType_Hash() { return 2875673802U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ETileSpawnPointType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETileSpawnPointType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ETileSpawnPointType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETileSpawnPointType::Unspecified", (int64)ETileSpawnPointType::Unspecified },
				{ "ETileSpawnPointType::Survivor", (int64)ETileSpawnPointType::Survivor },
				{ "ETileSpawnPointType::SurvivorItem", (int64)ETileSpawnPointType::SurvivorItem },
				{ "ETileSpawnPointType::Killer", (int64)ETileSpawnPointType::Killer },
				{ "ETileSpawnPointType::KillerItem", (int64)ETileSpawnPointType::KillerItem },
				{ "ETileSpawnPointType::InteractableObject", (int64)ETileSpawnPointType::InteractableObject },
				{ "ETileSpawnPointType::Count", (int64)ETileSpawnPointType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Name", "ETileSpawnPointType::Count" },
				{ "InteractableObject.Name", "ETileSpawnPointType::InteractableObject" },
				{ "Killer.Name", "ETileSpawnPointType::Killer" },
				{ "KillerItem.Name", "ETileSpawnPointType::KillerItem" },
				{ "ModuleRelativePath", "Public/ETileSpawnPointType.h" },
				{ "Survivor.Name", "ETileSpawnPointType::Survivor" },
				{ "SurvivorItem.Name", "ETileSpawnPointType::SurvivorItem" },
				{ "Unspecified.Name", "ETileSpawnPointType::Unspecified" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ETileSpawnPointType",
				"ETileSpawnPointType",
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
