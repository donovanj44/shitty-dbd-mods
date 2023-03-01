// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EAfflictionLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAfflictionLevel() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAfflictionLevel();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EAfflictionLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EAfflictionLevel, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EAfflictionLevel"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EAfflictionLevel>()
	{
		return EAfflictionLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAfflictionLevel(EAfflictionLevel_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EAfflictionLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EAfflictionLevel_Hash() { return 1296267977U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EAfflictionLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAfflictionLevel"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EAfflictionLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAfflictionLevel::Off", (int64)EAfflictionLevel::Off },
				{ "EAfflictionLevel::Level1", (int64)EAfflictionLevel::Level1 },
				{ "EAfflictionLevel::Level2", (int64)EAfflictionLevel::Level2 },
				{ "EAfflictionLevel::Level3", (int64)EAfflictionLevel::Level3 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Level1.Name", "EAfflictionLevel::Level1" },
				{ "Level2.Name", "EAfflictionLevel::Level2" },
				{ "Level3.Name", "EAfflictionLevel::Level3" },
				{ "ModuleRelativePath", "Public/EAfflictionLevel.h" },
				{ "Off.Name", "EAfflictionLevel::Off" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EAfflictionLevel",
				"EAfflictionLevel",
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
