// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGNavigationButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGNavigationButtonWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGNavigationButtonWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGNavigationButtonWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	static FName NAME_UUMGNavigationButtonWidget_SetIcon = FName(TEXT("SetIcon"));
	void UUMGNavigationButtonWidget::SetIcon(UTexture2D* Icon)
	{
		UMGNavigationButtonWidget_eventSetIcon_Parms Parms;
		Parms.Icon=Icon;
		ProcessEvent(FindFunctionChecked(NAME_UUMGNavigationButtonWidget_SetIcon),&Parms);
	}
	static FName NAME_UUMGNavigationButtonWidget_SetIsSelected = FName(TEXT("SetIsSelected"));
	void UUMGNavigationButtonWidget::SetIsSelected(bool isSelected)
	{
		UMGNavigationButtonWidget_eventSetIsSelected_Parms Parms;
		Parms.isSelected=isSelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGNavigationButtonWidget_SetIsSelected),&Parms);
	}
	void UUMGNavigationButtonWidget::StaticRegisterNativesUUMGNavigationButtonWidget()
	{
	}
	struct Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIcon_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIcon_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGNavigationButtonWidget_eventSetIcon_Parms, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIcon_Statics::NewProp_Icon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGNavigationButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGNavigationButtonWidget, nullptr, "SetIcon", nullptr, nullptr, sizeof(UMGNavigationButtonWidget_eventSetIcon_Parms), Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIsSelected_Statics
	{
		static void NewProp_isSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIsSelected_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((UMGNavigationButtonWidget_eventSetIsSelected_Parms*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIsSelected_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGNavigationButtonWidget_eventSetIsSelected_Parms), &Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIsSelected_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIsSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIsSelected_Statics::NewProp_isSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIsSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGNavigationButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGNavigationButtonWidget, nullptr, "SetIsSelected", nullptr, nullptr, sizeof(UMGNavigationButtonWidget_eventSetIsSelected_Parms), Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIsSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIsSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGNavigationButtonWidget_NoRegister()
	{
		return UUMGNavigationButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGNavigationButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotificationPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NotificationPanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGNavigationButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGNavigationButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIcon, "SetIcon" }, // 981423888
		{ &Z_Construct_UFunction_UUMGNavigationButtonWidget_SetIsSelected, "SetIsSelected" }, // 2961436284
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGNavigationButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGNavigationButtonWidget.h" },
		{ "ModuleRelativePath", "Public/UMGNavigationButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGNavigationButtonWidget_Statics::NewProp_NotificationPanel_MetaData[] = {
		{ "Category", "UMGNavigationButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGNavigationButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGNavigationButtonWidget_Statics::NewProp_NotificationPanel = { "NotificationPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGNavigationButtonWidget, NotificationPanel), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGNavigationButtonWidget_Statics::NewProp_NotificationPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGNavigationButtonWidget_Statics::NewProp_NotificationPanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGNavigationButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGNavigationButtonWidget_Statics::NewProp_NotificationPanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGNavigationButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGNavigationButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGNavigationButtonWidget_Statics::ClassParams = {
		&UUMGNavigationButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGNavigationButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGNavigationButtonWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGNavigationButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGNavigationButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGNavigationButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGNavigationButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGNavigationButtonWidget, 2930312315);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGNavigationButtonWidget>()
	{
		return UUMGNavigationButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGNavigationButtonWidget(Z_Construct_UClass_UUMGNavigationButtonWidget, &UUMGNavigationButtonWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGNavigationButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGNavigationButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
