// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EKillerTutorialEndGameType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEKillerTutorialEndGameType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EKillerTutorialEndGameType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EKillerTutorialEndGameType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EKillerTutorialEndGameType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EKillerTutorialEndGameType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EKillerTutorialEndGameType>()
	{
		return EKillerTutorialEndGameType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKillerTutorialEndGameType(EKillerTutorialEndGameType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EKillerTutorialEndGameType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EKillerTutorialEndGameType_Hash() { return 2004402963U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EKillerTutorialEndGameType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKillerTutorialEndGameType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EKillerTutorialEndGameType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKillerTutorialEndGameType::DeathByHook", (int64)EKillerTutorialEndGameType::DeathByHook },
				{ "EKillerTutorialEndGameType::DeathByEndGameCollapse", (int64)EKillerTutorialEndGameType::DeathByEndGameCollapse },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DeathByEndGameCollapse.Name", "EKillerTutorialEndGameType::DeathByEndGameCollapse" },
				{ "DeathByHook.Name", "EKillerTutorialEndGameType::DeathByHook" },
				{ "ModuleRelativePath", "Public/EKillerTutorialEndGameType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EKillerTutorialEndGameType",
				"EKillerTutorialEndGameType",
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
