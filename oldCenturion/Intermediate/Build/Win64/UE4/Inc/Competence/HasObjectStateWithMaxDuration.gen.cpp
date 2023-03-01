// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/HasObjectStateWithMaxDuration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHasObjectStateWithMaxDuration() {}
// Cross Module References
	COMPETENCE_API UClass* Z_Construct_UClass_UHasObjectStateWithMaxDuration_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UHasObjectStateWithMaxDuration();
	COMPETENCE_API UClass* Z_Construct_UClass_UHasObjectState();
	UPackage* Z_Construct_UPackage__Script_Competence();
// End Cross Module References
	DEFINE_FUNCTION(UHasObjectStateWithMaxDuration::execSetMaxDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxDuration(Z_Param_duration);
		P_NATIVE_END;
	}
	void UHasObjectStateWithMaxDuration::StaticRegisterNativesUHasObjectStateWithMaxDuration()
	{
		UClass* Class = UHasObjectStateWithMaxDuration::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMaxDuration", &UHasObjectStateWithMaxDuration::execSetMaxDuration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHasObjectStateWithMaxDuration_SetMaxDuration_Statics
	{
		struct HasObjectStateWithMaxDuration_eventSetMaxDuration_Parms
		{
			float duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHasObjectStateWithMaxDuration_SetMaxDuration_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HasObjectStateWithMaxDuration_eventSetMaxDuration_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHasObjectStateWithMaxDuration_SetMaxDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHasObjectStateWithMaxDuration_SetMaxDuration_Statics::NewProp_duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHasObjectStateWithMaxDuration_SetMaxDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HasObjectStateWithMaxDuration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHasObjectStateWithMaxDuration_SetMaxDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHasObjectStateWithMaxDuration, nullptr, "SetMaxDuration", nullptr, nullptr, sizeof(HasObjectStateWithMaxDuration_eventSetMaxDuration_Parms), Z_Construct_UFunction_UHasObjectStateWithMaxDuration_SetMaxDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHasObjectStateWithMaxDuration_SetMaxDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHasObjectStateWithMaxDuration_SetMaxDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHasObjectStateWithMaxDuration_SetMaxDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHasObjectStateWithMaxDuration_SetMaxDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHasObjectStateWithMaxDuration_SetMaxDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHasObjectStateWithMaxDuration_NoRegister()
	{
		return UHasObjectStateWithMaxDuration::StaticClass();
	}
	struct Z_Construct_UClass_UHasObjectStateWithMaxDuration_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHasObjectStateWithMaxDuration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHasObjectState,
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHasObjectStateWithMaxDuration_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHasObjectStateWithMaxDuration_SetMaxDuration, "SetMaxDuration" }, // 1478940578
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasObjectStateWithMaxDuration_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HasObjectStateWithMaxDuration.h" },
		{ "ModuleRelativePath", "Public/HasObjectStateWithMaxDuration.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasObjectStateWithMaxDuration_Statics::NewProp__maxDuration_MetaData[] = {
		{ "Category", "HasObjectStateWithMaxDuration" },
		{ "ModuleRelativePath", "Public/HasObjectStateWithMaxDuration.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHasObjectStateWithMaxDuration_Statics::NewProp__maxDuration = { "_maxDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHasObjectStateWithMaxDuration, _maxDuration), METADATA_PARAMS(Z_Construct_UClass_UHasObjectStateWithMaxDuration_Statics::NewProp__maxDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHasObjectStateWithMaxDuration_Statics::NewProp__maxDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHasObjectStateWithMaxDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHasObjectStateWithMaxDuration_Statics::NewProp__maxDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHasObjectStateWithMaxDuration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHasObjectStateWithMaxDuration>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHasObjectStateWithMaxDuration_Statics::ClassParams = {
		&UHasObjectStateWithMaxDuration::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHasObjectStateWithMaxDuration_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHasObjectStateWithMaxDuration_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHasObjectStateWithMaxDuration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHasObjectStateWithMaxDuration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHasObjectStateWithMaxDuration()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHasObjectStateWithMaxDuration_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHasObjectStateWithMaxDuration, 736755086);
	template<> COMPETENCE_API UClass* StaticClass<UHasObjectStateWithMaxDuration>()
	{
		return UHasObjectStateWithMaxDuration::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHasObjectStateWithMaxDuration(Z_Construct_UClass_UHasObjectStateWithMaxDuration, &UHasObjectStateWithMaxDuration::StaticClass, TEXT("/Script/Competence"), TEXT("UHasObjectStateWithMaxDuration"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHasObjectStateWithMaxDuration);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
