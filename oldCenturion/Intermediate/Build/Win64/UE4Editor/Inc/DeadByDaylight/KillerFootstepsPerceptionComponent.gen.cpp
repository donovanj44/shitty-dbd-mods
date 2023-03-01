// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillerFootstepsPerceptionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerFootstepsPerceptionComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerFootstepsPerceptionComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerFootstepsPerceptionComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFootstepsPerceptionComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UKillerFootstepsPerceptionComponent::StaticRegisterNativesUKillerFootstepsPerceptionComponent()
	{
	}
	UClass* Z_Construct_UClass_UKillerFootstepsPerceptionComponent_NoRegister()
	{
		return UKillerFootstepsPerceptionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKillerFootstepsPerceptionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerFootstepsPerceptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFootstepsPerceptionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerFootstepsPerceptionComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KillerFootstepsPerceptionComponent.h" },
		{ "ModuleRelativePath", "Public/KillerFootstepsPerceptionComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerFootstepsPerceptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerFootstepsPerceptionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerFootstepsPerceptionComponent_Statics::ClassParams = {
		&UKillerFootstepsPerceptionComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UKillerFootstepsPerceptionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerFootstepsPerceptionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerFootstepsPerceptionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerFootstepsPerceptionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerFootstepsPerceptionComponent, 2146995340);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UKillerFootstepsPerceptionComponent>()
	{
		return UKillerFootstepsPerceptionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerFootstepsPerceptionComponent(Z_Construct_UClass_UKillerFootstepsPerceptionComponent, &UKillerFootstepsPerceptionComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UKillerFootstepsPerceptionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerFootstepsPerceptionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
