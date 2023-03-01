// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EBloodwebSaveReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBloodwebSaveReason() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EBloodwebSaveReason();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EBloodwebSaveReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EBloodwebSaveReason, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EBloodwebSaveReason"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EBloodwebSaveReason>()
	{
		return EBloodwebSaveReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBloodwebSaveReason(EBloodwebSaveReason_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EBloodwebSaveReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EBloodwebSaveReason_Hash() { return 3065117032U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EBloodwebSaveReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBloodwebSaveReason"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EBloodwebSaveReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBloodwebSaveReason::PayToRefresh", (int64)EBloodwebSaveReason::PayToRefresh },
				{ "EBloodwebSaveReason::PrestigeUp", (int64)EBloodwebSaveReason::PrestigeUp },
				{ "EBloodwebSaveReason::ShouldRebuild", (int64)EBloodwebSaveReason::ShouldRebuild },
				{ "EBloodwebSaveReason::Cheat", (int64)EBloodwebSaveReason::Cheat },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Cheat.Name", "EBloodwebSaveReason::Cheat" },
				{ "ModuleRelativePath", "Public/EBloodwebSaveReason.h" },
				{ "PayToRefresh.Name", "EBloodwebSaveReason::PayToRefresh" },
				{ "PrestigeUp.Name", "EBloodwebSaveReason::PrestigeUp" },
				{ "ShouldRebuild.Name", "EBloodwebSaveReason::ShouldRebuild" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EBloodwebSaveReason",
				"EBloodwebSaveReason",
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
