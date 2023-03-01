// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25KillerChainHuntEffectsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25KillerChainHuntEffectsComponent() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25KillerChainHuntEffectsComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25KillerChainHuntEffectsComponent();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainHuntEffectsComponent();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	void UK25KillerChainHuntEffectsComponent::StaticRegisterNativesUK25KillerChainHuntEffectsComponent()
	{
	}
	UClass* Z_Construct_UClass_UK25KillerChainHuntEffectsComponent_NoRegister()
	{
		return UK25KillerChainHuntEffectsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK25KillerChainHuntEffectsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25KillerChainHuntEffectsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK25ChainHuntEffectsComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25KillerChainHuntEffectsComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25KillerChainHuntEffectsComponent.h" },
		{ "ModuleRelativePath", "Public/K25KillerChainHuntEffectsComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25KillerChainHuntEffectsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25KillerChainHuntEffectsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25KillerChainHuntEffectsComponent_Statics::ClassParams = {
		&UK25KillerChainHuntEffectsComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK25KillerChainHuntEffectsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25KillerChainHuntEffectsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25KillerChainHuntEffectsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25KillerChainHuntEffectsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25KillerChainHuntEffectsComponent, 714279520);
	template<> THEK25_API UClass* StaticClass<UK25KillerChainHuntEffectsComponent>()
	{
		return UK25KillerChainHuntEffectsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25KillerChainHuntEffectsComponent(Z_Construct_UClass_UK25KillerChainHuntEffectsComponent, &UK25KillerChainHuntEffectsComponent::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25KillerChainHuntEffectsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25KillerChainHuntEffectsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
