// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaCreditsPopup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaCreditsPopup() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaCreditsPopup_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaCreditsPopup();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHtmlRichText_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaCreditsPopup::execSetCreditContent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_content);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCreditContent(Z_Param_content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaCreditsPopup::execSetCreditTitle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_title);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCreditTitle(Z_Param_title);
		P_NATIVE_END;
	}
	void UUMGAtlantaCreditsPopup::StaticRegisterNativesUUMGAtlantaCreditsPopup()
	{
		UClass* Class = UUMGAtlantaCreditsPopup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCreditContent", &UUMGAtlantaCreditsPopup::execSetCreditContent },
			{ "SetCreditTitle", &UUMGAtlantaCreditsPopup::execSetCreditTitle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditContent_Statics
	{
		struct UMGAtlantaCreditsPopup_eventSetCreditContent_Parms
		{
			FString content;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditContent_Statics::NewProp_content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditContent_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaCreditsPopup_eventSetCreditContent_Parms, content), METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditContent_Statics::NewProp_content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditContent_Statics::NewProp_content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditContent_Statics::NewProp_content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditContent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaCreditsPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaCreditsPopup, nullptr, "SetCreditContent", nullptr, nullptr, sizeof(UMGAtlantaCreditsPopup_eventSetCreditContent_Parms), Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditTitle_Statics
	{
		struct UMGAtlantaCreditsPopup_eventSetCreditTitle_Parms
		{
			FString title;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditTitle_Statics::NewProp_title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditTitle_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaCreditsPopup_eventSetCreditTitle_Parms, title), METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditTitle_Statics::NewProp_title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditTitle_Statics::NewProp_title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditTitle_Statics::NewProp_title,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaCreditsPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaCreditsPopup, nullptr, "SetCreditTitle", nullptr, nullptr, sizeof(UMGAtlantaCreditsPopup_eventSetCreditTitle_Parms), Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaCreditsPopup_NoRegister()
	{
		return UUMGAtlantaCreditsPopup::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__titleDefaultStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__titleDefaultStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RichContentText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RichContentText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RichTitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RichTitleText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditContent, "SetCreditContent" }, // 237644012
		{ &Z_Construct_UFunction_UUMGAtlantaCreditsPopup_SetCreditTitle, "SetCreditTitle" }, // 103584222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaCreditsPopup.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaCreditsPopup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::NewProp__titleDefaultStyle_MetaData[] = {
		{ "Category", "UMGAtlantaCreditsPopup" },
		{ "ModuleRelativePath", "Public/UMGAtlantaCreditsPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::NewProp__titleDefaultStyle = { "_titleDefaultStyle", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaCreditsPopup, _titleDefaultStyle), METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::NewProp__titleDefaultStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::NewProp__titleDefaultStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::NewProp_RichContentText_MetaData[] = {
		{ "Category", "UMGAtlantaCreditsPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaCreditsPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::NewProp_RichContentText = { "RichContentText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaCreditsPopup, RichContentText), Z_Construct_UClass_UUMGHtmlRichText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::NewProp_RichContentText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::NewProp_RichContentText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::NewProp_RichTitleText_MetaData[] = {
		{ "Category", "UMGAtlantaCreditsPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaCreditsPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::NewProp_RichTitleText = { "RichTitleText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaCreditsPopup, RichTitleText), Z_Construct_UClass_UUMGHtmlRichText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::NewProp_RichTitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::NewProp_RichTitleText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::NewProp__titleDefaultStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::NewProp_RichContentText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::NewProp_RichTitleText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaCreditsPopup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::ClassParams = {
		&UUMGAtlantaCreditsPopup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaCreditsPopup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaCreditsPopup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaCreditsPopup, 3633316587);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaCreditsPopup>()
	{
		return UUMGAtlantaCreditsPopup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaCreditsPopup(Z_Construct_UClass_UUMGAtlantaCreditsPopup, &UUMGAtlantaCreditsPopup::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaCreditsPopup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaCreditsPopup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
