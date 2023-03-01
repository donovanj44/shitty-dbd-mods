// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EPlayerStateChangeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPlayerStateChangeType() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerStateChangeType();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EPlayerStateChangeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EPlayerStateChangeType, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EPlayerStateChangeType"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EPlayerStateChangeType>()
	{
		return EPlayerStateChangeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerStateChangeType(EPlayerStateChangeType_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EPlayerStateChangeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EPlayerStateChangeType_Hash() { return 2271814925U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerStateChangeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerStateChangeType"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EPlayerStateChangeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerStateChangeType::None", (int64)EPlayerStateChangeType::None },
				{ "EPlayerStateChangeType::Negative", (int64)EPlayerStateChangeType::Negative },
				{ "EPlayerStateChangeType::Neutral", (int64)EPlayerStateChangeType::Neutral },
				{ "EPlayerStateChangeType::Positive", (int64)EPlayerStateChangeType::Positive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EPlayerStateChangeType.h" },
				{ "Negative.Name", "EPlayerStateChangeType::Negative" },
				{ "Neutral.Name", "EPlayerStateChangeType::Neutral" },
				{ "None.Name", "EPlayerStateChangeType::None" },
				{ "Positive.Name", "EPlayerStateChangeType::Positive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EPlayerStateChangeType",
				"EPlayerStateChangeType",
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
