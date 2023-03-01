// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGTallyEmblemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGTallyEmblemWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyEmblemWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyEmblemWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEmblemQuality();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FName NAME_UUMGTallyEmblemWidget_PlayFadeInAnimation = FName(TEXT("PlayFadeInAnimation"));
	void UUMGTallyEmblemWidget::PlayFadeInAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUMGTallyEmblemWidget_PlayFadeInAnimation),NULL);
	}
	void UUMGTallyEmblemWidget::StaticRegisterNativesUUMGTallyEmblemWidget()
	{
	}
	struct Z_Construct_UFunction_UUMGTallyEmblemWidget_PlayFadeInAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyEmblemWidget_PlayFadeInAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyEmblemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyEmblemWidget_PlayFadeInAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyEmblemWidget, nullptr, "PlayFadeInAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyEmblemWidget_PlayFadeInAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyEmblemWidget_PlayFadeInAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyEmblemWidget_PlayFadeInAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyEmblemWidget_PlayFadeInAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGTallyEmblemWidget_NoRegister()
	{
		return UUMGTallyEmblemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGTallyEmblemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__emblemBackgrounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__emblemBackgrounds;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__emblemBackgrounds_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__emblemBackgrounds_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__emblemBackgrounds_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGTallyEmblemWidget_PlayFadeInAnimation, "PlayFadeInAnimation" }, // 3920548222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGTallyEmblemWidget.h" },
		{ "ModuleRelativePath", "Public/UMGTallyEmblemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp_IconImage_MetaData[] = {
		{ "Category", "UMGTallyEmblemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyEmblemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp_IconImage = { "IconImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyEmblemWidget, IconImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp_IconImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp_IconImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp_BackgroundImage_MetaData[] = {
		{ "Category", "UMGTallyEmblemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyEmblemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyEmblemWidget, BackgroundImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp_BackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp_BackgroundImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp__emblemBackgrounds_MetaData[] = {
		{ "Category", "UMGTallyEmblemWidget" },
		{ "ModuleRelativePath", "Public/UMGTallyEmblemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp__emblemBackgrounds = { "_emblemBackgrounds", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyEmblemWidget, _emblemBackgrounds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp__emblemBackgrounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp__emblemBackgrounds_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp__emblemBackgrounds_Key_KeyProp = { "_emblemBackgrounds_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EEmblemQuality, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp__emblemBackgrounds_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp__emblemBackgrounds_ValueProp = { "_emblemBackgrounds", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp_IconImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp_BackgroundImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp__emblemBackgrounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp__emblemBackgrounds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp__emblemBackgrounds_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::NewProp__emblemBackgrounds_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGTallyEmblemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::ClassParams = {
		&UUMGTallyEmblemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGTallyEmblemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGTallyEmblemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGTallyEmblemWidget, 129481296);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGTallyEmblemWidget>()
	{
		return UUMGTallyEmblemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGTallyEmblemWidget(Z_Construct_UClass_UUMGTallyEmblemWidget, &UUMGTallyEmblemWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGTallyEmblemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGTallyEmblemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
