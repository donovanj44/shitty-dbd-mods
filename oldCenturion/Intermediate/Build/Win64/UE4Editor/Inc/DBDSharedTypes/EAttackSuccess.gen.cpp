// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EAttackSuccess.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAttackSuccess() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackSuccess();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EAttackSuccess_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EAttackSuccess, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EAttackSuccess"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EAttackSuccess>()
	{
		return EAttackSuccess_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttackSuccess(EAttackSuccess_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EAttackSuccess"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EAttackSuccess_Hash() { return 1820797903U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackSuccess()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttackSuccess"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EAttackSuccess_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttackSuccess::VE_None", (int64)EAttackSuccess::VE_None },
				{ "EAttackSuccess::VE_Success", (int64)EAttackSuccess::VE_Success },
				{ "EAttackSuccess::VE_Failure", (int64)EAttackSuccess::VE_Failure },
				{ "EAttackSuccess::VE_Obstructed", (int64)EAttackSuccess::VE_Obstructed },
				{ "EAttackSuccess::VE_MAX", (int64)EAttackSuccess::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EAttackSuccess.h" },
				{ "VE_Failure.Name", "EAttackSuccess::VE_Failure" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EAttackSuccess::VE_MAX" },
				{ "VE_None.Name", "EAttackSuccess::VE_None" },
				{ "VE_Obstructed.Name", "EAttackSuccess::VE_Obstructed" },
				{ "VE_Success.Name", "EAttackSuccess::VE_Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EAttackSuccess",
				"EAttackSuccess",
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
