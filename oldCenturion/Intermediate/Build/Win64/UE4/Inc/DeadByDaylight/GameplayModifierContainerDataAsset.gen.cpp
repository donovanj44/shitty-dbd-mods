// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GameplayModifierContainerDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayModifierContainerDataAsset() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainerDataAsset_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainerDataAsset();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	void UGameplayModifierContainerDataAsset::StaticRegisterNativesUGameplayModifierContainerDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UGameplayModifierContainerDataAsset_NoRegister()
	{
		return UGameplayModifierContainerDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredModifierContainers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequiredModifierContainers;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RequiredModifierContainers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierContainerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ModifierContainerComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayModifierContainerDataAsset.h" },
		{ "ModuleRelativePath", "Public/GameplayModifierContainerDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::NewProp_RequiredModifierContainers_MetaData[] = {
		{ "Category", "GameplayModifierContainerDataAsset" },
		{ "ModuleRelativePath", "Public/GameplayModifierContainerDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::NewProp_RequiredModifierContainers = { "RequiredModifierContainers", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayModifierContainerDataAsset, RequiredModifierContainers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::NewProp_RequiredModifierContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::NewProp_RequiredModifierContainers_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::NewProp_RequiredModifierContainers_Inner = { "RequiredModifierContainers", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayModifierContainerDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::NewProp_ModifierContainerComponent_MetaData[] = {
		{ "Category", "GameplayModifierContainerDataAsset" },
		{ "ModuleRelativePath", "Public/GameplayModifierContainerDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::NewProp_ModifierContainerComponent = { "ModifierContainerComponent", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayModifierContainerDataAsset, ModifierContainerComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::NewProp_ModifierContainerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::NewProp_ModifierContainerComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::NewProp_RequiredModifierContainers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::NewProp_RequiredModifierContainers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::NewProp_ModifierContainerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayModifierContainerDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::ClassParams = {
		&UGameplayModifierContainerDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayModifierContainerDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayModifierContainerDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayModifierContainerDataAsset, 1286474211);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGameplayModifierContainerDataAsset>()
	{
		return UGameplayModifierContainerDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayModifierContainerDataAsset(Z_Construct_UClass_UGameplayModifierContainerDataAsset, &UGameplayModifierContainerDataAsset::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGameplayModifierContainerDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayModifierContainerDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif