// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AIHealAllyBehaviourData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIHealAllyBehaviourData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIHealAllyBehaviourData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAIHealAllyBehaviourData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAIHealAllyBehaviourData::execInit)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_allyToHealTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_allyToHealTarget);
		P_NATIVE_END;
	}
	void UAIHealAllyBehaviourData::StaticRegisterNativesUAIHealAllyBehaviourData()
	{
		UClass* Class = UAIHealAllyBehaviourData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UAIHealAllyBehaviourData::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIHealAllyBehaviourData_Init_Statics
	{
		struct AIHealAllyBehaviourData_eventInit_Parms
		{
			ACamperPlayer* allyToHealTarget;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_allyToHealTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIHealAllyBehaviourData_Init_Statics::NewProp_allyToHealTarget = { "allyToHealTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIHealAllyBehaviourData_eventInit_Parms, allyToHealTarget), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIHealAllyBehaviourData_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIHealAllyBehaviourData_Init_Statics::NewProp_allyToHealTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIHealAllyBehaviourData_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIHealAllyBehaviourData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIHealAllyBehaviourData_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIHealAllyBehaviourData, nullptr, "Init", nullptr, nullptr, sizeof(AIHealAllyBehaviourData_eventInit_Parms), Z_Construct_UFunction_UAIHealAllyBehaviourData_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIHealAllyBehaviourData_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIHealAllyBehaviourData_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIHealAllyBehaviourData_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIHealAllyBehaviourData_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIHealAllyBehaviourData_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIHealAllyBehaviourData_NoRegister()
	{
		return UAIHealAllyBehaviourData::StaticClass();
	}
	struct Z_Construct_UClass_UAIHealAllyBehaviourData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetAlly_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetAlly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIHealAllyBehaviourData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviourData,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIHealAllyBehaviourData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIHealAllyBehaviourData_Init, "Init" }, // 3649217112
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIHealAllyBehaviourData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AIHealAllyBehaviourData.h" },
		{ "ModuleRelativePath", "Public/AIHealAllyBehaviourData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIHealAllyBehaviourData_Statics::NewProp__targetAlly_MetaData[] = {
		{ "Category", "AIHealAllyBehaviourData" },
		{ "ModuleRelativePath", "Public/AIHealAllyBehaviourData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIHealAllyBehaviourData_Statics::NewProp__targetAlly = { "_targetAlly", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIHealAllyBehaviourData, _targetAlly), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIHealAllyBehaviourData_Statics::NewProp__targetAlly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIHealAllyBehaviourData_Statics::NewProp__targetAlly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIHealAllyBehaviourData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIHealAllyBehaviourData_Statics::NewProp__targetAlly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIHealAllyBehaviourData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIHealAllyBehaviourData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIHealAllyBehaviourData_Statics::ClassParams = {
		&UAIHealAllyBehaviourData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIHealAllyBehaviourData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIHealAllyBehaviourData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIHealAllyBehaviourData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIHealAllyBehaviourData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIHealAllyBehaviourData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIHealAllyBehaviourData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIHealAllyBehaviourData, 623103790);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAIHealAllyBehaviourData>()
	{
		return UAIHealAllyBehaviourData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIHealAllyBehaviourData(Z_Construct_UClass_UAIHealAllyBehaviourData, &UAIHealAllyBehaviourData::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAIHealAllyBehaviourData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIHealAllyBehaviourData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
