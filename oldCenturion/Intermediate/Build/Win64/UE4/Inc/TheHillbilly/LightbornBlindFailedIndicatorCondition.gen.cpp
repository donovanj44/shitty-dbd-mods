// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/LightbornBlindFailedIndicatorCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightbornBlindFailedIndicatorCondition() {}
// Cross Module References
	THEHILLBILLY_API UClass* Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_NoRegister();
	THEHILLBILLY_API UClass* Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
// End Cross Module References
	DEFINE_FUNCTION(ULightbornBlindFailedIndicatorCondition::execOnRep_ReplicatedIsTrue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedIsTrue();
		P_NATIVE_END;
	}
	void ULightbornBlindFailedIndicatorCondition::StaticRegisterNativesULightbornBlindFailedIndicatorCondition()
	{
		UClass* Class = ULightbornBlindFailedIndicatorCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ReplicatedIsTrue", &ULightbornBlindFailedIndicatorCondition::execOnRep_ReplicatedIsTrue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULightbornBlindFailedIndicatorCondition_OnRep_ReplicatedIsTrue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightbornBlindFailedIndicatorCondition_OnRep_ReplicatedIsTrue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightbornBlindFailedIndicatorCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightbornBlindFailedIndicatorCondition_OnRep_ReplicatedIsTrue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition, nullptr, "OnRep_ReplicatedIsTrue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightbornBlindFailedIndicatorCondition_OnRep_ReplicatedIsTrue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightbornBlindFailedIndicatorCondition_OnRep_ReplicatedIsTrue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightbornBlindFailedIndicatorCondition_OnRep_ReplicatedIsTrue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightbornBlindFailedIndicatorCondition_OnRep_ReplicatedIsTrue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_NoRegister()
	{
		return ULightbornBlindFailedIndicatorCondition::StaticClass();
	}
	struct Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__replicatedIsTrue_MetaData[];
#endif
		static void NewProp__replicatedIsTrue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__replicatedIsTrue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__conditionReevaluationTimerDurationAfterFailedBlind_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__conditionReevaluationTimerDurationAfterFailedBlind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightbornBlindFailedIndicatorCondition_OnRep_ReplicatedIsTrue, "OnRep_ReplicatedIsTrue" }, // 3062698312
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LightbornBlindFailedIndicatorCondition.h" },
		{ "ModuleRelativePath", "Public/LightbornBlindFailedIndicatorCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::NewProp__replicatedIsTrue_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightbornBlindFailedIndicatorCondition.h" },
	};
#endif
	void Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::NewProp__replicatedIsTrue_SetBit(void* Obj)
	{
		((ULightbornBlindFailedIndicatorCondition*)Obj)->_replicatedIsTrue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::NewProp__replicatedIsTrue = { "_replicatedIsTrue", "OnRep_ReplicatedIsTrue", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULightbornBlindFailedIndicatorCondition), &Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::NewProp__replicatedIsTrue_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::NewProp__replicatedIsTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::NewProp__replicatedIsTrue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::NewProp__conditionReevaluationTimerDurationAfterFailedBlind_MetaData[] = {
		{ "Category", "LightbornBlindFailedIndicatorCondition" },
		{ "ModuleRelativePath", "Public/LightbornBlindFailedIndicatorCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::NewProp__conditionReevaluationTimerDurationAfterFailedBlind = { "_conditionReevaluationTimerDurationAfterFailedBlind", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightbornBlindFailedIndicatorCondition, _conditionReevaluationTimerDurationAfterFailedBlind), METADATA_PARAMS(Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::NewProp__conditionReevaluationTimerDurationAfterFailedBlind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::NewProp__conditionReevaluationTimerDurationAfterFailedBlind_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::NewProp__replicatedIsTrue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::NewProp__conditionReevaluationTimerDurationAfterFailedBlind,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightbornBlindFailedIndicatorCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::ClassParams = {
		&ULightbornBlindFailedIndicatorCondition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightbornBlindFailedIndicatorCondition, 881190018);
	template<> THEHILLBILLY_API UClass* StaticClass<ULightbornBlindFailedIndicatorCondition>()
	{
		return ULightbornBlindFailedIndicatorCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightbornBlindFailedIndicatorCondition(Z_Construct_UClass_ULightbornBlindFailedIndicatorCondition, &ULightbornBlindFailedIndicatorCondition::StaticClass, TEXT("/Script/TheHillbilly"), TEXT("ULightbornBlindFailedIndicatorCondition"), false, nullptr, nullptr, nullptr);

	void ULightbornBlindFailedIndicatorCondition::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__replicatedIsTrue(TEXT("_replicatedIsTrue"));

		const bool bIsValid = true
			&& Name__replicatedIsTrue == ClassReps[(int32)ENetFields_Private::_replicatedIsTrue].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULightbornBlindFailedIndicatorCondition"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightbornBlindFailedIndicatorCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
