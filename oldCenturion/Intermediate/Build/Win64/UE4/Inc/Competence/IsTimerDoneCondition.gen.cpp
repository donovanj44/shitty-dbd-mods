// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/IsTimerDoneCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsTimerDoneCondition() {}
// Cross Module References
	COMPETENCE_API UClass* Z_Construct_UClass_UIsTimerDoneCondition_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UIsTimerDoneCondition();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_Competence();
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UTimerObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UIsTimerDoneCondition::execOnRep_Timer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Timer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIsTimerDoneCondition::execSetTimer)
	{
		P_GET_OBJECT(UTimerObject,Z_Param_timer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimer(Z_Param_timer);
		P_NATIVE_END;
	}
	void UIsTimerDoneCondition::StaticRegisterNativesUIsTimerDoneCondition()
	{
		UClass* Class = UIsTimerDoneCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Timer", &UIsTimerDoneCondition::execOnRep_Timer },
			{ "SetTimer", &UIsTimerDoneCondition::execSetTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIsTimerDoneCondition_OnRep_Timer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsTimerDoneCondition_OnRep_Timer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IsTimerDoneCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsTimerDoneCondition_OnRep_Timer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsTimerDoneCondition, nullptr, "OnRep_Timer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsTimerDoneCondition_OnRep_Timer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsTimerDoneCondition_OnRep_Timer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsTimerDoneCondition_OnRep_Timer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsTimerDoneCondition_OnRep_Timer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIsTimerDoneCondition_SetTimer_Statics
	{
		struct IsTimerDoneCondition_eventSetTimer_Parms
		{
			UTimerObject* timer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsTimerDoneCondition_SetTimer_Statics::NewProp_timer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsTimerDoneCondition_SetTimer_Statics::NewProp_timer = { "timer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsTimerDoneCondition_eventSetTimer_Parms, timer), Z_Construct_UClass_UTimerObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIsTimerDoneCondition_SetTimer_Statics::NewProp_timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsTimerDoneCondition_SetTimer_Statics::NewProp_timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsTimerDoneCondition_SetTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsTimerDoneCondition_SetTimer_Statics::NewProp_timer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsTimerDoneCondition_SetTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IsTimerDoneCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsTimerDoneCondition_SetTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsTimerDoneCondition, nullptr, "SetTimer", nullptr, nullptr, sizeof(IsTimerDoneCondition_eventSetTimer_Parms), Z_Construct_UFunction_UIsTimerDoneCondition_SetTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsTimerDoneCondition_SetTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsTimerDoneCondition_SetTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsTimerDoneCondition_SetTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsTimerDoneCondition_SetTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsTimerDoneCondition_SetTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIsTimerDoneCondition_NoRegister()
	{
		return UIsTimerDoneCondition::StaticClass();
	}
	struct Z_Construct_UClass_UIsTimerDoneCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsTimerDoneCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIsTimerDoneCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsTimerDoneCondition_OnRep_Timer, "OnRep_Timer" }, // 4096412035
		{ &Z_Construct_UFunction_UIsTimerDoneCondition_SetTimer, "SetTimer" }, // 683441261
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsTimerDoneCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsTimerDoneCondition.h" },
		{ "ModuleRelativePath", "Public/IsTimerDoneCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsTimerDoneCondition_Statics::NewProp__timer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsTimerDoneCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsTimerDoneCondition_Statics::NewProp__timer = { "_timer", "OnRep_Timer", (EPropertyFlags)0x0040000100082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsTimerDoneCondition, _timer), Z_Construct_UClass_UTimerObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIsTimerDoneCondition_Statics::NewProp__timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsTimerDoneCondition_Statics::NewProp__timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsTimerDoneCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsTimerDoneCondition_Statics::NewProp__timer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsTimerDoneCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsTimerDoneCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsTimerDoneCondition_Statics::ClassParams = {
		&UIsTimerDoneCondition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIsTimerDoneCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIsTimerDoneCondition_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIsTimerDoneCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsTimerDoneCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsTimerDoneCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsTimerDoneCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsTimerDoneCondition, 2155081299);
	template<> COMPETENCE_API UClass* StaticClass<UIsTimerDoneCondition>()
	{
		return UIsTimerDoneCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsTimerDoneCondition(Z_Construct_UClass_UIsTimerDoneCondition, &UIsTimerDoneCondition::StaticClass, TEXT("/Script/Competence"), TEXT("UIsTimerDoneCondition"), false, nullptr, nullptr, nullptr);

	void UIsTimerDoneCondition::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__timer(TEXT("_timer"));

		const bool bIsValid = true
			&& Name__timer == ClassReps[(int32)ENetFields_Private::_timer].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UIsTimerDoneCondition"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsTimerDoneCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
