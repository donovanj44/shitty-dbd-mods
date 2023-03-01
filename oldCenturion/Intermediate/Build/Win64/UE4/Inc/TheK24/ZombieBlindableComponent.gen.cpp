// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ZombieBlindableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieBlindableComponent() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UZombieBlindableComponent_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UZombieBlindableComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlindableBaseComponent();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	GAMEPLAYTAGUTILITIES_API UClass* Z_Construct_UClass_UGameplayTagContainerComponent_NoRegister();
// End Cross Module References
	void UZombieBlindableComponent::StaticRegisterNativesUZombieBlindableComponent()
	{
	}
	UClass* Z_Construct_UClass_UZombieBlindableComponent_NoRegister()
	{
		return UZombieBlindableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UZombieBlindableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ownerObjectState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ownerObjectState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZombieBlindableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlindableBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieBlindableComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieBlindableComponent.h" },
		{ "ModuleRelativePath", "Public/ZombieBlindableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieBlindableComponent_Statics::NewProp__ownerObjectState_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZombieBlindableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZombieBlindableComponent_Statics::NewProp__ownerObjectState = { "_ownerObjectState", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZombieBlindableComponent, _ownerObjectState), Z_Construct_UClass_UGameplayTagContainerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UZombieBlindableComponent_Statics::NewProp__ownerObjectState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieBlindableComponent_Statics::NewProp__ownerObjectState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZombieBlindableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieBlindableComponent_Statics::NewProp__ownerObjectState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZombieBlindableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZombieBlindableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZombieBlindableComponent_Statics::ClassParams = {
		&UZombieBlindableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZombieBlindableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZombieBlindableComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZombieBlindableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieBlindableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZombieBlindableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZombieBlindableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZombieBlindableComponent, 3521056051);
	template<> THEK24_API UClass* StaticClass<UZombieBlindableComponent>()
	{
		return UZombieBlindableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZombieBlindableComponent(Z_Construct_UClass_UZombieBlindableComponent, &UZombieBlindableComponent::StaticClass, TEXT("/Script/TheK24"), TEXT("UZombieBlindableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombieBlindableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
