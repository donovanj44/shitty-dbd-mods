// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/Addon_TheBlight_ConsecutiveDashSpeedBonus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddon_TheBlight_ConsecutiveDashSpeedBonus() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
// End Cross Module References
	void UAddon_TheBlight_ConsecutiveDashSpeedBonus::StaticRegisterNativesUAddon_TheBlight_ConsecutiveDashSpeedBonus()
	{
	}
	UClass* Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_NoRegister()
	{
		return UAddon_TheBlight_ConsecutiveDashSpeedBonus::StaticClass();
	}
	struct Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__speedIncreasePerDash_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__speedIncreasePerDash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Addon_TheBlight_ConsecutiveDashSpeedBonus.h" },
		{ "ModuleRelativePath", "Public/Addon_TheBlight_ConsecutiveDashSpeedBonus.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_Statics::NewProp__speedIncreasePerDash_MetaData[] = {
		{ "Category", "Addon_TheBlight_ConsecutiveDashSpeedBonus" },
		{ "ModuleRelativePath", "Public/Addon_TheBlight_ConsecutiveDashSpeedBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_Statics::NewProp__speedIncreasePerDash = { "_speedIncreasePerDash", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_TheBlight_ConsecutiveDashSpeedBonus, _speedIncreasePerDash), METADATA_PARAMS(Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_Statics::NewProp__speedIncreasePerDash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_Statics::NewProp__speedIncreasePerDash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_Statics::NewProp__speedIncreasePerDash,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddon_TheBlight_ConsecutiveDashSpeedBonus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_Statics::ClassParams = {
		&UAddon_TheBlight_ConsecutiveDashSpeedBonus::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddon_TheBlight_ConsecutiveDashSpeedBonus, 3185257620);
	template<> THEBLIGHT_API UClass* StaticClass<UAddon_TheBlight_ConsecutiveDashSpeedBonus>()
	{
		return UAddon_TheBlight_ConsecutiveDashSpeedBonus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus(Z_Construct_UClass_UAddon_TheBlight_ConsecutiveDashSpeedBonus, &UAddon_TheBlight_ConsecutiveDashSpeedBonus::StaticClass, TEXT("/Script/TheBlight"), TEXT("UAddon_TheBlight_ConsecutiveDashSpeedBonus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddon_TheBlight_ConsecutiveDashSpeedBonus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
