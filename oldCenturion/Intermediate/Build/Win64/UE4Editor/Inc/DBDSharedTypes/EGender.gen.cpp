// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EGender.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGender() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EGender();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EGender_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EGender, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EGender"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EGender>()
	{
		return EGender_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGender(EGender_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EGender"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EGender_Hash() { return 3895119458U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EGender()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGender"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EGender_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGender::VE_Male", (int64)EGender::VE_Male },
				{ "EGender::VE_Female", (int64)EGender::VE_Female },
				{ "EGender::VE_Multiple", (int64)EGender::VE_Multiple },
				{ "EGender::VE_NotHuman", (int64)EGender::VE_NotHuman },
				{ "EGender::VE_Undefined", (int64)EGender::VE_Undefined },
				{ "EGender::VE_MAX", (int64)EGender::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EGender.h" },
				{ "VE_Female.Name", "EGender::VE_Female" },
				{ "VE_Male.Name", "EGender::VE_Male" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EGender::VE_MAX" },
				{ "VE_Multiple.Name", "EGender::VE_Multiple" },
				{ "VE_NotHuman.Name", "EGender::VE_NotHuman" },
				{ "VE_Undefined.Name", "EGender::VE_Undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EGender",
				"EGender",
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
