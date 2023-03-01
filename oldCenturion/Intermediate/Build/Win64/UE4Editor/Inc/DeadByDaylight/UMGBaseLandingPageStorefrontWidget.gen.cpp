// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGBaseLandingPageStorefrontWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGBaseLandingPageStorefrontWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseStorefrontWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EStorefrontState();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLandingPageButtonWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGBaseLandingPageStorefrontWidget::execHandleTabSelected)
	{
		P_GET_ENUM_REF(EStorefrontState,Z_Param_Out_tabId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTabSelected((EStorefrontState&)(Z_Param_Out_tabId));
		P_NATIVE_END;
	}
	void UUMGBaseLandingPageStorefrontWidget::StaticRegisterNativesUUMGBaseLandingPageStorefrontWidget()
	{
		UClass* Class = UUMGBaseLandingPageStorefrontWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTabSelected", &UUMGBaseLandingPageStorefrontWidget::execHandleTabSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected_Statics
	{
		struct UMGBaseLandingPageStorefrontWidget_eventHandleTabSelected_Parms
		{
			EStorefrontState tabId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tabId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tabId_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected_Statics::NewProp_tabId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected_Statics::NewProp_tabId = { "tabId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBaseLandingPageStorefrontWidget_eventHandleTabSelected_Parms, tabId), Z_Construct_UEnum_DeadByDaylight_EStorefrontState, METADATA_PARAMS(Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected_Statics::NewProp_tabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected_Statics::NewProp_tabId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected_Statics::NewProp_tabId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected_Statics::NewProp_tabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected_Statics::NewProp_tabId_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBaseLandingPageStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget, nullptr, "HandleTabSelected", nullptr, nullptr, sizeof(UMGBaseLandingPageStorefrontWidget_eventHandleTabSelected_Parms), Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_NoRegister()
	{
		return UUMGBaseLandingPageStorefrontWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__landingPageTabs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__landingPageTabs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__landingPageTabs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledButtonText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisabledButtonText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledButtonColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisabledButtonColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BigButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_BigButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediumButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_MediumButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SmallButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallButtonsSlot2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SmallButtonsSlot2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallButtonsSlot1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SmallButtonsSlot1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BigButtonsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BigButtonsSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseStorefrontWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGBaseLandingPageStorefrontWidget_HandleTabSelected, "HandleTabSelected" }, // 813136539
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGBaseLandingPageStorefrontWidget.h" },
		{ "ModuleRelativePath", "Public/UMGBaseLandingPageStorefrontWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp__landingPageTabs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseLandingPageStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp__landingPageTabs = { "_landingPageTabs", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseLandingPageStorefrontWidget, _landingPageTabs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp__landingPageTabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp__landingPageTabs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp__landingPageTabs_Inner = { "_landingPageTabs", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUMGLandingPageButtonWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_DisabledButtonText_MetaData[] = {
		{ "Category", "UMGBaseLandingPageStorefrontWidget" },
		{ "ModuleRelativePath", "Public/UMGBaseLandingPageStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_DisabledButtonText = { "DisabledButtonText", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseLandingPageStorefrontWidget, DisabledButtonText), METADATA_PARAMS(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_DisabledButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_DisabledButtonText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_DisabledButtonColor_MetaData[] = {
		{ "Category", "UMGBaseLandingPageStorefrontWidget" },
		{ "ModuleRelativePath", "Public/UMGBaseLandingPageStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_DisabledButtonColor = { "DisabledButtonColor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseLandingPageStorefrontWidget, DisabledButtonColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_DisabledButtonColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_DisabledButtonColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_BigButtonClass_MetaData[] = {
		{ "Category", "UMGBaseLandingPageStorefrontWidget" },
		{ "ModuleRelativePath", "Public/UMGBaseLandingPageStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_BigButtonClass = { "BigButtonClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseLandingPageStorefrontWidget, BigButtonClass), Z_Construct_UClass_UUMGLandingPageButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_BigButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_BigButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_MediumButtonClass_MetaData[] = {
		{ "Category", "UMGBaseLandingPageStorefrontWidget" },
		{ "ModuleRelativePath", "Public/UMGBaseLandingPageStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_MediumButtonClass = { "MediumButtonClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseLandingPageStorefrontWidget, MediumButtonClass), Z_Construct_UClass_UUMGLandingPageButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_MediumButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_MediumButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_SmallButtonClass_MetaData[] = {
		{ "Category", "UMGBaseLandingPageStorefrontWidget" },
		{ "ModuleRelativePath", "Public/UMGBaseLandingPageStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_SmallButtonClass = { "SmallButtonClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseLandingPageStorefrontWidget, SmallButtonClass), Z_Construct_UClass_UUMGLandingPageButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_SmallButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_SmallButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_SmallButtonsSlot2_MetaData[] = {
		{ "Category", "UMGBaseLandingPageStorefrontWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseLandingPageStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_SmallButtonsSlot2 = { "SmallButtonsSlot2", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseLandingPageStorefrontWidget, SmallButtonsSlot2), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_SmallButtonsSlot2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_SmallButtonsSlot2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_SmallButtonsSlot1_MetaData[] = {
		{ "Category", "UMGBaseLandingPageStorefrontWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseLandingPageStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_SmallButtonsSlot1 = { "SmallButtonsSlot1", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseLandingPageStorefrontWidget, SmallButtonsSlot1), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_SmallButtonsSlot1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_SmallButtonsSlot1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_BigButtonsSlot_MetaData[] = {
		{ "Category", "UMGBaseLandingPageStorefrontWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseLandingPageStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_BigButtonsSlot = { "BigButtonsSlot", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseLandingPageStorefrontWidget, BigButtonsSlot), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_BigButtonsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_BigButtonsSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp__landingPageTabs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp__landingPageTabs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_DisabledButtonText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_DisabledButtonColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_BigButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_MediumButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_SmallButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_SmallButtonsSlot2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_SmallButtonsSlot1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::NewProp_BigButtonsSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGBaseLandingPageStorefrontWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::ClassParams = {
		&UUMGBaseLandingPageStorefrontWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGBaseLandingPageStorefrontWidget, 3203797761);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGBaseLandingPageStorefrontWidget>()
	{
		return UUMGBaseLandingPageStorefrontWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGBaseLandingPageStorefrontWidget(Z_Construct_UClass_UUMGBaseLandingPageStorefrontWidget, &UUMGBaseLandingPageStorefrontWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGBaseLandingPageStorefrontWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGBaseLandingPageStorefrontWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
