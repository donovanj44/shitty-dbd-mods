// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGLobbyOfferingWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGLobbyOfferingWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLobbyOfferingWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLobbyOfferingWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLobbyOfferingItemWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	void UUMGLobbyOfferingWidget::StaticRegisterNativesUUMGLobbyOfferingWidget()
	{
	}
	UClass* Z_Construct_UClass_UUMGLobbyOfferingWidget_NoRegister()
	{
		return UUMGLobbyOfferingWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyOfferingItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_LobbyOfferingItemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasOffering_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CanvasOffering;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGLobbyOfferingWidget.h" },
		{ "ModuleRelativePath", "Public/UMGLobbyOfferingWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::NewProp_LobbyOfferingItemClass_MetaData[] = {
		{ "Category", "UMGLobbyOfferingWidget" },
		{ "ModuleRelativePath", "Public/UMGLobbyOfferingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::NewProp_LobbyOfferingItemClass = { "LobbyOfferingItemClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbyOfferingWidget, LobbyOfferingItemClass), Z_Construct_UClass_UUMGLobbyOfferingItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::NewProp_LobbyOfferingItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::NewProp_LobbyOfferingItemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::NewProp_CanvasOffering_MetaData[] = {
		{ "Category", "UMGLobbyOfferingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLobbyOfferingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::NewProp_CanvasOffering = { "CanvasOffering", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbyOfferingWidget, CanvasOffering), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::NewProp_CanvasOffering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::NewProp_CanvasOffering_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::NewProp_LobbyOfferingItemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::NewProp_CanvasOffering,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGLobbyOfferingWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::ClassParams = {
		&UUMGLobbyOfferingWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGLobbyOfferingWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGLobbyOfferingWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGLobbyOfferingWidget, 3773401924);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGLobbyOfferingWidget>()
	{
		return UUMGLobbyOfferingWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGLobbyOfferingWidget(Z_Construct_UClass_UUMGLobbyOfferingWidget, &UUMGLobbyOfferingWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGLobbyOfferingWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGLobbyOfferingWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
