// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaEventsDescription.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaEventsDescription() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaEventsDescription_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaEventsDescription();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaEventsTemplateDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaEventsDescription::execHandleButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleButtonClicked();
		P_NATIVE_END;
	}
	void UUMGAtlantaEventsDescription::StaticRegisterNativesUUMGAtlantaEventsDescription()
	{
		UClass* Class = UUMGAtlantaEventsDescription::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleButtonClicked", &UUMGAtlantaEventsDescription::execHandleButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaEventsDescription_HandleButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaEventsDescription_HandleButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaEventsDescription_HandleButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaEventsDescription, nullptr, "HandleButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaEventsDescription_HandleButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaEventsDescription_HandleButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaEventsDescription_HandleButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaEventsDescription_HandleButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaEventsDescription_NoRegister()
	{
		return UUMGAtlantaEventsDescription::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimePeriodCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimePeriodCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeepLinkButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeepLinkButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimePeriodEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimePeriodEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimePeriodStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimePeriodStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimePeriodTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimePeriodTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemsRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemsRewards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widgetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_widgetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaEventsDescription_HandleButtonClicked, "HandleButtonClicked" }, // 392979644
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaEventsDescription.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsDescription.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodCanvas_MetaData[] = {
		{ "Category", "UMGAtlantaEventsDescription" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodCanvas = { "TimePeriodCanvas", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaEventsDescription, TimePeriodCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_DeepLinkButton_MetaData[] = {
		{ "Category", "UMGAtlantaEventsDescription" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_DeepLinkButton = { "DeepLinkButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaEventsDescription, DeepLinkButton), Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_DeepLinkButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_DeepLinkButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodEnd_MetaData[] = {
		{ "Category", "UMGAtlantaEventsDescription" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodEnd = { "TimePeriodEnd", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaEventsDescription, TimePeriodEnd), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodStart_MetaData[] = {
		{ "Category", "UMGAtlantaEventsDescription" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodStart = { "TimePeriodStart", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaEventsDescription, TimePeriodStart), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodTitle_MetaData[] = {
		{ "Category", "UMGAtlantaEventsDescription" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodTitle = { "TimePeriodTitle", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaEventsDescription, TimePeriodTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "UMGAtlantaEventsDescription" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaEventsDescription, Description), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "UMGAtlantaEventsDescription" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaEventsDescription, Title), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_ItemsRewards_MetaData[] = {
		{ "Category", "UMGAtlantaEventsDescription" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_ItemsRewards = { "ItemsRewards", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaEventsDescription, ItemsRewards), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_ItemsRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_ItemsRewards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_widgetData_MetaData[] = {
		{ "Category", "UMGAtlantaEventsDescription" },
		{ "ModuleRelativePath", "Public/UMGAtlantaEventsDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_widgetData = { "widgetData", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaEventsDescription, widgetData), Z_Construct_UClass_UAtlantaEventsTemplateDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_widgetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_widgetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_DeepLinkButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_TimePeriodTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_ItemsRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::NewProp_widgetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaEventsDescription>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::ClassParams = {
		&UUMGAtlantaEventsDescription::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaEventsDescription()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaEventsDescription_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaEventsDescription, 2797130811);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaEventsDescription>()
	{
		return UUMGAtlantaEventsDescription::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaEventsDescription(Z_Construct_UClass_UUMGAtlantaEventsDescription, &UUMGAtlantaEventsDescription::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaEventsDescription"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaEventsDescription);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
