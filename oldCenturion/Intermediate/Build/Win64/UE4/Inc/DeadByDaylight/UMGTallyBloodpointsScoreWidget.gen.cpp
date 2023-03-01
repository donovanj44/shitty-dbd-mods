// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGTallyBloodpointsScoreWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGTallyBloodpointsScoreWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyBloodpointsScoreWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyBloodpointsScoreWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FName NAME_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData = FName(TEXT("UpdateWidgetByScoreData"));
	void UUMGTallyBloodpointsScoreWidget::UpdateWidgetByScoreData(FText const& title, const UTexture2D* asset, int32 scoreValue)
	{
		UMGTallyBloodpointsScoreWidget_eventUpdateWidgetByScoreData_Parms Parms;
		Parms.title=title;
		Parms.asset=asset;
		Parms.scoreValue=scoreValue;
		ProcessEvent(FindFunctionChecked(NAME_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData),&Parms);
	}
	void UUMGTallyBloodpointsScoreWidget::StaticRegisterNativesUUMGTallyBloodpointsScoreWidget()
	{
	}
	struct Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_scoreValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_asset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::NewProp_scoreValue = { "scoreValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyBloodpointsScoreWidget_eventUpdateWidgetByScoreData_Parms, scoreValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::NewProp_asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::NewProp_asset = { "asset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyBloodpointsScoreWidget_eventUpdateWidgetByScoreData_Parms, asset), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::NewProp_asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::NewProp_asset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::NewProp_title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyBloodpointsScoreWidget_eventUpdateWidgetByScoreData_Parms, title), METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::NewProp_title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::NewProp_title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::NewProp_scoreValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::NewProp_asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::NewProp_title,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyBloodpointsScoreWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyBloodpointsScoreWidget, nullptr, "UpdateWidgetByScoreData", nullptr, nullptr, sizeof(UMGTallyBloodpointsScoreWidget_eventUpdateWidgetByScoreData_Parms), Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGTallyBloodpointsScoreWidget_NoRegister()
	{
		return UUMGTallyBloodpointsScoreWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGTallyBloodpointsScoreWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGTallyBloodpointsScoreWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGTallyBloodpointsScoreWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGTallyBloodpointsScoreWidget_UpdateWidgetByScoreData, "UpdateWidgetByScoreData" }, // 1718071664
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyBloodpointsScoreWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGTallyBloodpointsScoreWidget.h" },
		{ "ModuleRelativePath", "Public/UMGTallyBloodpointsScoreWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGTallyBloodpointsScoreWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGTallyBloodpointsScoreWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGTallyBloodpointsScoreWidget_Statics::ClassParams = {
		&UUMGTallyBloodpointsScoreWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGTallyBloodpointsScoreWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyBloodpointsScoreWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGTallyBloodpointsScoreWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGTallyBloodpointsScoreWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGTallyBloodpointsScoreWidget, 1465741999);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGTallyBloodpointsScoreWidget>()
	{
		return UUMGTallyBloodpointsScoreWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGTallyBloodpointsScoreWidget(Z_Construct_UClass_UUMGTallyBloodpointsScoreWidget, &UUMGTallyBloodpointsScoreWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGTallyBloodpointsScoreWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGTallyBloodpointsScoreWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
