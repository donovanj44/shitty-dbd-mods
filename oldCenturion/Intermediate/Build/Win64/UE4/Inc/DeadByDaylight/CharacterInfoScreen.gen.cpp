// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterInfoScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterInfoScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterInfoScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterInfoScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterInfoScreen::execOnBackButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackButtonClick();
		P_NATIVE_END;
	}
	void UCharacterInfoScreen::StaticRegisterNativesUCharacterInfoScreen()
	{
		UClass* Class = UCharacterInfoScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBackButtonClick", &UCharacterInfoScreen::execOnBackButtonClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterInfoScreen_OnBackButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInfoScreen_OnBackButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInfoScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInfoScreen_OnBackButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInfoScreen, nullptr, "OnBackButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInfoScreen_OnBackButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInfoScreen_OnBackButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInfoScreen_OnBackButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInfoScreen_OnBackButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterInfoScreen_NoRegister()
	{
		return UCharacterInfoScreen::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterInfoScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterInfoScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterInfoScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterInfoScreen_OnBackButtonClick, "OnBackButtonClick" }, // 3228253411
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterInfoScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterInfoScreen.h" },
		{ "ModuleRelativePath", "Public/CharacterInfoScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterInfoScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterInfoScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterInfoScreen_Statics::ClassParams = {
		&UCharacterInfoScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCharacterInfoScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterInfoScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterInfoScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterInfoScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterInfoScreen, 732240926);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCharacterInfoScreen>()
	{
		return UCharacterInfoScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterInfoScreen(Z_Construct_UClass_UCharacterInfoScreen, &UCharacterInfoScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCharacterInfoScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterInfoScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
