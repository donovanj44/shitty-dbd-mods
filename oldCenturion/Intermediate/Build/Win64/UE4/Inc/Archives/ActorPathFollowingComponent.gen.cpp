// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/ActorPathFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorPathFollowingComponent() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UActorPathFollowingComponent_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UActorPathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_Archives();
// End Cross Module References
	void UActorPathFollowingComponent::StaticRegisterNativesUActorPathFollowingComponent()
	{
	}
	UClass* Z_Construct_UClass_UActorPathFollowingComponent_NoRegister()
	{
		return UActorPathFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UActorPathFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorPathFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPathFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorPathFollowingComponent.h" },
		{ "ModuleRelativePath", "Public/ActorPathFollowingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorPathFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorPathFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorPathFollowingComponent_Statics::ClassParams = {
		&UActorPathFollowingComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorPathFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPathFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorPathFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorPathFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorPathFollowingComponent, 3224267063);
	template<> ARCHIVES_API UClass* StaticClass<UActorPathFollowingComponent>()
	{
		return UActorPathFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorPathFollowingComponent(Z_Construct_UClass_UActorPathFollowingComponent, &UActorPathFollowingComponent::StaticClass, TEXT("/Script/Archives"), TEXT("UActorPathFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorPathFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
