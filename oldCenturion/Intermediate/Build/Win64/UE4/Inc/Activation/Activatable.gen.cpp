// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Activation/Public/Activatable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivatable() {}
// Cross Module References
	ACTIVATION_API UClass* Z_Construct_UClass_UActivatable_NoRegister();
	ACTIVATION_API UClass* Z_Construct_UClass_UActivatable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Activation();
// End Cross Module References
	void UActivatable::StaticRegisterNativesUActivatable()
	{
	}
	UClass* Z_Construct_UClass_UActivatable_NoRegister()
	{
		return UActivatable::StaticClass();
	}
	struct Z_Construct_UClass_UActivatable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActivatable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Activation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Activatable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActivatable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IActivatable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActivatable_Statics::ClassParams = {
		&UActivatable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActivatable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActivatable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActivatable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivatable, 3919841808);
	template<> ACTIVATION_API UClass* StaticClass<UActivatable>()
	{
		return UActivatable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivatable(Z_Construct_UClass_UActivatable, &UActivatable::StaticClass, TEXT("/Script/Activation"), TEXT("UActivatable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
