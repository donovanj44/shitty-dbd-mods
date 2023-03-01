// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGMainMenuMonthlyPassButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGMainMenuMonthlyPassButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGMainMenuMonthlyPassButton();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGMainMenuMonthlyPassButton::execOnButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonClick();
		P_NATIVE_END;
	}
	void UUMGMainMenuMonthlyPassButton::StaticRegisterNativesUUMGMainMenuMonthlyPassButton()
	{
		UClass* Class = UUMGMainMenuMonthlyPassButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnButtonClick", &UUMGMainMenuMonthlyPassButton::execOnButtonClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGMainMenuMonthlyPassButton_OnButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGMainMenuMonthlyPassButton_OnButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGMainMenuMonthlyPassButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGMainMenuMonthlyPassButton_OnButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGMainMenuMonthlyPassButton, nullptr, "OnButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGMainMenuMonthlyPassButton_OnButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGMainMenuMonthlyPassButton_OnButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGMainMenuMonthlyPassButton_OnButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGMainMenuMonthlyPassButton_OnButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_NoRegister()
	{
		return UUMGMainMenuMonthlyPassButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClickSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnClickSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonActiveButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NonActiveButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonSwitcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGMainMenuMonthlyPassButton_OnButtonClick, "OnButtonClick" }, // 4290206212
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGMainMenuMonthlyPassButton.h" },
		{ "ModuleRelativePath", "Public/UMGMainMenuMonthlyPassButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_OnClickSound_MetaData[] = {
		{ "Category", "UMGMainMenuMonthlyPassButton" },
		{ "ModuleRelativePath", "Public/UMGMainMenuMonthlyPassButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_OnClickSound = { "OnClickSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGMainMenuMonthlyPassButton, OnClickSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_OnClickSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_OnClickSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Category", "UMGMainMenuMonthlyPassButton" },
		{ "ModuleRelativePath", "Public/UMGMainMenuMonthlyPassButton.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGMainMenuMonthlyPassButton, PlayerName), METADATA_PARAMS(Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_NonActiveButton_MetaData[] = {
		{ "Category", "UMGMainMenuMonthlyPassButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGMainMenuMonthlyPassButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_NonActiveButton = { "NonActiveButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGMainMenuMonthlyPassButton, NonActiveButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_NonActiveButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_NonActiveButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_ActiveButton_MetaData[] = {
		{ "Category", "UMGMainMenuMonthlyPassButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGMainMenuMonthlyPassButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_ActiveButton = { "ActiveButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGMainMenuMonthlyPassButton, ActiveButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_ActiveButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_ActiveButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_ButtonSwitcher_MetaData[] = {
		{ "Category", "UMGMainMenuMonthlyPassButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGMainMenuMonthlyPassButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_ButtonSwitcher = { "ButtonSwitcher", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGMainMenuMonthlyPassButton, ButtonSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_ButtonSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_ButtonSwitcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_OnClickSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_NonActiveButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_ActiveButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::NewProp_ButtonSwitcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGMainMenuMonthlyPassButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::ClassParams = {
		&UUMGMainMenuMonthlyPassButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGMainMenuMonthlyPassButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGMainMenuMonthlyPassButton, 4277802475);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGMainMenuMonthlyPassButton>()
	{
		return UUMGMainMenuMonthlyPassButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGMainMenuMonthlyPassButton(Z_Construct_UClass_UUMGMainMenuMonthlyPassButton, &UUMGMainMenuMonthlyPassButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGMainMenuMonthlyPassButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGMainMenuMonthlyPassButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
