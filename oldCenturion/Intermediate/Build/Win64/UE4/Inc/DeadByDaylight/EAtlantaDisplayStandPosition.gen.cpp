// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EAtlantaDisplayStandPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtlantaDisplayStandPosition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAtlantaDisplayStandPosition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EAtlantaDisplayStandPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EAtlantaDisplayStandPosition, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EAtlantaDisplayStandPosition"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EAtlantaDisplayStandPosition>()
	{
		return EAtlantaDisplayStandPosition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtlantaDisplayStandPosition(EAtlantaDisplayStandPosition_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EAtlantaDisplayStandPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EAtlantaDisplayStandPosition_Hash() { return 1249063509U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EAtlantaDisplayStandPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtlantaDisplayStandPosition"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EAtlantaDisplayStandPosition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtlantaDisplayStandPosition::Forefront", (int64)EAtlantaDisplayStandPosition::Forefront },
				{ "EAtlantaDisplayStandPosition::Background", (int64)EAtlantaDisplayStandPosition::Background },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Background.Name", "EAtlantaDisplayStandPosition::Background" },
				{ "Forefront.Name", "EAtlantaDisplayStandPosition::Forefront" },
				{ "ModuleRelativePath", "Public/EAtlantaDisplayStandPosition.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EAtlantaDisplayStandPosition",
				"EAtlantaDisplayStandPosition",
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
