// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RitualEvaluatorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRitualEvaluatorBase() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URitualEvaluatorBase_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URitualEvaluatorBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRitualEvent();
// End Cross Module References
	DEFINE_FUNCTION(URitualEvaluatorBase::execEvaluateEvent)
	{
		P_GET_STRUCT_REF(FRitualEvent,Z_Param_Out_ritualEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EvaluateEvent_Implementation(Z_Param_Out_ritualEvent);
		P_NATIVE_END;
	}
	static FName NAME_URitualEvaluatorBase_EvaluateEvent = FName(TEXT("EvaluateEvent"));
	bool URitualEvaluatorBase::EvaluateEvent(FRitualEvent const& ritualEvent)
	{
		RitualEvaluatorBase_eventEvaluateEvent_Parms Parms;
		Parms.ritualEvent=ritualEvent;
		ProcessEvent(FindFunctionChecked(NAME_URitualEvaluatorBase_EvaluateEvent),&Parms);
		return !!Parms.ReturnValue;
	}
	void URitualEvaluatorBase::StaticRegisterNativesURitualEvaluatorBase()
	{
		UClass* Class = URitualEvaluatorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EvaluateEvent", &URitualEvaluatorBase::execEvaluateEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ritualEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ritualEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RitualEvaluatorBase_eventEvaluateEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RitualEvaluatorBase_eventEvaluateEvent_Parms), &Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics::NewProp_ritualEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics::NewProp_ritualEvent = { "ritualEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RitualEvaluatorBase_eventEvaluateEvent_Parms, ritualEvent), Z_Construct_UScriptStruct_FRitualEvent, METADATA_PARAMS(Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics::NewProp_ritualEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics::NewProp_ritualEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics::NewProp_ritualEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RitualEvaluatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URitualEvaluatorBase, nullptr, "EvaluateEvent", nullptr, nullptr, sizeof(RitualEvaluatorBase_eventEvaluateEvent_Parms), Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URitualEvaluatorBase_NoRegister()
	{
		return URitualEvaluatorBase::StaticClass();
	}
	struct Z_Construct_UClass_URitualEvaluatorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URitualEvaluatorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URitualEvaluatorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URitualEvaluatorBase_EvaluateEvent, "EvaluateEvent" }, // 2185622490
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URitualEvaluatorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RitualEvaluatorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RitualEvaluatorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URitualEvaluatorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URitualEvaluatorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URitualEvaluatorBase_Statics::ClassParams = {
		&URitualEvaluatorBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URitualEvaluatorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URitualEvaluatorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URitualEvaluatorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URitualEvaluatorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URitualEvaluatorBase, 103889852);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<URitualEvaluatorBase>()
	{
		return URitualEvaluatorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URitualEvaluatorBase(Z_Construct_UClass_URitualEvaluatorBase, &URitualEvaluatorBase::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("URitualEvaluatorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URitualEvaluatorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
