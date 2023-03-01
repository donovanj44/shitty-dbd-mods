// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheNightmare/Public/PresentationGeneratorTeleportProgressComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresentationGeneratorTeleportProgressComponent() {}
// Cross Module References
	THENIGHTMARE_API UClass* Z_Construct_UClass_UPresentationGeneratorTeleportProgressComponent_NoRegister();
	THENIGHTMARE_API UClass* Z_Construct_UClass_UPresentationGeneratorTeleportProgressComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPresentationItemProgressComponent();
	UPackage* Z_Construct_UPackage__Script_TheNightmare();
// End Cross Module References
	void UPresentationGeneratorTeleportProgressComponent::StaticRegisterNativesUPresentationGeneratorTeleportProgressComponent()
	{
	}
	UClass* Z_Construct_UClass_UPresentationGeneratorTeleportProgressComponent_NoRegister()
	{
		return UPresentationGeneratorTeleportProgressComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPresentationGeneratorTeleportProgressComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPresentationGeneratorTeleportProgressComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresentationItemProgressComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheNightmare,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresentationGeneratorTeleportProgressComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PresentationGeneratorTeleportProgressComponent.h" },
		{ "ModuleRelativePath", "Public/PresentationGeneratorTeleportProgressComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPresentationGeneratorTeleportProgressComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPresentationGeneratorTeleportProgressComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPresentationGeneratorTeleportProgressComponent_Statics::ClassParams = {
		&UPresentationGeneratorTeleportProgressComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPresentationGeneratorTeleportProgressComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPresentationGeneratorTeleportProgressComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPresentationGeneratorTeleportProgressComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPresentationGeneratorTeleportProgressComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPresentationGeneratorTeleportProgressComponent, 3219643032);
	template<> THENIGHTMARE_API UClass* StaticClass<UPresentationGeneratorTeleportProgressComponent>()
	{
		return UPresentationGeneratorTeleportProgressComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPresentationGeneratorTeleportProgressComponent(Z_Construct_UClass_UPresentationGeneratorTeleportProgressComponent, &UPresentationGeneratorTeleportProgressComponent::StaticClass, TEXT("/Script/TheNightmare"), TEXT("UPresentationGeneratorTeleportProgressComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPresentationGeneratorTeleportProgressComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
