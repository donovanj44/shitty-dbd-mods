// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinStateHelperComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinStateHelperComponent() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinStateHelperComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinStateHelperComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UTwinStateHelperComponent::StaticRegisterNativesUTwinStateHelperComponent()
	{
	}
	UClass* Z_Construct_UClass_UTwinStateHelperComponent_NoRegister()
	{
		return UTwinStateHelperComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTwinStateHelperComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinStateHelperComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinStateHelperComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TwinStateHelperComponent.h" },
		{ "ModuleRelativePath", "Public/TwinStateHelperComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinStateHelperComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinStateHelperComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinStateHelperComponent_Statics::ClassParams = {
		&UTwinStateHelperComponent::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTwinStateHelperComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinStateHelperComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinStateHelperComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinStateHelperComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinStateHelperComponent, 2098070528);
	template<> THETWINS_API UClass* StaticClass<UTwinStateHelperComponent>()
	{
		return UTwinStateHelperComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinStateHelperComponent(Z_Construct_UClass_UTwinStateHelperComponent, &UTwinStateHelperComponent::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinStateHelperComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinStateHelperComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
