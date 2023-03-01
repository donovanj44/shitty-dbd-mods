// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillerNoiseIndicatorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerNoiseIndicatorWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerNoiseIndicatorWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerNoiseIndicatorWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNoiseIndicatorWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static FName NAME_UKillerNoiseIndicatorWidget_SetSoundDistancePercentage = FName(TEXT("SetSoundDistancePercentage"));
	void UKillerNoiseIndicatorWidget::SetSoundDistancePercentage(float distancePercentage)
	{
		KillerNoiseIndicatorWidget_eventSetSoundDistancePercentage_Parms Parms;
		Parms.distancePercentage=distancePercentage;
		ProcessEvent(FindFunctionChecked(NAME_UKillerNoiseIndicatorWidget_SetSoundDistancePercentage),&Parms);
	}
	void UKillerNoiseIndicatorWidget::StaticRegisterNativesUKillerNoiseIndicatorWidget()
	{
	}
	struct Z_Construct_UFunction_UKillerNoiseIndicatorWidget_SetSoundDistancePercentage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distancePercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKillerNoiseIndicatorWidget_SetSoundDistancePercentage_Statics::NewProp_distancePercentage = { "distancePercentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerNoiseIndicatorWidget_eventSetSoundDistancePercentage_Parms, distancePercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerNoiseIndicatorWidget_SetSoundDistancePercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerNoiseIndicatorWidget_SetSoundDistancePercentage_Statics::NewProp_distancePercentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerNoiseIndicatorWidget_SetSoundDistancePercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerNoiseIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerNoiseIndicatorWidget_SetSoundDistancePercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerNoiseIndicatorWidget, nullptr, "SetSoundDistancePercentage", nullptr, nullptr, sizeof(KillerNoiseIndicatorWidget_eventSetSoundDistancePercentage_Parms), Z_Construct_UFunction_UKillerNoiseIndicatorWidget_SetSoundDistancePercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerNoiseIndicatorWidget_SetSoundDistancePercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerNoiseIndicatorWidget_SetSoundDistancePercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerNoiseIndicatorWidget_SetSoundDistancePercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerNoiseIndicatorWidget_SetSoundDistancePercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerNoiseIndicatorWidget_SetSoundDistancePercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKillerNoiseIndicatorWidget_NoRegister()
	{
		return UKillerNoiseIndicatorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UKillerNoiseIndicatorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerNoiseIndicatorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNoiseIndicatorWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKillerNoiseIndicatorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKillerNoiseIndicatorWidget_SetSoundDistancePercentage, "SetSoundDistancePercentage" }, // 394249803
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerNoiseIndicatorWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KillerNoiseIndicatorWidget.h" },
		{ "ModuleRelativePath", "Public/KillerNoiseIndicatorWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerNoiseIndicatorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerNoiseIndicatorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerNoiseIndicatorWidget_Statics::ClassParams = {
		&UKillerNoiseIndicatorWidget::StaticClass,
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
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerNoiseIndicatorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerNoiseIndicatorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerNoiseIndicatorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerNoiseIndicatorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerNoiseIndicatorWidget, 2729176692);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UKillerNoiseIndicatorWidget>()
	{
		return UKillerNoiseIndicatorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerNoiseIndicatorWidget(Z_Construct_UClass_UKillerNoiseIndicatorWidget, &UKillerNoiseIndicatorWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UKillerNoiseIndicatorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerNoiseIndicatorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
