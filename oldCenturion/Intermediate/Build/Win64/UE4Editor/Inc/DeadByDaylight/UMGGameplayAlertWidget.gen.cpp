// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGGameplayAlertWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGGameplayAlertWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGGameplayAlertWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGGameplayAlertWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseAlertWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectSlotData();
// End Cross Module References
	static FName NAME_UUMGGameplayAlertWidget_UpdateWidget = FName(TEXT("UpdateWidget"));
	void UUMGGameplayAlertWidget::UpdateWidget(FStatusEffectSlotData const& statusEffectData, FInventorySlotData const& originatorData)
	{
		UMGGameplayAlertWidget_eventUpdateWidget_Parms Parms;
		Parms.statusEffectData=statusEffectData;
		Parms.originatorData=originatorData;
		ProcessEvent(FindFunctionChecked(NAME_UUMGGameplayAlertWidget_UpdateWidget),&Parms);
	}
	void UUMGGameplayAlertWidget::StaticRegisterNativesUUMGGameplayAlertWidget()
	{
	}
	struct Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_originatorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_originatorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statusEffectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_statusEffectData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::NewProp_originatorData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::NewProp_originatorData = { "originatorData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGGameplayAlertWidget_eventUpdateWidget_Parms, originatorData), Z_Construct_UScriptStruct_FInventorySlotData, METADATA_PARAMS(Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::NewProp_originatorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::NewProp_originatorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::NewProp_statusEffectData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::NewProp_statusEffectData = { "statusEffectData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGGameplayAlertWidget_eventUpdateWidget_Parms, statusEffectData), Z_Construct_UScriptStruct_FStatusEffectSlotData, METADATA_PARAMS(Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::NewProp_statusEffectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::NewProp_statusEffectData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::NewProp_originatorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::NewProp_statusEffectData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGGameplayAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGGameplayAlertWidget, nullptr, "UpdateWidget", nullptr, nullptr, sizeof(UMGGameplayAlertWidget_eventUpdateWidget_Parms), Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGGameplayAlertWidget_NoRegister()
	{
		return UUMGGameplayAlertWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGGameplayAlertWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGGameplayAlertWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseAlertWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGGameplayAlertWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGGameplayAlertWidget_UpdateWidget, "UpdateWidget" }, // 1865559335
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGGameplayAlertWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGGameplayAlertWidget.h" },
		{ "ModuleRelativePath", "Public/UMGGameplayAlertWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGGameplayAlertWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGGameplayAlertWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGGameplayAlertWidget_Statics::ClassParams = {
		&UUMGGameplayAlertWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGGameplayAlertWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGGameplayAlertWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGGameplayAlertWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGGameplayAlertWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGGameplayAlertWidget, 173464067);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGGameplayAlertWidget>()
	{
		return UUMGGameplayAlertWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGGameplayAlertWidget(Z_Construct_UClass_UUMGGameplayAlertWidget, &UUMGGameplayAlertWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGGameplayAlertWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGGameplayAlertWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
