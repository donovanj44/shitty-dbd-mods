// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EHudScreenIndicatorType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHudScreenIndicatorType() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EHudScreenIndicatorType();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EHudScreenIndicatorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EHudScreenIndicatorType, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EHudScreenIndicatorType"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EHudScreenIndicatorType>()
	{
		return EHudScreenIndicatorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHudScreenIndicatorType(EHudScreenIndicatorType_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EHudScreenIndicatorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EHudScreenIndicatorType_Hash() { return 4144507596U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EHudScreenIndicatorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHudScreenIndicatorType"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EHudScreenIndicatorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHudScreenIndicatorType::None", (int64)EHudScreenIndicatorType::None },
				{ "EHudScreenIndicatorType::LoudNoise", (int64)EHudScreenIndicatorType::LoudNoise },
				{ "EHudScreenIndicatorType::StealthBroken", (int64)EHudScreenIndicatorType::StealthBroken },
				{ "EHudScreenIndicatorType::Objective", (int64)EHudScreenIndicatorType::Objective },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LoudNoise.Name", "EHudScreenIndicatorType::LoudNoise" },
				{ "ModuleRelativePath", "Public/EHudScreenIndicatorType.h" },
				{ "None.Name", "EHudScreenIndicatorType::None" },
				{ "Objective.Name", "EHudScreenIndicatorType::Objective" },
				{ "StealthBroken.Name", "EHudScreenIndicatorType::StealthBroken" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EHudScreenIndicatorType",
				"EHudScreenIndicatorType",
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
