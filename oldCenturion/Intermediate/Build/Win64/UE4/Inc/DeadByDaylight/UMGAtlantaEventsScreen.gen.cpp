// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaEventsScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaEventsScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaEventsScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaEventsScreen();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaEventsTab_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaEventsDescription_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaEventsScreen::execBroadcastDeepLinkRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastDeepLinkRequest(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaEventsScreen::execBroadcastOnCloseButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastOnCloseButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaEventsScreen::execHandleEventTabClicked)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleEventTabClicked(Z_Param_id);
		P_NATIVE_END;
	}
	void UUMGAtlantaEventsScreen::StaticRegisterNativesUUMGAtlantaEventsScreen()
	{
		UClass* Class = UUMGAtlantaEventsScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastDeepLinkRequest", &UUMGAtlantaEventsScreen::execBroadcastDeepLinkRequest },
			{ "BroadcastOnCloseButtonClicked", &UUMGAtlantaEventsScreen::execBroadcastOnCloseButtonClicked },
			{ "HandleEventTabClicked", &UUMGAtlantaEventsScreen::execHandleEventTabClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastDeepLinkRequest_Statics
	{
		struct UMGAtlantaEventsScreen_eventBroadcastDeepLinkRequest_Parms
		{
			FString id;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastDeepLinkRequest_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastDeepLinkRequest_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaEventsScreen_eventBroadcastDeepLinkRequest_Parms, id), METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastDeepLinkRequest_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastDeepLinkRequest_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastDeepLinkRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastDeepLinkRequest_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastDeepLinkRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastDeepLinkRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaEventsScreen, nullptr, "BroadcastDeepLinkRequest", nullptr, nullptr, sizeof(UMGAtlantaEventsScreen_eventBroadcastDeepLinkRequest_Parms), Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastDeepLinkRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastDeepLinkRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastDeepLinkRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastDeepLinkRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastDeepLinkRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastDeepLinkRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastOnCloseButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastOnCloseButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastOnCloseButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaEventsScreen, nullptr, "BroadcastOnCloseButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastOnCloseButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastOnCloseButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastOnCloseButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastOnCloseButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaEventsScreen_HandleEventTabClicked_Statics
	{
		struct UMGAtlantaEventsScreen_eventHandleEventTabClicked_Parms
		{
			FString id;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaEventsScreen_HandleEventTabClicked_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGAtlantaEventsScreen_HandleEventTabClicked_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaEventsScreen_eventHandleEventTabClicked_Parms, id), METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaEventsScreen_HandleEventTabClicked_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaEventsScreen_HandleEventTabClicked_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaEventsScreen_HandleEventTabClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaEventsScreen_HandleEventTabClicked_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaEventsScreen_HandleEventTabClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaEventsScreen_HandleEventTabClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaEventsScreen, nullptr, "HandleEventTabClicked", nullptr, nullptr, sizeof(UMGAtlantaEventsScreen_eventHandleEventTabClicked_Parms), Z_Construct_UFunction_UUMGAtlantaEventsScreen_HandleEventTabClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaEventsScreen_HandleEventTabClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaEventsScreen_HandleEventTabClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaEventsScreen_HandleEventTabClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaEventsScreen_HandleEventTabClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaEventsScreen_HandleEventTabClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaEventsScreen_NoRegister()
	{
		return UUMGAtlantaEventsScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__eventsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__eventsArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__eventsArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventsTabWBPReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EventsTabWBPReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DescriptionWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrapBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WrapBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PageTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastDeepLinkRequest, "BroadcastDeepLinkRequest" }, // 279540632
		{ &Z_Construct_UFunction_UUMGAtlantaEventsScreen_BroadcastOnCloseButtonClicked, "BroadcastOnCloseButtonClicked" }, // 3383021815
		{ &Z_Construct_UFunction_UUMGAtlantaEventsScreen_HandleEventTabClicked, "HandleEventTabClicked" }, // 4081002676
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaEventsScreen.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp__eventsArray_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp__eventsArray = { "_eventsArray", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaEventsScreen, _eventsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp__eventsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp__eventsArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp__eventsArray_Inner = { "_eventsArray", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUMGAtlantaEventsTab_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_EventsTabWBPReference_MetaData[] = {
		{ "Category", "UMGAtlantaEventsScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_EventsTabWBPReference = { "EventsTabWBPReference", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaEventsScreen, EventsTabWBPReference), Z_Construct_UClass_UUMGAtlantaEventsTab_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_EventsTabWBPReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_EventsTabWBPReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_DescriptionWidget_MetaData[] = {
		{ "Category", "UMGAtlantaEventsScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_DescriptionWidget = { "DescriptionWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaEventsScreen, DescriptionWidget), Z_Construct_UClass_UUMGAtlantaEventsDescription_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_DescriptionWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_DescriptionWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_WrapBox_MetaData[] = {
		{ "Category", "UMGAtlantaEventsScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_WrapBox = { "WrapBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaEventsScreen, WrapBox), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_WrapBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_WrapBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_PageTitle_MetaData[] = {
		{ "Category", "UMGAtlantaEventsScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_PageTitle = { "PageTitle", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaEventsScreen, PageTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_PageTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_PageTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp__eventsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp__eventsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_EventsTabWBPReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_DescriptionWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_WrapBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::NewProp_PageTitle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaEventsScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::ClassParams = {
		&UUMGAtlantaEventsScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaEventsScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaEventsScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaEventsScreen, 2088351728);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaEventsScreen>()
	{
		return UUMGAtlantaEventsScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaEventsScreen(Z_Construct_UClass_UUMGAtlantaEventsScreen, &UUMGAtlantaEventsScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaEventsScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaEventsScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
