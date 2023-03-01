// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAtlantaTutorialParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAtlantaTutorialParameters() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAtlantaTutorialParameters_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAtlantaTutorialParameters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDAtlantaTutorialParameters::StaticRegisterNativesUDBDAtlantaTutorialParameters()
	{
	}
	UClass* Z_Construct_UClass_UDBDAtlantaTutorialParameters_NoRegister()
	{
		return UDBDAtlantaTutorialParameters::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAtlantaTutorialParameters_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvTutorial_WiggleChargeRateMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurvTutorial_WiggleChargeRateMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAtlantaTutorialParameters_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAtlantaTutorialParameters_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDAtlantaTutorialParameters.h" },
		{ "ModuleRelativePath", "Public/DBDAtlantaTutorialParameters.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAtlantaTutorialParameters_Statics::NewProp_SurvTutorial_WiggleChargeRateMultiplier_MetaData[] = {
		{ "Category", "DBDAtlantaTutorialParameters" },
		{ "ModuleRelativePath", "Public/DBDAtlantaTutorialParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDAtlantaTutorialParameters_Statics::NewProp_SurvTutorial_WiggleChargeRateMultiplier = { "SurvTutorial_WiggleChargeRateMultiplier", nullptr, (EPropertyFlags)0x0010000002000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAtlantaTutorialParameters, SurvTutorial_WiggleChargeRateMultiplier), METADATA_PARAMS(Z_Construct_UClass_UDBDAtlantaTutorialParameters_Statics::NewProp_SurvTutorial_WiggleChargeRateMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAtlantaTutorialParameters_Statics::NewProp_SurvTutorial_WiggleChargeRateMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDAtlantaTutorialParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAtlantaTutorialParameters_Statics::NewProp_SurvTutorial_WiggleChargeRateMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAtlantaTutorialParameters_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAtlantaTutorialParameters>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAtlantaTutorialParameters_Statics::ClassParams = {
		&UDBDAtlantaTutorialParameters::StaticClass,
		"Design",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDAtlantaTutorialParameters_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAtlantaTutorialParameters_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDAtlantaTutorialParameters_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAtlantaTutorialParameters_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAtlantaTutorialParameters()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAtlantaTutorialParameters_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAtlantaTutorialParameters, 2927791572);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDAtlantaTutorialParameters>()
	{
		return UDBDAtlantaTutorialParameters::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAtlantaTutorialParameters(Z_Construct_UClass_UDBDAtlantaTutorialParameters, &UDBDAtlantaTutorialParameters::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDAtlantaTutorialParameters"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAtlantaTutorialParameters);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
