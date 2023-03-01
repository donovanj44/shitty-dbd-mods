// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGControlTypeWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGControlTypeWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGControlTypeWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGControlTypeWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAtlantaControlTypeSetting();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGControlTypeWidget::execHandleButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleButtonClicked();
		P_NATIVE_END;
	}
	static FName NAME_UUMGControlTypeWidget_InitializeDefaultLayout = FName(TEXT("InitializeDefaultLayout"));
	void UUMGControlTypeWidget::InitializeDefaultLayout(EAtlantaControlTypeSetting controlType)
	{
		UMGControlTypeWidget_eventInitializeDefaultLayout_Parms Parms;
		Parms.controlType=controlType;
		ProcessEvent(FindFunctionChecked(NAME_UUMGControlTypeWidget_InitializeDefaultLayout),&Parms);
	}
	static FName NAME_UUMGControlTypeWidget_IsChecked = FName(TEXT("IsChecked"));
	bool UUMGControlTypeWidget::IsChecked()
	{
		UMGControlTypeWidget_eventIsChecked_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UUMGControlTypeWidget_IsChecked),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UUMGControlTypeWidget_SetOptionChecked = FName(TEXT("SetOptionChecked"));
	void UUMGControlTypeWidget::SetOptionChecked(bool NewIsChecked)
	{
		UMGControlTypeWidget_eventSetOptionChecked_Parms Parms;
		Parms.NewIsChecked=NewIsChecked ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGControlTypeWidget_SetOptionChecked),&Parms);
	}
	void UUMGControlTypeWidget::StaticRegisterNativesUUMGControlTypeWidget()
	{
		UClass* Class = UUMGControlTypeWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleButtonClicked", &UUMGControlTypeWidget::execHandleButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGControlTypeWidget_HandleButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGControlTypeWidget_HandleButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGControlTypeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGControlTypeWidget_HandleButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGControlTypeWidget, nullptr, "HandleButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGControlTypeWidget_HandleButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGControlTypeWidget_HandleButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGControlTypeWidget_HandleButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGControlTypeWidget_HandleButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGControlTypeWidget_InitializeDefaultLayout_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_controlType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_controlType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGControlTypeWidget_InitializeDefaultLayout_Statics::NewProp_controlType = { "controlType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGControlTypeWidget_eventInitializeDefaultLayout_Parms, controlType), Z_Construct_UEnum_DeadByDaylight_EAtlantaControlTypeSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGControlTypeWidget_InitializeDefaultLayout_Statics::NewProp_controlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGControlTypeWidget_InitializeDefaultLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGControlTypeWidget_InitializeDefaultLayout_Statics::NewProp_controlType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGControlTypeWidget_InitializeDefaultLayout_Statics::NewProp_controlType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGControlTypeWidget_InitializeDefaultLayout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGControlTypeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGControlTypeWidget_InitializeDefaultLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGControlTypeWidget, nullptr, "InitializeDefaultLayout", nullptr, nullptr, sizeof(UMGControlTypeWidget_eventInitializeDefaultLayout_Parms), Z_Construct_UFunction_UUMGControlTypeWidget_InitializeDefaultLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGControlTypeWidget_InitializeDefaultLayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGControlTypeWidget_InitializeDefaultLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGControlTypeWidget_InitializeDefaultLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGControlTypeWidget_InitializeDefaultLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGControlTypeWidget_InitializeDefaultLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGControlTypeWidget_IsChecked_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGControlTypeWidget_IsChecked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UMGControlTypeWidget_eventIsChecked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGControlTypeWidget_IsChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGControlTypeWidget_eventIsChecked_Parms), &Z_Construct_UFunction_UUMGControlTypeWidget_IsChecked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGControlTypeWidget_IsChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGControlTypeWidget_IsChecked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGControlTypeWidget_IsChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGControlTypeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGControlTypeWidget_IsChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGControlTypeWidget, nullptr, "IsChecked", nullptr, nullptr, sizeof(UMGControlTypeWidget_eventIsChecked_Parms), Z_Construct_UFunction_UUMGControlTypeWidget_IsChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGControlTypeWidget_IsChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGControlTypeWidget_IsChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGControlTypeWidget_IsChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGControlTypeWidget_IsChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGControlTypeWidget_IsChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGControlTypeWidget_SetOptionChecked_Statics
	{
		static void NewProp_NewIsChecked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewIsChecked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGControlTypeWidget_SetOptionChecked_Statics::NewProp_NewIsChecked_SetBit(void* Obj)
	{
		((UMGControlTypeWidget_eventSetOptionChecked_Parms*)Obj)->NewIsChecked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGControlTypeWidget_SetOptionChecked_Statics::NewProp_NewIsChecked = { "NewIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGControlTypeWidget_eventSetOptionChecked_Parms), &Z_Construct_UFunction_UUMGControlTypeWidget_SetOptionChecked_Statics::NewProp_NewIsChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGControlTypeWidget_SetOptionChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGControlTypeWidget_SetOptionChecked_Statics::NewProp_NewIsChecked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGControlTypeWidget_SetOptionChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGControlTypeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGControlTypeWidget_SetOptionChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGControlTypeWidget, nullptr, "SetOptionChecked", nullptr, nullptr, sizeof(UMGControlTypeWidget_eventSetOptionChecked_Parms), Z_Construct_UFunction_UUMGControlTypeWidget_SetOptionChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGControlTypeWidget_SetOptionChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGControlTypeWidget_SetOptionChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGControlTypeWidget_SetOptionChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGControlTypeWidget_SetOptionChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGControlTypeWidget_SetOptionChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGControlTypeWidget_NoRegister()
	{
		return UUMGControlTypeWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGControlTypeWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimTextFullScreenCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimTextFullScreenCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveTextFullScreenCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveTextFullScreenCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimTextHalfScreenCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimTextHalfScreenCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveTextHalfScreenCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveTextHalfScreenCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGControlTypeWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGControlTypeWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGControlTypeWidget_HandleButtonClicked, "HandleButtonClicked" }, // 2763717816
		{ &Z_Construct_UFunction_UUMGControlTypeWidget_InitializeDefaultLayout, "InitializeDefaultLayout" }, // 187363428
		{ &Z_Construct_UFunction_UUMGControlTypeWidget_IsChecked, "IsChecked" }, // 3861205574
		{ &Z_Construct_UFunction_UUMGControlTypeWidget_SetOptionChecked, "SetOptionChecked" }, // 3705674460
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGControlTypeWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGControlTypeWidget.h" },
		{ "ModuleRelativePath", "Public/UMGControlTypeWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_AimTextFullScreenCanvas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UMGControlTypeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGControlTypeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_AimTextFullScreenCanvas = { "AimTextFullScreenCanvas", nullptr, (EPropertyFlags)0x004000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGControlTypeWidget, AimTextFullScreenCanvas), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_AimTextFullScreenCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_AimTextFullScreenCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_MoveTextFullScreenCanvas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UMGControlTypeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGControlTypeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_MoveTextFullScreenCanvas = { "MoveTextFullScreenCanvas", nullptr, (EPropertyFlags)0x004000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGControlTypeWidget, MoveTextFullScreenCanvas), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_MoveTextFullScreenCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_MoveTextFullScreenCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_AimTextHalfScreenCanvas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UMGControlTypeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGControlTypeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_AimTextHalfScreenCanvas = { "AimTextHalfScreenCanvas", nullptr, (EPropertyFlags)0x004000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGControlTypeWidget, AimTextHalfScreenCanvas), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_AimTextHalfScreenCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_AimTextHalfScreenCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_MoveTextHalfScreenCanvas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UMGControlTypeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGControlTypeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_MoveTextHalfScreenCanvas = { "MoveTextHalfScreenCanvas", nullptr, (EPropertyFlags)0x004000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGControlTypeWidget, MoveTextHalfScreenCanvas), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_MoveTextHalfScreenCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_MoveTextHalfScreenCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_Button_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UMGControlTypeWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGControlTypeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x004000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGControlTypeWidget, Button), Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_Button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGControlTypeWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_AimTextFullScreenCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_MoveTextFullScreenCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_AimTextHalfScreenCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_MoveTextHalfScreenCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGControlTypeWidget_Statics::NewProp_Button,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGControlTypeWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGControlTypeWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGControlTypeWidget_Statics::ClassParams = {
		&UUMGControlTypeWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGControlTypeWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGControlTypeWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGControlTypeWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGControlTypeWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGControlTypeWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGControlTypeWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGControlTypeWidget, 941326143);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGControlTypeWidget>()
	{
		return UUMGControlTypeWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGControlTypeWidget(Z_Construct_UClass_UUMGControlTypeWidget, &UUMGControlTypeWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGControlTypeWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGControlTypeWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
