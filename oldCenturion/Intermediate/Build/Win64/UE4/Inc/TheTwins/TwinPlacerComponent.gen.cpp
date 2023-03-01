// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinPlacerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinPlacerComponent() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinPlacerComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinPlacerComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UObjectPlacerComponent();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UTwinPlacerComponent::StaticRegisterNativesUTwinPlacerComponent()
	{
	}
	UClass* Z_Construct_UClass_UTwinPlacerComponent_NoRegister()
	{
		return UTwinPlacerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTwinPlacerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinPlacerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObjectPlacerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinPlacerComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "TwinPlacerComponent.h" },
		{ "ModuleRelativePath", "Public/TwinPlacerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinPlacerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinPlacerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinPlacerComponent_Statics::ClassParams = {
		&UTwinPlacerComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTwinPlacerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinPlacerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinPlacerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinPlacerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinPlacerComponent, 3652669550);
	template<> THETWINS_API UClass* StaticClass<UTwinPlacerComponent>()
	{
		return UTwinPlacerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinPlacerComponent(Z_Construct_UClass_UTwinPlacerComponent, &UTwinPlacerComponent::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinPlacerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinPlacerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
