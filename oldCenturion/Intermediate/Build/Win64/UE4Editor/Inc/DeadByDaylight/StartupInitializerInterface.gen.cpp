// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StartupInitializerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartupInitializerInterface() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStartupInitializerInterface_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStartupInitializerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UStartupInitializerInterface::StaticRegisterNativesUStartupInitializerInterface()
	{
	}
	UClass* Z_Construct_UClass_UStartupInitializerInterface_NoRegister()
	{
		return UStartupInitializerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStartupInitializerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStartupInitializerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartupInitializerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StartupInitializerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStartupInitializerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStartupInitializerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStartupInitializerInterface_Statics::ClassParams = {
		&UStartupInitializerInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UStartupInitializerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStartupInitializerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStartupInitializerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStartupInitializerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStartupInitializerInterface, 1289923885);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStartupInitializerInterface>()
	{
		return UStartupInitializerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStartupInitializerInterface(Z_Construct_UClass_UStartupInitializerInterface, &UStartupInitializerInterface::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStartupInitializerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStartupInitializerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
