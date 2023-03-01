// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGQueueStatusIconWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGQueueStatusIconWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGQueueStatusIconWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGQueueStatusIconWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UUMGQueueStatusIconWidget::StaticRegisterNativesUUMGQueueStatusIconWidget()
	{
	}
	UClass* Z_Construct_UClass_UUMGQueueStatusIconWidget_NoRegister()
	{
		return UUMGQueueStatusIconWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LongColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LongColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModerateColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModerateColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptableColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AcceptableColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusIndicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatusIndicator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGQueueStatusIconWidget.h" },
		{ "ModuleRelativePath", "Public/UMGQueueStatusIconWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_LongColor_MetaData[] = {
		{ "Category", "UMGQueueStatusIconWidget" },
		{ "ModuleRelativePath", "Public/UMGQueueStatusIconWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_LongColor = { "LongColor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGQueueStatusIconWidget, LongColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_LongColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_LongColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_ModerateColor_MetaData[] = {
		{ "Category", "UMGQueueStatusIconWidget" },
		{ "ModuleRelativePath", "Public/UMGQueueStatusIconWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_ModerateColor = { "ModerateColor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGQueueStatusIconWidget, ModerateColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_ModerateColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_ModerateColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_AcceptableColor_MetaData[] = {
		{ "Category", "UMGQueueStatusIconWidget" },
		{ "ModuleRelativePath", "Public/UMGQueueStatusIconWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_AcceptableColor = { "AcceptableColor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGQueueStatusIconWidget, AcceptableColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_AcceptableColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_AcceptableColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_StatusIndicator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UMGQueueStatusIconWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGQueueStatusIconWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_StatusIndicator = { "StatusIndicator", nullptr, (EPropertyFlags)0x004000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGQueueStatusIconWidget, StatusIndicator), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_StatusIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_StatusIndicator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_LongColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_ModerateColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_AcceptableColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::NewProp_StatusIndicator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGQueueStatusIconWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::ClassParams = {
		&UUMGQueueStatusIconWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGQueueStatusIconWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGQueueStatusIconWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGQueueStatusIconWidget, 1001291232);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGQueueStatusIconWidget>()
	{
		return UUMGQueueStatusIconWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGQueueStatusIconWidget(Z_Construct_UClass_UUMGQueueStatusIconWidget, &UUMGQueueStatusIconWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGQueueStatusIconWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGQueueStatusIconWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
