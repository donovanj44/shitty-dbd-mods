// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaPromoCodePopup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaPromoCodePopup() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaPromoCodePopup_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaPromoCodePopup();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGGenericPopup();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaPromoCodeRewardItemWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaPromoCodePopup::execPromoCodeCommitted)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_name);
		P_GET_PROPERTY(FByteProperty,Z_Param_commitType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PromoCodeCommitted(Z_Param_Out_name,ETextCommit::Type(Z_Param_commitType));
		P_NATIVE_END;
	}
	void UUMGAtlantaPromoCodePopup::StaticRegisterNativesUUMGAtlantaPromoCodePopup()
	{
		UClass* Class = UUMGAtlantaPromoCodePopup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PromoCodeCommitted", &UUMGAtlantaPromoCodePopup::execPromoCodeCommitted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted_Statics
	{
		struct UMGAtlantaPromoCodePopup_eventPromoCodeCommitted_Parms
		{
			FText name;
			TEnumAsByte<ETextCommit::Type> commitType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_commitType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted_Statics::NewProp_commitType = { "commitType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaPromoCodePopup_eventPromoCodeCommitted_Parms, commitType), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaPromoCodePopup_eventPromoCodeCommitted_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted_Statics::NewProp_commitType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaPromoCodePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaPromoCodePopup, nullptr, "PromoCodeCommitted", nullptr, nullptr, sizeof(UMGAtlantaPromoCodePopup_eventPromoCodeCommitted_Parms), Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaPromoCodePopup_NoRegister()
	{
		return UUMGAtlantaPromoCodePopup::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvalidIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PromoCodeInputTextBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PromoCodeInputTextBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CodePanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CodePanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardItemWidgetRevealDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RewardItemWidgetRevealDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardItemWidgetPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RewardItemWidgetPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardItemWidgetMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RewardItemWidgetMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardItemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_RewardItemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardWidgetContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardWidgetContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardPanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGGenericPopup,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaPromoCodePopup_PromoCodeCommitted, "PromoCodeCommitted" }, // 1573157410
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaPromoCodePopup.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPromoCodePopup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_InvalidIcon_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPromoCodePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_InvalidIcon = { "InvalidIcon", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPromoCodePopup, InvalidIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_InvalidIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_InvalidIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_PromoCodeInputTextBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPromoCodePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_PromoCodeInputTextBox = { "PromoCodeInputTextBox", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPromoCodePopup, PromoCodeInputTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_PromoCodeInputTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_PromoCodeInputTextBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_CodePanel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPromoCodePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_CodePanel = { "CodePanel", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPromoCodePopup, CodePanel), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_CodePanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_CodePanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetRevealDelay_MetaData[] = {
		{ "Category", "UMGAtlantaPromoCodePopup" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPromoCodePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetRevealDelay = { "RewardItemWidgetRevealDelay", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPromoCodePopup, RewardItemWidgetRevealDelay), METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetRevealDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetRevealDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetPadding_MetaData[] = {
		{ "Category", "UMGAtlantaPromoCodePopup" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPromoCodePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetPadding = { "RewardItemWidgetPadding", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPromoCodePopup, RewardItemWidgetPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetMax_MetaData[] = {
		{ "Category", "UMGAtlantaPromoCodePopup" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPromoCodePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetMax = { "RewardItemWidgetMax", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPromoCodePopup, RewardItemWidgetMax), METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetClass_MetaData[] = {
		{ "Category", "UMGAtlantaPromoCodePopup" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPromoCodePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetClass = { "RewardItemWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPromoCodePopup, RewardItemWidgetClass), Z_Construct_UClass_UUMGAtlantaPromoCodeRewardItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardWidgetContainer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPromoCodePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardWidgetContainer = { "RewardWidgetContainer", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPromoCodePopup, RewardWidgetContainer), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardWidgetContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardWidgetContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardPanel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPromoCodePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardPanel = { "RewardPanel", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPromoCodePopup, RewardPanel), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardPanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_InvalidIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_PromoCodeInputTextBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_CodePanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetRevealDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardItemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardWidgetContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::NewProp_RewardPanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaPromoCodePopup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::ClassParams = {
		&UUMGAtlantaPromoCodePopup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaPromoCodePopup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaPromoCodePopup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaPromoCodePopup, 1942659244);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaPromoCodePopup>()
	{
		return UUMGAtlantaPromoCodePopup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaPromoCodePopup(Z_Construct_UClass_UUMGAtlantaPromoCodePopup, &UUMGAtlantaPromoCodePopup::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaPromoCodePopup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaPromoCodePopup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
