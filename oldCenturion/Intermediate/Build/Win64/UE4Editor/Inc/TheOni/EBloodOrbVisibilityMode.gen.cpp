// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/EBloodOrbVisibilityMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBloodOrbVisibilityMode() {}
// Cross Module References
	THEONI_API UEnum* Z_Construct_UEnum_TheOni_EBloodOrbVisibilityMode();
	UPackage* Z_Construct_UPackage__Script_TheOni();
// End Cross Module References
	static UEnum* EBloodOrbVisibilityMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheOni_EBloodOrbVisibilityMode, Z_Construct_UPackage__Script_TheOni(), TEXT("EBloodOrbVisibilityMode"));
		}
		return Singleton;
	}
	template<> THEONI_API UEnum* StaticEnum<EBloodOrbVisibilityMode>()
	{
		return EBloodOrbVisibilityMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBloodOrbVisibilityMode(EBloodOrbVisibilityMode_StaticEnum, TEXT("/Script/TheOni"), TEXT("EBloodOrbVisibilityMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheOni_EBloodOrbVisibilityMode_Hash() { return 1949658732U; }
	UEnum* Z_Construct_UEnum_TheOni_EBloodOrbVisibilityMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheOni();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBloodOrbVisibilityMode"), 0, Get_Z_Construct_UEnum_TheOni_EBloodOrbVisibilityMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBloodOrbVisibilityMode::VisibleWithinRange", (int64)EBloodOrbVisibilityMode::VisibleWithinRange },
				{ "EBloodOrbVisibilityMode::HideAll", (int64)EBloodOrbVisibilityMode::HideAll },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HideAll.Name", "EBloodOrbVisibilityMode::HideAll" },
				{ "ModuleRelativePath", "Public/EBloodOrbVisibilityMode.h" },
				{ "VisibleWithinRange.Name", "EBloodOrbVisibilityMode::VisibleWithinRange" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheOni,
				nullptr,
				"EBloodOrbVisibilityMode",
				"EBloodOrbVisibilityMode",
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
