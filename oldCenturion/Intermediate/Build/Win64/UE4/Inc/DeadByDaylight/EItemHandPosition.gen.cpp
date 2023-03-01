// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EItemHandPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEItemHandPosition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EItemHandPosition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EItemHandPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EItemHandPosition, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EItemHandPosition"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EItemHandPosition>()
	{
		return EItemHandPosition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemHandPosition(EItemHandPosition_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EItemHandPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EItemHandPosition_Hash() { return 345192240U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EItemHandPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemHandPosition"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EItemHandPosition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemHandPosition::None", (int64)EItemHandPosition::None },
				{ "EItemHandPosition::HandleItem", (int64)EItemHandPosition::HandleItem },
				{ "EItemHandPosition::AimItem", (int64)EItemHandPosition::AimItem },
				{ "EItemHandPosition::SmallItem", (int64)EItemHandPosition::SmallItem },
				{ "EItemHandPosition::FirecrackerItem", (int64)EItemHandPosition::FirecrackerItem },
				{ "EItemHandPosition::VaccineItem", (int64)EItemHandPosition::VaccineItem },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AimItem.Name", "EItemHandPosition::AimItem" },
				{ "BlueprintType", "true" },
				{ "FirecrackerItem.Name", "EItemHandPosition::FirecrackerItem" },
				{ "HandleItem.Name", "EItemHandPosition::HandleItem" },
				{ "ModuleRelativePath", "Public/EItemHandPosition.h" },
				{ "None.Name", "EItemHandPosition::None" },
				{ "SmallItem.Name", "EItemHandPosition::SmallItem" },
				{ "VaccineItem.Name", "EItemHandPosition::VaccineItem" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EItemHandPosition",
				"EItemHandPosition",
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
