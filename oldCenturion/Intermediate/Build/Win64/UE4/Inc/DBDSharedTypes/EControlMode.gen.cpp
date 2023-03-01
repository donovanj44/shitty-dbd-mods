// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EControlMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEControlMode() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EControlMode();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EControlMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EControlMode, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EControlMode"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EControlMode>()
	{
		return EControlMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EControlMode(EControlMode_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EControlMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EControlMode_Hash() { return 271902832U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EControlMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EControlMode"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EControlMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EControlMode::MOUSE_KB", (int64)EControlMode::MOUSE_KB },
				{ "EControlMode::XBOX", (int64)EControlMode::XBOX },
				{ "EControlMode::PS", (int64)EControlMode::PS },
				{ "EControlMode::VITA", (int64)EControlMode::VITA },
				{ "EControlMode::SWITCH", (int64)EControlMode::SWITCH },
				{ "EControlMode::STADIA", (int64)EControlMode::STADIA },
				{ "EControlMode::SWITCH_PRO", (int64)EControlMode::SWITCH_PRO },
				{ "EControlMode::ATLANTA", (int64)EControlMode::ATLANTA },
				{ "EControlMode::UNDEFINED", (int64)EControlMode::UNDEFINED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ATLANTA.Name", "EControlMode::ATLANTA" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EControlMode.h" },
				{ "MOUSE_KB.Name", "EControlMode::MOUSE_KB" },
				{ "PS.Name", "EControlMode::PS" },
				{ "STADIA.Name", "EControlMode::STADIA" },
				{ "SWITCH.Name", "EControlMode::SWITCH" },
				{ "SWITCH_PRO.Name", "EControlMode::SWITCH_PRO" },
				{ "UNDEFINED.Name", "EControlMode::UNDEFINED" },
				{ "VITA.Name", "EControlMode::VITA" },
				{ "XBOX.Name", "EControlMode::XBOX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EControlMode",
				"EControlMode",
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
