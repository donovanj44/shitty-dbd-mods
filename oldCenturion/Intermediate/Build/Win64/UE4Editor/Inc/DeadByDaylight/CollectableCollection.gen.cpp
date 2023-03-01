// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CollectableCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectableCollection() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCollectableCollection_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCollectableCollection();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
// End Cross Module References
	void UCollectableCollection::StaticRegisterNativesUCollectableCollection()
	{
	}
	UClass* Z_Construct_UClass_UCollectableCollection_NoRegister()
	{
		return UCollectableCollection::StaticClass();
	}
	struct Z_Construct_UClass_UCollectableCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collectables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__collectables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__collectables_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollectableCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectableCollection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CollectableCollection.h" },
		{ "ModuleRelativePath", "Public/CollectableCollection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectableCollection_Statics::NewProp__collectables_MetaData[] = {
		{ "ModuleRelativePath", "Public/CollectableCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollectableCollection_Statics::NewProp__collectables = { "_collectables", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollectableCollection, _collectables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCollectableCollection_Statics::NewProp__collectables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableCollection_Statics::NewProp__collectables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollectableCollection_Statics::NewProp__collectables_Inner = { "_collectables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollectableCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollectableCollection_Statics::NewProp__collectables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollectableCollection_Statics::NewProp__collectables_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollectableCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollectableCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCollectableCollection_Statics::ClassParams = {
		&UCollectableCollection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCollectableCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableCollection_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCollectableCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCollectableCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCollectableCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCollectableCollection, 3226062477);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCollectableCollection>()
	{
		return UCollectableCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCollectableCollection(Z_Construct_UClass_UCollectableCollection, &UCollectableCollection::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCollectableCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollectableCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
