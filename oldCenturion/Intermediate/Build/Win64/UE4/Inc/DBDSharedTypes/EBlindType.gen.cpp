// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EBlindType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBlindType() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EBlindType();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EBlindType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EBlindType, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EBlindType"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EBlindType>()
	{
		return EBlindType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlindType(EBlindType_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EBlindType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EBlindType_Hash() { return 2439227009U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EBlindType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlindType"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EBlindType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlindType::VE_None", (int64)EBlindType::VE_None },
				{ "EBlindType::VE_Flashlight", (int64)EBlindType::VE_Flashlight },
				{ "EBlindType::VE_SacrificeSuspended", (int64)EBlindType::VE_SacrificeSuspended },
				{ "EBlindType::VE_Firecracker", (int64)EBlindType::VE_Firecracker },
				{ "EBlindType::VE_MAX", (int64)EBlindType::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EBlindType.h" },
				{ "VE_Firecracker.Name", "EBlindType::VE_Firecracker" },
				{ "VE_Flashlight.Name", "EBlindType::VE_Flashlight" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EBlindType::VE_MAX" },
				{ "VE_None.Name", "EBlindType::VE_None" },
				{ "VE_SacrificeSuspended.Name", "EBlindType::VE_SacrificeSuspended" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EBlindType",
				"EBlindType",
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
