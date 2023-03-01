// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGRitualRefreshButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGRitualRefreshButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRitualRefreshButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRitualRefreshButton();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGRitualRefreshButton::execSetRefreshButton)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_currency);
		P_GET_ENUM(ECurrencyType,Z_Param_currentyType);
		P_GET_UBOOL(Z_Param_isAdsRefresh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRefreshButton_Implementation(Z_Param_currency,ECurrencyType(Z_Param_currentyType),Z_Param_isAdsRefresh);
		P_NATIVE_END;
	}
	static FName NAME_UUMGRitualRefreshButton_SetRefreshButton = FName(TEXT("SetRefreshButton"));
	void UUMGRitualRefreshButton::SetRefreshButton(int32 currency, ECurrencyType currentyType, bool isAdsRefresh)
	{
		UMGRitualRefreshButton_eventSetRefreshButton_Parms Parms;
		Parms.currency=currency;
		Parms.currentyType=currentyType;
		Parms.isAdsRefresh=isAdsRefresh ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGRitualRefreshButton_SetRefreshButton),&Parms);
	}
	void UUMGRitualRefreshButton::StaticRegisterNativesUUMGRitualRefreshButton()
	{
		UClass* Class = UUMGRitualRefreshButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetRefreshButton", &UUMGRitualRefreshButton::execSetRefreshButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics
	{
		static void NewProp_isAdsRefresh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAdsRefresh;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currentyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currentyType_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::NewProp_isAdsRefresh_SetBit(void* Obj)
	{
		((UMGRitualRefreshButton_eventSetRefreshButton_Parms*)Obj)->isAdsRefresh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::NewProp_isAdsRefresh = { "isAdsRefresh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGRitualRefreshButton_eventSetRefreshButton_Parms), &Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::NewProp_isAdsRefresh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::NewProp_currentyType = { "currentyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGRitualRefreshButton_eventSetRefreshButton_Parms, currentyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::NewProp_currentyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::NewProp_currency = { "currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGRitualRefreshButton_eventSetRefreshButton_Parms, currency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::NewProp_isAdsRefresh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::NewProp_currentyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::NewProp_currentyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::NewProp_currency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGRitualRefreshButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGRitualRefreshButton, nullptr, "SetRefreshButton", nullptr, nullptr, sizeof(UMGRitualRefreshButton_eventSetRefreshButton_Parms), Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGRitualRefreshButton_NoRegister()
	{
		return UUMGRitualRefreshButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGRitualRefreshButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RefreshSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RefreshCanvas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGRitualRefreshButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGRitualRefreshButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGRitualRefreshButton_SetRefreshButton, "SetRefreshButton" }, // 1845145977
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGRitualRefreshButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGRitualRefreshButton.h" },
		{ "ModuleRelativePath", "Public/UMGRitualRefreshButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGRitualRefreshButton_Statics::NewProp_RefreshSwitcher_MetaData[] = {
		{ "Category", "UMGRitualRefreshButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGRitualRefreshButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGRitualRefreshButton_Statics::NewProp_RefreshSwitcher = { "RefreshSwitcher", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGRitualRefreshButton, RefreshSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGRitualRefreshButton_Statics::NewProp_RefreshSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRitualRefreshButton_Statics::NewProp_RefreshSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGRitualRefreshButton_Statics::NewProp_RefreshCanvas_MetaData[] = {
		{ "Category", "UMGRitualRefreshButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGRitualRefreshButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGRitualRefreshButton_Statics::NewProp_RefreshCanvas = { "RefreshCanvas", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGRitualRefreshButton, RefreshCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGRitualRefreshButton_Statics::NewProp_RefreshCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRitualRefreshButton_Statics::NewProp_RefreshCanvas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGRitualRefreshButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGRitualRefreshButton_Statics::NewProp_RefreshSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGRitualRefreshButton_Statics::NewProp_RefreshCanvas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGRitualRefreshButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGRitualRefreshButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGRitualRefreshButton_Statics::ClassParams = {
		&UUMGRitualRefreshButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGRitualRefreshButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRitualRefreshButton_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGRitualRefreshButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRitualRefreshButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGRitualRefreshButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGRitualRefreshButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGRitualRefreshButton, 2540963242);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGRitualRefreshButton>()
	{
		return UUMGRitualRefreshButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGRitualRefreshButton(Z_Construct_UClass_UUMGRitualRefreshButton, &UUMGRitualRefreshButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGRitualRefreshButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGRitualRefreshButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
