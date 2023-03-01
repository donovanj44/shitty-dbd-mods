// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/ESubtitlesPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESubtitlesPosition() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESubtitlesPosition();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* ESubtitlesPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_ESubtitlesPosition, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("ESubtitlesPosition"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ESubtitlesPosition>()
	{
		return ESubtitlesPosition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubtitlesPosition(ESubtitlesPosition_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("ESubtitlesPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_ESubtitlesPosition_Hash() { return 2806814607U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_ESubtitlesPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubtitlesPosition"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_ESubtitlesPosition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubtitlesPosition::HUD", (int64)ESubtitlesPosition::HUD },
				{ "ESubtitlesPosition::Menus", (int64)ESubtitlesPosition::Menus },
				{ "ESubtitlesPosition::Cinematics", (int64)ESubtitlesPosition::Cinematics },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Cinematics.Name", "ESubtitlesPosition::Cinematics" },
				{ "HUD.Name", "ESubtitlesPosition::HUD" },
				{ "Menus.Name", "ESubtitlesPosition::Menus" },
				{ "ModuleRelativePath", "Public/ESubtitlesPosition.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"ESubtitlesPosition",
				"ESubtitlesPosition",
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
