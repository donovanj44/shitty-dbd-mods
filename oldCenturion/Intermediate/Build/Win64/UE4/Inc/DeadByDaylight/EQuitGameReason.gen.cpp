// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EQuitGameReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQuitGameReason() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EQuitGameReason();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EQuitGameReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EQuitGameReason, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EQuitGameReason"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EQuitGameReason>()
	{
		return EQuitGameReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuitGameReason(EQuitGameReason_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EQuitGameReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EQuitGameReason_Hash() { return 357970387U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EQuitGameReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuitGameReason"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EQuitGameReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuitGameReason::None", (int64)EQuitGameReason::None },
				{ "EQuitGameReason::Logout", (int64)EQuitGameReason::Logout },
				{ "EQuitGameReason::Suspend", (int64)EQuitGameReason::Suspend },
				{ "EQuitGameReason::Shutdown", (int64)EQuitGameReason::Shutdown },
				{ "EQuitGameReason::Count", (int64)EQuitGameReason::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Count.Name", "EQuitGameReason::Count" },
				{ "Logout.Name", "EQuitGameReason::Logout" },
				{ "ModuleRelativePath", "Public/EQuitGameReason.h" },
				{ "None.Name", "EQuitGameReason::None" },
				{ "Shutdown.Name", "EQuitGameReason::Shutdown" },
				{ "Suspend.Name", "EQuitGameReason::Suspend" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EQuitGameReason",
				"EQuitGameReason",
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
