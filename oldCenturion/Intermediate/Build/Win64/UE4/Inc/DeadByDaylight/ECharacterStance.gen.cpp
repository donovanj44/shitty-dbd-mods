// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ECharacterStance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECharacterStance() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECharacterStance();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ECharacterStance_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ECharacterStance, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ECharacterStance"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ECharacterStance>()
	{
		return ECharacterStance_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterStance(ECharacterStance_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ECharacterStance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ECharacterStance_Hash() { return 55875330U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ECharacterStance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterStance"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ECharacterStance_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterStance::VE_Stand", (int64)ECharacterStance::VE_Stand },
				{ "ECharacterStance::VE_Crouch", (int64)ECharacterStance::VE_Crouch },
				{ "ECharacterStance::VE_Crawl", (int64)ECharacterStance::VE_Crawl },
				{ "ECharacterStance::VE_MAX", (int64)ECharacterStance::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECharacterStance.h" },
				{ "VE_Crawl.Name", "ECharacterStance::VE_Crawl" },
				{ "VE_Crouch.Name", "ECharacterStance::VE_Crouch" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "ECharacterStance::VE_MAX" },
				{ "VE_Stand.Name", "ECharacterStance::VE_Stand" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ECharacterStance",
				"ECharacterStance",
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
