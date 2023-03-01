// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StartupInitializer/Public/StartupInitializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartupInitializer() {}
// Cross Module References
	STARTUPINITIALIZER_API UClass* Z_Construct_UClass_UStartupInitializer_NoRegister();
	STARTUPINITIALIZER_API UClass* Z_Construct_UClass_UStartupInitializer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_StartupInitializer();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStartupInitializerInterface_NoRegister();
// End Cross Module References
	void UStartupInitializer::StaticRegisterNativesUStartupInitializer()
	{
	}
	UClass* Z_Construct_UClass_UStartupInitializer_NoRegister()
	{
		return UStartupInitializer::StaticClass();
	}
	struct Z_Construct_UClass_UStartupInitializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStartupInitializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StartupInitializer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartupInitializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StartupInitializer.h" },
		{ "ModuleRelativePath", "Public/StartupInitializer.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStartupInitializer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStartupInitializerInterface_NoRegister, (int32)VTABLE_OFFSET(UStartupInitializer, IStartupInitializerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStartupInitializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStartupInitializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStartupInitializer_Statics::ClassParams = {
		&UStartupInitializer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStartupInitializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStartupInitializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStartupInitializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStartupInitializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStartupInitializer, 2927890444);
	template<> STARTUPINITIALIZER_API UClass* StaticClass<UStartupInitializer>()
	{
		return UStartupInitializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStartupInitializer(Z_Construct_UClass_UStartupInitializer, &UStartupInitializer::StaticClass, TEXT("/Script/StartupInitializer"), TEXT("UStartupInitializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStartupInitializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
