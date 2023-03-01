// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGPopupButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGPopupButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPopupButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPopupButton();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGPopupButton::execOnButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGPopupButton::execOnButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGPopupButton::execOnButtonReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonReleased();
		P_NATIVE_END;
	}
	void UUMGPopupButton::StaticRegisterNativesUUMGPopupButton()
	{
		UClass* Class = UUMGPopupButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnButtonClicked", &UUMGPopupButton::execOnButtonClicked },
			{ "OnButtonPressed", &UUMGPopupButton::execOnButtonPressed },
			{ "OnButtonReleased", &UUMGPopupButton::execOnButtonReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGPopupButton_OnButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPopupButton_OnButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPopupButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPopupButton_OnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPopupButton, nullptr, "OnButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPopupButton_OnButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPopupButton_OnButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPopupButton_OnButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPopupButton_OnButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGPopupButton_OnButtonPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPopupButton_OnButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPopupButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPopupButton_OnButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPopupButton, nullptr, "OnButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPopupButton_OnButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPopupButton_OnButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPopupButton_OnButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPopupButton_OnButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGPopupButton_OnButtonReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPopupButton_OnButtonReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPopupButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPopupButton_OnButtonReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPopupButton, nullptr, "OnButtonReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPopupButton_OnButtonReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPopupButton_OnButtonReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPopupButton_OnButtonReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPopupButton_OnButtonReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGPopupButton_NoRegister()
	{
		return UUMGPopupButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGPopupButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FXSmoke_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FXSmoke;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Line_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Line;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VFXs_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VFXs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnabledOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnabledOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisabledOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGPopupButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGPopupButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGPopupButton_OnButtonClicked, "OnButtonClicked" }, // 3782547222
		{ &Z_Construct_UFunction_UUMGPopupButton_OnButtonPressed, "OnButtonPressed" }, // 2064460309
		{ &Z_Construct_UFunction_UUMGPopupButton_OnButtonReleased, "OnButtonReleased" }, // 956928286
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPopupButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGPopupButton.h" },
		{ "ModuleRelativePath", "Public/UMGPopupButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_FXSmoke_MetaData[] = {
		{ "Category", "UMGPopupButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPopupButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_FXSmoke = { "FXSmoke", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPopupButton, FXSmoke), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_FXSmoke_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_FXSmoke_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_Line_MetaData[] = {
		{ "Category", "UMGPopupButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPopupButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPopupButton, Line), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_Line_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_Line_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_VFXs_MetaData[] = {
		{ "Category", "UMGPopupButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPopupButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_VFXs = { "VFXs", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPopupButton, VFXs), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_VFXs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_VFXs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_EnabledOpacity_MetaData[] = {
		{ "Category", "UMGPopupButton" },
		{ "ModuleRelativePath", "Public/UMGPopupButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_EnabledOpacity = { "EnabledOpacity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPopupButton, EnabledOpacity), METADATA_PARAMS(Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_EnabledOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_EnabledOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_DisabledOpacity_MetaData[] = {
		{ "Category", "UMGPopupButton" },
		{ "ModuleRelativePath", "Public/UMGPopupButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_DisabledOpacity = { "DisabledOpacity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPopupButton, DisabledOpacity), METADATA_PARAMS(Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_DisabledOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_DisabledOpacity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGPopupButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_FXSmoke,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_Line,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_VFXs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_EnabledOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPopupButton_Statics::NewProp_DisabledOpacity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGPopupButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGPopupButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGPopupButton_Statics::ClassParams = {
		&UUMGPopupButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGPopupButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPopupButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGPopupButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPopupButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGPopupButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGPopupButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGPopupButton, 1268179954);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGPopupButton>()
	{
		return UUMGPopupButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGPopupButton(Z_Construct_UClass_UUMGPopupButton, &UUMGPopupButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGPopupButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGPopupButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
