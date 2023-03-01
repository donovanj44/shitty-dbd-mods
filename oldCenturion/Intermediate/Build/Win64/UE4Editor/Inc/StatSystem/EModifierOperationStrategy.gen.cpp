// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatSystem/Public/EModifierOperationStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEModifierOperationStrategy() {}
// Cross Module References
	STATSYSTEM_API UEnum* Z_Construct_UEnum_StatSystem_EModifierOperationStrategy();
	UPackage* Z_Construct_UPackage__Script_StatSystem();
// End Cross Module References
	static UEnum* EModifierOperationStrategy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatSystem_EModifierOperationStrategy, Z_Construct_UPackage__Script_StatSystem(), TEXT("EModifierOperationStrategy"));
		}
		return Singleton;
	}
	template<> STATSYSTEM_API UEnum* StaticEnum<EModifierOperationStrategy>()
	{
		return EModifierOperationStrategy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModifierOperationStrategy(EModifierOperationStrategy_StaticEnum, TEXT("/Script/StatSystem"), TEXT("EModifierOperationStrategy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatSystem_EModifierOperationStrategy_Hash() { return 1214169258U; }
	UEnum* Z_Construct_UEnum_StatSystem_EModifierOperationStrategy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModifierOperationStrategy"), 0, Get_Z_Construct_UEnum_StatSystem_EModifierOperationStrategy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModifierOperationStrategy::Add", (int64)EModifierOperationStrategy::Add },
				{ "EModifierOperationStrategy::Subs", (int64)EModifierOperationStrategy::Subs },
				{ "EModifierOperationStrategy::Mult", (int64)EModifierOperationStrategy::Mult },
				{ "EModifierOperationStrategy::Div", (int64)EModifierOperationStrategy::Div },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Add.Name", "EModifierOperationStrategy::Add" },
				{ "Div.Name", "EModifierOperationStrategy::Div" },
				{ "ModuleRelativePath", "Public/EModifierOperationStrategy.h" },
				{ "Mult.Name", "EModifierOperationStrategy::Mult" },
				{ "Subs.Name", "EModifierOperationStrategy::Subs" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatSystem,
				nullptr,
				"EModifierOperationStrategy",
				"EModifierOperationStrategy",
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
