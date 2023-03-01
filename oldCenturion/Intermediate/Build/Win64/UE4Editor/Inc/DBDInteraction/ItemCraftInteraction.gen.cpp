// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/ItemCraftInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemCraftInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UItemCraftInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UItemCraftInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
// End Cross Module References
	void UItemCraftInteraction::StaticRegisterNativesUItemCraftInteraction()
	{
	}
	UClass* Z_Construct_UClass_UItemCraftInteraction_NoRegister()
	{
		return UItemCraftInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UItemCraftInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collectableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__collectableClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attachToSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__attachToSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemCraftInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemCraftInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ItemCraftInteraction.h" },
		{ "ModuleRelativePath", "Public/ItemCraftInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemCraftInteraction_Statics::NewProp__collectableClass_MetaData[] = {
		{ "Category", "ItemCraftInteraction" },
		{ "ModuleRelativePath", "Public/ItemCraftInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemCraftInteraction_Statics::NewProp__collectableClass = { "_collectableClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemCraftInteraction, _collectableClass), Z_Construct_UClass_ACollectable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UItemCraftInteraction_Statics::NewProp__collectableClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemCraftInteraction_Statics::NewProp__collectableClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemCraftInteraction_Statics::NewProp__attachToSocketName_MetaData[] = {
		{ "Category", "ItemCraftInteraction" },
		{ "ModuleRelativePath", "Public/ItemCraftInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UItemCraftInteraction_Statics::NewProp__attachToSocketName = { "_attachToSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemCraftInteraction, _attachToSocketName), METADATA_PARAMS(Z_Construct_UClass_UItemCraftInteraction_Statics::NewProp__attachToSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemCraftInteraction_Statics::NewProp__attachToSocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemCraftInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemCraftInteraction_Statics::NewProp__collectableClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemCraftInteraction_Statics::NewProp__attachToSocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemCraftInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemCraftInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemCraftInteraction_Statics::ClassParams = {
		&UItemCraftInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemCraftInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemCraftInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UItemCraftInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemCraftInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemCraftInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemCraftInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemCraftInteraction, 1038859653);
	template<> DBDINTERACTION_API UClass* StaticClass<UItemCraftInteraction>()
	{
		return UItemCraftInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemCraftInteraction(Z_Construct_UClass_UItemCraftInteraction, &UItemCraftInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UItemCraftInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemCraftInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
