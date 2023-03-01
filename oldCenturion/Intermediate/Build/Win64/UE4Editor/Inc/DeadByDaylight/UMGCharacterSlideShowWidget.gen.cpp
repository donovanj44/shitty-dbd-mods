// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGCharacterSlideShowWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGCharacterSlideShowWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterSlideShowWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterSlideShowWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSlideData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGCharacterSlideShowWidget::execFadeIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGCharacterSlideShowWidget::execFadeOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGCharacterSlideShowWidget::execSwitchCharacterSlide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchCharacterSlide();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGCharacterSlideShowWidget::execWaitAndFadeOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WaitAndFadeOut();
		P_NATIVE_END;
	}
	static FName NAME_UUMGCharacterSlideShowWidget_DisplayCharacterSlide = FName(TEXT("DisplayCharacterSlide"));
	void UUMGCharacterSlideShowWidget::DisplayCharacterSlide(FCharacterSlideData const& characterSlide)
	{
		UMGCharacterSlideShowWidget_eventDisplayCharacterSlide_Parms Parms;
		Parms.characterSlide=characterSlide;
		ProcessEvent(FindFunctionChecked(NAME_UUMGCharacterSlideShowWidget_DisplayCharacterSlide),&Parms);
	}
	void UUMGCharacterSlideShowWidget::StaticRegisterNativesUUMGCharacterSlideShowWidget()
	{
		UClass* Class = UUMGCharacterSlideShowWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FadeIn", &UUMGCharacterSlideShowWidget::execFadeIn },
			{ "FadeOut", &UUMGCharacterSlideShowWidget::execFadeOut },
			{ "SwitchCharacterSlide", &UUMGCharacterSlideShowWidget::execSwitchCharacterSlide },
			{ "WaitAndFadeOut", &UUMGCharacterSlideShowWidget::execWaitAndFadeOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGCharacterSlideShowWidget_DisplayCharacterSlide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterSlide_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_characterSlide;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterSlideShowWidget_DisplayCharacterSlide_Statics::NewProp_characterSlide_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGCharacterSlideShowWidget_DisplayCharacterSlide_Statics::NewProp_characterSlide = { "characterSlide", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCharacterSlideShowWidget_eventDisplayCharacterSlide_Parms, characterSlide), Z_Construct_UScriptStruct_FCharacterSlideData, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterSlideShowWidget_DisplayCharacterSlide_Statics::NewProp_characterSlide_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterSlideShowWidget_DisplayCharacterSlide_Statics::NewProp_characterSlide_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCharacterSlideShowWidget_DisplayCharacterSlide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCharacterSlideShowWidget_DisplayCharacterSlide_Statics::NewProp_characterSlide,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterSlideShowWidget_DisplayCharacterSlide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterSlideShowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterSlideShowWidget_DisplayCharacterSlide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterSlideShowWidget, nullptr, "DisplayCharacterSlide", nullptr, nullptr, sizeof(UMGCharacterSlideShowWidget_eventDisplayCharacterSlide_Parms), Z_Construct_UFunction_UUMGCharacterSlideShowWidget_DisplayCharacterSlide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterSlideShowWidget_DisplayCharacterSlide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterSlideShowWidget_DisplayCharacterSlide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterSlideShowWidget_DisplayCharacterSlide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterSlideShowWidget_DisplayCharacterSlide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterSlideShowWidget_DisplayCharacterSlide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGCharacterSlideShowWidget_FadeIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterSlideShowWidget_FadeIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterSlideShowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterSlideShowWidget_FadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterSlideShowWidget, nullptr, "FadeIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterSlideShowWidget_FadeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterSlideShowWidget_FadeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterSlideShowWidget_FadeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterSlideShowWidget_FadeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGCharacterSlideShowWidget_FadeOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterSlideShowWidget_FadeOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterSlideShowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterSlideShowWidget_FadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterSlideShowWidget, nullptr, "FadeOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterSlideShowWidget_FadeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterSlideShowWidget_FadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterSlideShowWidget_FadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterSlideShowWidget_FadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGCharacterSlideShowWidget_SwitchCharacterSlide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterSlideShowWidget_SwitchCharacterSlide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterSlideShowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterSlideShowWidget_SwitchCharacterSlide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterSlideShowWidget, nullptr, "SwitchCharacterSlide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterSlideShowWidget_SwitchCharacterSlide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterSlideShowWidget_SwitchCharacterSlide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterSlideShowWidget_SwitchCharacterSlide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterSlideShowWidget_SwitchCharacterSlide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGCharacterSlideShowWidget_WaitAndFadeOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterSlideShowWidget_WaitAndFadeOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterSlideShowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterSlideShowWidget_WaitAndFadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterSlideShowWidget, nullptr, "WaitAndFadeOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterSlideShowWidget_WaitAndFadeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterSlideShowWidget_WaitAndFadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterSlideShowWidget_WaitAndFadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterSlideShowWidget_WaitAndFadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGCharacterSlideShowWidget_NoRegister()
	{
		return UUMGCharacterSlideShowWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsBeforeNextSlide_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondsBeforeNextSlide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkCategoriesIcons_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__perkCategoriesIcons;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__perkCategoriesIcons_Key_KeyProp;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__perkCategoriesIcons_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGCharacterSlideShowWidget_DisplayCharacterSlide, "DisplayCharacterSlide" }, // 1561088237
		{ &Z_Construct_UFunction_UUMGCharacterSlideShowWidget_FadeIn, "FadeIn" }, // 1071615221
		{ &Z_Construct_UFunction_UUMGCharacterSlideShowWidget_FadeOut, "FadeOut" }, // 124993510
		{ &Z_Construct_UFunction_UUMGCharacterSlideShowWidget_SwitchCharacterSlide, "SwitchCharacterSlide" }, // 426994073
		{ &Z_Construct_UFunction_UUMGCharacterSlideShowWidget_WaitAndFadeOut, "WaitAndFadeOut" }, // 3645757816
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGCharacterSlideShowWidget.h" },
		{ "ModuleRelativePath", "Public/UMGCharacterSlideShowWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::NewProp_SecondsBeforeNextSlide_MetaData[] = {
		{ "Category", "UMGCharacterSlideShowWidget" },
		{ "ModuleRelativePath", "Public/UMGCharacterSlideShowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::NewProp_SecondsBeforeNextSlide = { "SecondsBeforeNextSlide", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterSlideShowWidget, SecondsBeforeNextSlide), METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::NewProp_SecondsBeforeNextSlide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::NewProp_SecondsBeforeNextSlide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::NewProp__perkCategoriesIcons_MetaData[] = {
		{ "Category", "UMGCharacterSlideShowWidget" },
		{ "ModuleRelativePath", "Public/UMGCharacterSlideShowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::NewProp__perkCategoriesIcons = { "_perkCategoriesIcons", nullptr, (EPropertyFlags)0x0024080000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterSlideShowWidget, _perkCategoriesIcons), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::NewProp__perkCategoriesIcons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::NewProp__perkCategoriesIcons_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::NewProp__perkCategoriesIcons_Key_KeyProp = { "_perkCategoriesIcons_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::NewProp__perkCategoriesIcons_ValueProp = { "_perkCategoriesIcons", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::NewProp_SecondsBeforeNextSlide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::NewProp__perkCategoriesIcons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::NewProp__perkCategoriesIcons_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::NewProp__perkCategoriesIcons_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGCharacterSlideShowWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::ClassParams = {
		&UUMGCharacterSlideShowWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGCharacterSlideShowWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGCharacterSlideShowWidget, 3476289729);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGCharacterSlideShowWidget>()
	{
		return UUMGCharacterSlideShowWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGCharacterSlideShowWidget(Z_Construct_UClass_UUMGCharacterSlideShowWidget, &UUMGCharacterSlideShowWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGCharacterSlideShowWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGCharacterSlideShowWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
