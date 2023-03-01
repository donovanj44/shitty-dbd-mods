// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGHtmlRichText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGHtmlRichText() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHtmlRichText_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHtmlRichText();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UUMGHtmlRichText::execSetHtmlText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHtmlText(Z_Param_InText);
		P_NATIVE_END;
	}
	void UUMGHtmlRichText::StaticRegisterNativesUUMGHtmlRichText()
	{
		UClass* Class = UUMGHtmlRichText::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHtmlText", &UUMGHtmlRichText::execSetHtmlText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGHtmlRichText_SetHtmlText_Statics
	{
		struct UMGHtmlRichText_eventSetHtmlText_Parms
		{
			FString InText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHtmlRichText_SetHtmlText_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGHtmlRichText_SetHtmlText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGHtmlRichText_eventSetHtmlText_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UUMGHtmlRichText_SetHtmlText_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHtmlRichText_SetHtmlText_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGHtmlRichText_SetHtmlText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGHtmlRichText_SetHtmlText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHtmlRichText_SetHtmlText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHtmlRichText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHtmlRichText_SetHtmlText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHtmlRichText, nullptr, "SetHtmlText", nullptr, nullptr, sizeof(UMGHtmlRichText_eventSetHtmlText_Parms), Z_Construct_UFunction_UUMGHtmlRichText_SetHtmlText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHtmlRichText_SetHtmlText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHtmlRichText_SetHtmlText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHtmlRichText_SetHtmlText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHtmlRichText_SetHtmlText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHtmlRichText_SetHtmlText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGHtmlRichText_NoRegister()
	{
		return UUMGHtmlRichText::StaticClass();
	}
	struct Z_Construct_UClass_UUMGHtmlRichText_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGHtmlRichText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGHtmlRichText_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGHtmlRichText_SetHtmlText, "SetHtmlText" }, // 3189861472
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHtmlRichText_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGHtmlRichText.h" },
		{ "ModuleRelativePath", "Public/UMGHtmlRichText.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGHtmlRichText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGHtmlRichText>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGHtmlRichText_Statics::ClassParams = {
		&UUMGHtmlRichText::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGHtmlRichText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHtmlRichText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGHtmlRichText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGHtmlRichText_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGHtmlRichText, 2290654257);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGHtmlRichText>()
	{
		return UUMGHtmlRichText::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGHtmlRichText(Z_Construct_UClass_UUMGHtmlRichText, &UUMGHtmlRichText::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGHtmlRichText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGHtmlRichText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
