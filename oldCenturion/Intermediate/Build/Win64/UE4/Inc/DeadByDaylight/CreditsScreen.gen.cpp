// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CreditsScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreditsScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCreditsScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCreditsScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UCreditsScreen::execScrollCreditsScreen)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scrollAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScrollCreditsScreen(Z_Param_scrollAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCreditsScreen::execSetCreditsHtml)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CreditsHtml);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCreditsHtml(Z_Param_CreditsHtml);
		P_NATIVE_END;
	}
	void UCreditsScreen::StaticRegisterNativesUCreditsScreen()
	{
		UClass* Class = UCreditsScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ScrollCreditsScreen", &UCreditsScreen::execScrollCreditsScreen },
			{ "SetCreditsHtml", &UCreditsScreen::execSetCreditsHtml },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCreditsScreen_ScrollCreditsScreen_Statics
	{
		struct CreditsScreen_eventScrollCreditsScreen_Parms
		{
			float scrollAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scrollAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCreditsScreen_ScrollCreditsScreen_Statics::NewProp_scrollAmount = { "scrollAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreditsScreen_eventScrollCreditsScreen_Parms, scrollAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreditsScreen_ScrollCreditsScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreditsScreen_ScrollCreditsScreen_Statics::NewProp_scrollAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreditsScreen_ScrollCreditsScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreditsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreditsScreen_ScrollCreditsScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreditsScreen, nullptr, "ScrollCreditsScreen", nullptr, nullptr, sizeof(CreditsScreen_eventScrollCreditsScreen_Parms), Z_Construct_UFunction_UCreditsScreen_ScrollCreditsScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditsScreen_ScrollCreditsScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreditsScreen_ScrollCreditsScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditsScreen_ScrollCreditsScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreditsScreen_ScrollCreditsScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreditsScreen_ScrollCreditsScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCreditsScreen_SetCreditsHtml_Statics
	{
		struct CreditsScreen_eventSetCreditsHtml_Parms
		{
			FString CreditsHtml;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreditsHtml_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CreditsHtml;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreditsScreen_SetCreditsHtml_Statics::NewProp_CreditsHtml_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreditsScreen_SetCreditsHtml_Statics::NewProp_CreditsHtml = { "CreditsHtml", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreditsScreen_eventSetCreditsHtml_Parms, CreditsHtml), METADATA_PARAMS(Z_Construct_UFunction_UCreditsScreen_SetCreditsHtml_Statics::NewProp_CreditsHtml_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditsScreen_SetCreditsHtml_Statics::NewProp_CreditsHtml_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreditsScreen_SetCreditsHtml_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreditsScreen_SetCreditsHtml_Statics::NewProp_CreditsHtml,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreditsScreen_SetCreditsHtml_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreditsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreditsScreen_SetCreditsHtml_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreditsScreen, nullptr, "SetCreditsHtml", nullptr, nullptr, sizeof(CreditsScreen_eventSetCreditsHtml_Parms), Z_Construct_UFunction_UCreditsScreen_SetCreditsHtml_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditsScreen_SetCreditsHtml_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreditsScreen_SetCreditsHtml_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditsScreen_SetCreditsHtml_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreditsScreen_SetCreditsHtml()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreditsScreen_SetCreditsHtml_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCreditsScreen_NoRegister()
	{
		return UCreditsScreen::StaticClass();
	}
	struct Z_Construct_UClass_UCreditsScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreditsScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCreditsScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreditsScreen_ScrollCreditsScreen, "ScrollCreditsScreen" }, // 3245011038
		{ &Z_Construct_UFunction_UCreditsScreen_SetCreditsHtml, "SetCreditsHtml" }, // 2364325897
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreditsScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreditsScreen.h" },
		{ "ModuleRelativePath", "Public/CreditsScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreditsScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreditsScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCreditsScreen_Statics::ClassParams = {
		&UCreditsScreen::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCreditsScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreditsScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreditsScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCreditsScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCreditsScreen, 1150725813);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCreditsScreen>()
	{
		return UCreditsScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCreditsScreen(Z_Construct_UClass_UCreditsScreen, &UCreditsScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCreditsScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreditsScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
