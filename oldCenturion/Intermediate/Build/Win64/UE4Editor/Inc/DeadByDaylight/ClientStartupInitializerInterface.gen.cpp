// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ClientStartupInitializerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientStartupInitializerInterface() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UClientStartupInitializerInterface_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UClientStartupInitializerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UClientStartupInitializerInterface::StaticRegisterNativesUClientStartupInitializerInterface()
	{
	}
	UClass* Z_Construct_UClass_UClientStartupInitializerInterface_NoRegister()
	{
		return UClientStartupInitializerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UClientStartupInitializerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClientStartupInitializerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientStartupInitializerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClientStartupInitializerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClientStartupInitializerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IClientStartupInitializerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClientStartupInitializerInterface_Statics::ClassParams = {
		&UClientStartupInitializerInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClientStartupInitializerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClientStartupInitializerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClientStartupInitializerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClientStartupInitializerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClientStartupInitializerInterface, 605672890);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UClientStartupInitializerInterface>()
	{
		return UClientStartupInitializerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClientStartupInitializerInterface(Z_Construct_UClass_UClientStartupInitializerInterface, &UClientStartupInitializerInterface::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UClientStartupInitializerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClientStartupInitializerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
