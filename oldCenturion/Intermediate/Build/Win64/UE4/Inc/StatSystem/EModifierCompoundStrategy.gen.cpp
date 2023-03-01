// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatSystem/Public/EModifierCompoundStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEModifierCompoundStrategy() {}
// Cross Module References
	STATSYSTEM_API UEnum* Z_Construct_UEnum_StatSystem_EModifierCompoundStrategy();
	UPackage* Z_Construct_UPackage__Script_StatSystem();
// End Cross Module References
	static UEnum* EModifierCompoundStrategy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatSystem_EModifierCompoundStrategy, Z_Construct_UPackage__Script_StatSystem(), TEXT("EModifierCompoundStrategy"));
		}
		return Singleton;
	}
	template<> STATSYSTEM_API UEnum* StaticEnum<EModifierCompoundStrategy>()
	{
		return EModifierCompoundStrategy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModifierCompoundStrategy(EModifierCompoundStrategy_StaticEnum, TEXT("/Script/StatSystem"), TEXT("EModifierCompoundStrategy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatSystem_EModifierCompoundStrategy_Hash() { return 2336027959U; }
	UEnum* Z_Construct_UEnum_StatSystem_EModifierCompoundStrategy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModifierCompoundStrategy"), 0, Get_Z_Construct_UEnum_StatSystem_EModifierCompoundStrategy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModifierCompoundStrategy::Add", (int64)EModifierCompoundStrategy::Add },
				{ "EModifierCompoundStrategy::AddPlusOne", (int64)EModifierCompoundStrategy::AddPlusOne },
				{ "EModifierCompoundStrategy::Min", (int64)EModifierCompoundStrategy::Min },
				{ "EModifierCompoundStrategy::Max", (int64)EModifierCompoundStrategy::Max },
				{ "EModifierCompoundStrategy::Mult", (int64)EModifierCompoundStrategy::Mult },
				{ "EModifierCompoundStrategy::MultWithCompoundNegative", (int64)EModifierCompoundStrategy::MultWithCompoundNegative },
				{ "EModifierCompoundStrategy::MultWithCompoundNegativeMinusOne", (int64)EModifierCompoundStrategy::MultWithCompoundNegativeMinusOne },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Add.Name", "EModifierCompoundStrategy::Add" },
				{ "AddPlusOne.Name", "EModifierCompoundStrategy::AddPlusOne" },
				{ "Max.Name", "EModifierCompoundStrategy::Max" },
				{ "Min.Name", "EModifierCompoundStrategy::Min" },
				{ "ModuleRelativePath", "Public/EModifierCompoundStrategy.h" },
				{ "Mult.Name", "EModifierCompoundStrategy::Mult" },
				{ "MultWithCompoundNegative.Name", "EModifierCompoundStrategy::MultWithCompoundNegative" },
				{ "MultWithCompoundNegativeMinusOne.Name", "EModifierCompoundStrategy::MultWithCompoundNegativeMinusOne" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatSystem,
				nullptr,
				"EModifierCompoundStrategy",
				"EModifierCompoundStrategy",
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
