// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TimerGateDecrease.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerGateDecrease() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATimerGateDecrease_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATimerGateDecrease();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATimerGate_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATimerGateDecrease::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_deltaTime);
		P_NATIVE_END;
	}
	void ATimerGateDecrease::StaticRegisterNativesATimerGateDecrease()
	{
		UClass* Class = ATimerGateDecrease::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Update", &ATimerGateDecrease::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATimerGateDecrease_Update_Statics
	{
		struct TimerGateDecrease_eventUpdate_Parms
		{
			float deltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimerGateDecrease_Update_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimerGateDecrease_eventUpdate_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimerGateDecrease_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimerGateDecrease_Update_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimerGateDecrease_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerGateDecrease.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimerGateDecrease_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimerGateDecrease, nullptr, "Update", nullptr, nullptr, sizeof(TimerGateDecrease_eventUpdate_Parms), Z_Construct_UFunction_ATimerGateDecrease_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerGateDecrease_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimerGateDecrease_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerGateDecrease_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimerGateDecrease_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimerGateDecrease_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATimerGateDecrease_NoRegister()
	{
		return ATimerGateDecrease::StaticClass();
	}
	struct Z_Construct_UClass_ATimerGateDecrease_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerGate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimerGate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimerGateDecrease_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATimerGateDecrease_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATimerGateDecrease_Update, "Update" }, // 917820026
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerGateDecrease_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimerGateDecrease.h" },
		{ "ModuleRelativePath", "Public/TimerGateDecrease.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerGateDecrease_Statics::NewProp_TimerGate_MetaData[] = {
		{ "Category", "TimerGateDecrease" },
		{ "ModuleRelativePath", "Public/TimerGateDecrease.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimerGateDecrease_Statics::NewProp_TimerGate = { "TimerGate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATimerGateDecrease, TimerGate), Z_Construct_UClass_ATimerGate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATimerGateDecrease_Statics::NewProp_TimerGate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerGateDecrease_Statics::NewProp_TimerGate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimerGateDecrease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimerGateDecrease_Statics::NewProp_TimerGate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimerGateDecrease_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimerGateDecrease>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATimerGateDecrease_Statics::ClassParams = {
		&ATimerGateDecrease::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATimerGateDecrease_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATimerGateDecrease_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATimerGateDecrease_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerGateDecrease_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimerGateDecrease()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATimerGateDecrease_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimerGateDecrease, 133604719);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ATimerGateDecrease>()
	{
		return ATimerGateDecrease::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimerGateDecrease(Z_Construct_UClass_ATimerGateDecrease, &ATimerGateDecrease::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ATimerGateDecrease"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimerGateDecrease);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
