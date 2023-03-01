// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheLegion/Public/Madgrit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMadgrit() {}
// Cross Module References
	THELEGION_API UClass* Z_Construct_UClass_UMadgrit_NoRegister();
	THELEGION_API UClass* Z_Construct_UClass_UMadgrit();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheLegion();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void UMadgrit::StaticRegisterNativesUMadgrit()
	{
	}
	UClass* Z_Construct_UClass_UMadgrit_NoRegister()
	{
		return UMadgrit::StaticClass();
	}
	struct Z_Construct_UClass_UMadgrit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slashHittingSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__slashHittingSpeedCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMadgrit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheLegion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMadgrit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Madgrit.h" },
		{ "ModuleRelativePath", "Public/Madgrit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMadgrit_Statics::NewProp__slashHittingSpeedCurve_MetaData[] = {
		{ "Category", "Madgrit" },
		{ "ModuleRelativePath", "Public/Madgrit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMadgrit_Statics::NewProp__slashHittingSpeedCurve = { "_slashHittingSpeedCurve", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMadgrit, _slashHittingSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMadgrit_Statics::NewProp__slashHittingSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMadgrit_Statics::NewProp__slashHittingSpeedCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMadgrit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMadgrit_Statics::NewProp__slashHittingSpeedCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMadgrit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMadgrit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMadgrit_Statics::ClassParams = {
		&UMadgrit::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMadgrit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMadgrit_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMadgrit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMadgrit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMadgrit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMadgrit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMadgrit, 4181127123);
	template<> THELEGION_API UClass* StaticClass<UMadgrit>()
	{
		return UMadgrit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMadgrit(Z_Construct_UClass_UMadgrit, &UMadgrit::StaticClass, TEXT("/Script/TheLegion"), TEXT("UMadgrit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMadgrit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
