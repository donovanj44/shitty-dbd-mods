// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LightingFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightingFactory() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULightingFactory_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULightingFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULightingData_NoRegister();
// End Cross Module References
	void ULightingFactory::StaticRegisterNativesULightingFactory()
	{
	}
	UClass* Z_Construct_UClass_ULightingFactory_NoRegister()
	{
		return ULightingFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULightingFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightingFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LightingFactory.h" },
		{ "ModuleRelativePath", "Public/LightingFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingFactory_Statics::NewProp__data_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightingFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightingFactory_Statics::NewProp__data = { "_data", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingFactory, _data), Z_Construct_UClass_ULightingData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightingFactory_Statics::NewProp__data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingFactory_Statics::NewProp__data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightingFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingFactory_Statics::NewProp__data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightingFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightingFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightingFactory_Statics::ClassParams = {
		&ULightingFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightingFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightingFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightingFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightingFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightingFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightingFactory, 496328122);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULightingFactory>()
	{
		return ULightingFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightingFactory(Z_Construct_UClass_ULightingFactory, &ULightingFactory::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULightingFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightingFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
