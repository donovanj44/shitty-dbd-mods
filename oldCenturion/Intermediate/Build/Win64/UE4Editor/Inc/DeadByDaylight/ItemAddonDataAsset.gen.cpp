// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ItemAddonDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemAddonDataAsset() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddonDataAsset_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddonDataAsset();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainerDataAsset();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UItemAddonDataAsset::StaticRegisterNativesUItemAddonDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UItemAddonDataAsset_NoRegister()
	{
		return UItemAddonDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UItemAddonDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemAddonDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModifierContainerDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemAddonDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemAddonDataAsset.h" },
		{ "ModuleRelativePath", "Public/ItemAddonDataAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemAddonDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemAddonDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemAddonDataAsset_Statics::ClassParams = {
		&UItemAddonDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemAddonDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemAddonDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemAddonDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemAddonDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemAddonDataAsset, 254248005);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UItemAddonDataAsset>()
	{
		return UItemAddonDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemAddonDataAsset(Z_Construct_UClass_UItemAddonDataAsset, &UItemAddonDataAsset::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UItemAddonDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemAddonDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
