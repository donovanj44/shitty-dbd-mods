// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaObjectiveWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaObjectiveWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaObjectiveWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaObjectiveWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UAtlantaObjectiveWidget::StaticRegisterNativesUAtlantaObjectiveWidget()
	{
	}
	UClass* Z_Construct_UClass_UAtlantaObjectiveWidget_NoRegister()
	{
		return UAtlantaObjectiveWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaObjectiveWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__polynomialOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__polynomialOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__totalFadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__totalFadeOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectiveLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaObjectiveWidget.h" },
		{ "ModuleRelativePath", "Public/AtlantaObjectiveWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::NewProp__polynomialOrder_MetaData[] = {
		{ "Category", "AtlantaObjectiveWidget" },
		{ "ModuleRelativePath", "Public/AtlantaObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::NewProp__polynomialOrder = { "_polynomialOrder", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaObjectiveWidget, _polynomialOrder), METADATA_PARAMS(Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::NewProp__polynomialOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::NewProp__polynomialOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::NewProp__totalFadeOutTime_MetaData[] = {
		{ "Category", "AtlantaObjectiveWidget" },
		{ "ModuleRelativePath", "Public/AtlantaObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::NewProp__totalFadeOutTime = { "_totalFadeOutTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaObjectiveWidget, _totalFadeOutTime), METADATA_PARAMS(Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::NewProp__totalFadeOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::NewProp__totalFadeOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::NewProp_ObjectiveLabel_MetaData[] = {
		{ "Category", "AtlantaObjectiveWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::NewProp_ObjectiveLabel = { "ObjectiveLabel", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaObjectiveWidget, ObjectiveLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::NewProp_ObjectiveLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::NewProp_ObjectiveLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::NewProp__polynomialOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::NewProp__totalFadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::NewProp_ObjectiveLabel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaObjectiveWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::ClassParams = {
		&UAtlantaObjectiveWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaObjectiveWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaObjectiveWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaObjectiveWidget, 302934631);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaObjectiveWidget>()
	{
		return UAtlantaObjectiveWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaObjectiveWidget(Z_Construct_UClass_UAtlantaObjectiveWidget, &UAtlantaObjectiveWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaObjectiveWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaObjectiveWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
