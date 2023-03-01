// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EAttackSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAttackSubstate() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EAttackSubstate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EAttackSubstate"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EAttackSubstate>()
	{
		return EAttackSubstate_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttackSubstate(EAttackSubstate_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EAttackSubstate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate_Hash() { return 1868087751U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttackSubstate"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EAttackSubstate_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttackSubstate::VE_None", (int64)EAttackSubstate::VE_None },
				{ "EAttackSubstate::VE_Open", (int64)EAttackSubstate::VE_Open },
				{ "EAttackSubstate::VE_Hitting", (int64)EAttackSubstate::VE_Hitting },
				{ "EAttackSubstate::VE_HitSucceed", (int64)EAttackSubstate::VE_HitSucceed },
				{ "EAttackSubstate::VE_HitMiss", (int64)EAttackSubstate::VE_HitMiss },
				{ "EAttackSubstate::VE_HitObstructed", (int64)EAttackSubstate::VE_HitObstructed },
				{ "EAttackSubstate::VE_Done", (int64)EAttackSubstate::VE_Done },
				{ "EAttackSubstate::VE_MAX", (int64)EAttackSubstate::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAttackSubstate.h" },
				{ "VE_Done.Name", "EAttackSubstate::VE_Done" },
				{ "VE_HitMiss.Name", "EAttackSubstate::VE_HitMiss" },
				{ "VE_HitObstructed.Name", "EAttackSubstate::VE_HitObstructed" },
				{ "VE_HitSucceed.Name", "EAttackSubstate::VE_HitSucceed" },
				{ "VE_Hitting.Name", "EAttackSubstate::VE_Hitting" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EAttackSubstate::VE_MAX" },
				{ "VE_None.Name", "EAttackSubstate::VE_None" },
				{ "VE_Open.Name", "EAttackSubstate::VE_Open" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EAttackSubstate",
				"EAttackSubstate",
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
