// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/ECharacterDifficulty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECharacterDifficulty() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECharacterDifficulty();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* ECharacterDifficulty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_ECharacterDifficulty, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("ECharacterDifficulty"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ECharacterDifficulty>()
	{
		return ECharacterDifficulty_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterDifficulty(ECharacterDifficulty_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("ECharacterDifficulty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_ECharacterDifficulty_Hash() { return 3085472682U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_ECharacterDifficulty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterDifficulty"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_ECharacterDifficulty_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterDifficulty::VE_Easy", (int64)ECharacterDifficulty::VE_Easy },
				{ "ECharacterDifficulty::VE_Intermediate", (int64)ECharacterDifficulty::VE_Intermediate },
				{ "ECharacterDifficulty::VE_Hard", (int64)ECharacterDifficulty::VE_Hard },
				{ "ECharacterDifficulty::VE_MAX", (int64)ECharacterDifficulty::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECharacterDifficulty.h" },
				{ "VE_Easy.Name", "ECharacterDifficulty::VE_Easy" },
				{ "VE_Hard.Name", "ECharacterDifficulty::VE_Hard" },
				{ "VE_Intermediate.Name", "ECharacterDifficulty::VE_Intermediate" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "ECharacterDifficulty::VE_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"ECharacterDifficulty",
				"ECharacterDifficulty",
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
