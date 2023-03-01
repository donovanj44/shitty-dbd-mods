// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SafeZoneManagerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafeZoneManagerWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USafeZoneManagerWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USafeZoneManagerWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	void USafeZoneManagerWidget::StaticRegisterNativesUSafeZoneManagerWidget()
	{
	}
	UClass* Z_Construct_UClass_USafeZoneManagerWidget_NoRegister()
	{
		return USafeZoneManagerWidget::StaticClass();
	}
	struct Z_Construct_UClass_USafeZoneManagerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafeZonePanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SafeZonePanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USafeZoneManagerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneManagerWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SafeZoneManagerWidget.h" },
		{ "ModuleRelativePath", "Public/SafeZoneManagerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneManagerWidget_Statics::NewProp_SafeZonePanel_MetaData[] = {
		{ "Category", "SafeZoneManagerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SafeZoneManagerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USafeZoneManagerWidget_Statics::NewProp_SafeZonePanel = { "SafeZonePanel", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USafeZoneManagerWidget, SafeZonePanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USafeZoneManagerWidget_Statics::NewProp_SafeZonePanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneManagerWidget_Statics::NewProp_SafeZonePanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USafeZoneManagerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneManagerWidget_Statics::NewProp_SafeZonePanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USafeZoneManagerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USafeZoneManagerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USafeZoneManagerWidget_Statics::ClassParams = {
		&USafeZoneManagerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USafeZoneManagerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneManagerWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USafeZoneManagerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneManagerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USafeZoneManagerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USafeZoneManagerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USafeZoneManagerWidget, 1680939155);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USafeZoneManagerWidget>()
	{
		return USafeZoneManagerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USafeZoneManagerWidget(Z_Construct_UClass_USafeZoneManagerWidget, &USafeZoneManagerWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USafeZoneManagerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USafeZoneManagerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
