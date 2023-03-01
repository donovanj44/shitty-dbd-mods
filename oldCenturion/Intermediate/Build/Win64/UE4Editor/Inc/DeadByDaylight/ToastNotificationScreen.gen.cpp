// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ToastNotificationScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToastNotificationScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UToastNotificationScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UToastNotificationScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UToastNotificationScreen::execOnButtonSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonId);
		P_GET_PROPERTY(FIntProperty,Z_Param_notificationId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonSelected(Z_Param_buttonId,Z_Param_notificationId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToastNotificationScreen::execOnNotificationDisplayEnd)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_notificationId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotificationDisplayEnd(Z_Param_notificationId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToastNotificationScreen::execOnPromptSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_notificationId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPromptSelected(Z_Param_notificationId);
		P_NATIVE_END;
	}
	void UToastNotificationScreen::StaticRegisterNativesUToastNotificationScreen()
	{
		UClass* Class = UToastNotificationScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnButtonSelected", &UToastNotificationScreen::execOnButtonSelected },
			{ "OnNotificationDisplayEnd", &UToastNotificationScreen::execOnNotificationDisplayEnd },
			{ "OnPromptSelected", &UToastNotificationScreen::execOnPromptSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UToastNotificationScreen_OnButtonSelected_Statics
	{
		struct ToastNotificationScreen_eventOnButtonSelected_Parms
		{
			int32 buttonId;
			int32 notificationId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_notificationId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UToastNotificationScreen_OnButtonSelected_Statics::NewProp_notificationId = { "notificationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ToastNotificationScreen_eventOnButtonSelected_Parms, notificationId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UToastNotificationScreen_OnButtonSelected_Statics::NewProp_buttonId = { "buttonId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ToastNotificationScreen_eventOnButtonSelected_Parms, buttonId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToastNotificationScreen_OnButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToastNotificationScreen_OnButtonSelected_Statics::NewProp_notificationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToastNotificationScreen_OnButtonSelected_Statics::NewProp_buttonId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToastNotificationScreen_OnButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToastNotificationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToastNotificationScreen_OnButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToastNotificationScreen, nullptr, "OnButtonSelected", nullptr, nullptr, sizeof(ToastNotificationScreen_eventOnButtonSelected_Parms), Z_Construct_UFunction_UToastNotificationScreen_OnButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToastNotificationScreen_OnButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToastNotificationScreen_OnButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToastNotificationScreen_OnButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToastNotificationScreen_OnButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToastNotificationScreen_OnButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToastNotificationScreen_OnNotificationDisplayEnd_Statics
	{
		struct ToastNotificationScreen_eventOnNotificationDisplayEnd_Parms
		{
			int32 notificationId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_notificationId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UToastNotificationScreen_OnNotificationDisplayEnd_Statics::NewProp_notificationId = { "notificationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ToastNotificationScreen_eventOnNotificationDisplayEnd_Parms, notificationId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToastNotificationScreen_OnNotificationDisplayEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToastNotificationScreen_OnNotificationDisplayEnd_Statics::NewProp_notificationId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToastNotificationScreen_OnNotificationDisplayEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToastNotificationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToastNotificationScreen_OnNotificationDisplayEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToastNotificationScreen, nullptr, "OnNotificationDisplayEnd", nullptr, nullptr, sizeof(ToastNotificationScreen_eventOnNotificationDisplayEnd_Parms), Z_Construct_UFunction_UToastNotificationScreen_OnNotificationDisplayEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToastNotificationScreen_OnNotificationDisplayEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToastNotificationScreen_OnNotificationDisplayEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToastNotificationScreen_OnNotificationDisplayEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToastNotificationScreen_OnNotificationDisplayEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToastNotificationScreen_OnNotificationDisplayEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToastNotificationScreen_OnPromptSelected_Statics
	{
		struct ToastNotificationScreen_eventOnPromptSelected_Parms
		{
			int32 notificationId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_notificationId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UToastNotificationScreen_OnPromptSelected_Statics::NewProp_notificationId = { "notificationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ToastNotificationScreen_eventOnPromptSelected_Parms, notificationId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToastNotificationScreen_OnPromptSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToastNotificationScreen_OnPromptSelected_Statics::NewProp_notificationId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToastNotificationScreen_OnPromptSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToastNotificationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToastNotificationScreen_OnPromptSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToastNotificationScreen, nullptr, "OnPromptSelected", nullptr, nullptr, sizeof(ToastNotificationScreen_eventOnPromptSelected_Parms), Z_Construct_UFunction_UToastNotificationScreen_OnPromptSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToastNotificationScreen_OnPromptSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToastNotificationScreen_OnPromptSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToastNotificationScreen_OnPromptSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToastNotificationScreen_OnPromptSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToastNotificationScreen_OnPromptSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UToastNotificationScreen_NoRegister()
	{
		return UToastNotificationScreen::StaticClass();
	}
	struct Z_Construct_UClass_UToastNotificationScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToastNotificationScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UToastNotificationScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToastNotificationScreen_OnButtonSelected, "OnButtonSelected" }, // 128127781
		{ &Z_Construct_UFunction_UToastNotificationScreen_OnNotificationDisplayEnd, "OnNotificationDisplayEnd" }, // 3768623065
		{ &Z_Construct_UFunction_UToastNotificationScreen_OnPromptSelected, "OnPromptSelected" }, // 279626759
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToastNotificationScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToastNotificationScreen.h" },
		{ "ModuleRelativePath", "Public/ToastNotificationScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToastNotificationScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToastNotificationScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToastNotificationScreen_Statics::ClassParams = {
		&UToastNotificationScreen::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UToastNotificationScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToastNotificationScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToastNotificationScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UToastNotificationScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UToastNotificationScreen, 1335414695);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UToastNotificationScreen>()
	{
		return UToastNotificationScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToastNotificationScreen(Z_Construct_UClass_UToastNotificationScreen, &UToastNotificationScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UToastNotificationScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToastNotificationScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
