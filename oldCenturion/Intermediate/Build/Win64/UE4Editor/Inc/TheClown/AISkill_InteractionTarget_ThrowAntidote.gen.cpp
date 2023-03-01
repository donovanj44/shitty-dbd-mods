// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheClown/Public/AISkill_InteractionTarget_ThrowAntidote.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_InteractionTarget_ThrowAntidote() {}
// Cross Module References
	THECLOWN_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_NoRegister();
	THECLOWN_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_Throw();
	UPackage* Z_Construct_UPackage__Script_TheClown();
// End Cross Module References
	DEFINE_FUNCTION(UAISkill_InteractionTarget_ThrowAntidote::execOnPathUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPathUpdated();
		P_NATIVE_END;
	}
	void UAISkill_InteractionTarget_ThrowAntidote::StaticRegisterNativesUAISkill_InteractionTarget_ThrowAntidote()
	{
		UClass* Class = UAISkill_InteractionTarget_ThrowAntidote::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPathUpdated", &UAISkill_InteractionTarget_ThrowAntidote::execOnPathUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAISkill_InteractionTarget_ThrowAntidote_OnPathUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISkill_InteractionTarget_ThrowAntidote_OnPathUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_ThrowAntidote.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISkill_InteractionTarget_ThrowAntidote_OnPathUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote, nullptr, "OnPathUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISkill_InteractionTarget_ThrowAntidote_OnPathUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISkill_InteractionTarget_ThrowAntidote_OnPathUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISkill_InteractionTarget_ThrowAntidote_OnPathUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISkill_InteractionTarget_ThrowAntidote_OnPathUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_NoRegister()
	{
		return UAISkill_InteractionTarget_ThrowAntidote::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minThrowDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minThrowDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minPathLengthForThrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minPathLengthForThrow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_InteractionTarget_Throw,
		(UObject* (*)())Z_Construct_UPackage__Script_TheClown,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISkill_InteractionTarget_ThrowAntidote_OnPathUpdated, "OnPathUpdated" }, // 3582333723
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AISkill_InteractionTarget_ThrowAntidote.h" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_ThrowAntidote.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::NewProp__cooldownTime_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget_ThrowAntidote" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_ThrowAntidote.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::NewProp__cooldownTime = { "_cooldownTime", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget_ThrowAntidote, _cooldownTime), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::NewProp__cooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::NewProp__cooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::NewProp__minThrowDistance_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget_ThrowAntidote" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_ThrowAntidote.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::NewProp__minThrowDistance = { "_minThrowDistance", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget_ThrowAntidote, _minThrowDistance), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::NewProp__minThrowDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::NewProp__minThrowDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::NewProp__minPathLengthForThrow_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget_ThrowAntidote" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_ThrowAntidote.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::NewProp__minPathLengthForThrow = { "_minPathLengthForThrow", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget_ThrowAntidote, _minPathLengthForThrow), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::NewProp__minPathLengthForThrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::NewProp__minPathLengthForThrow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::NewProp__cooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::NewProp__minThrowDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::NewProp__minPathLengthForThrow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_InteractionTarget_ThrowAntidote>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::ClassParams = {
		&UAISkill_InteractionTarget_ThrowAntidote::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_InteractionTarget_ThrowAntidote, 3013577927);
	template<> THECLOWN_API UClass* StaticClass<UAISkill_InteractionTarget_ThrowAntidote>()
	{
		return UAISkill_InteractionTarget_ThrowAntidote::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_InteractionTarget_ThrowAntidote(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowAntidote, &UAISkill_InteractionTarget_ThrowAntidote::StaticClass, TEXT("/Script/TheClown"), TEXT("UAISkill_InteractionTarget_ThrowAntidote"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_InteractionTarget_ThrowAntidote);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
