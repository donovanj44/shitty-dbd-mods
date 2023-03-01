// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EProceduralDebugMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEProceduralDebugMode() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EProceduralDebugMode();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EProceduralDebugMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EProceduralDebugMode, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EProceduralDebugMode"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EProceduralDebugMode>()
	{
		return EProceduralDebugMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProceduralDebugMode(EProceduralDebugMode_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EProceduralDebugMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EProceduralDebugMode_Hash() { return 1226120835U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EProceduralDebugMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProceduralDebugMode"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EProceduralDebugMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EProceduralDebugMode::None", (int64)EProceduralDebugMode::None },
				{ "EProceduralDebugMode::NoMap", (int64)EProceduralDebugMode::NoMap },
				{ "EProceduralDebugMode::TilesSmall", (int64)EProceduralDebugMode::TilesSmall },
				{ "EProceduralDebugMode::TilesBig", (int64)EProceduralDebugMode::TilesBig },
				{ "EProceduralDebugMode::Count", (int64)EProceduralDebugMode::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Count.Name", "EProceduralDebugMode::Count" },
				{ "ModuleRelativePath", "Public/EProceduralDebugMode.h" },
				{ "NoMap.Name", "EProceduralDebugMode::NoMap" },
				{ "None.Name", "EProceduralDebugMode::None" },
				{ "TilesBig.Name", "EProceduralDebugMode::TilesBig" },
				{ "TilesSmall.Name", "EProceduralDebugMode::TilesSmall" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EProceduralDebugMode",
				"EProceduralDebugMode",
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
