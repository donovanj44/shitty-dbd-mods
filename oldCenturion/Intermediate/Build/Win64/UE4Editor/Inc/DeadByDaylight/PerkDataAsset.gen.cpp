// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PerkDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkDataAsset() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkDataAsset_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkDataAsset();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainerDataAsset();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UPerkDataAsset::StaticRegisterNativesUPerkDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UPerkDataAsset_NoRegister()
	{
		return UPerkDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPerkDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerkDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModifierContainerDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PerkDataAsset.h" },
		{ "ModuleRelativePath", "Public/PerkDataAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerkDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerkDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerkDataAsset_Statics::ClassParams = {
		&UPerkDataAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPerkDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerkDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerkDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerkDataAsset, 760320089);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPerkDataAsset>()
	{
		return UPerkDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerkDataAsset(Z_Construct_UClass_UPerkDataAsset, &UPerkDataAsset::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPerkDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerkDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
