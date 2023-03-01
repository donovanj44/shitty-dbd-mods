// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EPalletPushSideStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPalletPushSideStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPalletPushSideStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EPalletPushSideStrategy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EPalletPushSideStrategy, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EPalletPushSideStrategy"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EPalletPushSideStrategy>()
	{
		return EPalletPushSideStrategy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPalletPushSideStrategy(EPalletPushSideStrategy_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EPalletPushSideStrategy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EPalletPushSideStrategy_Hash() { return 1600859790U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EPalletPushSideStrategy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPalletPushSideStrategy"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EPalletPushSideStrategy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPalletPushSideStrategy::PushToClosestPalletSide", (int64)EPalletPushSideStrategy::PushToClosestPalletSide },
				{ "EPalletPushSideStrategy::PushOppositeToPlayerExecutingPulldown", (int64)EPalletPushSideStrategy::PushOppositeToPlayerExecutingPulldown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EPalletPushSideStrategy.h" },
				{ "PushOppositeToPlayerExecutingPulldown.Name", "EPalletPushSideStrategy::PushOppositeToPlayerExecutingPulldown" },
				{ "PushToClosestPalletSide.Name", "EPalletPushSideStrategy::PushToClosestPalletSide" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EPalletPushSideStrategy",
				"EPalletPushSideStrategy",
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
