// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerLevelTooltipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerLevelTooltipWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerLevelTooltipWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerLevelTooltipWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseTooltipWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_NoRegister();
// End Cross Module References
	void UPlayerLevelTooltipWidget::StaticRegisterNativesUPlayerLevelTooltipWidget()
	{
	}
	UClass* Z_Construct_UClass_UPlayerLevelTooltipWidget_NoRegister()
	{
		return UPlayerLevelTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerLevelTooltipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLevelContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerLevelContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerLevelTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTooltipWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerLevelTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerLevelTooltipWidget.h" },
		{ "ModuleRelativePath", "Public/PlayerLevelTooltipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerLevelTooltipWidget_Statics::NewProp_PlayerLevelContent_MetaData[] = {
		{ "Category", "PlayerLevelTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerLevelTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerLevelTooltipWidget_Statics::NewProp_PlayerLevelContent = { "PlayerLevelContent", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerLevelTooltipWidget, PlayerLevelContent), Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerLevelTooltipWidget_Statics::NewProp_PlayerLevelContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerLevelTooltipWidget_Statics::NewProp_PlayerLevelContent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerLevelTooltipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerLevelTooltipWidget_Statics::NewProp_PlayerLevelContent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerLevelTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerLevelTooltipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerLevelTooltipWidget_Statics::ClassParams = {
		&UPlayerLevelTooltipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerLevelTooltipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerLevelTooltipWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerLevelTooltipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerLevelTooltipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerLevelTooltipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerLevelTooltipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerLevelTooltipWidget, 4218477436);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPlayerLevelTooltipWidget>()
	{
		return UPlayerLevelTooltipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerLevelTooltipWidget(Z_Construct_UClass_UPlayerLevelTooltipWidget, &UPlayerLevelTooltipWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPlayerLevelTooltipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerLevelTooltipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
