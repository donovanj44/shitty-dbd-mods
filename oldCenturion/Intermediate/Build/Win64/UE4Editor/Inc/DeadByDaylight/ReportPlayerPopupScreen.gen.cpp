// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ReportPlayerPopupScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReportPlayerPopupScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UReportPlayerPopupScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UReportPlayerPopupScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGenericPopupScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UReportPlayerPopupScreen::execOnConfirmReportPlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_category);
		P_GET_PROPERTY(FStrProperty,Z_Param_comment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConfirmReportPlayer(Z_Param_category,Z_Param_comment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReportPlayerPopupScreen::execOnTextInputMouseOver)
	{
		P_GET_UBOOL(Z_Param_isMouseOver);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTextInputMouseOver(Z_Param_isMouseOver);
		P_NATIVE_END;
	}
	void UReportPlayerPopupScreen::StaticRegisterNativesUReportPlayerPopupScreen()
	{
		UClass* Class = UReportPlayerPopupScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnConfirmReportPlayer", &UReportPlayerPopupScreen::execOnConfirmReportPlayer },
			{ "OnTextInputMouseOver", &UReportPlayerPopupScreen::execOnTextInputMouseOver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics
	{
		struct ReportPlayerPopupScreen_eventOnConfirmReportPlayer_Parms
		{
			FString category;
			FString comment;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_comment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::NewProp_comment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::NewProp_comment = { "comment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReportPlayerPopupScreen_eventOnConfirmReportPlayer_Parms, comment), METADATA_PARAMS(Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::NewProp_comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::NewProp_comment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::NewProp_category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReportPlayerPopupScreen_eventOnConfirmReportPlayer_Parms, category), METADATA_PARAMS(Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::NewProp_category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::NewProp_category_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::NewProp_comment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::NewProp_category,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReportPlayerPopupScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReportPlayerPopupScreen, nullptr, "OnConfirmReportPlayer", nullptr, nullptr, sizeof(ReportPlayerPopupScreen_eventOnConfirmReportPlayer_Parms), Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReportPlayerPopupScreen_OnTextInputMouseOver_Statics
	{
		struct ReportPlayerPopupScreen_eventOnTextInputMouseOver_Parms
		{
			bool isMouseOver;
		};
		static void NewProp_isMouseOver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isMouseOver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UReportPlayerPopupScreen_OnTextInputMouseOver_Statics::NewProp_isMouseOver_SetBit(void* Obj)
	{
		((ReportPlayerPopupScreen_eventOnTextInputMouseOver_Parms*)Obj)->isMouseOver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReportPlayerPopupScreen_OnTextInputMouseOver_Statics::NewProp_isMouseOver = { "isMouseOver", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReportPlayerPopupScreen_eventOnTextInputMouseOver_Parms), &Z_Construct_UFunction_UReportPlayerPopupScreen_OnTextInputMouseOver_Statics::NewProp_isMouseOver_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReportPlayerPopupScreen_OnTextInputMouseOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReportPlayerPopupScreen_OnTextInputMouseOver_Statics::NewProp_isMouseOver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReportPlayerPopupScreen_OnTextInputMouseOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReportPlayerPopupScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReportPlayerPopupScreen_OnTextInputMouseOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReportPlayerPopupScreen, nullptr, "OnTextInputMouseOver", nullptr, nullptr, sizeof(ReportPlayerPopupScreen_eventOnTextInputMouseOver_Parms), Z_Construct_UFunction_UReportPlayerPopupScreen_OnTextInputMouseOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReportPlayerPopupScreen_OnTextInputMouseOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReportPlayerPopupScreen_OnTextInputMouseOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReportPlayerPopupScreen_OnTextInputMouseOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReportPlayerPopupScreen_OnTextInputMouseOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReportPlayerPopupScreen_OnTextInputMouseOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReportPlayerPopupScreen_NoRegister()
	{
		return UReportPlayerPopupScreen::StaticClass();
	}
	struct Z_Construct_UClass_UReportPlayerPopupScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReportPlayerPopupScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReportPlayerPopupScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReportPlayerPopupScreen_OnConfirmReportPlayer, "OnConfirmReportPlayer" }, // 1789021025
		{ &Z_Construct_UFunction_UReportPlayerPopupScreen_OnTextInputMouseOver, "OnTextInputMouseOver" }, // 3905841087
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReportPlayerPopupScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReportPlayerPopupScreen.h" },
		{ "ModuleRelativePath", "Public/ReportPlayerPopupScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReportPlayerPopupScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReportPlayerPopupScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReportPlayerPopupScreen_Statics::ClassParams = {
		&UReportPlayerPopupScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReportPlayerPopupScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReportPlayerPopupScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReportPlayerPopupScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReportPlayerPopupScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReportPlayerPopupScreen, 1042991275);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UReportPlayerPopupScreen>()
	{
		return UReportPlayerPopupScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReportPlayerPopupScreen(Z_Construct_UClass_UReportPlayerPopupScreen, &UReportPlayerPopupScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UReportPlayerPopupScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReportPlayerPopupScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
