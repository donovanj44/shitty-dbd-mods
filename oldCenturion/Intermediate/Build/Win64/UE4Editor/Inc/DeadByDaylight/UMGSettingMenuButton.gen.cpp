// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGSettingMenuButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGSettingMenuButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingMenuButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingMenuButton();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UUMGSettingMenuButton::execHandleSettingTabButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSettingTabButtonClick();
		P_NATIVE_END;
	}
	static FName NAME_UUMGSettingMenuButton_SetIsSelected = FName(TEXT("SetIsSelected"));
	void UUMGSettingMenuButton::SetIsSelected(bool isSelected)
	{
		UMGSettingMenuButton_eventSetIsSelected_Parms Parms;
		Parms.isSelected=isSelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGSettingMenuButton_SetIsSelected),&Parms);
	}
	static FName NAME_UUMGSettingMenuButton_SetTabButtonText = FName(TEXT("SetTabButtonText"));
	void UUMGSettingMenuButton::SetTabButtonText(FText const& buttonText)
	{
		UMGSettingMenuButton_eventSetTabButtonText_Parms Parms;
		Parms.buttonText=buttonText;
		ProcessEvent(FindFunctionChecked(NAME_UUMGSettingMenuButton_SetTabButtonText),&Parms);
	}
	void UUMGSettingMenuButton::StaticRegisterNativesUUMGSettingMenuButton()
	{
		UClass* Class = UUMGSettingMenuButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleSettingTabButtonClick", &UUMGSettingMenuButton::execHandleSettingTabButtonClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGSettingMenuButton_HandleSettingTabButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingMenuButton_HandleSettingTabButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingMenuButton_HandleSettingTabButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingMenuButton, nullptr, "HandleSettingTabButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingMenuButton_HandleSettingTabButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingMenuButton_HandleSettingTabButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingMenuButton_HandleSettingTabButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingMenuButton_HandleSettingTabButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingMenuButton_SetIsSelected_Statics
	{
		static void NewProp_isSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGSettingMenuButton_SetIsSelected_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((UMGSettingMenuButton_eventSetIsSelected_Parms*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGSettingMenuButton_SetIsSelected_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGSettingMenuButton_eventSetIsSelected_Parms), &Z_Construct_UFunction_UUMGSettingMenuButton_SetIsSelected_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingMenuButton_SetIsSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingMenuButton_SetIsSelected_Statics::NewProp_isSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingMenuButton_SetIsSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingMenuButton_SetIsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingMenuButton, nullptr, "SetIsSelected", nullptr, nullptr, sizeof(UMGSettingMenuButton_eventSetIsSelected_Parms), Z_Construct_UFunction_UUMGSettingMenuButton_SetIsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingMenuButton_SetIsSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingMenuButton_SetIsSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingMenuButton_SetIsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingMenuButton_SetIsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingMenuButton_SetIsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingMenuButton_SetTabButtonText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_buttonText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingMenuButton_SetTabButtonText_Statics::NewProp_buttonText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGSettingMenuButton_SetTabButtonText_Statics::NewProp_buttonText = { "buttonText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGSettingMenuButton_eventSetTabButtonText_Parms, buttonText), METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingMenuButton_SetTabButtonText_Statics::NewProp_buttonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingMenuButton_SetTabButtonText_Statics::NewProp_buttonText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingMenuButton_SetTabButtonText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingMenuButton_SetTabButtonText_Statics::NewProp_buttonText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingMenuButton_SetTabButtonText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingMenuButton_SetTabButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingMenuButton, nullptr, "SetTabButtonText", nullptr, nullptr, sizeof(UMGSettingMenuButton_eventSetTabButtonText_Parms), Z_Construct_UFunction_UUMGSettingMenuButton_SetTabButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingMenuButton_SetTabButtonText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingMenuButton_SetTabButtonText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingMenuButton_SetTabButtonText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingMenuButton_SetTabButtonText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingMenuButton_SetTabButtonText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGSettingMenuButton_NoRegister()
	{
		return UUMGSettingMenuButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGSettingMenuButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGSettingMenuButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGSettingMenuButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGSettingMenuButton_HandleSettingTabButtonClick, "HandleSettingTabButtonClick" }, // 3986653790
		{ &Z_Construct_UFunction_UUMGSettingMenuButton_SetIsSelected, "SetIsSelected" }, // 3727176955
		{ &Z_Construct_UFunction_UUMGSettingMenuButton_SetTabButtonText, "SetTabButtonText" }, // 1223615867
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingMenuButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGSettingMenuButton.h" },
		{ "ModuleRelativePath", "Public/UMGSettingMenuButton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGSettingMenuButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGSettingMenuButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGSettingMenuButton_Statics::ClassParams = {
		&UUMGSettingMenuButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGSettingMenuButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingMenuButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGSettingMenuButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGSettingMenuButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGSettingMenuButton, 2756975324);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGSettingMenuButton>()
	{
		return UUMGSettingMenuButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGSettingMenuButton(Z_Construct_UClass_UUMGSettingMenuButton, &UUMGSettingMenuButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGSettingMenuButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGSettingMenuButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
