// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheCannibal/Public/ShopLubricantAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShopLubricantAddon() {}
// Cross Module References
	THECANNIBAL_API UClass* Z_Construct_UClass_UShopLubricantAddon_NoRegister();
	THECANNIBAL_API UClass* Z_Construct_UClass_UShopLubricantAddon();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOnEventBaseAddon();
	UPackage* Z_Construct_UPackage__Script_TheCannibal();
// End Cross Module References
	void UShopLubricantAddon::StaticRegisterNativesUShopLubricantAddon()
	{
	}
	UClass* Z_Construct_UClass_UShopLubricantAddon_NoRegister()
	{
		return UShopLubricantAddon::StaticClass();
	}
	struct Z_Construct_UClass_UShopLubricantAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__auraVisibleDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__auraVisibleDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__auraBlockingDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__auraBlockingDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShopLubricantAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnEventBaseAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheCannibal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShopLubricantAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShopLubricantAddon.h" },
		{ "ModuleRelativePath", "Public/ShopLubricantAddon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShopLubricantAddon_Statics::NewProp__auraVisibleDistance_MetaData[] = {
		{ "Category", "ShopLubricantAddon" },
		{ "ModuleRelativePath", "Public/ShopLubricantAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShopLubricantAddon_Statics::NewProp__auraVisibleDistance = { "_auraVisibleDistance", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShopLubricantAddon, _auraVisibleDistance), METADATA_PARAMS(Z_Construct_UClass_UShopLubricantAddon_Statics::NewProp__auraVisibleDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShopLubricantAddon_Statics::NewProp__auraVisibleDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShopLubricantAddon_Statics::NewProp__auraBlockingDuration_MetaData[] = {
		{ "Category", "ShopLubricantAddon" },
		{ "ModuleRelativePath", "Public/ShopLubricantAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShopLubricantAddon_Statics::NewProp__auraBlockingDuration = { "_auraBlockingDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShopLubricantAddon, _auraBlockingDuration), METADATA_PARAMS(Z_Construct_UClass_UShopLubricantAddon_Statics::NewProp__auraBlockingDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShopLubricantAddon_Statics::NewProp__auraBlockingDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShopLubricantAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopLubricantAddon_Statics::NewProp__auraVisibleDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopLubricantAddon_Statics::NewProp__auraBlockingDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShopLubricantAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShopLubricantAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShopLubricantAddon_Statics::ClassParams = {
		&UShopLubricantAddon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShopLubricantAddon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShopLubricantAddon_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UShopLubricantAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShopLubricantAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShopLubricantAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShopLubricantAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShopLubricantAddon, 4198899013);
	template<> THECANNIBAL_API UClass* StaticClass<UShopLubricantAddon>()
	{
		return UShopLubricantAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShopLubricantAddon(Z_Construct_UClass_UShopLubricantAddon, &UShopLubricantAddon::StaticClass, TEXT("/Script/TheCannibal"), TEXT("UShopLubricantAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShopLubricantAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
