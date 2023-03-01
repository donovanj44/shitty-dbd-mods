// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LevelAISetupComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelAISetupComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULevelAISetupComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULevelAISetupComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void ULevelAISetupComponent::StaticRegisterNativesULevelAISetupComponent()
	{
	}
	UClass* Z_Construct_UClass_ULevelAISetupComponent_NoRegister()
	{
		return ULevelAISetupComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULevelAISetupComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelAISetupComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelAISetupComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelAISetupComponent.h" },
		{ "ModuleRelativePath", "Public/LevelAISetupComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelAISetupComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelAISetupComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelAISetupComponent_Statics::ClassParams = {
		&ULevelAISetupComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelAISetupComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelAISetupComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelAISetupComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelAISetupComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelAISetupComponent, 3662672011);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULevelAISetupComponent>()
	{
		return ULevelAISetupComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelAISetupComponent(Z_Construct_UClass_ULevelAISetupComponent, &ULevelAISetupComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULevelAISetupComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelAISetupComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
