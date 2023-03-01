// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGSettingContextButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGSettingContextButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGSettingContextButtonOnSettingContextButtonClickEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingContextButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingContextButton();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_UMGSettingContextButtonOnSettingContextButtonClickEvent__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventUMGSettingContextButtonOnSettingContextButtonClickEvent_Parms
		{
			int32 tabIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tabIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_UMGSettingContextButtonOnSettingContextButtonClickEvent__DelegateSignature_Statics::NewProp_tabIndex = { "tabIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventUMGSettingContextButtonOnSettingContextButtonClickEvent_Parms, tabIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_UMGSettingContextButtonOnSettingContextButtonClickEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_UMGSettingContextButtonOnSettingContextButtonClickEvent__DelegateSignature_Statics::NewProp_tabIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_UMGSettingContextButtonOnSettingContextButtonClickEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingContextButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_UMGSettingContextButtonOnSettingContextButtonClickEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "UMGSettingContextButtonOnSettingContextButtonClickEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventUMGSettingContextButtonOnSettingContextButtonClickEvent_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_UMGSettingContextButtonOnSettingContextButtonClickEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_UMGSettingContextButtonOnSettingContextButtonClickEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_UMGSettingContextButtonOnSettingContextButtonClickEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_UMGSettingContextButtonOnSettingContextButtonClickEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGSettingContextButtonOnSettingContextButtonClickEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_UMGSettingContextButtonOnSettingContextButtonClickEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUMGSettingContextButton::execGetContextButtonData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetContextButtonData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSettingContextButton::execHandleSettingContextButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSettingContextButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSettingContextButton::execSetContextButtonData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContextButtonData(Z_Param_buttonID);
		P_NATIVE_END;
	}
	static FName NAME_UUMGSettingContextButton_SetButtonText = FName(TEXT("SetButtonText"));
	void UUMGSettingContextButton::SetButtonText(const FString& buttonText)
	{
		UMGSettingContextButton_eventSetButtonText_Parms Parms;
		Parms.buttonText=buttonText;
		ProcessEvent(FindFunctionChecked(NAME_UUMGSettingContextButton_SetButtonText),&Parms);
	}
	static FName NAME_UUMGSettingContextButton_SetIsSelected = FName(TEXT("SetIsSelected"));
	void UUMGSettingContextButton::SetIsSelected(bool isSelected)
	{
		UMGSettingContextButton_eventSetIsSelected_Parms Parms;
		Parms.isSelected=isSelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGSettingContextButton_SetIsSelected),&Parms);
	}
	void UUMGSettingContextButton::StaticRegisterNativesUUMGSettingContextButton()
	{
		UClass* Class = UUMGSettingContextButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetContextButtonData", &UUMGSettingContextButton::execGetContextButtonData },
			{ "HandleSettingContextButtonClick", &UUMGSettingContextButton::execHandleSettingContextButtonClick },
			{ "SetContextButtonData", &UUMGSettingContextButton::execSetContextButtonData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGSettingContextButton_GetContextButtonData_Statics
	{
		struct UMGSettingContextButton_eventGetContextButtonData_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGSettingContextButton_GetContextButtonData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGSettingContextButton_eventGetContextButtonData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingContextButton_GetContextButtonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingContextButton_GetContextButtonData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingContextButton_GetContextButtonData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingContextButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingContextButton_GetContextButtonData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingContextButton, nullptr, "GetContextButtonData", nullptr, nullptr, sizeof(UMGSettingContextButton_eventGetContextButtonData_Parms), Z_Construct_UFunction_UUMGSettingContextButton_GetContextButtonData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingContextButton_GetContextButtonData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingContextButton_GetContextButtonData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingContextButton_GetContextButtonData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingContextButton_GetContextButtonData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingContextButton_GetContextButtonData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingContextButton_HandleSettingContextButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingContextButton_HandleSettingContextButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingContextButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingContextButton_HandleSettingContextButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingContextButton, nullptr, "HandleSettingContextButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingContextButton_HandleSettingContextButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingContextButton_HandleSettingContextButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingContextButton_HandleSettingContextButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingContextButton_HandleSettingContextButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingContextButton_SetButtonText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_buttonText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingContextButton_SetButtonText_Statics::NewProp_buttonText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGSettingContextButton_SetButtonText_Statics::NewProp_buttonText = { "buttonText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGSettingContextButton_eventSetButtonText_Parms, buttonText), METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingContextButton_SetButtonText_Statics::NewProp_buttonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingContextButton_SetButtonText_Statics::NewProp_buttonText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingContextButton_SetButtonText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingContextButton_SetButtonText_Statics::NewProp_buttonText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingContextButton_SetButtonText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingContextButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingContextButton_SetButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingContextButton, nullptr, "SetButtonText", nullptr, nullptr, sizeof(UMGSettingContextButton_eventSetButtonText_Parms), Z_Construct_UFunction_UUMGSettingContextButton_SetButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingContextButton_SetButtonText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingContextButton_SetButtonText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingContextButton_SetButtonText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingContextButton_SetButtonText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingContextButton_SetButtonText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingContextButton_SetContextButtonData_Statics
	{
		struct UMGSettingContextButton_eventSetContextButtonData_Parms
		{
			int32 buttonID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGSettingContextButton_SetContextButtonData_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGSettingContextButton_eventSetContextButtonData_Parms, buttonID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingContextButton_SetContextButtonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingContextButton_SetContextButtonData_Statics::NewProp_buttonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingContextButton_SetContextButtonData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingContextButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingContextButton_SetContextButtonData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingContextButton, nullptr, "SetContextButtonData", nullptr, nullptr, sizeof(UMGSettingContextButton_eventSetContextButtonData_Parms), Z_Construct_UFunction_UUMGSettingContextButton_SetContextButtonData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingContextButton_SetContextButtonData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingContextButton_SetContextButtonData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingContextButton_SetContextButtonData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingContextButton_SetContextButtonData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingContextButton_SetContextButtonData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingContextButton_SetIsSelected_Statics
	{
		static void NewProp_isSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGSettingContextButton_SetIsSelected_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((UMGSettingContextButton_eventSetIsSelected_Parms*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGSettingContextButton_SetIsSelected_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGSettingContextButton_eventSetIsSelected_Parms), &Z_Construct_UFunction_UUMGSettingContextButton_SetIsSelected_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingContextButton_SetIsSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingContextButton_SetIsSelected_Statics::NewProp_isSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingContextButton_SetIsSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingContextButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingContextButton_SetIsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingContextButton, nullptr, "SetIsSelected", nullptr, nullptr, sizeof(UMGSettingContextButton_eventSetIsSelected_Parms), Z_Construct_UFunction_UUMGSettingContextButton_SetIsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingContextButton_SetIsSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingContextButton_SetIsSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingContextButton_SetIsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingContextButton_SetIsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingContextButton_SetIsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGSettingContextButton_NoRegister()
	{
		return UUMGSettingContextButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGSettingContextButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSettingContextButtonClickEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSettingContextButtonClickEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGSettingContextButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGSettingContextButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGSettingContextButton_GetContextButtonData, "GetContextButtonData" }, // 3369814488
		{ &Z_Construct_UFunction_UUMGSettingContextButton_HandleSettingContextButtonClick, "HandleSettingContextButtonClick" }, // 191012759
		{ &Z_Construct_UFunction_UUMGSettingContextButton_SetButtonText, "SetButtonText" }, // 1835074437
		{ &Z_Construct_UFunction_UUMGSettingContextButton_SetContextButtonData, "SetContextButtonData" }, // 3850318536
		{ &Z_Construct_UFunction_UUMGSettingContextButton_SetIsSelected, "SetIsSelected" }, // 4012514517
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingContextButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGSettingContextButton.h" },
		{ "ModuleRelativePath", "Public/UMGSettingContextButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingContextButton_Statics::NewProp_OnSettingContextButtonClickEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGSettingContextButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUMGSettingContextButton_Statics::NewProp_OnSettingContextButtonClickEvent = { "OnSettingContextButtonClickEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSettingContextButton, OnSettingContextButtonClickEvent), Z_Construct_UDelegateFunction_DeadByDaylight_UMGSettingContextButtonOnSettingContextButtonClickEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUMGSettingContextButton_Statics::NewProp_OnSettingContextButtonClickEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingContextButton_Statics::NewProp_OnSettingContextButtonClickEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGSettingContextButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSettingContextButton_Statics::NewProp_OnSettingContextButtonClickEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGSettingContextButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGSettingContextButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGSettingContextButton_Statics::ClassParams = {
		&UUMGSettingContextButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGSettingContextButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingContextButton_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGSettingContextButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingContextButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGSettingContextButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGSettingContextButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGSettingContextButton, 740166197);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGSettingContextButton>()
	{
		return UUMGSettingContextButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGSettingContextButton(Z_Construct_UClass_UUMGSettingContextButton, &UUMGSettingContextButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGSettingContextButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGSettingContextButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
