// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGTallyBonusVisualWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGTallyBonusVisualWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyBonusVisualWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyBonusVisualWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UUMGTallyBonusVisualWidget::StaticRegisterNativesUUMGTallyBonusVisualWidget()
	{
	}
	UClass* Z_Construct_UClass_UUMGTallyBonusVisualWidget_NoRegister()
	{
		return UUMGTallyBonusVisualWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplierImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MultiplierImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplierTextureMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MultiplierTextureMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MultiplierTextureMap_Key_KeyProp;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MultiplierTextureMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGTallyBonusVisualWidget.h" },
		{ "ModuleRelativePath", "Public/UMGTallyBonusVisualWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::NewProp_MultiplierImage_MetaData[] = {
		{ "Category", "UMGTallyBonusVisualWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyBonusVisualWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::NewProp_MultiplierImage = { "MultiplierImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyBonusVisualWidget, MultiplierImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::NewProp_MultiplierImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::NewProp_MultiplierImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::NewProp_MultiplierTextureMap_MetaData[] = {
		{ "Category", "UMGTallyBonusVisualWidget" },
		{ "ModuleRelativePath", "Public/UMGTallyBonusVisualWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::NewProp_MultiplierTextureMap = { "MultiplierTextureMap", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyBonusVisualWidget, MultiplierTextureMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::NewProp_MultiplierTextureMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::NewProp_MultiplierTextureMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::NewProp_MultiplierTextureMap_Key_KeyProp = { "MultiplierTextureMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::NewProp_MultiplierTextureMap_ValueProp = { "MultiplierTextureMap", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::NewProp_MultiplierImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::NewProp_MultiplierTextureMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::NewProp_MultiplierTextureMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::NewProp_MultiplierTextureMap_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGTallyBonusVisualWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::ClassParams = {
		&UUMGTallyBonusVisualWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGTallyBonusVisualWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGTallyBonusVisualWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGTallyBonusVisualWidget, 1262868203);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGTallyBonusVisualWidget>()
	{
		return UUMGTallyBonusVisualWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGTallyBonusVisualWidget(Z_Construct_UClass_UUMGTallyBonusVisualWidget, &UUMGTallyBonusVisualWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGTallyBonusVisualWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGTallyBonusVisualWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
