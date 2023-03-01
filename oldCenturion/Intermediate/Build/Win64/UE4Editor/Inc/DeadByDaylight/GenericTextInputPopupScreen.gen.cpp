// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GenericTextInputPopupScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericTextInputPopupScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGenericTextInputPopupScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGenericTextInputPopupScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGenericPopupScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UGenericTextInputPopupScreen::execOnTextInputChoiceSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedButtonType);
		P_GET_PROPERTY(FStrProperty,Z_Param_inputText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTextInputChoiceSelected(Z_Param_selectedButtonType,Z_Param_inputText);
		P_NATIVE_END;
	}
	void UGenericTextInputPopupScreen::StaticRegisterNativesUGenericTextInputPopupScreen()
	{
		UClass* Class = UGenericTextInputPopupScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTextInputChoiceSelected", &UGenericTextInputPopupScreen::execOnTextInputChoiceSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected_Statics
	{
		struct GenericTextInputPopupScreen_eventOnTextInputChoiceSelected_Parms
		{
			int32 selectedButtonType;
			FString inputText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inputText;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedButtonType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected_Statics::NewProp_inputText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected_Statics::NewProp_inputText = { "inputText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenericTextInputPopupScreen_eventOnTextInputChoiceSelected_Parms, inputText), METADATA_PARAMS(Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected_Statics::NewProp_inputText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected_Statics::NewProp_inputText_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected_Statics::NewProp_selectedButtonType = { "selectedButtonType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenericTextInputPopupScreen_eventOnTextInputChoiceSelected_Parms, selectedButtonType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected_Statics::NewProp_inputText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected_Statics::NewProp_selectedButtonType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GenericTextInputPopupScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericTextInputPopupScreen, nullptr, "OnTextInputChoiceSelected", nullptr, nullptr, sizeof(GenericTextInputPopupScreen_eventOnTextInputChoiceSelected_Parms), Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGenericTextInputPopupScreen_NoRegister()
	{
		return UGenericTextInputPopupScreen::StaticClass();
	}
	struct Z_Construct_UClass_UGenericTextInputPopupScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenericTextInputPopupScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGenericTextInputPopupScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenericTextInputPopupScreen_OnTextInputChoiceSelected, "OnTextInputChoiceSelected" }, // 624007855
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericTextInputPopupScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GenericTextInputPopupScreen.h" },
		{ "ModuleRelativePath", "Public/GenericTextInputPopupScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenericTextInputPopupScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenericTextInputPopupScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenericTextInputPopupScreen_Statics::ClassParams = {
		&UGenericTextInputPopupScreen::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGenericTextInputPopupScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericTextInputPopupScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenericTextInputPopupScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenericTextInputPopupScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenericTextInputPopupScreen, 3191933232);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGenericTextInputPopupScreen>()
	{
		return UGenericTextInputPopupScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenericTextInputPopupScreen(Z_Construct_UClass_UGenericTextInputPopupScreen, &UGenericTextInputPopupScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGenericTextInputPopupScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericTextInputPopupScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
