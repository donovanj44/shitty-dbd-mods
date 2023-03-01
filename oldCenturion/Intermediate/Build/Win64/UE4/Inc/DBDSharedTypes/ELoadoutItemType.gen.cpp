// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/ELoadoutItemType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELoadoutItemType() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ELoadoutItemType();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* ELoadoutItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_ELoadoutItemType, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("ELoadoutItemType"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ELoadoutItemType>()
	{
		return ELoadoutItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoadoutItemType(ELoadoutItemType_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("ELoadoutItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_ELoadoutItemType_Hash() { return 25109313U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_ELoadoutItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoadoutItemType"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_ELoadoutItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELoadoutItemType::None", (int64)ELoadoutItemType::None },
				{ "ELoadoutItemType::Medkit", (int64)ELoadoutItemType::Medkit },
				{ "ELoadoutItemType::Toolbox", (int64)ELoadoutItemType::Toolbox },
				{ "ELoadoutItemType::Flashlight", (int64)ELoadoutItemType::Flashlight },
				{ "ELoadoutItemType::Key", (int64)ELoadoutItemType::Key },
				{ "ELoadoutItemType::Map", (int64)ELoadoutItemType::Map },
				{ "ELoadoutItemType::Firecracker", (int64)ELoadoutItemType::Firecracker },
				{ "ELoadoutItemType::Flashbang", (int64)ELoadoutItemType::Flashbang },
				{ "ELoadoutItemType::Count", (int64)ELoadoutItemType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Name", "ELoadoutItemType::Count" },
				{ "Firecracker.Name", "ELoadoutItemType::Firecracker" },
				{ "Flashbang.Name", "ELoadoutItemType::Flashbang" },
				{ "Flashlight.Name", "ELoadoutItemType::Flashlight" },
				{ "Key.Name", "ELoadoutItemType::Key" },
				{ "Map.Name", "ELoadoutItemType::Map" },
				{ "Medkit.Name", "ELoadoutItemType::Medkit" },
				{ "ModuleRelativePath", "Public/ELoadoutItemType.h" },
				{ "None.Name", "ELoadoutItemType::None" },
				{ "Toolbox.Name", "ELoadoutItemType::Toolbox" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"ELoadoutItemType",
				"ELoadoutItemType",
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
