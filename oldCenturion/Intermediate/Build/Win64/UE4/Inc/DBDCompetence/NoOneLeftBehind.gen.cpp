// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/NoOneLeftBehind.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoOneLeftBehind() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UNoOneLeftBehind_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UNoOneLeftBehind();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	DEFINE_FUNCTION(UNoOneLeftBehind::execGetSpeedBoostEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpeedBoostEffect();
		P_NATIVE_END;
	}
	void UNoOneLeftBehind::StaticRegisterNativesUNoOneLeftBehind()
	{
		UClass* Class = UNoOneLeftBehind::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpeedBoostEffect", &UNoOneLeftBehind::execGetSpeedBoostEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNoOneLeftBehind_GetSpeedBoostEffect_Statics
	{
		struct NoOneLeftBehind_eventGetSpeedBoostEffect_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNoOneLeftBehind_GetSpeedBoostEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoOneLeftBehind_eventGetSpeedBoostEffect_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNoOneLeftBehind_GetSpeedBoostEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoOneLeftBehind_GetSpeedBoostEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNoOneLeftBehind_GetSpeedBoostEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NoOneLeftBehind.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNoOneLeftBehind_GetSpeedBoostEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNoOneLeftBehind, nullptr, "GetSpeedBoostEffect", nullptr, nullptr, sizeof(NoOneLeftBehind_eventGetSpeedBoostEffect_Parms), Z_Construct_UFunction_UNoOneLeftBehind_GetSpeedBoostEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoOneLeftBehind_GetSpeedBoostEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNoOneLeftBehind_GetSpeedBoostEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoOneLeftBehind_GetSpeedBoostEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNoOneLeftBehind_GetSpeedBoostEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNoOneLeftBehind_GetSpeedBoostEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNoOneLeftBehind_NoRegister()
	{
		return UNoOneLeftBehind::StaticClass();
	}
	struct Z_Construct_UClass_UNoOneLeftBehind_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__speedBoostEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__speedBoostEffect;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__speedBoostEffect_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoOneLeftBehind_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNoOneLeftBehind_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNoOneLeftBehind_GetSpeedBoostEffect, "GetSpeedBoostEffect" }, // 166288354
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoOneLeftBehind_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NoOneLeftBehind.h" },
		{ "ModuleRelativePath", "Public/NoOneLeftBehind.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoOneLeftBehind_Statics::NewProp__speedBoostEffect_MetaData[] = {
		{ "Category", "NoOneLeftBehind" },
		{ "ModuleRelativePath", "Public/NoOneLeftBehind.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNoOneLeftBehind_Statics::NewProp__speedBoostEffect = { "_speedBoostEffect", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoOneLeftBehind, _speedBoostEffect), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNoOneLeftBehind_Statics::NewProp__speedBoostEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoOneLeftBehind_Statics::NewProp__speedBoostEffect_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNoOneLeftBehind_Statics::NewProp__speedBoostEffect_Inner = { "_speedBoostEffect", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNoOneLeftBehind_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoOneLeftBehind_Statics::NewProp__speedBoostEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoOneLeftBehind_Statics::NewProp__speedBoostEffect_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoOneLeftBehind_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoOneLeftBehind>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNoOneLeftBehind_Statics::ClassParams = {
		&UNoOneLeftBehind::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNoOneLeftBehind_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNoOneLeftBehind_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNoOneLeftBehind_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNoOneLeftBehind_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoOneLeftBehind()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNoOneLeftBehind_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNoOneLeftBehind, 1537574960);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UNoOneLeftBehind>()
	{
		return UNoOneLeftBehind::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNoOneLeftBehind(Z_Construct_UClass_UNoOneLeftBehind, &UNoOneLeftBehind::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UNoOneLeftBehind"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoOneLeftBehind);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
