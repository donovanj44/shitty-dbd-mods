// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QueryService/Public/ActorPairQueryEvaluatorSubscriberTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorPairQueryEvaluatorSubscriberTest() {}
// Cross Module References
	QUERYSERVICE_API UClass* Z_Construct_UClass_AActorPairQueryEvaluatorSubscriberTest_NoRegister();
	QUERYSERVICE_API UClass* Z_Construct_UClass_AActorPairQueryEvaluatorSubscriberTest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_QueryService();
// End Cross Module References
	DEFINE_FUNCTION(AActorPairQueryEvaluatorSubscriberTest::execOnRangeChanged)
	{
		P_GET_UBOOL(Z_Param_inRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRangeChanged(Z_Param_inRange);
		P_NATIVE_END;
	}
	void AActorPairQueryEvaluatorSubscriberTest::StaticRegisterNativesAActorPairQueryEvaluatorSubscriberTest()
	{
		UClass* Class = AActorPairQueryEvaluatorSubscriberTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRangeChanged", &AActorPairQueryEvaluatorSubscriberTest::execOnRangeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Statics
	{
		struct ActorPairQueryEvaluatorSubscriberTest_eventOnRangeChanged_Parms
		{
			bool inRange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRange_MetaData[];
#endif
		static void NewProp_inRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Statics::NewProp_inRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Statics::NewProp_inRange_SetBit(void* Obj)
	{
		((ActorPairQueryEvaluatorSubscriberTest_eventOnRangeChanged_Parms*)Obj)->inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Statics::NewProp_inRange = { "inRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorPairQueryEvaluatorSubscriberTest_eventOnRangeChanged_Parms), &Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Statics::NewProp_inRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Statics::NewProp_inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Statics::NewProp_inRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Statics::NewProp_inRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorPairQueryEvaluatorSubscriberTest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActorPairQueryEvaluatorSubscriberTest, nullptr, "OnRangeChanged", nullptr, nullptr, sizeof(ActorPairQueryEvaluatorSubscriberTest_eventOnRangeChanged_Parms), Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AActorPairQueryEvaluatorSubscriberTest_NoRegister()
	{
		return AActorPairQueryEvaluatorSubscriberTest::StaticClass();
	}
	struct Z_Construct_UClass_AActorPairQueryEvaluatorSubscriberTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorPairQueryEvaluatorSubscriberTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_QueryService,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AActorPairQueryEvaluatorSubscriberTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged, "OnRangeChanged" }, // 530951894
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorPairQueryEvaluatorSubscriberTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorPairQueryEvaluatorSubscriberTest.h" },
		{ "ModuleRelativePath", "Public/ActorPairQueryEvaluatorSubscriberTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorPairQueryEvaluatorSubscriberTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorPairQueryEvaluatorSubscriberTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActorPairQueryEvaluatorSubscriberTest_Statics::ClassParams = {
		&AActorPairQueryEvaluatorSubscriberTest::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActorPairQueryEvaluatorSubscriberTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActorPairQueryEvaluatorSubscriberTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorPairQueryEvaluatorSubscriberTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActorPairQueryEvaluatorSubscriberTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActorPairQueryEvaluatorSubscriberTest, 2350662942);
	template<> QUERYSERVICE_API UClass* StaticClass<AActorPairQueryEvaluatorSubscriberTest>()
	{
		return AActorPairQueryEvaluatorSubscriberTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActorPairQueryEvaluatorSubscriberTest(Z_Construct_UClass_AActorPairQueryEvaluatorSubscriberTest, &AActorPairQueryEvaluatorSubscriberTest::StaticClass, TEXT("/Script/QueryService"), TEXT("AActorPairQueryEvaluatorSubscriberTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorPairQueryEvaluatorSubscriberTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
