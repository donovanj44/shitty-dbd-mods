// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGBloodStoreTimer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGBloodStoreTimer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBloodStoreTimer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBloodStoreTimer();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
// End Cross Module References
	void UUMGBloodStoreTimer::StaticRegisterNativesUUMGBloodStoreTimer()
	{
	}
	UClass* Z_Construct_UClass_UUMGBloodStoreTimer_NoRegister()
	{
		return UUMGBloodStoreTimer::StaticClass();
	}
	struct Z_Construct_UClass_UUMGBloodStoreTimer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RefreshImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingTimeTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemainingTimeTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__warningColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__warningColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__normalColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__normalColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGBloodStoreTimer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreTimer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGBloodStoreTimer.h" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreTimer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp_RefreshImage_MetaData[] = {
		{ "Category", "UMGBloodStoreTimer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp_RefreshImage = { "RefreshImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreTimer, RefreshImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp_RefreshImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp_RefreshImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp_RemainingTimeTextBlock_MetaData[] = {
		{ "Category", "UMGBloodStoreTimer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp_RemainingTimeTextBlock = { "RemainingTimeTextBlock", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreTimer, RemainingTimeTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp_RemainingTimeTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp_RemainingTimeTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp__warningColor_MetaData[] = {
		{ "Category", "UMGBloodStoreTimer" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp__warningColor = { "_warningColor", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreTimer, _warningColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp__warningColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp__warningColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp__normalColor_MetaData[] = {
		{ "Category", "UMGBloodStoreTimer" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp__normalColor = { "_normalColor", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreTimer, _normalColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp__normalColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp__normalColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGBloodStoreTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp_RefreshImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp_RemainingTimeTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp__warningColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreTimer_Statics::NewProp__normalColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGBloodStoreTimer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGBloodStoreTimer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGBloodStoreTimer_Statics::ClassParams = {
		&UUMGBloodStoreTimer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGBloodStoreTimer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreTimer_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreTimer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreTimer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGBloodStoreTimer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGBloodStoreTimer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGBloodStoreTimer, 2083936454);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGBloodStoreTimer>()
	{
		return UUMGBloodStoreTimer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGBloodStoreTimer(Z_Construct_UClass_UUMGBloodStoreTimer, &UUMGBloodStoreTimer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGBloodStoreTimer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGBloodStoreTimer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
