// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGLoadoutFilterButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGLoadoutFilterButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterButtonOnLoadoutFilterButtonClicked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutFilterButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutFilterButton();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterButtonOnLoadoutFilterButtonClicked__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventUMGLoadoutFilterButtonOnLoadoutFilterButtonClicked_Parms
		{
			FName filterName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_filterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterButtonOnLoadoutFilterButtonClicked__DelegateSignature_Statics::NewProp_filterName = { "filterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventUMGLoadoutFilterButtonOnLoadoutFilterButtonClicked_Parms, filterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterButtonOnLoadoutFilterButtonClicked__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterButtonOnLoadoutFilterButtonClicked__DelegateSignature_Statics::NewProp_filterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterButtonOnLoadoutFilterButtonClicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterButtonOnLoadoutFilterButtonClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "UMGLoadoutFilterButtonOnLoadoutFilterButtonClicked__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventUMGLoadoutFilterButtonOnLoadoutFilterButtonClicked_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterButtonOnLoadoutFilterButtonClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterButtonOnLoadoutFilterButtonClicked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterButtonOnLoadoutFilterButtonClicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterButtonOnLoadoutFilterButtonClicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterButtonOnLoadoutFilterButtonClicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterButtonOnLoadoutFilterButtonClicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUMGLoadoutFilterButton::execInitFilterButton)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_filterName);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UTexture2D>,Z_Param_filterTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitFilterButton(Z_Param_Out_filterName,Z_Param_filterTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGLoadoutFilterButton::execOnActionButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionButtonClick();
		P_NATIVE_END;
	}
	static FName NAME_UUMGLoadoutFilterButton_SetIcon = FName(TEXT("SetIcon"));
	void UUMGLoadoutFilterButton::SetIcon(TSoftObjectPtr<UTexture2D> const& icon)
	{
		UMGLoadoutFilterButton_eventSetIcon_Parms Parms;
		Parms.icon=icon;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLoadoutFilterButton_SetIcon),&Parms);
	}
	static FName NAME_UUMGLoadoutFilterButton_SetIsSelected = FName(TEXT("SetIsSelected"));
	void UUMGLoadoutFilterButton::SetIsSelected(bool isSelected)
	{
		UMGLoadoutFilterButton_eventSetIsSelected_Parms Parms;
		Parms.isSelected=isSelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLoadoutFilterButton_SetIsSelected),&Parms);
	}
	void UUMGLoadoutFilterButton::StaticRegisterNativesUUMGLoadoutFilterButton()
	{
		UClass* Class = UUMGLoadoutFilterButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitFilterButton", &UUMGLoadoutFilterButton::execInitFilterButton },
			{ "OnActionButtonClick", &UUMGLoadoutFilterButton::execOnActionButtonClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics
	{
		struct UMGLoadoutFilterButton_eventInitFilterButton_Parms
		{
			FName filterName;
			TSoftObjectPtr<UTexture2D> filterTexture;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_filterTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_filterTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_filterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_filterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::NewProp_filterTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::NewProp_filterTexture = { "filterTexture", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutFilterButton_eventInitFilterButton_Parms, filterTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::NewProp_filterTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::NewProp_filterTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::NewProp_filterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::NewProp_filterName = { "filterName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutFilterButton_eventInitFilterButton_Parms, filterName), METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::NewProp_filterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::NewProp_filterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::NewProp_filterTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::NewProp_filterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLoadoutFilterButton, nullptr, "InitFilterButton", nullptr, nullptr, sizeof(UMGLoadoutFilterButton_eventInitFilterButton_Parms), Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLoadoutFilterButton_OnActionButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutFilterButton_OnActionButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLoadoutFilterButton_OnActionButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLoadoutFilterButton, nullptr, "OnActionButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutFilterButton_OnActionButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutFilterButton_OnActionButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLoadoutFilterButton_OnActionButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLoadoutFilterButton_OnActionButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIcon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_icon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIcon_Statics::NewProp_icon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIcon_Statics::NewProp_icon = { "icon", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutFilterButton_eventSetIcon_Parms, icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIcon_Statics::NewProp_icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIcon_Statics::NewProp_icon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIcon_Statics::NewProp_icon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLoadoutFilterButton, nullptr, "SetIcon", nullptr, nullptr, sizeof(UMGLoadoutFilterButton_eventSetIcon_Parms), Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIsSelected_Statics
	{
		static void NewProp_isSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIsSelected_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((UMGLoadoutFilterButton_eventSetIsSelected_Parms*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIsSelected_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGLoadoutFilterButton_eventSetIsSelected_Parms), &Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIsSelected_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIsSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIsSelected_Statics::NewProp_isSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIsSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLoadoutFilterButton, nullptr, "SetIsSelected", nullptr, nullptr, sizeof(UMGLoadoutFilterButton_eventSetIsSelected_Parms), Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIsSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIsSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGLoadoutFilterButton_NoRegister()
	{
		return UUMGLoadoutFilterButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGLoadoutFilterButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLoadoutFilterButtonClicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadoutFilterButtonClicked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGLoadoutFilterButton_InitFilterButton, "InitFilterButton" }, // 2976905829
		{ &Z_Construct_UFunction_UUMGLoadoutFilterButton_OnActionButtonClick, "OnActionButtonClick" }, // 3428124972
		{ &Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIcon, "SetIcon" }, // 494283840
		{ &Z_Construct_UFunction_UUMGLoadoutFilterButton_SetIsSelected, "SetIsSelected" }, // 2579331496
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGLoadoutFilterButton.h" },
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::NewProp_OnLoadoutFilterButtonClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::NewProp_OnLoadoutFilterButtonClicked = { "OnLoadoutFilterButtonClicked", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutFilterButton, OnLoadoutFilterButtonClicked), Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterButtonOnLoadoutFilterButtonClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::NewProp_OnLoadoutFilterButtonClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::NewProp_OnLoadoutFilterButtonClicked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::NewProp_ActionButton_MetaData[] = {
		{ "Category", "UMGLoadoutFilterButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::NewProp_ActionButton = { "ActionButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutFilterButton, ActionButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::NewProp_ActionButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::NewProp_ActionButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::NewProp_OnLoadoutFilterButtonClicked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::NewProp_ActionButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGLoadoutFilterButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::ClassParams = {
		&UUMGLoadoutFilterButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGLoadoutFilterButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGLoadoutFilterButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGLoadoutFilterButton, 1627821229);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGLoadoutFilterButton>()
	{
		return UUMGLoadoutFilterButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGLoadoutFilterButton(Z_Construct_UClass_UUMGLoadoutFilterButton, &UUMGLoadoutFilterButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGLoadoutFilterButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGLoadoutFilterButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
