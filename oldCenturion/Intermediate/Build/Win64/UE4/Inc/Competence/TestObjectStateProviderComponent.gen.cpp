// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/TestObjectStateProviderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestObjectStateProviderComponent() {}
// Cross Module References
	COMPETENCE_API UClass* Z_Construct_UClass_UTestObjectStateProviderComponent_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UTestObjectStateProviderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Competence();
	GAMEPLAYTAGUTILITIES_API UClass* Z_Construct_UClass_UGameplayTagContainerComponent_NoRegister();
	GAMEPLAYTAGUTILITIES_API UClass* Z_Construct_UClass_UObjectStateProvider_NoRegister();
// End Cross Module References
	void UTestObjectStateProviderComponent::StaticRegisterNativesUTestObjectStateProviderComponent()
	{
	}
	UClass* Z_Construct_UClass_UTestObjectStateProviderComponent_NoRegister()
	{
		return UTestObjectStateProviderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTestObjectStateProviderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagContainerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameplayTagContainerComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestObjectStateProviderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestObjectStateProviderComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestObjectStateProviderComponent.h" },
		{ "ModuleRelativePath", "Public/TestObjectStateProviderComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestObjectStateProviderComponent_Statics::NewProp_GameplayTagContainerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestObjectStateProviderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestObjectStateProviderComponent_Statics::NewProp_GameplayTagContainerComponent = { "GameplayTagContainerComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestObjectStateProviderComponent, GameplayTagContainerComponent), Z_Construct_UClass_UGameplayTagContainerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestObjectStateProviderComponent_Statics::NewProp_GameplayTagContainerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestObjectStateProviderComponent_Statics::NewProp_GameplayTagContainerComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestObjectStateProviderComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestObjectStateProviderComponent_Statics::NewProp_GameplayTagContainerComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTestObjectStateProviderComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UObjectStateProvider_NoRegister, (int32)VTABLE_OFFSET(UTestObjectStateProviderComponent, IObjectStateProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestObjectStateProviderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestObjectStateProviderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestObjectStateProviderComponent_Statics::ClassParams = {
		&UTestObjectStateProviderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestObjectStateProviderComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestObjectStateProviderComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTestObjectStateProviderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestObjectStateProviderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestObjectStateProviderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestObjectStateProviderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestObjectStateProviderComponent, 3024807273);
	template<> COMPETENCE_API UClass* StaticClass<UTestObjectStateProviderComponent>()
	{
		return UTestObjectStateProviderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestObjectStateProviderComponent(Z_Construct_UClass_UTestObjectStateProviderComponent, &UTestObjectStateProviderComponent::StaticClass, TEXT("/Script/Competence"), TEXT("UTestObjectStateProviderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestObjectStateProviderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
