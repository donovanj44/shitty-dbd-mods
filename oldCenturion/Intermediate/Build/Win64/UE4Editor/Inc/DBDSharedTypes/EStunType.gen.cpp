// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EStunType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStunType() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EStunType();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EStunType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EStunType, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EStunType"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EStunType>()
	{
		return EStunType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStunType(EStunType_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EStunType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EStunType_Hash() { return 1662806513U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EStunType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStunType"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EStunType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStunType::VE_None", (int64)EStunType::VE_None },
				{ "EStunType::VE_Bookshelf", (int64)EStunType::VE_Bookshelf },
				{ "EStunType::VE_BearTrap", (int64)EStunType::VE_BearTrap },
				{ "EStunType::VE_Flashlight", (int64)EStunType::VE_Flashlight },
				{ "EStunType::VE_WiggleFree", (int64)EStunType::VE_WiggleFree },
				{ "EStunType::VE_EvilWithin", (int64)EStunType::VE_EvilWithin },
				{ "EStunType::VE_Kicked", (int64)EStunType::VE_Kicked },
				{ "EStunType::VE_Closet", (int64)EStunType::VE_Closet },
				{ "EStunType::VE_HarpoonRifle", (int64)EStunType::VE_HarpoonRifle },
				{ "EStunType::VE_GeneratorTrap", (int64)EStunType::VE_GeneratorTrap },
				{ "EStunType::VE_MAX", (int64)EStunType::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EStunType.h" },
				{ "VE_BearTrap.Name", "EStunType::VE_BearTrap" },
				{ "VE_Bookshelf.Name", "EStunType::VE_Bookshelf" },
				{ "VE_Closet.Name", "EStunType::VE_Closet" },
				{ "VE_EvilWithin.Name", "EStunType::VE_EvilWithin" },
				{ "VE_Flashlight.Name", "EStunType::VE_Flashlight" },
				{ "VE_GeneratorTrap.Name", "EStunType::VE_GeneratorTrap" },
				{ "VE_HarpoonRifle.Name", "EStunType::VE_HarpoonRifle" },
				{ "VE_Kicked.Name", "EStunType::VE_Kicked" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EStunType::VE_MAX" },
				{ "VE_None.Name", "EStunType::VE_None" },
				{ "VE_WiggleFree.Name", "EStunType::VE_WiggleFree" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EStunType",
				"EStunType",
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
