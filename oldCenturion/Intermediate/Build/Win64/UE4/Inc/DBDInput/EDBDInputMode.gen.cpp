// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInput/Public/EDBDInputMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDBDInputMode() {}
// Cross Module References
	DBDINPUT_API UEnum* Z_Construct_UEnum_DBDInput_EDBDInputMode();
	UPackage* Z_Construct_UPackage__Script_DBDInput();
// End Cross Module References
	static UEnum* EDBDInputMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDInput_EDBDInputMode, Z_Construct_UPackage__Script_DBDInput(), TEXT("EDBDInputMode"));
		}
		return Singleton;
	}
	template<> DBDINPUT_API UEnum* StaticEnum<EDBDInputMode>()
	{
		return EDBDInputMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDBDInputMode(EDBDInputMode_StaticEnum, TEXT("/Script/DBDInput"), TEXT("EDBDInputMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDInput_EDBDInputMode_Hash() { return 2551724395U; }
	UEnum* Z_Construct_UEnum_DBDInput_EDBDInputMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDBDInputMode"), 0, Get_Z_Construct_UEnum_DBDInput_EDBDInputMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDBDInputMode::None", (int64)EDBDInputMode::None },
				{ "EDBDInputMode::Scaleform", (int64)EDBDInputMode::Scaleform },
				{ "EDBDInputMode::UMG", (int64)EDBDInputMode::UMG },
				{ "EDBDInputMode::Game", (int64)EDBDInputMode::Game },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Game.Name", "EDBDInputMode::Game" },
				{ "ModuleRelativePath", "Public/EDBDInputMode.h" },
				{ "None.Name", "EDBDInputMode::None" },
				{ "Scaleform.Name", "EDBDInputMode::Scaleform" },
				{ "UMG.Name", "EDBDInputMode::UMG" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDInput,
				nullptr,
				"EDBDInputMode",
				"EDBDInputMode",
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
