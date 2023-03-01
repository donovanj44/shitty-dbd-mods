// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ETeachableStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETeachableStatus() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETeachableStatus();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ETeachableStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ETeachableStatus, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ETeachableStatus"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ETeachableStatus>()
	{
		return ETeachableStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETeachableStatus(ETeachableStatus_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ETeachableStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ETeachableStatus_Hash() { return 1868184015U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ETeachableStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETeachableStatus"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ETeachableStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETeachableStatus::Unknown", (int64)ETeachableStatus::Unknown },
				{ "ETeachableStatus::Locked", (int64)ETeachableStatus::Locked },
				{ "ETeachableStatus::AvailableInBloodWeb", (int64)ETeachableStatus::AvailableInBloodWeb },
				{ "ETeachableStatus::AvailableInShrine", (int64)ETeachableStatus::AvailableInShrine },
				{ "ETeachableStatus::Acquired", (int64)ETeachableStatus::Acquired },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Acquired.Name", "ETeachableStatus::Acquired" },
				{ "AvailableInBloodWeb.Name", "ETeachableStatus::AvailableInBloodWeb" },
				{ "AvailableInShrine.Name", "ETeachableStatus::AvailableInShrine" },
				{ "BlueprintType", "true" },
				{ "Locked.Name", "ETeachableStatus::Locked" },
				{ "ModuleRelativePath", "Public/ETeachableStatus.h" },
				{ "Unknown.Name", "ETeachableStatus::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ETeachableStatus",
				"ETeachableStatus",
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
