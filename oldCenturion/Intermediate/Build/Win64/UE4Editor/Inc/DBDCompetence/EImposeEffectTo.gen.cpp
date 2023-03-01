// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/EImposeEffectTo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEImposeEffectTo() {}
// Cross Module References
	DBDCOMPETENCE_API UEnum* Z_Construct_UEnum_DBDCompetence_EImposeEffectTo();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	static UEnum* EImposeEffectTo_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDCompetence_EImposeEffectTo, Z_Construct_UPackage__Script_DBDCompetence(), TEXT("EImposeEffectTo"));
		}
		return Singleton;
	}
	template<> DBDCOMPETENCE_API UEnum* StaticEnum<EImposeEffectTo>()
	{
		return EImposeEffectTo_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EImposeEffectTo(EImposeEffectTo_StaticEnum, TEXT("/Script/DBDCompetence"), TEXT("EImposeEffectTo"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDCompetence_EImposeEffectTo_Hash() { return 2724257985U; }
	UEnum* Z_Construct_UEnum_DBDCompetence_EImposeEffectTo()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDCompetence();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EImposeEffectTo"), 0, Get_Z_Construct_UEnum_DBDCompetence_EImposeEffectTo_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EImposeEffectTo::EventInstigator", (int64)EImposeEffectTo::EventInstigator },
				{ "EImposeEffectTo::EventTarget", (int64)EImposeEffectTo::EventTarget },
				{ "EImposeEffectTo::AddonOwner", (int64)EImposeEffectTo::AddonOwner },
				{ "EImposeEffectTo::AllSurvivors", (int64)EImposeEffectTo::AllSurvivors },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AddonOwner.Name", "EImposeEffectTo::AddonOwner" },
				{ "AllSurvivors.Name", "EImposeEffectTo::AllSurvivors" },
				{ "EventInstigator.Name", "EImposeEffectTo::EventInstigator" },
				{ "EventTarget.Name", "EImposeEffectTo::EventTarget" },
				{ "ModuleRelativePath", "Public/EImposeEffectTo.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDCompetence,
				nullptr,
				"EImposeEffectTo",
				"EImposeEffectTo",
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
