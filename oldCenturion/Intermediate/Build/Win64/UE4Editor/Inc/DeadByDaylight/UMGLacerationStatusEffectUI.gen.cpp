// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGLacerationStatusEffectUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGLacerationStatusEffectUI() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLacerationStatusEffectUI_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLacerationStatusEffectUI();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGLacerationStatusEffectUI::execOnFinishedBoomAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishedBoomAnimation();
		P_NATIVE_END;
	}
	void UUMGLacerationStatusEffectUI::StaticRegisterNativesUUMGLacerationStatusEffectUI()
	{
		UClass* Class = UUMGLacerationStatusEffectUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFinishedBoomAnimation", &UUMGLacerationStatusEffectUI::execOnFinishedBoomAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGLacerationStatusEffectUI_OnFinishedBoomAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLacerationStatusEffectUI_OnFinishedBoomAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLacerationStatusEffectUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLacerationStatusEffectUI_OnFinishedBoomAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLacerationStatusEffectUI, nullptr, "OnFinishedBoomAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLacerationStatusEffectUI_OnFinishedBoomAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLacerationStatusEffectUI_OnFinishedBoomAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLacerationStatusEffectUI_OnFinishedBoomAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLacerationStatusEffectUI_OnFinishedBoomAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGLacerationStatusEffectUI_NoRegister()
	{
		return UUMGLacerationStatusEffectUI::StaticClass();
	}
	struct Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__glassShatterDisintigrateAnimationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__glassShatterDisintigrateAnimationName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lacerationFillFullColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lacerationFillFullColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lacerationDefaultColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lacerationDefaultColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lacerationFillImages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__lacerationFillImages;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lacerationFillImages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lacerationDecorationImages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__lacerationDecorationImages;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lacerationDecorationImages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumLacerationDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__maximumLacerationDefinitions;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__maximumLacerationDefinitions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LacerationFill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LacerationFill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LacerationDecoration_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LacerationDecoration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGLacerationStatusEffectUI_OnFinishedBoomAnimation, "OnFinishedBoomAnimation" }, // 1706809461
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGLacerationStatusEffectUI.h" },
		{ "ModuleRelativePath", "Public/UMGLacerationStatusEffectUI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__glassShatterDisintigrateAnimationName_MetaData[] = {
		{ "Category", "UMGLacerationStatusEffectUI" },
		{ "ModuleRelativePath", "Public/UMGLacerationStatusEffectUI.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__glassShatterDisintigrateAnimationName = { "_glassShatterDisintigrateAnimationName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLacerationStatusEffectUI, _glassShatterDisintigrateAnimationName), METADATA_PARAMS(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__glassShatterDisintigrateAnimationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__glassShatterDisintigrateAnimationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationFillFullColor_MetaData[] = {
		{ "Category", "UMGLacerationStatusEffectUI" },
		{ "ModuleRelativePath", "Public/UMGLacerationStatusEffectUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationFillFullColor = { "_lacerationFillFullColor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLacerationStatusEffectUI, _lacerationFillFullColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationFillFullColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationFillFullColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationDefaultColor_MetaData[] = {
		{ "Category", "UMGLacerationStatusEffectUI" },
		{ "ModuleRelativePath", "Public/UMGLacerationStatusEffectUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationDefaultColor = { "_lacerationDefaultColor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLacerationStatusEffectUI, _lacerationDefaultColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationDefaultColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationDefaultColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationFillImages_MetaData[] = {
		{ "Category", "UMGLacerationStatusEffectUI" },
		{ "ModuleRelativePath", "Public/UMGLacerationStatusEffectUI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationFillImages = { "_lacerationFillImages", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLacerationStatusEffectUI, _lacerationFillImages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationFillImages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationFillImages_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationFillImages_Inner = { "_lacerationFillImages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationDecorationImages_MetaData[] = {
		{ "Category", "UMGLacerationStatusEffectUI" },
		{ "ModuleRelativePath", "Public/UMGLacerationStatusEffectUI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationDecorationImages = { "_lacerationDecorationImages", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLacerationStatusEffectUI, _lacerationDecorationImages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationDecorationImages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationDecorationImages_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationDecorationImages_Inner = { "_lacerationDecorationImages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__maximumLacerationDefinitions_MetaData[] = {
		{ "Category", "UMGLacerationStatusEffectUI" },
		{ "ModuleRelativePath", "Public/UMGLacerationStatusEffectUI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__maximumLacerationDefinitions = { "_maximumLacerationDefinitions", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLacerationStatusEffectUI, _maximumLacerationDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__maximumLacerationDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__maximumLacerationDefinitions_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__maximumLacerationDefinitions_Inner = { "_maximumLacerationDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp_LacerationFill_MetaData[] = {
		{ "Category", "UMGLacerationStatusEffectUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLacerationStatusEffectUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp_LacerationFill = { "LacerationFill", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLacerationStatusEffectUI, LacerationFill), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp_LacerationFill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp_LacerationFill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp_LacerationDecoration_MetaData[] = {
		{ "Category", "UMGLacerationStatusEffectUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLacerationStatusEffectUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp_LacerationDecoration = { "LacerationDecoration", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLacerationStatusEffectUI, LacerationDecoration), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp_LacerationDecoration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp_LacerationDecoration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__glassShatterDisintigrateAnimationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationFillFullColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationDefaultColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationFillImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationFillImages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationDecorationImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__lacerationDecorationImages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__maximumLacerationDefinitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp__maximumLacerationDefinitions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp_LacerationFill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::NewProp_LacerationDecoration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGLacerationStatusEffectUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::ClassParams = {
		&UUMGLacerationStatusEffectUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGLacerationStatusEffectUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGLacerationStatusEffectUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGLacerationStatusEffectUI, 2624870617);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGLacerationStatusEffectUI>()
	{
		return UUMGLacerationStatusEffectUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGLacerationStatusEffectUI(Z_Construct_UClass_UUMGLacerationStatusEffectUI, &UUMGLacerationStatusEffectUI::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGLacerationStatusEffectUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGLacerationStatusEffectUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
