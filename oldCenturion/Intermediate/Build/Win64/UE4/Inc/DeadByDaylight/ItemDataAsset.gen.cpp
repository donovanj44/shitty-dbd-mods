// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ItemDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDataAsset() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemDataAsset_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemDataAsset();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainerDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UItemDataAsset::StaticRegisterNativesUItemDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UItemDataAsset_NoRegister()
	{
		return UItemDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UItemDataAsset_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemDataAsset.h" },
		{ "ModuleRelativePath", "Public/ItemDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemDataAsset_Statics::NewProp_RequiredModifierContainers_MetaData[] = {
		{ "Category", "ItemDataAsset" },
		{ "ModuleRelativePath", "Public/ItemDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UItemDataAsset_Statics::NewProp_RequiredModifierContainers = { "RequiredModifierContainers", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemDataAsset, RequiredModifierContainers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UItemDataAsset_Statics::NewProp_RequiredModifierContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataAsset_Statics::NewProp_RequiredModifierContainers_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UItemDataAsset_Statics::NewProp_RequiredModifierContainers_Inner = { "RequiredModifierContainers", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayModifierContainerDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemDataAsset_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "ItemDataAsset" },
		{ "ModuleRelativePath", "Public/ItemDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UItemDataAsset_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemDataAsset, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemDataAsset_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataAsset_Statics::NewProp_ActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataAsset_Statics::NewProp_RequiredModifierContainers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataAsset_Statics::NewProp_RequiredModifierContainers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataAsset_Statics::NewProp_ActorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemDataAsset_Statics::ClassParams = {
		&UItemDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemDataAsset, 1800273700);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UItemDataAsset>()
	{
		return UItemDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemDataAsset(Z_Construct_UClass_UItemDataAsset, &UItemDataAsset::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UItemDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
