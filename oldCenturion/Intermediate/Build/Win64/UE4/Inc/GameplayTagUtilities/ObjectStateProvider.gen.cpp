// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTagUtilities/Public/ObjectStateProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectStateProvider() {}
// Cross Module References
	GAMEPLAYTAGUTILITIES_API UClass* Z_Construct_UClass_UObjectStateProvider_NoRegister();
	GAMEPLAYTAGUTILITIES_API UClass* Z_Construct_UClass_UObjectStateProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GameplayTagUtilities();
// End Cross Module References
	void UObjectStateProvider::StaticRegisterNativesUObjectStateProvider()
	{
	}
	UClass* Z_Construct_UClass_UObjectStateProvider_NoRegister()
	{
		return UObjectStateProvider::StaticClass();
	}
	struct Z_Construct_UClass_UObjectStateProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectStateProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTagUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectStateProvider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectStateProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectStateProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IObjectStateProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectStateProvider_Statics::ClassParams = {
		&UObjectStateProvider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UObjectStateProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectStateProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectStateProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectStateProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectStateProvider, 3775741663);
	template<> GAMEPLAYTAGUTILITIES_API UClass* StaticClass<UObjectStateProvider>()
	{
		return UObjectStateProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectStateProvider(Z_Construct_UClass_UObjectStateProvider, &UObjectStateProvider::StaticClass, TEXT("/Script/GameplayTagUtilities"), TEXT("UObjectStateProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectStateProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
