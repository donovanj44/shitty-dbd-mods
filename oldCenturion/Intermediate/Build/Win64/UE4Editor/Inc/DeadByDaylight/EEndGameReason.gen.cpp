// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EEndGameReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEndGameReason() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEndGameReason();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EEndGameReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EEndGameReason, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EEndGameReason"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EEndGameReason>()
	{
		return EEndGameReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEndGameReason(EEndGameReason_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EEndGameReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EEndGameReason_Hash() { return 1955652118U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EEndGameReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEndGameReason"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EEndGameReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEndGameReason::None", (int64)EEndGameReason::None },
				{ "EEndGameReason::Normal", (int64)EEndGameReason::Normal },
				{ "EEndGameReason::KillerLeft", (int64)EEndGameReason::KillerLeft },
				{ "EEndGameReason::PlayerLeftDuringLoading", (int64)EEndGameReason::PlayerLeftDuringLoading },
				{ "EEndGameReason::KillerLeftEarly", (int64)EEndGameReason::KillerLeftEarly },
				{ "EEndGameReason::InvalidPlayerRoles", (int64)EEndGameReason::InvalidPlayerRoles },
				{ "EEndGameReason::LoadingTimeout", (int64)EEndGameReason::LoadingTimeout },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "InvalidPlayerRoles.Name", "EEndGameReason::InvalidPlayerRoles" },
				{ "KillerLeft.Name", "EEndGameReason::KillerLeft" },
				{ "KillerLeftEarly.Name", "EEndGameReason::KillerLeftEarly" },
				{ "LoadingTimeout.Name", "EEndGameReason::LoadingTimeout" },
				{ "ModuleRelativePath", "Public/EEndGameReason.h" },
				{ "None.Name", "EEndGameReason::None" },
				{ "Normal.Name", "EEndGameReason::Normal" },
				{ "PlayerLeftDuringLoading.Name", "EEndGameReason::PlayerLeftDuringLoading" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EEndGameReason",
				"EEndGameReason",
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
