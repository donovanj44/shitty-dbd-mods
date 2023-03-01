// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGCustomizationTooltipHeaderWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGCustomizationTooltipHeaderWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	static FName NAME_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition = FName(TEXT("SetOutfitComposition"));
	void UUMGCustomizationTooltipHeaderWidget::SetOutfitComposition(bool isUnbreakable, TArray<ECustomizationCategory> const& composition)
	{
		UMGCustomizationTooltipHeaderWidget_eventSetOutfitComposition_Parms Parms;
		Parms.isUnbreakable=isUnbreakable ? true : false;
		Parms.composition=composition;
		ProcessEvent(FindFunctionChecked(NAME_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition),&Parms);
	}
	void UUMGCustomizationTooltipHeaderWidget::StaticRegisterNativesUUMGCustomizationTooltipHeaderWidget()
	{
	}
	struct Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_composition_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_composition;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_composition_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_composition_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isUnbreakable_MetaData[];
#endif
		static void NewProp_isUnbreakable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isUnbreakable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::NewProp_composition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::NewProp_composition = { "composition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCustomizationTooltipHeaderWidget_eventSetOutfitComposition_Parms, composition), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::NewProp_composition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::NewProp_composition_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::NewProp_composition_Inner = { "composition", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::NewProp_composition_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::NewProp_isUnbreakable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::NewProp_isUnbreakable_SetBit(void* Obj)
	{
		((UMGCustomizationTooltipHeaderWidget_eventSetOutfitComposition_Parms*)Obj)->isUnbreakable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::NewProp_isUnbreakable = { "isUnbreakable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGCustomizationTooltipHeaderWidget_eventSetOutfitComposition_Parms), &Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::NewProp_isUnbreakable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::NewProp_isUnbreakable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::NewProp_isUnbreakable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::NewProp_composition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::NewProp_composition_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::NewProp_composition_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::NewProp_isUnbreakable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCustomizationTooltipHeaderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget, nullptr, "SetOutfitComposition", nullptr, nullptr, sizeof(UMGCustomizationTooltipHeaderWidget_eventSetOutfitComposition_Parms), Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_NoRegister()
	{
		return UUMGCustomizationTooltipHeaderWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryAndRarityText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CategoryAndRarityText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollectionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGCustomizationTooltipHeaderWidget_SetOutfitComposition, "SetOutfitComposition" }, // 3006587908
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGCustomizationTooltipHeaderWidget.h" },
		{ "ModuleRelativePath", "Public/UMGCustomizationTooltipHeaderWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::NewProp_CategoryAndRarityText_MetaData[] = {
		{ "Category", "UMGCustomizationTooltipHeaderWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationTooltipHeaderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::NewProp_CategoryAndRarityText = { "CategoryAndRarityText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationTooltipHeaderWidget, CategoryAndRarityText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::NewProp_CategoryAndRarityText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::NewProp_CategoryAndRarityText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::NewProp_CollectionName_MetaData[] = {
		{ "Category", "UMGCustomizationTooltipHeaderWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationTooltipHeaderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::NewProp_CollectionName = { "CollectionName", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationTooltipHeaderWidget, CollectionName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::NewProp_CollectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::NewProp_CollectionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "UMGCustomizationTooltipHeaderWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationTooltipHeaderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationTooltipHeaderWidget, Title), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::NewProp_Title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::NewProp_CategoryAndRarityText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::NewProp_CollectionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::NewProp_Title,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGCustomizationTooltipHeaderWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::ClassParams = {
		&UUMGCustomizationTooltipHeaderWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGCustomizationTooltipHeaderWidget, 784202059);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGCustomizationTooltipHeaderWidget>()
	{
		return UUMGCustomizationTooltipHeaderWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGCustomizationTooltipHeaderWidget(Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget, &UUMGCustomizationTooltipHeaderWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGCustomizationTooltipHeaderWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGCustomizationTooltipHeaderWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
