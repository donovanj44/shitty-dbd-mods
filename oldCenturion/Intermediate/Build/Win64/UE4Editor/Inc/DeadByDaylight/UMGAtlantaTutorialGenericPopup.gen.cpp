// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaTutorialGenericPopup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaTutorialGenericPopup() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGGenericPopup();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGScrollListPageButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaTutorialGenericPopup::execHandleImageButtonClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_imageIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleImageButtonClicked(Z_Param_imageIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaTutorialGenericPopup::execTriggerChangeImagesTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerChangeImagesTimer();
		P_NATIVE_END;
	}
	void UUMGAtlantaTutorialGenericPopup::StaticRegisterNativesUUMGAtlantaTutorialGenericPopup()
	{
		UClass* Class = UUMGAtlantaTutorialGenericPopup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleImageButtonClicked", &UUMGAtlantaTutorialGenericPopup::execHandleImageButtonClicked },
			{ "TriggerChangeImagesTimer", &UUMGAtlantaTutorialGenericPopup::execTriggerChangeImagesTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_HandleImageButtonClicked_Statics
	{
		struct UMGAtlantaTutorialGenericPopup_eventHandleImageButtonClicked_Parms
		{
			int32 imageIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_imageIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_HandleImageButtonClicked_Statics::NewProp_imageIndex = { "imageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaTutorialGenericPopup_eventHandleImageButtonClicked_Parms, imageIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_HandleImageButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_HandleImageButtonClicked_Statics::NewProp_imageIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_HandleImageButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaTutorialGenericPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_HandleImageButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup, nullptr, "HandleImageButtonClicked", nullptr, nullptr, sizeof(UMGAtlantaTutorialGenericPopup_eventHandleImageButtonClicked_Parms), Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_HandleImageButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_HandleImageButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_HandleImageButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_HandleImageButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_HandleImageButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_HandleImageButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_TriggerChangeImagesTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_TriggerChangeImagesTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaTutorialGenericPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_TriggerChangeImagesTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup, nullptr, "TriggerChangeImagesTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_TriggerChangeImagesTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_TriggerChangeImagesTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_TriggerChangeImagesTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_TriggerChangeImagesTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_NoRegister()
	{
		return UUMGAtlantaTutorialGenericPopup::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__changeImagesTimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__changeImagesTimerHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayBeforeChangingImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayBeforeChangingImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ButtonWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pageButtonWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__pageButtonWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonsPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonsPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImagesCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImagesCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageTutorial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageTutorial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGGenericPopup,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_HandleImageButtonClicked, "HandleImageButtonClicked" }, // 1112633827
		{ &Z_Construct_UFunction_UUMGAtlantaTutorialGenericPopup_TriggerChangeImagesTimer, "TriggerChangeImagesTimer" }, // 3648977791
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaTutorialGenericPopup.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaTutorialGenericPopup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp__changeImagesTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaTutorialGenericPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp__changeImagesTimerHandle = { "_changeImagesTimerHandle", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaTutorialGenericPopup, _changeImagesTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp__changeImagesTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp__changeImagesTimerHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_DelayBeforeChangingImage_MetaData[] = {
		{ "Category", "UMGAtlantaTutorialGenericPopup" },
		{ "ModuleRelativePath", "Public/UMGAtlantaTutorialGenericPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_DelayBeforeChangingImage = { "DelayBeforeChangingImage", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaTutorialGenericPopup, DelayBeforeChangingImage), METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_DelayBeforeChangingImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_DelayBeforeChangingImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ButtonWidth_MetaData[] = {
		{ "Category", "UMGAtlantaTutorialGenericPopup" },
		{ "ModuleRelativePath", "Public/UMGAtlantaTutorialGenericPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ButtonWidth = { "ButtonWidth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaTutorialGenericPopup, ButtonWidth), METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ButtonWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ButtonWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp__pageButtonWidgetClass_MetaData[] = {
		{ "Category", "UMGAtlantaTutorialGenericPopup" },
		{ "ModuleRelativePath", "Public/UMGAtlantaTutorialGenericPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp__pageButtonWidgetClass = { "_pageButtonWidgetClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaTutorialGenericPopup, _pageButtonWidgetClass), Z_Construct_UClass_UUMGScrollListPageButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp__pageButtonWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp__pageButtonWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ButtonsPanel_MetaData[] = {
		{ "Category", "UMGAtlantaTutorialGenericPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaTutorialGenericPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ButtonsPanel = { "ButtonsPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaTutorialGenericPopup, ButtonsPanel), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ButtonsPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ButtonsPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ImagesCanvas_MetaData[] = {
		{ "Category", "UMGAtlantaTutorialGenericPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaTutorialGenericPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ImagesCanvas = { "ImagesCanvas", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaTutorialGenericPopup, ImagesCanvas), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ImagesCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ImagesCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ImageTutorial_MetaData[] = {
		{ "Category", "UMGAtlantaTutorialGenericPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaTutorialGenericPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ImageTutorial = { "ImageTutorial", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaTutorialGenericPopup, ImageTutorial), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ImageTutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ImageTutorial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp__changeImagesTimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_DelayBeforeChangingImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ButtonWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp__pageButtonWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ButtonsPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ImagesCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::NewProp_ImageTutorial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaTutorialGenericPopup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::ClassParams = {
		&UUMGAtlantaTutorialGenericPopup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaTutorialGenericPopup, 906931320);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaTutorialGenericPopup>()
	{
		return UUMGAtlantaTutorialGenericPopup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaTutorialGenericPopup(Z_Construct_UClass_UUMGAtlantaTutorialGenericPopup, &UUMGAtlantaTutorialGenericPopup::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaTutorialGenericPopup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaTutorialGenericPopup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
