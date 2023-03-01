// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DynamicGrass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicGrass() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADynamicGrass_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADynamicGrass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
// End Cross Module References
	void ADynamicGrass::StaticRegisterNativesADynamicGrass()
	{
	}
	UClass* Z_Construct_UClass_ADynamicGrass_NoRegister()
	{
		return ADynamicGrass::StaticClass();
	}
	struct Z_Construct_UClass_ADynamicGrass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__worldSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__worldSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADynamicGrass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicGrass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicGrass.h" },
		{ "ModuleRelativePath", "Public/DynamicGrass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicGrass_Statics::NewProp__worldSettings_MetaData[] = {
		{ "Category", "DynamicGrass" },
		{ "ModuleRelativePath", "Public/DynamicGrass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADynamicGrass_Statics::NewProp__worldSettings = { "_worldSettings", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADynamicGrass, _worldSettings), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADynamicGrass_Statics::NewProp__worldSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicGrass_Statics::NewProp__worldSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADynamicGrass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicGrass_Statics::NewProp__worldSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADynamicGrass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADynamicGrass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADynamicGrass_Statics::ClassParams = {
		&ADynamicGrass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADynamicGrass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicGrass_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADynamicGrass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicGrass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADynamicGrass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADynamicGrass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADynamicGrass, 3463110904);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADynamicGrass>()
	{
		return ADynamicGrass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADynamicGrass(Z_Construct_UClass_ADynamicGrass, &ADynamicGrass::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADynamicGrass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADynamicGrass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
