// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinFirstPersonViewComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinFirstPersonViewComponent() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinFirstPersonViewComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinFirstPersonViewComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFirstPersonViewComponent();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UTwinFirstPersonViewComponent::StaticRegisterNativesUTwinFirstPersonViewComponent()
	{
	}
	UClass* Z_Construct_UClass_UTwinFirstPersonViewComponent_NoRegister()
	{
		return UTwinFirstPersonViewComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTwinFirstPersonViewComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinFirstPersonViewComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFirstPersonViewComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinFirstPersonViewComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TwinFirstPersonViewComponent.h" },
		{ "ModuleRelativePath", "Public/TwinFirstPersonViewComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinFirstPersonViewComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinFirstPersonViewComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinFirstPersonViewComponent_Statics::ClassParams = {
		&UTwinFirstPersonViewComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTwinFirstPersonViewComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinFirstPersonViewComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinFirstPersonViewComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinFirstPersonViewComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinFirstPersonViewComponent, 1356191351);
	template<> THETWINS_API UClass* StaticClass<UTwinFirstPersonViewComponent>()
	{
		return UTwinFirstPersonViewComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinFirstPersonViewComponent(Z_Construct_UClass_UTwinFirstPersonViewComponent, &UTwinFirstPersonViewComponent::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinFirstPersonViewComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinFirstPersonViewComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
