// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LoadoutSlotFloatingWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadoutSlotFloatingWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoadoutSlotFloatingWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoadoutSlotFloatingWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseTooltipWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void ULoadoutSlotFloatingWidget::StaticRegisterNativesULoadoutSlotFloatingWidget()
	{
	}
	UClass* Z_Construct_UClass_ULoadoutSlotFloatingWidget_NoRegister()
	{
		return ULoadoutSlotFloatingWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULoadoutSlotFloatingWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadoutSlotFloatingWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTooltipWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutSlotFloatingWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoadoutSlotFloatingWidget.h" },
		{ "ModuleRelativePath", "Public/LoadoutSlotFloatingWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadoutSlotFloatingWidget_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "LoadoutSlotFloatingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadoutSlotFloatingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadoutSlotFloatingWidget_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadoutSlotFloatingWidget, Message), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadoutSlotFloatingWidget_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutSlotFloatingWidget_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadoutSlotFloatingWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadoutSlotFloatingWidget_Statics::NewProp_Message,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadoutSlotFloatingWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadoutSlotFloatingWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadoutSlotFloatingWidget_Statics::ClassParams = {
		&ULoadoutSlotFloatingWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULoadoutSlotFloatingWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutSlotFloatingWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadoutSlotFloatingWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadoutSlotFloatingWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadoutSlotFloatingWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadoutSlotFloatingWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadoutSlotFloatingWidget, 3878525866);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULoadoutSlotFloatingWidget>()
	{
		return ULoadoutSlotFloatingWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadoutSlotFloatingWidget(Z_Construct_UClass_ULoadoutSlotFloatingWidget, &ULoadoutSlotFloatingWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULoadoutSlotFloatingWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadoutSlotFloatingWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
