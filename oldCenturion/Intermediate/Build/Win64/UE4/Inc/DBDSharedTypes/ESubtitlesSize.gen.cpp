// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/ESubtitlesSize.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESubtitlesSize() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESubtitlesSize();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* ESubtitlesSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_ESubtitlesSize, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("ESubtitlesSize"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ESubtitlesSize>()
	{
		return ESubtitlesSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubtitlesSize(ESubtitlesSize_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("ESubtitlesSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_ESubtitlesSize_Hash() { return 2931532280U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_ESubtitlesSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubtitlesSize"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_ESubtitlesSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubtitlesSize::Small", (int64)ESubtitlesSize::Small },
				{ "ESubtitlesSize::Default", (int64)ESubtitlesSize::Default },
				{ "ESubtitlesSize::Large", (int64)ESubtitlesSize::Large },
				{ "ESubtitlesSize::Huge", (int64)ESubtitlesSize::Huge },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Default.Name", "ESubtitlesSize::Default" },
				{ "Huge.Name", "ESubtitlesSize::Huge" },
				{ "Large.Name", "ESubtitlesSize::Large" },
				{ "ModuleRelativePath", "Public/ESubtitlesSize.h" },
				{ "Small.Name", "ESubtitlesSize::Small" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"ESubtitlesSize",
				"ESubtitlesSize",
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
