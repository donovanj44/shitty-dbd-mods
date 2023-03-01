// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/IsTwinRecallReady.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsTwinRecallReady() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UIsTwinRecallReady_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UIsTwinRecallReady();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	DEFINE_FUNCTION(UIsTwinRecallReady::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UIsTwinRecallReady::StaticRegisterNativesUIsTwinRecallReady()
	{
		UClass* Class = UIsTwinRecallReady::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelReadyToPlay", &UIsTwinRecallReady::execOnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIsTwinRecallReady_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsTwinRecallReady_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IsTwinRecallReady.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsTwinRecallReady_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsTwinRecallReady, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsTwinRecallReady_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsTwinRecallReady_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsTwinRecallReady_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsTwinRecallReady_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIsTwinRecallReady_NoRegister()
	{
		return UIsTwinRecallReady::StaticClass();
	}
	struct Z_Construct_UClass_UIsTwinRecallReady_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsTwinRecallReady_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIsTwinRecallReady_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsTwinRecallReady_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 3608829856
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsTwinRecallReady_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsTwinRecallReady.h" },
		{ "ModuleRelativePath", "Public/IsTwinRecallReady.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsTwinRecallReady_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsTwinRecallReady>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsTwinRecallReady_Statics::ClassParams = {
		&UIsTwinRecallReady::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIsTwinRecallReady_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsTwinRecallReady_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsTwinRecallReady()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsTwinRecallReady_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsTwinRecallReady, 3831349838);
	template<> THETWINS_API UClass* StaticClass<UIsTwinRecallReady>()
	{
		return UIsTwinRecallReady::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsTwinRecallReady(Z_Construct_UClass_UIsTwinRecallReady, &UIsTwinRecallReady::StaticClass, TEXT("/Script/TheTwins"), TEXT("UIsTwinRecallReady"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsTwinRecallReady);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
