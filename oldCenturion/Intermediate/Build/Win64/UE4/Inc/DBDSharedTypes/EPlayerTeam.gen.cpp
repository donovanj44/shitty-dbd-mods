// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EPlayerTeam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPlayerTeam() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerTeam();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EPlayerTeam_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EPlayerTeam, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EPlayerTeam"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EPlayerTeam>()
	{
		return EPlayerTeam_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerTeam(EPlayerTeam_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EPlayerTeam"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EPlayerTeam_Hash() { return 2210801583U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerTeam()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerTeam"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EPlayerTeam_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerTeam::VE_None", (int64)EPlayerTeam::VE_None },
				{ "EPlayerTeam::VE_Killer", (int64)EPlayerTeam::VE_Killer },
				{ "EPlayerTeam::VE_Survivor", (int64)EPlayerTeam::VE_Survivor },
				{ "EPlayerTeam::VE_MAX", (int64)EPlayerTeam::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EPlayerTeam.h" },
				{ "VE_Killer.Name", "EPlayerTeam::VE_Killer" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EPlayerTeam::VE_MAX" },
				{ "VE_None.Name", "EPlayerTeam::VE_None" },
				{ "VE_Survivor.Name", "EPlayerTeam::VE_Survivor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EPlayerTeam",
				"EPlayerTeam",
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
