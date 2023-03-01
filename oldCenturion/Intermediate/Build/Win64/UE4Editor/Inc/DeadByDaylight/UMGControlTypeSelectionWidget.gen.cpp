// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGControlTypeSelectionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGControlTypeSelectionWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGControlTypeSelectionWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGControlTypeSelectionWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAtlantaControlTypeSetting();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGControlTypeWidget_NoRegister();
// End Cross Module References
	static FName NAME_UUMGControlTypeSelectionWidget_UpdateControlType = FName(TEXT("UpdateControlType"));
	void UUMGControlTypeSelectionWidget::UpdateControlType(EAtlantaControlTypeSetting controlType)
	{
		UMGControlTypeSelectionWidget_eventUpdateControlType_Parms Parms;
		Parms.controlType=controlType;
		ProcessEvent(FindFunctionChecked(NAME_UUMGControlTypeSelectionWidget_UpdateControlType),&Parms);
	}
	void UUMGControlTypeSelectionWidget::StaticRegisterNativesUUMGControlTypeSelectionWidget()
	{
	}
	struct Z_Construct_UFunction_UUMGControlTypeSelectionWidget_UpdateControlType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_controlType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_controlType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGControlTypeSelectionWidget_UpdateControlType_Statics::NewProp_controlType = { "controlType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGControlTypeSelectionWidget_eventUpdateControlType_Parms, controlType), Z_Construct_UEnum_DeadByDaylight_EAtlantaControlTypeSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGControlTypeSelectionWidget_UpdateControlType_Statics::NewProp_controlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGControlTypeSelectionWidget_UpdateControlType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGControlTypeSelectionWidget_UpdateControlType_Statics::NewProp_controlType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGControlTypeSelectionWidget_UpdateControlType_Statics::NewProp_controlType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGControlTypeSelectionWidget_UpdateControlType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGControlTypeSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGControlTypeSelectionWidget_UpdateControlType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGControlTypeSelectionWidget, nullptr, "UpdateControlType", nullptr, nullptr, sizeof(UMGControlTypeSelectionWidget_eventUpdateControlType_Parms), Z_Construct_UFunction_UUMGControlTypeSelectionWidget_UpdateControlType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGControlTypeSelectionWidget_UpdateControlType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGControlTypeSelectionWidget_UpdateControlType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGControlTypeSelectionWidget_UpdateControlType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGControlTypeSelectionWidget_UpdateControlType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGControlTypeSelectionWidget_UpdateControlType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGControlTypeSelectionWidget_NoRegister()
	{
		return UUMGControlTypeSelectionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraFullScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraFullScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapOnJoystick_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnapOnJoystick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGControlTypeSelectionWidget_UpdateControlType, "UpdateControlType" }, // 2367629328
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGControlTypeSelectionWidget.h" },
		{ "ModuleRelativePath", "Public/UMGControlTypeSelectionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::NewProp_TitleText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UMGControlTypeSelectionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGControlTypeSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x004000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGControlTypeSelectionWidget, TitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::NewProp_TitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::NewProp_TitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::NewProp_CameraFullScreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UMGControlTypeSelectionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGControlTypeSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::NewProp_CameraFullScreen = { "CameraFullScreen", nullptr, (EPropertyFlags)0x004000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGControlTypeSelectionWidget, CameraFullScreen), Z_Construct_UClass_UUMGControlTypeWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::NewProp_CameraFullScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::NewProp_CameraFullScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::NewProp_SnapOnJoystick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UMGControlTypeSelectionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGControlTypeSelectionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::NewProp_SnapOnJoystick = { "SnapOnJoystick", nullptr, (EPropertyFlags)0x004000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGControlTypeSelectionWidget, SnapOnJoystick), Z_Construct_UClass_UUMGControlTypeWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::NewProp_SnapOnJoystick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::NewProp_SnapOnJoystick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::NewProp_TitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::NewProp_CameraFullScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::NewProp_SnapOnJoystick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGControlTypeSelectionWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::ClassParams = {
		&UUMGControlTypeSelectionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGControlTypeSelectionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGControlTypeSelectionWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGControlTypeSelectionWidget, 1810362362);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGControlTypeSelectionWidget>()
	{
		return UUMGControlTypeSelectionWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGControlTypeSelectionWidget(Z_Construct_UClass_UUMGControlTypeSelectionWidget, &UUMGControlTypeSelectionWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGControlTypeSelectionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGControlTypeSelectionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
