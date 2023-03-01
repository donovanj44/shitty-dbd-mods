// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGObjectivesWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGObjectivesWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGObjectivesWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGObjectivesWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
// End Cross Module References
	static FName NAME_UUMGObjectivesWidget_UpdateGeneratorCount = FName(TEXT("UpdateGeneratorCount"));
	void UUMGObjectivesWidget::UpdateGeneratorCount(int32 count)
	{
		UMGObjectivesWidget_eventUpdateGeneratorCount_Parms Parms;
		Parms.count=count;
		ProcessEvent(FindFunctionChecked(NAME_UUMGObjectivesWidget_UpdateGeneratorCount),&Parms);
	}
	static FName NAME_UUMGObjectivesWidget_UpdateTextMessage = FName(TEXT("UpdateTextMessage"));
	void UUMGObjectivesWidget::UpdateTextMessage(FText const& textFind, FText const& textExit, FText const& textOr)
	{
		UMGObjectivesWidget_eventUpdateTextMessage_Parms Parms;
		Parms.textFind=textFind;
		Parms.textExit=textExit;
		Parms.textOr=textOr;
		ProcessEvent(FindFunctionChecked(NAME_UUMGObjectivesWidget_UpdateTextMessage),&Parms);
	}
	void UUMGObjectivesWidget::StaticRegisterNativesUUMGObjectivesWidget()
	{
	}
	struct Z_Construct_UFunction_UUMGObjectivesWidget_UpdateGeneratorCount_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGObjectivesWidget_UpdateGeneratorCount_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGObjectivesWidget_eventUpdateGeneratorCount_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGObjectivesWidget_UpdateGeneratorCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGObjectivesWidget_UpdateGeneratorCount_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGObjectivesWidget_UpdateGeneratorCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGObjectivesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGObjectivesWidget_UpdateGeneratorCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGObjectivesWidget, nullptr, "UpdateGeneratorCount", nullptr, nullptr, sizeof(UMGObjectivesWidget_eventUpdateGeneratorCount_Parms), Z_Construct_UFunction_UUMGObjectivesWidget_UpdateGeneratorCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGObjectivesWidget_UpdateGeneratorCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGObjectivesWidget_UpdateGeneratorCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGObjectivesWidget_UpdateGeneratorCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGObjectivesWidget_UpdateGeneratorCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGObjectivesWidget_UpdateGeneratorCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textOr_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_textOr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textExit_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_textExit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textFind_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_textFind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::NewProp_textOr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::NewProp_textOr = { "textOr", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGObjectivesWidget_eventUpdateTextMessage_Parms, textOr), METADATA_PARAMS(Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::NewProp_textOr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::NewProp_textOr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::NewProp_textExit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::NewProp_textExit = { "textExit", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGObjectivesWidget_eventUpdateTextMessage_Parms, textExit), METADATA_PARAMS(Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::NewProp_textExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::NewProp_textExit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::NewProp_textFind_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::NewProp_textFind = { "textFind", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGObjectivesWidget_eventUpdateTextMessage_Parms, textFind), METADATA_PARAMS(Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::NewProp_textFind_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::NewProp_textFind_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::NewProp_textOr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::NewProp_textExit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::NewProp_textFind,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGObjectivesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGObjectivesWidget, nullptr, "UpdateTextMessage", nullptr, nullptr, sizeof(UMGObjectivesWidget_eventUpdateTextMessage_Parms), Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGObjectivesWidget_NoRegister()
	{
		return UUMGObjectivesWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGObjectivesWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanelHatchVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PanelHatchVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PanelHatchVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanelFindExitVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PanelFindExitVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PanelFindExitVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanelGeneratorVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PanelGeneratorVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PanelGeneratorVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanelEscapeRequirementsVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PanelEscapeRequirementsVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PanelEscapeRequirementsVisibility_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGObjectivesWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGObjectivesWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGObjectivesWidget_UpdateGeneratorCount, "UpdateGeneratorCount" }, // 726417416
		{ &Z_Construct_UFunction_UUMGObjectivesWidget_UpdateTextMessage, "UpdateTextMessage" }, // 1384049870
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGObjectivesWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGObjectivesWidget.h" },
		{ "ModuleRelativePath", "Public/UMGObjectivesWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelHatchVisibility_MetaData[] = {
		{ "Category", "UMGObjectivesWidget" },
		{ "ModuleRelativePath", "Public/UMGObjectivesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelHatchVisibility = { "PanelHatchVisibility", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGObjectivesWidget, PanelHatchVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelHatchVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelHatchVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelHatchVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelFindExitVisibility_MetaData[] = {
		{ "Category", "UMGObjectivesWidget" },
		{ "ModuleRelativePath", "Public/UMGObjectivesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelFindExitVisibility = { "PanelFindExitVisibility", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGObjectivesWidget, PanelFindExitVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelFindExitVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelFindExitVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelFindExitVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelGeneratorVisibility_MetaData[] = {
		{ "Category", "UMGObjectivesWidget" },
		{ "ModuleRelativePath", "Public/UMGObjectivesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelGeneratorVisibility = { "PanelGeneratorVisibility", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGObjectivesWidget, PanelGeneratorVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelGeneratorVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelGeneratorVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelGeneratorVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelEscapeRequirementsVisibility_MetaData[] = {
		{ "Category", "UMGObjectivesWidget" },
		{ "ModuleRelativePath", "Public/UMGObjectivesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelEscapeRequirementsVisibility = { "PanelEscapeRequirementsVisibility", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGObjectivesWidget, PanelEscapeRequirementsVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelEscapeRequirementsVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelEscapeRequirementsVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelEscapeRequirementsVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGObjectivesWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelHatchVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelHatchVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelFindExitVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelFindExitVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelGeneratorVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelGeneratorVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelEscapeRequirementsVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGObjectivesWidget_Statics::NewProp_PanelEscapeRequirementsVisibility_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGObjectivesWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGObjectivesWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGObjectivesWidget_Statics::ClassParams = {
		&UUMGObjectivesWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGObjectivesWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGObjectivesWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGObjectivesWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGObjectivesWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGObjectivesWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGObjectivesWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGObjectivesWidget, 604006544);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGObjectivesWidget>()
	{
		return UUMGObjectivesWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGObjectivesWidget(Z_Construct_UClass_UUMGObjectivesWidget, &UUMGObjectivesWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGObjectivesWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGObjectivesWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
