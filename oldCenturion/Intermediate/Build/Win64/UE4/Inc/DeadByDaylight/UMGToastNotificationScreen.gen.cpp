// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGToastNotificationScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGToastNotificationScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGToastNotificationScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGToastNotificationScreen();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseToastWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGToastNotificationScreen::execHandleOnButtonSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonId);
		P_GET_PROPERTY(FIntProperty,Z_Param_notificationId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnButtonSelected(Z_Param_buttonId,Z_Param_notificationId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGToastNotificationScreen::execHandleOnNotificationDisplayEnd)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_notificationId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnNotificationDisplayEnd(Z_Param_notificationId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGToastNotificationScreen::execHandleOnPromptSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_notificationId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnPromptSelected(Z_Param_notificationId);
		P_NATIVE_END;
	}
	void UUMGToastNotificationScreen::StaticRegisterNativesUUMGToastNotificationScreen()
	{
		UClass* Class = UUMGToastNotificationScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleOnButtonSelected", &UUMGToastNotificationScreen::execHandleOnButtonSelected },
			{ "HandleOnNotificationDisplayEnd", &UUMGToastNotificationScreen::execHandleOnNotificationDisplayEnd },
			{ "HandleOnPromptSelected", &UUMGToastNotificationScreen::execHandleOnPromptSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnButtonSelected_Statics
	{
		struct UMGToastNotificationScreen_eventHandleOnButtonSelected_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnButtonSelected_Statics::NewProp_notificationId = { "notificationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGToastNotificationScreen_eventHandleOnButtonSelected_Parms, notificationId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnButtonSelected_Statics::NewProp_buttonId = { "buttonId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGToastNotificationScreen_eventHandleOnButtonSelected_Parms, buttonId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnButtonSelected_Statics::NewProp_notificationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnButtonSelected_Statics::NewProp_buttonId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGToastNotificationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGToastNotificationScreen, nullptr, "HandleOnButtonSelected", nullptr, nullptr, sizeof(UMGToastNotificationScreen_eventHandleOnButtonSelected_Parms), Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnNotificationDisplayEnd_Statics
	{
		struct UMGToastNotificationScreen_eventHandleOnNotificationDisplayEnd_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnNotificationDisplayEnd_Statics::NewProp_notificationId = { "notificationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGToastNotificationScreen_eventHandleOnNotificationDisplayEnd_Parms, notificationId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnNotificationDisplayEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnNotificationDisplayEnd_Statics::NewProp_notificationId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnNotificationDisplayEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGToastNotificationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnNotificationDisplayEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGToastNotificationScreen, nullptr, "HandleOnNotificationDisplayEnd", nullptr, nullptr, sizeof(UMGToastNotificationScreen_eventHandleOnNotificationDisplayEnd_Parms), Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnNotificationDisplayEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnNotificationDisplayEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnNotificationDisplayEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnNotificationDisplayEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnNotificationDisplayEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnNotificationDisplayEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnPromptSelected_Statics
	{
		struct UMGToastNotificationScreen_eventHandleOnPromptSelected_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnPromptSelected_Statics::NewProp_notificationId = { "notificationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGToastNotificationScreen_eventHandleOnPromptSelected_Parms, notificationId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnPromptSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnPromptSelected_Statics::NewProp_notificationId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnPromptSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGToastNotificationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnPromptSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGToastNotificationScreen, nullptr, "HandleOnPromptSelected", nullptr, nullptr, sizeof(UMGToastNotificationScreen_eventHandleOnPromptSelected_Parms), Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnPromptSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnPromptSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnPromptSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnPromptSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnPromptSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnPromptSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGToastNotificationScreen_NoRegister()
	{
		return UUMGToastNotificationScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGToastNotificationScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__toastsDisplayedOnScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__toastsDisplayedOnScreen;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp__toastsDisplayedOnScreen_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__toastsDisplayedOnScreen_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToastsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToastsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvitationPartyToast_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_InvitationPartyToast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotificationToast_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_NotificationToast;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGToastNotificationScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGToastNotificationScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnButtonSelected, "HandleOnButtonSelected" }, // 1905599772
		{ &Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnNotificationDisplayEnd, "HandleOnNotificationDisplayEnd" }, // 2277749179
		{ &Z_Construct_UFunction_UUMGToastNotificationScreen_HandleOnPromptSelected, "HandleOnPromptSelected" }, // 3470790088
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGToastNotificationScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGToastNotificationScreen.h" },
		{ "ModuleRelativePath", "Public/UMGToastNotificationScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp__toastsDisplayedOnScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGToastNotificationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp__toastsDisplayedOnScreen = { "_toastsDisplayedOnScreen", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGToastNotificationScreen, _toastsDisplayedOnScreen), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp__toastsDisplayedOnScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp__toastsDisplayedOnScreen_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp__toastsDisplayedOnScreen_Key_KeyProp = { "_toastsDisplayedOnScreen_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp__toastsDisplayedOnScreen_ValueProp = { "_toastsDisplayedOnScreen", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUMGBaseToastWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp_ToastsContainer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGToastNotificationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp_ToastsContainer = { "ToastsContainer", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGToastNotificationScreen, ToastsContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp_ToastsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp_ToastsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp_InvitationPartyToast_MetaData[] = {
		{ "Category", "UMGToastNotificationScreen" },
		{ "ModuleRelativePath", "Public/UMGToastNotificationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp_InvitationPartyToast = { "InvitationPartyToast", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGToastNotificationScreen, InvitationPartyToast), Z_Construct_UClass_UUMGBaseToastWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp_InvitationPartyToast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp_InvitationPartyToast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp_NotificationToast_MetaData[] = {
		{ "Category", "UMGToastNotificationScreen" },
		{ "ModuleRelativePath", "Public/UMGToastNotificationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp_NotificationToast = { "NotificationToast", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGToastNotificationScreen, NotificationToast), Z_Construct_UClass_UUMGBaseToastWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp_NotificationToast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp_NotificationToast_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGToastNotificationScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp__toastsDisplayedOnScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp__toastsDisplayedOnScreen_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp__toastsDisplayedOnScreen_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp_ToastsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp_InvitationPartyToast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGToastNotificationScreen_Statics::NewProp_NotificationToast,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGToastNotificationScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGToastNotificationScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGToastNotificationScreen_Statics::ClassParams = {
		&UUMGToastNotificationScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGToastNotificationScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGToastNotificationScreen_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGToastNotificationScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGToastNotificationScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGToastNotificationScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGToastNotificationScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGToastNotificationScreen, 2374590070);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGToastNotificationScreen>()
	{
		return UUMGToastNotificationScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGToastNotificationScreen(Z_Construct_UClass_UUMGToastNotificationScreen, &UUMGToastNotificationScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGToastNotificationScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGToastNotificationScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
