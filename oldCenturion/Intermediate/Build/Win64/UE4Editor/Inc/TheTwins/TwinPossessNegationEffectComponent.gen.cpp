// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinPossessNegationEffectComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinPossessNegationEffectComponent() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinPossessNegationEffectComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinPossessNegationEffectComponent();
	THETWINS_API UClass* Z_Construct_UClass_UPossessNegationEffectComponent();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UTwinPossessNegationEffectComponent::StaticRegisterNativesUTwinPossessNegationEffectComponent()
	{
	}
	UClass* Z_Construct_UClass_UTwinPossessNegationEffectComponent_NoRegister()
	{
		return UTwinPossessNegationEffectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTwinPossessNegationEffectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinPossessNegationEffectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPossessNegationEffectComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinPossessNegationEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TwinPossessNegationEffectComponent.h" },
		{ "ModuleRelativePath", "Public/TwinPossessNegationEffectComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinPossessNegationEffectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinPossessNegationEffectComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinPossessNegationEffectComponent_Statics::ClassParams = {
		&UTwinPossessNegationEffectComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTwinPossessNegationEffectComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinPossessNegationEffectComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinPossessNegationEffectComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinPossessNegationEffectComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinPossessNegationEffectComponent, 87232215);
	template<> THETWINS_API UClass* StaticClass<UTwinPossessNegationEffectComponent>()
	{
		return UTwinPossessNegationEffectComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinPossessNegationEffectComponent(Z_Construct_UClass_UTwinPossessNegationEffectComponent, &UTwinPossessNegationEffectComponent::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinPossessNegationEffectComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinPossessNegationEffectComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
