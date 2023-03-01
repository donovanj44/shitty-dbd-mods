// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Activation/Public/EActivationStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEActivationStrategy() {}
// Cross Module References
	ACTIVATION_API UEnum* Z_Construct_UEnum_Activation_EActivationStrategy();
	UPackage* Z_Construct_UPackage__Script_Activation();
// End Cross Module References
	static UEnum* EActivationStrategy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Activation_EActivationStrategy, Z_Construct_UPackage__Script_Activation(), TEXT("EActivationStrategy"));
		}
		return Singleton;
	}
	template<> ACTIVATION_API UEnum* StaticEnum<EActivationStrategy>()
	{
		return EActivationStrategy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EActivationStrategy(EActivationStrategy_StaticEnum, TEXT("/Script/Activation"), TEXT("EActivationStrategy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Activation_EActivationStrategy_Hash() { return 1599247507U; }
	UEnum* Z_Construct_UEnum_Activation_EActivationStrategy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Activation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EActivationStrategy"), 0, Get_Z_Construct_UEnum_Activation_EActivationStrategy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EActivationStrategy::ActivateIfAnyTagMatches", (int64)EActivationStrategy::ActivateIfAnyTagMatches },
				{ "EActivationStrategy::ActivateIfAllTagMatches", (int64)EActivationStrategy::ActivateIfAllTagMatches },
				{ "EActivationStrategy::DeactivateIfAnyTagMatches", (int64)EActivationStrategy::DeactivateIfAnyTagMatches },
				{ "EActivationStrategy::DeactivateIfAllTagMatches", (int64)EActivationStrategy::DeactivateIfAllTagMatches },
				{ "EActivationStrategy::DeactivateWhenDependenciesAreDeactivated", (int64)EActivationStrategy::DeactivateWhenDependenciesAreDeactivated },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActivateIfAllTagMatches.Name", "EActivationStrategy::ActivateIfAllTagMatches" },
				{ "ActivateIfAnyTagMatches.Name", "EActivationStrategy::ActivateIfAnyTagMatches" },
				{ "DeactivateIfAllTagMatches.Name", "EActivationStrategy::DeactivateIfAllTagMatches" },
				{ "DeactivateIfAnyTagMatches.Name", "EActivationStrategy::DeactivateIfAnyTagMatches" },
				{ "DeactivateWhenDependenciesAreDeactivated.Name", "EActivationStrategy::DeactivateWhenDependenciesAreDeactivated" },
				{ "ModuleRelativePath", "Public/EActivationStrategy.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Activation,
				nullptr,
				"EActivationStrategy",
				"EActivationStrategy",
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
