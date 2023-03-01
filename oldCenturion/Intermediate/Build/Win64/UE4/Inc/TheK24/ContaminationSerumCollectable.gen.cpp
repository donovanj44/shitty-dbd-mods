// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ContaminationSerumCollectable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContaminationSerumCollectable() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_AContaminationSerumCollectable_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_AContaminationSerumCollectable();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_ABaseCamperCollectable();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void AContaminationSerumCollectable::StaticRegisterNativesAContaminationSerumCollectable()
	{
	}
	UClass* Z_Construct_UClass_AContaminationSerumCollectable_NoRegister()
	{
		return AContaminationSerumCollectable::StaticClass();
	}
	struct Z_Construct_UClass_AContaminationSerumCollectable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AContaminationSerumCollectable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCamperCollectable,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContaminationSerumCollectable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContaminationSerumCollectable.h" },
		{ "ModuleRelativePath", "Public/ContaminationSerumCollectable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AContaminationSerumCollectable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AContaminationSerumCollectable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AContaminationSerumCollectable_Statics::ClassParams = {
		&AContaminationSerumCollectable::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AContaminationSerumCollectable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AContaminationSerumCollectable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AContaminationSerumCollectable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AContaminationSerumCollectable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AContaminationSerumCollectable, 2129831194);
	template<> THEK24_API UClass* StaticClass<AContaminationSerumCollectable>()
	{
		return AContaminationSerumCollectable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AContaminationSerumCollectable(Z_Construct_UClass_AContaminationSerumCollectable, &AContaminationSerumCollectable::StaticClass, TEXT("/Script/TheK24"), TEXT("AContaminationSerumCollectable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AContaminationSerumCollectable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
