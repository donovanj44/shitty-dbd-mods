// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGPurchaseSticker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGPurchaseSticker() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPurchaseSticker_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPurchaseSticker();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UUMGPurchaseSticker::StaticRegisterNativesUUMGPurchaseSticker()
	{
	}
	UClass* Z_Construct_UClass_UUMGPurchaseSticker_NoRegister()
	{
		return UUMGPurchaseSticker::StaticClass();
	}
	struct Z_Construct_UClass_UUMGPurchaseSticker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextDiscount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextDiscount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGPurchaseSticker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPurchaseSticker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGPurchaseSticker.h" },
		{ "ModuleRelativePath", "Public/UMGPurchaseSticker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPurchaseSticker_Statics::NewProp_TextDiscount_MetaData[] = {
		{ "Category", "UMGPurchaseSticker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPurchaseSticker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPurchaseSticker_Statics::NewProp_TextDiscount = { "TextDiscount", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPurchaseSticker, TextDiscount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPurchaseSticker_Statics::NewProp_TextDiscount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPurchaseSticker_Statics::NewProp_TextDiscount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGPurchaseSticker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPurchaseSticker_Statics::NewProp_TextDiscount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGPurchaseSticker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGPurchaseSticker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGPurchaseSticker_Statics::ClassParams = {
		&UUMGPurchaseSticker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGPurchaseSticker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPurchaseSticker_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGPurchaseSticker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPurchaseSticker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGPurchaseSticker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGPurchaseSticker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGPurchaseSticker, 2585138171);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGPurchaseSticker>()
	{
		return UUMGPurchaseSticker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGPurchaseSticker(Z_Construct_UClass_UUMGPurchaseSticker, &UUMGPurchaseSticker::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGPurchaseSticker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGPurchaseSticker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
