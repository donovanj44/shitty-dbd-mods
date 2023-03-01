// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LegalMenuScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegalMenuScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULegalMenuScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULegalMenuScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(ULegalMenuScreen::execOnAcceptClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAcceptClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULegalMenuScreen::execOnDeclineClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeclineClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULegalMenuScreen::execOnOkClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOkClick();
		P_NATIVE_END;
	}
	void ULegalMenuScreen::StaticRegisterNativesULegalMenuScreen()
	{
		UClass* Class = ULegalMenuScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAcceptClick", &ULegalMenuScreen::execOnAcceptClick },
			{ "OnDeclineClick", &ULegalMenuScreen::execOnDeclineClick },
			{ "OnOkClick", &ULegalMenuScreen::execOnOkClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULegalMenuScreen_OnAcceptClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegalMenuScreen_OnAcceptClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LegalMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULegalMenuScreen_OnAcceptClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULegalMenuScreen, nullptr, "OnAcceptClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULegalMenuScreen_OnAcceptClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegalMenuScreen_OnAcceptClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULegalMenuScreen_OnAcceptClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULegalMenuScreen_OnAcceptClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULegalMenuScreen_OnDeclineClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegalMenuScreen_OnDeclineClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LegalMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULegalMenuScreen_OnDeclineClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULegalMenuScreen, nullptr, "OnDeclineClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULegalMenuScreen_OnDeclineClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegalMenuScreen_OnDeclineClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULegalMenuScreen_OnDeclineClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULegalMenuScreen_OnDeclineClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULegalMenuScreen_OnOkClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegalMenuScreen_OnOkClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LegalMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULegalMenuScreen_OnOkClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULegalMenuScreen, nullptr, "OnOkClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULegalMenuScreen_OnOkClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegalMenuScreen_OnOkClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULegalMenuScreen_OnOkClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULegalMenuScreen_OnOkClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULegalMenuScreen_NoRegister()
	{
		return ULegalMenuScreen::StaticClass();
	}
	struct Z_Construct_UClass_ULegalMenuScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegalMenuScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULegalMenuScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULegalMenuScreen_OnAcceptClick, "OnAcceptClick" }, // 1579212805
		{ &Z_Construct_UFunction_ULegalMenuScreen_OnDeclineClick, "OnDeclineClick" }, // 2635945035
		{ &Z_Construct_UFunction_ULegalMenuScreen_OnOkClick, "OnOkClick" }, // 650532412
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegalMenuScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LegalMenuScreen.h" },
		{ "ModuleRelativePath", "Public/LegalMenuScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegalMenuScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULegalMenuScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULegalMenuScreen_Statics::ClassParams = {
		&ULegalMenuScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULegalMenuScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULegalMenuScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegalMenuScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULegalMenuScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULegalMenuScreen, 349179499);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULegalMenuScreen>()
	{
		return ULegalMenuScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULegalMenuScreen(Z_Construct_UClass_ULegalMenuScreen, &ULegalMenuScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULegalMenuScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegalMenuScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
