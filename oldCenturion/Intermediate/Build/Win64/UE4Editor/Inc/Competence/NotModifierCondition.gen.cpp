// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/NotModifierCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotModifierCondition() {}
// Cross Module References
	COMPETENCE_API UClass* Z_Construct_UClass_UNotModifierCondition_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UNotModifierCondition();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_Competence();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UConditionReceiver_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNotModifierCondition::execOnRep_Condition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Condition();
		P_NATIVE_END;
	}
	void UNotModifierCondition::StaticRegisterNativesUNotModifierCondition()
	{
		UClass* Class = UNotModifierCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Condition", &UNotModifierCondition::execOnRep_Condition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNotModifierCondition_OnRep_Condition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNotModifierCondition_OnRep_Condition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NotModifierCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNotModifierCondition_OnRep_Condition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNotModifierCondition, nullptr, "OnRep_Condition", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNotModifierCondition_OnRep_Condition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNotModifierCondition_OnRep_Condition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNotModifierCondition_OnRep_Condition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNotModifierCondition_OnRep_Condition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNotModifierCondition_NoRegister()
	{
		return UNotModifierCondition::StaticClass();
	}
	struct Z_Construct_UClass_UNotModifierCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__condition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__condition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotModifierCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNotModifierCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNotModifierCondition_OnRep_Condition, "OnRep_Condition" }, // 4000325978
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotModifierCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NotModifierCondition.h" },
		{ "ModuleRelativePath", "Public/NotModifierCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotModifierCondition_Statics::NewProp__condition_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NotModifierCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNotModifierCondition_Statics::NewProp__condition = { "_condition", "OnRep_Condition", (EPropertyFlags)0x0040000100082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNotModifierCondition, _condition), Z_Construct_UClass_UEventDrivenModifierCondition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNotModifierCondition_Statics::NewProp__condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotModifierCondition_Statics::NewProp__condition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNotModifierCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotModifierCondition_Statics::NewProp__condition,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNotModifierCondition_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UConditionReceiver_NoRegister, (int32)VTABLE_OFFSET(UNotModifierCondition, IConditionReceiver), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotModifierCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotModifierCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNotModifierCondition_Statics::ClassParams = {
		&UNotModifierCondition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNotModifierCondition_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNotModifierCondition_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNotModifierCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotModifierCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotModifierCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNotModifierCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNotModifierCondition, 3129164838);
	template<> COMPETENCE_API UClass* StaticClass<UNotModifierCondition>()
	{
		return UNotModifierCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNotModifierCondition(Z_Construct_UClass_UNotModifierCondition, &UNotModifierCondition::StaticClass, TEXT("/Script/Competence"), TEXT("UNotModifierCondition"), false, nullptr, nullptr, nullptr);

	void UNotModifierCondition::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__condition(TEXT("_condition"));

		const bool bIsValid = true
			&& Name__condition == ClassReps[(int32)ENetFields_Private::_condition].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNotModifierCondition"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotModifierCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
