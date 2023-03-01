// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/BloodOrbOverlapRevealToKiller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodOrbOverlapRevealToKiller() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbOverlapRevealToKiller();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UTimerObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBloodOrbOverlapRevealToKiller::execGetRevealTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTimerObject**)Z_Param__Result=P_THIS->GetRevealTimer();
		P_NATIVE_END;
	}
	void UBloodOrbOverlapRevealToKiller::StaticRegisterNativesUBloodOrbOverlapRevealToKiller()
	{
		UClass* Class = UBloodOrbOverlapRevealToKiller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRevealTimer", &UBloodOrbOverlapRevealToKiller::execGetRevealTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBloodOrbOverlapRevealToKiller_GetRevealTimer_Statics
	{
		struct BloodOrbOverlapRevealToKiller_eventGetRevealTimer_Parms
		{
			UTimerObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbOverlapRevealToKiller_GetRevealTimer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbOverlapRevealToKiller_GetRevealTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbOverlapRevealToKiller_eventGetRevealTimer_Parms, ReturnValue), Z_Construct_UClass_UTimerObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbOverlapRevealToKiller_GetRevealTimer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapRevealToKiller_GetRevealTimer_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbOverlapRevealToKiller_GetRevealTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbOverlapRevealToKiller_GetRevealTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbOverlapRevealToKiller_GetRevealTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbOverlapRevealToKiller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbOverlapRevealToKiller_GetRevealTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbOverlapRevealToKiller, nullptr, "GetRevealTimer", nullptr, nullptr, sizeof(BloodOrbOverlapRevealToKiller_eventGetRevealTimer_Parms), Z_Construct_UFunction_UBloodOrbOverlapRevealToKiller_GetRevealTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapRevealToKiller_GetRevealTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbOverlapRevealToKiller_GetRevealTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbOverlapRevealToKiller_GetRevealTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbOverlapRevealToKiller_GetRevealTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbOverlapRevealToKiller_GetRevealTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_NoRegister()
	{
		return UBloodOrbOverlapRevealToKiller::StaticClass();
	}
	struct Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__revealTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBloodOrbOverlapRevealToKiller_GetRevealTimer, "GetRevealTimer" }, // 2053707293
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodOrbOverlapRevealToKiller.h" },
		{ "ModuleRelativePath", "Public/BloodOrbOverlapRevealToKiller.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_Statics::NewProp__revealTimer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloodOrbOverlapRevealToKiller.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_Statics::NewProp__revealTimer = { "_revealTimer", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodOrbOverlapRevealToKiller, _revealTimer), Z_Construct_UClass_UTimerObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_Statics::NewProp__revealTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_Statics::NewProp__revealTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_Statics::NewProp__revealTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodOrbOverlapRevealToKiller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_Statics::ClassParams = {
		&UBloodOrbOverlapRevealToKiller::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodOrbOverlapRevealToKiller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodOrbOverlapRevealToKiller, 754378922);
	template<> THEONI_API UClass* StaticClass<UBloodOrbOverlapRevealToKiller>()
	{
		return UBloodOrbOverlapRevealToKiller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodOrbOverlapRevealToKiller(Z_Construct_UClass_UBloodOrbOverlapRevealToKiller, &UBloodOrbOverlapRevealToKiller::StaticClass, TEXT("/Script/TheOni"), TEXT("UBloodOrbOverlapRevealToKiller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodOrbOverlapRevealToKiller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
