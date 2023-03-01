// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGTallyListElementWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGTallyListElementWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyListElementWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyListElementWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(UUMGTallyListElementWidget::execOnInAnimationFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInAnimationFinished();
		P_NATIVE_END;
	}
	static FName NAME_UUMGTallyListElementWidget_OnPageVisibilityChanged = FName(TEXT("OnPageVisibilityChanged"));
	void UUMGTallyListElementWidget::OnPageVisibilityChanged(bool isVisible, bool wasInAnimationPlayed)
	{
		UMGTallyListElementWidget_eventOnPageVisibilityChanged_Parms Parms;
		Parms.isVisible=isVisible ? true : false;
		Parms.wasInAnimationPlayed=wasInAnimationPlayed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGTallyListElementWidget_OnPageVisibilityChanged),&Parms);
	}
	static FName NAME_UUMGTallyListElementWidget_OnPlayInAnimation = FName(TEXT("OnPlayInAnimation"));
	void UUMGTallyListElementWidget::OnPlayInAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUMGTallyListElementWidget_OnPlayInAnimation),NULL);
	}
	void UUMGTallyListElementWidget::StaticRegisterNativesUUMGTallyListElementWidget()
	{
		UClass* Class = UUMGTallyListElementWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInAnimationFinished", &UUMGTallyListElementWidget::execOnInAnimationFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGTallyListElementWidget_OnInAnimationFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyListElementWidget_OnInAnimationFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyListElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyListElementWidget_OnInAnimationFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyListElementWidget, nullptr, "OnInAnimationFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyListElementWidget_OnInAnimationFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyListElementWidget_OnInAnimationFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyListElementWidget_OnInAnimationFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyListElementWidget_OnInAnimationFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged_Statics
	{
		static void NewProp_wasInAnimationPlayed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasInAnimationPlayed;
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged_Statics::NewProp_wasInAnimationPlayed_SetBit(void* Obj)
	{
		((UMGTallyListElementWidget_eventOnPageVisibilityChanged_Parms*)Obj)->wasInAnimationPlayed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged_Statics::NewProp_wasInAnimationPlayed = { "wasInAnimationPlayed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGTallyListElementWidget_eventOnPageVisibilityChanged_Parms), &Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged_Statics::NewProp_wasInAnimationPlayed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((UMGTallyListElementWidget_eventOnPageVisibilityChanged_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGTallyListElementWidget_eventOnPageVisibilityChanged_Parms), &Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged_Statics::NewProp_wasInAnimationPlayed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyListElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyListElementWidget, nullptr, "OnPageVisibilityChanged", nullptr, nullptr, sizeof(UMGTallyListElementWidget_eventOnPageVisibilityChanged_Parms), Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGTallyListElementWidget_OnPlayInAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyListElementWidget_OnPlayInAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyListElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyListElementWidget_OnPlayInAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyListElementWidget, nullptr, "OnPlayInAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyListElementWidget_OnPlayInAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyListElementWidget_OnPlayInAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyListElementWidget_OnPlayInAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyListElementWidget_OnPlayInAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGTallyListElementWidget_NoRegister()
	{
		return UUMGTallyListElementWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGTallyListElementWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ElementIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGTallyListElementWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGTallyListElementWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGTallyListElementWidget_OnInAnimationFinished, "OnInAnimationFinished" }, // 436610719
		{ &Z_Construct_UFunction_UUMGTallyListElementWidget_OnPageVisibilityChanged, "OnPageVisibilityChanged" }, // 2812217714
		{ &Z_Construct_UFunction_UUMGTallyListElementWidget_OnPlayInAnimation, "OnPlayInAnimation" }, // 3995050396
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyListElementWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGTallyListElementWidget.h" },
		{ "ModuleRelativePath", "Public/UMGTallyListElementWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyListElementWidget_Statics::NewProp_WidgetSize_MetaData[] = {
		{ "Category", "UMGTallyListElementWidget" },
		{ "ModuleRelativePath", "Public/UMGTallyListElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGTallyListElementWidget_Statics::NewProp_WidgetSize = { "WidgetSize", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyListElementWidget, WidgetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyListElementWidget_Statics::NewProp_WidgetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyListElementWidget_Statics::NewProp_WidgetSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyListElementWidget_Statics::NewProp_ElementIndex_MetaData[] = {
		{ "Category", "UMGTallyListElementWidget" },
		{ "ModuleRelativePath", "Public/UMGTallyListElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGTallyListElementWidget_Statics::NewProp_ElementIndex = { "ElementIndex", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyListElementWidget, ElementIndex), METADATA_PARAMS(Z_Construct_UClass_UUMGTallyListElementWidget_Statics::NewProp_ElementIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyListElementWidget_Statics::NewProp_ElementIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGTallyListElementWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyListElementWidget_Statics::NewProp_WidgetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyListElementWidget_Statics::NewProp_ElementIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGTallyListElementWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGTallyListElementWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGTallyListElementWidget_Statics::ClassParams = {
		&UUMGTallyListElementWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGTallyListElementWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyListElementWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGTallyListElementWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyListElementWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGTallyListElementWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGTallyListElementWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGTallyListElementWidget, 3107959629);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGTallyListElementWidget>()
	{
		return UUMGTallyListElementWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGTallyListElementWidget(Z_Construct_UClass_UUMGTallyListElementWidget, &UUMGTallyListElementWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGTallyListElementWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGTallyListElementWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
