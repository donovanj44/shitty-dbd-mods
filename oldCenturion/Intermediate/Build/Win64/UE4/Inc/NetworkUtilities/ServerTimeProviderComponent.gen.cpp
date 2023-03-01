// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkUtilities/Public/ServerTimeProviderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerTimeProviderComponent() {}
// Cross Module References
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UServerTimeProviderComponent_NoRegister();
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UServerTimeProviderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NetworkUtilities();
// End Cross Module References
	void UServerTimeProviderComponent::StaticRegisterNativesUServerTimeProviderComponent()
	{
	}
	UClass* Z_Construct_UClass_UServerTimeProviderComponent_NoRegister()
	{
		return UServerTimeProviderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UServerTimeProviderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UServerTimeProviderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerTimeProviderComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ServerTimeProviderComponent.h" },
		{ "ModuleRelativePath", "Public/ServerTimeProviderComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UServerTimeProviderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UServerTimeProviderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UServerTimeProviderComponent_Statics::ClassParams = {
		&UServerTimeProviderComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UServerTimeProviderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UServerTimeProviderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UServerTimeProviderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UServerTimeProviderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UServerTimeProviderComponent, 2424559698);
	template<> NETWORKUTILITIES_API UClass* StaticClass<UServerTimeProviderComponent>()
	{
		return UServerTimeProviderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UServerTimeProviderComponent(Z_Construct_UClass_UServerTimeProviderComponent, &UServerTimeProviderComponent::StaticClass, TEXT("/Script/NetworkUtilities"), TEXT("UServerTimeProviderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UServerTimeProviderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
