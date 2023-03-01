// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGLobbyScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGLobbyScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnSearchingLobbyCancelled__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnJoinedLobbyLeaved__DelegateSignature();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLobbyScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLobbyScreen();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGFogWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLobbyOfferingWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLobbyJoinedWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLobbySearchingWidget_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnSearchingLobbyCancelled__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnSearchingLobbyCancelled__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnSearchingLobbyCancelled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "UMGLobbyScreenOnSearchingLobbyCancelled__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnSearchingLobbyCancelled__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnSearchingLobbyCancelled__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnSearchingLobbyCancelled__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnSearchingLobbyCancelled__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnJoinedLobbyLeaved__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnJoinedLobbyLeaved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnJoinedLobbyLeaved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "UMGLobbyScreenOnJoinedLobbyLeaved__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnJoinedLobbyLeaved__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnJoinedLobbyLeaved__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnJoinedLobbyLeaved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnJoinedLobbyLeaved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUMGLobbyScreen::execHandleJoinedLobbyLeave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleJoinedLobbyLeave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGLobbyScreen::execHandleSearchingLobbyCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSearchingLobbyCancel();
		P_NATIVE_END;
	}
	void UUMGLobbyScreen::StaticRegisterNativesUUMGLobbyScreen()
	{
		UClass* Class = UUMGLobbyScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleJoinedLobbyLeave", &UUMGLobbyScreen::execHandleJoinedLobbyLeave },
			{ "HandleSearchingLobbyCancel", &UUMGLobbyScreen::execHandleSearchingLobbyCancel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGLobbyScreen_HandleJoinedLobbyLeave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyScreen_HandleJoinedLobbyLeave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbyScreen_HandleJoinedLobbyLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbyScreen, nullptr, "HandleJoinedLobbyLeave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyScreen_HandleJoinedLobbyLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyScreen_HandleJoinedLobbyLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbyScreen_HandleJoinedLobbyLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbyScreen_HandleJoinedLobbyLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLobbyScreen_HandleSearchingLobbyCancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyScreen_HandleSearchingLobbyCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbyScreen_HandleSearchingLobbyCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbyScreen, nullptr, "HandleSearchingLobbyCancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyScreen_HandleSearchingLobbyCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyScreen_HandleSearchingLobbyCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbyScreen_HandleSearchingLobbyCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbyScreen_HandleSearchingLobbyCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGLobbyScreen_NoRegister()
	{
		return UUMGLobbyScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGLobbyScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FogWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferingWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OfferingWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyJoinedWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LobbyJoinedWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbySwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LobbySwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSearchingLobbyCancelled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSearchingLobbyCancelled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnJoinedLobbyLeaved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoinedLobbyLeaved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbySearchingWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LobbySearchingWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGLobbyScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGLobbyScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGLobbyScreen_HandleJoinedLobbyLeave, "HandleJoinedLobbyLeave" }, // 3911338919
		{ &Z_Construct_UFunction_UUMGLobbyScreen_HandleSearchingLobbyCancel, "HandleSearchingLobbyCancel" }, // 51146068
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGLobbyScreen.h" },
		{ "ModuleRelativePath", "Public/UMGLobbyScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_FogWidget_MetaData[] = {
		{ "Category", "UMGLobbyScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLobbyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_FogWidget = { "FogWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbyScreen, FogWidget), Z_Construct_UClass_UUMGFogWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_FogWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_FogWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_OfferingWidget_MetaData[] = {
		{ "Category", "UMGLobbyScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLobbyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_OfferingWidget = { "OfferingWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbyScreen, OfferingWidget), Z_Construct_UClass_UUMGLobbyOfferingWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_OfferingWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_OfferingWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_LobbyJoinedWidget_MetaData[] = {
		{ "Category", "UMGLobbyScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLobbyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_LobbyJoinedWidget = { "LobbyJoinedWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbyScreen, LobbyJoinedWidget), Z_Construct_UClass_UUMGLobbyJoinedWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_LobbyJoinedWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_LobbyJoinedWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_LobbySwitcher_MetaData[] = {
		{ "Category", "UMGLobbyScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLobbyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_LobbySwitcher = { "LobbySwitcher", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbyScreen, LobbySwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_LobbySwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_LobbySwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_OnSearchingLobbyCancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_OnSearchingLobbyCancelled = { "OnSearchingLobbyCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbyScreen, OnSearchingLobbyCancelled), Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnSearchingLobbyCancelled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_OnSearchingLobbyCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_OnSearchingLobbyCancelled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_OnJoinedLobbyLeaved_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_OnJoinedLobbyLeaved = { "OnJoinedLobbyLeaved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbyScreen, OnJoinedLobbyLeaved), Z_Construct_UDelegateFunction_DeadByDaylight_UMGLobbyScreenOnJoinedLobbyLeaved__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_OnJoinedLobbyLeaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_OnJoinedLobbyLeaved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_LobbySearchingWidget_MetaData[] = {
		{ "Category", "UMGLobbyScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLobbyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_LobbySearchingWidget = { "LobbySearchingWidget", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbyScreen, LobbySearchingWidget), Z_Construct_UClass_UUMGLobbySearchingWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_LobbySearchingWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_LobbySearchingWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGLobbyScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_FogWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_OfferingWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_LobbyJoinedWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_LobbySwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_OnSearchingLobbyCancelled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_OnJoinedLobbyLeaved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbyScreen_Statics::NewProp_LobbySearchingWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGLobbyScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGLobbyScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGLobbyScreen_Statics::ClassParams = {
		&UUMGLobbyScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGLobbyScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyScreen_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGLobbyScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGLobbyScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGLobbyScreen, 2227994693);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGLobbyScreen>()
	{
		return UUMGLobbyScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGLobbyScreen(Z_Construct_UClass_UUMGLobbyScreen, &UUMGLobbyScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGLobbyScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGLobbyScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
