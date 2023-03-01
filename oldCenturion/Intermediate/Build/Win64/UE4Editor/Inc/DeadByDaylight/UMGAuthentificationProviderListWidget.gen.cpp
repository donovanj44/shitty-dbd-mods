// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAuthentificationProviderListWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAuthentificationProviderListWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAuthentificationProviderListWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAuthentificationProviderListWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAuthentificationProviderListWidget::execHideGuestButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideGuestButton();
		P_NATIVE_END;
	}
	void UUMGAuthentificationProviderListWidget::StaticRegisterNativesUUMGAuthentificationProviderListWidget()
	{
		UClass* Class = UUMGAuthentificationProviderListWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideGuestButton", &UUMGAuthentificationProviderListWidget::execHideGuestButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAuthentificationProviderListWidget_HideGuestButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAuthentificationProviderListWidget_HideGuestButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAuthentificationProviderListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAuthentificationProviderListWidget_HideGuestButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAuthentificationProviderListWidget, nullptr, "HideGuestButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAuthentificationProviderListWidget_HideGuestButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAuthentificationProviderListWidget_HideGuestButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAuthentificationProviderListWidget_HideGuestButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAuthentificationProviderListWidget_HideGuestButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAuthentificationProviderListWidget_NoRegister()
	{
		return UUMGAuthentificationProviderListWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAuthentificationProviderListWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuestButtonContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GuestButtonContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAuthentificationProviderListWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAuthentificationProviderListWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAuthentificationProviderListWidget_HideGuestButton, "HideGuestButton" }, // 704672956
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAuthentificationProviderListWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAuthentificationProviderListWidget.h" },
		{ "ModuleRelativePath", "Public/UMGAuthentificationProviderListWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAuthentificationProviderListWidget_Statics::NewProp_GuestButtonContainer_MetaData[] = {
		{ "Category", "UMGAuthentificationProviderListWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAuthentificationProviderListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAuthentificationProviderListWidget_Statics::NewProp_GuestButtonContainer = { "GuestButtonContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAuthentificationProviderListWidget, GuestButtonContainer), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAuthentificationProviderListWidget_Statics::NewProp_GuestButtonContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAuthentificationProviderListWidget_Statics::NewProp_GuestButtonContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAuthentificationProviderListWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAuthentificationProviderListWidget_Statics::NewProp_GuestButtonContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAuthentificationProviderListWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAuthentificationProviderListWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAuthentificationProviderListWidget_Statics::ClassParams = {
		&UUMGAuthentificationProviderListWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAuthentificationProviderListWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAuthentificationProviderListWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAuthentificationProviderListWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAuthentificationProviderListWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAuthentificationProviderListWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAuthentificationProviderListWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAuthentificationProviderListWidget, 305932215);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAuthentificationProviderListWidget>()
	{
		return UUMGAuthentificationProviderListWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAuthentificationProviderListWidget(Z_Construct_UClass_UUMGAuthentificationProviderListWidget, &UUMGAuthentificationProviderListWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAuthentificationProviderListWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAuthentificationProviderListWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
