// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TerrorRadiusIndicatorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrorRadiusIndicatorWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTerrorRadiusIndicatorWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTerrorRadiusIndicatorWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNoiseIndicatorWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static FName NAME_UTerrorRadiusIndicatorWidget_SetSoundDistancePercentage = FName(TEXT("SetSoundDistancePercentage"));
	void UTerrorRadiusIndicatorWidget::SetSoundDistancePercentage(float distancePercentage)
	{
		TerrorRadiusIndicatorWidget_eventSetSoundDistancePercentage_Parms Parms;
		Parms.distancePercentage=distancePercentage;
		ProcessEvent(FindFunctionChecked(NAME_UTerrorRadiusIndicatorWidget_SetSoundDistancePercentage),&Parms);
	}
	void UTerrorRadiusIndicatorWidget::StaticRegisterNativesUTerrorRadiusIndicatorWidget()
	{
	}
	struct Z_Construct_UFunction_UTerrorRadiusIndicatorWidget_SetSoundDistancePercentage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distancePercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTerrorRadiusIndicatorWidget_SetSoundDistancePercentage_Statics::NewProp_distancePercentage = { "distancePercentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TerrorRadiusIndicatorWidget_eventSetSoundDistancePercentage_Parms, distancePercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrorRadiusIndicatorWidget_SetSoundDistancePercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrorRadiusIndicatorWidget_SetSoundDistancePercentage_Statics::NewProp_distancePercentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerrorRadiusIndicatorWidget_SetSoundDistancePercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TerrorRadiusIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrorRadiusIndicatorWidget_SetSoundDistancePercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerrorRadiusIndicatorWidget, nullptr, "SetSoundDistancePercentage", nullptr, nullptr, sizeof(TerrorRadiusIndicatorWidget_eventSetSoundDistancePercentage_Parms), Z_Construct_UFunction_UTerrorRadiusIndicatorWidget_SetSoundDistancePercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusIndicatorWidget_SetSoundDistancePercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTerrorRadiusIndicatorWidget_SetSoundDistancePercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrorRadiusIndicatorWidget_SetSoundDistancePercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTerrorRadiusIndicatorWidget_SetSoundDistancePercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTerrorRadiusIndicatorWidget_SetSoundDistancePercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTerrorRadiusIndicatorWidget_NoRegister()
	{
		return UTerrorRadiusIndicatorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTerrorRadiusIndicatorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__anchorY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__anchorY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTerrorRadiusIndicatorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNoiseIndicatorWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTerrorRadiusIndicatorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTerrorRadiusIndicatorWidget_SetSoundDistancePercentage, "SetSoundDistancePercentage" }, // 1967921228
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerrorRadiusIndicatorWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TerrorRadiusIndicatorWidget.h" },
		{ "ModuleRelativePath", "Public/TerrorRadiusIndicatorWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerrorRadiusIndicatorWidget_Statics::NewProp__anchorY_MetaData[] = {
		{ "Category", "TerrorRadiusIndicatorWidget" },
		{ "ModuleRelativePath", "Public/TerrorRadiusIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTerrorRadiusIndicatorWidget_Statics::NewProp__anchorY = { "_anchorY", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTerrorRadiusIndicatorWidget, _anchorY), METADATA_PARAMS(Z_Construct_UClass_UTerrorRadiusIndicatorWidget_Statics::NewProp__anchorY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusIndicatorWidget_Statics::NewProp__anchorY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTerrorRadiusIndicatorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrorRadiusIndicatorWidget_Statics::NewProp__anchorY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTerrorRadiusIndicatorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTerrorRadiusIndicatorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTerrorRadiusIndicatorWidget_Statics::ClassParams = {
		&UTerrorRadiusIndicatorWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTerrorRadiusIndicatorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusIndicatorWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTerrorRadiusIndicatorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTerrorRadiusIndicatorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTerrorRadiusIndicatorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTerrorRadiusIndicatorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTerrorRadiusIndicatorWidget, 1968269040);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTerrorRadiusIndicatorWidget>()
	{
		return UTerrorRadiusIndicatorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTerrorRadiusIndicatorWidget(Z_Construct_UClass_UTerrorRadiusIndicatorWidget, &UTerrorRadiusIndicatorWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTerrorRadiusIndicatorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTerrorRadiusIndicatorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
