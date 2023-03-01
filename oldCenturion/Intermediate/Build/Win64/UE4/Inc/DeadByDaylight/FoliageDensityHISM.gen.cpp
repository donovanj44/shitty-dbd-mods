// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FoliageDensityHISM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageDensityHISM() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFoliageDensityHISM_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFoliageDensityHISM();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UFoliageDensityHISM::StaticRegisterNativesUFoliageDensityHISM()
	{
	}
	UClass* Z_Construct_UClass_UFoliageDensityHISM_NoRegister()
	{
		return UFoliageDensityHISM::StaticClass();
	}
	struct Z_Construct_UClass_UFoliageDensityHISM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoliageDensityHISM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageDensityHISM_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "FoliageDensityHISM.h" },
		{ "ModuleRelativePath", "Public/FoliageDensityHISM.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoliageDensityHISM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageDensityHISM>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFoliageDensityHISM_Statics::ClassParams = {
		&UFoliageDensityHISM::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFoliageDensityHISM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageDensityHISM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoliageDensityHISM()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFoliageDensityHISM_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFoliageDensityHISM, 1242079871);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UFoliageDensityHISM>()
	{
		return UFoliageDensityHISM::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFoliageDensityHISM(Z_Construct_UClass_UFoliageDensityHISM, &UFoliageDensityHISM::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UFoliageDensityHISM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageDensityHISM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
