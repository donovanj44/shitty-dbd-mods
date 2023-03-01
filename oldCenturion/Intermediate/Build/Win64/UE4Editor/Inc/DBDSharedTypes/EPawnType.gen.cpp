// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EPawnType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPawnType() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPawnType();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EPawnType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EPawnType, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EPawnType"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EPawnType>()
	{
		return EPawnType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPawnType(EPawnType_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EPawnType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EPawnType_Hash() { return 3936531194U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EPawnType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPawnType"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EPawnType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPawnType::VE_None", (int64)EPawnType::VE_None },
				{ "EPawnType::VE_Killer", (int64)EPawnType::VE_Killer },
				{ "EPawnType::VE_Survivor", (int64)EPawnType::VE_Survivor },
				{ "EPawnType::VE_Sidekick", (int64)EPawnType::VE_Sidekick },
				{ "EPawnType::VE_MAX", (int64)EPawnType::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EPawnType.h" },
				{ "VE_Killer.Name", "EPawnType::VE_Killer" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EPawnType::VE_MAX" },
				{ "VE_None.Name", "EPawnType::VE_None" },
				{ "VE_Sidekick.Name", "EPawnType::VE_Sidekick" },
				{ "VE_Survivor.Name", "EPawnType::VE_Survivor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EPawnType",
				"EPawnType",
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
