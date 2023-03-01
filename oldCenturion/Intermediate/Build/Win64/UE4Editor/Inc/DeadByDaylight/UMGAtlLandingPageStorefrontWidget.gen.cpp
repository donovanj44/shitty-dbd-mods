// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlLandingPageStorefrontWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlLandingPageStorefrontWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlLandingPageStorefrontWidget::execOnPromoCodeButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPromoCodeButtonPressed();
		P_NATIVE_END;
	}
	void UUMGAtlLandingPageStorefrontWidget::StaticRegisterNativesUUMGAtlLandingPageStorefrontWidget()
	{
		UClass* Class = UUMGAtlLandingPageStorefrontWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPromoCodeButtonPressed", &UUMGAtlLandingPageStorefrontWidget::execOnPromoCodeButtonPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlLandingPageStorefrontWidget_OnPromoCodeButtonPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlLandingPageStorefrontWidget_OnPromoCodeButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlLandingPageStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlLandingPageStorefrontWidget_OnPromoCodeButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget, nullptr, "OnPromoCodeButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlLandingPageStorefrontWidget_OnPromoCodeButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlLandingPageStorefrontWidget_OnPromoCodeButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlLandingPageStorefrontWidget_OnPromoCodeButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlLandingPageStorefrontWidget_OnPromoCodeButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_NoRegister()
	{
		return UUMGAtlLandingPageStorefrontWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlantaRedeemCodeBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtlantaRedeemCodeBtn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlLandingPageStorefrontWidget_OnPromoCodeButtonPressed, "OnPromoCodeButtonPressed" }, // 2342781518
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlLandingPageStorefrontWidget.h" },
		{ "ModuleRelativePath", "Public/UMGAtlLandingPageStorefrontWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_Statics::NewProp_AtlantaRedeemCodeBtn_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlLandingPageStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_Statics::NewProp_AtlantaRedeemCodeBtn = { "AtlantaRedeemCodeBtn", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlLandingPageStorefrontWidget, AtlantaRedeemCodeBtn), Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_Statics::NewProp_AtlantaRedeemCodeBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_Statics::NewProp_AtlantaRedeemCodeBtn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_Statics::NewProp_AtlantaRedeemCodeBtn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlLandingPageStorefrontWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_Statics::ClassParams = {
		&UUMGAtlLandingPageStorefrontWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlLandingPageStorefrontWidget, 718691072);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlLandingPageStorefrontWidget>()
	{
		return UUMGAtlLandingPageStorefrontWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlLandingPageStorefrontWidget(Z_Construct_UClass_UUMGAtlLandingPageStorefrontWidget, &UUMGAtlLandingPageStorefrontWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlLandingPageStorefrontWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlLandingPageStorefrontWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
