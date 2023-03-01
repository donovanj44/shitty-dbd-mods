// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AimableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimableInterface() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAimableInterface_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAimableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UAimableInterface::StaticRegisterNativesUAimableInterface()
	{
	}
	UClass* Z_Construct_UClass_UAimableInterface_NoRegister()
	{
		return UAimableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAimableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimableInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AimableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAimableInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAimableInterface_Statics::ClassParams = {
		&UAimableInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAimableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAimableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAimableInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAimableInterface, 3675437184);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAimableInterface>()
	{
		return UAimableInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAimableInterface(Z_Construct_UClass_UAimableInterface, &UAimableInterface::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAimableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimableInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
