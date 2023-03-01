// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/ETestBuildType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETestBuildType() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ETestBuildType();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* ETestBuildType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_ETestBuildType, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("ETestBuildType"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ETestBuildType>()
	{
		return ETestBuildType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETestBuildType(ETestBuildType_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("ETestBuildType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_ETestBuildType_Hash() { return 2455179826U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_ETestBuildType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETestBuildType"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_ETestBuildType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETestBuildType::None", (int64)ETestBuildType::None },
				{ "ETestBuildType::PublicTestBuild", (int64)ETestBuildType::PublicTestBuild },
				{ "ETestBuildType::PaxBuild", (int64)ETestBuildType::PaxBuild },
				{ "ETestBuildType::ConsolePreAlphaBuild", (int64)ETestBuildType::ConsolePreAlphaBuild },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ConsolePreAlphaBuild.Name", "ETestBuildType::ConsolePreAlphaBuild" },
				{ "ModuleRelativePath", "Public/ETestBuildType.h" },
				{ "None.Name", "ETestBuildType::None" },
				{ "PaxBuild.Name", "ETestBuildType::PaxBuild" },
				{ "PublicTestBuild.Name", "ETestBuildType::PublicTestBuild" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"ETestBuildType",
				"ETestBuildType",
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
