// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaLegalMenuScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaLegalMenuScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaLegalMenuScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaLegalMenuScreen();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaLegalMenuScreen::execHandleMenuButtonClickEvent)
	{
		P_GET_UBOOL(Z_Param_isAccept);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMenuButtonClickEvent(Z_Param_isAccept);
		P_NATIVE_END;
	}
	static FName NAME_UUMGAtlantaLegalMenuScreen_SetButtonText = FName(TEXT("SetButtonText"));
	void UUMGAtlantaLegalMenuScreen::SetButtonText(FText const& acceptText, FText const& declineText)
	{
		UMGAtlantaLegalMenuScreen_eventSetButtonText_Parms Parms;
		Parms.acceptText=acceptText;
		Parms.declineText=declineText;
		ProcessEvent(FindFunctionChecked(NAME_UUMGAtlantaLegalMenuScreen_SetButtonText),&Parms);
	}
	static FName NAME_UUMGAtlantaLegalMenuScreen_SetLegalText = FName(TEXT("SetLegalText"));
	void UUMGAtlantaLegalMenuScreen::SetLegalText(const FString& title, const FString& legalText)
	{
		UMGAtlantaLegalMenuScreen_eventSetLegalText_Parms Parms;
		Parms.title=title;
		Parms.legalText=legalText;
		ProcessEvent(FindFunctionChecked(NAME_UUMGAtlantaLegalMenuScreen_SetLegalText),&Parms);
	}
	void UUMGAtlantaLegalMenuScreen::StaticRegisterNativesUUMGAtlantaLegalMenuScreen()
	{
		UClass* Class = UUMGAtlantaLegalMenuScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleMenuButtonClickEvent", &UUMGAtlantaLegalMenuScreen::execHandleMenuButtonClickEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_HandleMenuButtonClickEvent_Statics
	{
		struct UMGAtlantaLegalMenuScreen_eventHandleMenuButtonClickEvent_Parms
		{
			bool isAccept;
		};
		static void NewProp_isAccept_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAccept;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_HandleMenuButtonClickEvent_Statics::NewProp_isAccept_SetBit(void* Obj)
	{
		((UMGAtlantaLegalMenuScreen_eventHandleMenuButtonClickEvent_Parms*)Obj)->isAccept = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_HandleMenuButtonClickEvent_Statics::NewProp_isAccept = { "isAccept", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGAtlantaLegalMenuScreen_eventHandleMenuButtonClickEvent_Parms), &Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_HandleMenuButtonClickEvent_Statics::NewProp_isAccept_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_HandleMenuButtonClickEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_HandleMenuButtonClickEvent_Statics::NewProp_isAccept,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_HandleMenuButtonClickEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaLegalMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_HandleMenuButtonClickEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaLegalMenuScreen, nullptr, "HandleMenuButtonClickEvent", nullptr, nullptr, sizeof(UMGAtlantaLegalMenuScreen_eventHandleMenuButtonClickEvent_Parms), Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_HandleMenuButtonClickEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_HandleMenuButtonClickEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_HandleMenuButtonClickEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_HandleMenuButtonClickEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_HandleMenuButtonClickEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_HandleMenuButtonClickEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_declineText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_declineText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_acceptText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_acceptText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::NewProp_declineText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::NewProp_declineText = { "declineText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaLegalMenuScreen_eventSetButtonText_Parms, declineText), METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::NewProp_declineText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::NewProp_declineText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::NewProp_acceptText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::NewProp_acceptText = { "acceptText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaLegalMenuScreen_eventSetButtonText_Parms, acceptText), METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::NewProp_acceptText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::NewProp_acceptText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::NewProp_declineText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::NewProp_acceptText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaLegalMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaLegalMenuScreen, nullptr, "SetButtonText", nullptr, nullptr, sizeof(UMGAtlantaLegalMenuScreen_eventSetButtonText_Parms), Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_legalText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_legalText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::NewProp_legalText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::NewProp_legalText = { "legalText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaLegalMenuScreen_eventSetLegalText_Parms, legalText), METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::NewProp_legalText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::NewProp_legalText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::NewProp_title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaLegalMenuScreen_eventSetLegalText_Parms, title), METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::NewProp_title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::NewProp_title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::NewProp_legalText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::NewProp_title,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaLegalMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaLegalMenuScreen, nullptr, "SetLegalText", nullptr, nullptr, sizeof(UMGAtlantaLegalMenuScreen_eventSetLegalText_Parms), Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaLegalMenuScreen_NoRegister()
	{
		return UUMGAtlantaLegalMenuScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaLegalMenuScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaLegalMenuScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaLegalMenuScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_HandleMenuButtonClickEvent, "HandleMenuButtonClickEvent" }, // 176026922
		{ &Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetButtonText, "SetButtonText" }, // 3766399656
		{ &Z_Construct_UFunction_UUMGAtlantaLegalMenuScreen_SetLegalText, "SetLegalText" }, // 3175624820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaLegalMenuScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaLegalMenuScreen.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaLegalMenuScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaLegalMenuScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaLegalMenuScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaLegalMenuScreen_Statics::ClassParams = {
		&UUMGAtlantaLegalMenuScreen::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaLegalMenuScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaLegalMenuScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaLegalMenuScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaLegalMenuScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaLegalMenuScreen, 1301861309);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaLegalMenuScreen>()
	{
		return UUMGAtlantaLegalMenuScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaLegalMenuScreen(Z_Construct_UClass_UUMGAtlantaLegalMenuScreen, &UUMGAtlantaLegalMenuScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaLegalMenuScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaLegalMenuScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
