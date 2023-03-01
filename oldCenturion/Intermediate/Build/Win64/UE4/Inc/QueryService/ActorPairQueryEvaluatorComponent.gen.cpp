// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QueryService/Public/ActorPairQueryEvaluatorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorPairQueryEvaluatorComponent() {}
// Cross Module References
	QUERYSERVICE_API UClass* Z_Construct_UClass_UActorPairQueryEvaluatorComponent_NoRegister();
	QUERYSERVICE_API UClass* Z_Construct_UClass_UActorPairQueryEvaluatorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_QueryService();
// End Cross Module References
	void UActorPairQueryEvaluatorComponent::StaticRegisterNativesUActorPairQueryEvaluatorComponent()
	{
	}
	UClass* Z_Construct_UClass_UActorPairQueryEvaluatorComponent_NoRegister()
	{
		return UActorPairQueryEvaluatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UActorPairQueryEvaluatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorPairQueryEvaluatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_QueryService,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPairQueryEvaluatorComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorPairQueryEvaluatorComponent.h" },
		{ "ModuleRelativePath", "Public/ActorPairQueryEvaluatorComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorPairQueryEvaluatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorPairQueryEvaluatorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorPairQueryEvaluatorComponent_Statics::ClassParams = {
		&UActorPairQueryEvaluatorComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorPairQueryEvaluatorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPairQueryEvaluatorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorPairQueryEvaluatorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorPairQueryEvaluatorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorPairQueryEvaluatorComponent, 2318440488);
	template<> QUERYSERVICE_API UClass* StaticClass<UActorPairQueryEvaluatorComponent>()
	{
		return UActorPairQueryEvaluatorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorPairQueryEvaluatorComponent(Z_Construct_UClass_UActorPairQueryEvaluatorComponent, &UActorPairQueryEvaluatorComponent::StaticClass, TEXT("/Script/QueryService"), TEXT("UActorPairQueryEvaluatorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorPairQueryEvaluatorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
