// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StatusEffectDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusEffectDataAsset() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffectDataAsset_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffectDataAsset();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainerDataAsset();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UStatusEffectDataAsset::StaticRegisterNativesUStatusEffectDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UStatusEffectDataAsset_NoRegister()
	{
		return UStatusEffectDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UStatusEffectDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatusEffectDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModifierContainerDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffectDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StatusEffectDataAsset.h" },
		{ "ModuleRelativePath", "Public/StatusEffectDataAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatusEffectDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusEffectDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStatusEffectDataAsset_Statics::ClassParams = {
		&UStatusEffectDataAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStatusEffectDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffectDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatusEffectDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStatusEffectDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStatusEffectDataAsset, 2681182526);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStatusEffectDataAsset>()
	{
		return UStatusEffectDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStatusEffectDataAsset(Z_Construct_UClass_UStatusEffectDataAsset, &UStatusEffectDataAsset::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStatusEffectDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatusEffectDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
