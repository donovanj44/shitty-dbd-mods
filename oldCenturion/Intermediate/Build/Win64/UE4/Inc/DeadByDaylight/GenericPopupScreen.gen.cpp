// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GenericPopupScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericPopupScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGenericPopupScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGenericPopupScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBasePopupScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGGenericPopup_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGenericPopupScreen::execOnChoiceSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_selectedButtonType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChoiceSelected(Z_Param_selectedButtonType);
		P_NATIVE_END;
	}
	void UGenericPopupScreen::StaticRegisterNativesUGenericPopupScreen()
	{
		UClass* Class = UGenericPopupScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnChoiceSelected", &UGenericPopupScreen::execOnChoiceSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGenericPopupScreen_OnChoiceSelected_Statics
	{
		struct GenericPopupScreen_eventOnChoiceSelected_Parms
		{
			int32 selectedButtonType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedButtonType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGenericPopupScreen_OnChoiceSelected_Statics::NewProp_selectedButtonType = { "selectedButtonType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenericPopupScreen_eventOnChoiceSelected_Parms, selectedButtonType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenericPopupScreen_OnChoiceSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenericPopupScreen_OnChoiceSelected_Statics::NewProp_selectedButtonType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenericPopupScreen_OnChoiceSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GenericPopupScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenericPopupScreen_OnChoiceSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenericPopupScreen, nullptr, "OnChoiceSelected", nullptr, nullptr, sizeof(GenericPopupScreen_eventOnChoiceSelected_Parms), Z_Construct_UFunction_UGenericPopupScreen_OnChoiceSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericPopupScreen_OnChoiceSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenericPopupScreen_OnChoiceSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenericPopupScreen_OnChoiceSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenericPopupScreen_OnChoiceSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGenericPopupScreen_OnChoiceSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGenericPopupScreen_NoRegister()
	{
		return UGenericPopupScreen::StaticClass();
	}
	struct Z_Construct_UClass_UGenericPopupScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__popup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__popup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenericPopupScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePopupScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGenericPopupScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenericPopupScreen_OnChoiceSelected, "OnChoiceSelected" }, // 1446110454
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericPopupScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GenericPopupScreen.h" },
		{ "ModuleRelativePath", "Public/GenericPopupScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericPopupScreen_Statics::NewProp__popup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GenericPopupScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenericPopupScreen_Statics::NewProp__popup = { "_popup", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenericPopupScreen, _popup), Z_Construct_UClass_UUMGGenericPopup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenericPopupScreen_Statics::NewProp__popup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericPopupScreen_Statics::NewProp__popup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenericPopupScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericPopupScreen_Statics::NewProp__popup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenericPopupScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenericPopupScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenericPopupScreen_Statics::ClassParams = {
		&UGenericPopupScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGenericPopupScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenericPopupScreen_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGenericPopupScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenericPopupScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenericPopupScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenericPopupScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenericPopupScreen, 750371762);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGenericPopupScreen>()
	{
		return UGenericPopupScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenericPopupScreen(Z_Construct_UClass_UGenericPopupScreen, &UGenericPopupScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGenericPopupScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericPopupScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
