// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGPartyCountdownWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGPartyCountdownWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPartyCountdownWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPartyCountdownWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseCountdownWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGPartyCountdownWidget::execOnUnreadyButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnreadyButtonClicked();
		P_NATIVE_END;
	}
	void UUMGPartyCountdownWidget::StaticRegisterNativesUUMGPartyCountdownWidget()
	{
		UClass* Class = UUMGPartyCountdownWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnUnreadyButtonClicked", &UUMGPartyCountdownWidget::execOnUnreadyButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGPartyCountdownWidget_OnUnreadyButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPartyCountdownWidget_OnUnreadyButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPartyCountdownWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPartyCountdownWidget_OnUnreadyButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPartyCountdownWidget, nullptr, "OnUnreadyButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPartyCountdownWidget_OnUnreadyButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartyCountdownWidget_OnUnreadyButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPartyCountdownWidget_OnUnreadyButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPartyCountdownWidget_OnUnreadyButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGPartyCountdownWidget_NoRegister()
	{
		return UUMGPartyCountdownWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGPartyCountdownWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnreadyButtonContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnreadyButtonContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnreadyButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnreadyButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseCountdownWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGPartyCountdownWidget_OnUnreadyButtonClicked, "OnUnreadyButtonClicked" }, // 2326856721
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGPartyCountdownWidget.h" },
		{ "ModuleRelativePath", "Public/UMGPartyCountdownWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::NewProp_UnreadyButtonContainer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyCountdownWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::NewProp_UnreadyButtonContainer = { "UnreadyButtonContainer", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyCountdownWidget, UnreadyButtonContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::NewProp_UnreadyButtonContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::NewProp_UnreadyButtonContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::NewProp_UnreadyButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyCountdownWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::NewProp_UnreadyButton = { "UnreadyButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyCountdownWidget, UnreadyButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::NewProp_UnreadyButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::NewProp_UnreadyButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::NewProp_UnreadyButtonContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::NewProp_UnreadyButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGPartyCountdownWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::ClassParams = {
		&UUMGPartyCountdownWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGPartyCountdownWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGPartyCountdownWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGPartyCountdownWidget, 203581655);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGPartyCountdownWidget>()
	{
		return UUMGPartyCountdownWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGPartyCountdownWidget(Z_Construct_UClass_UUMGPartyCountdownWidget, &UUMGPartyCountdownWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGPartyCountdownWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGPartyCountdownWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
