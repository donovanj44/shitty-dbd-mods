// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EAnimNotifyType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAnimNotifyType() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAnimNotifyType();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EAnimNotifyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EAnimNotifyType, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EAnimNotifyType"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EAnimNotifyType>()
	{
		return EAnimNotifyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnimNotifyType(EAnimNotifyType_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EAnimNotifyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EAnimNotifyType_Hash() { return 2468466917U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EAnimNotifyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnimNotifyType"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EAnimNotifyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnimNotifyType::VE_None", (int64)EAnimNotifyType::VE_None },
				{ "EAnimNotifyType::VE_Pickup", (int64)EAnimNotifyType::VE_Pickup },
				{ "EAnimNotifyType::VE_Release", (int64)EAnimNotifyType::VE_Release },
				{ "EAnimNotifyType::VE_MAX", (int64)EAnimNotifyType::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EAnimNotifyType.h" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EAnimNotifyType::VE_MAX" },
				{ "VE_None.Name", "EAnimNotifyType::VE_None" },
				{ "VE_Pickup.Name", "EAnimNotifyType::VE_Pickup" },
				{ "VE_Release.Name", "EAnimNotifyType::VE_Release" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EAnimNotifyType",
				"EAnimNotifyType",
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
