// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/CompositeModifierCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeModifierCondition() {}
// Cross Module References
	COMPETENCE_API UClass* Z_Construct_UClass_UCompositeModifierCondition_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UCompositeModifierCondition();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_Competence();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UConditionReceiver_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCompositeModifierCondition::execOnRep_Conditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Conditions();
		P_NATIVE_END;
	}
	void UCompositeModifierCondition::StaticRegisterNativesUCompositeModifierCondition()
	{
		UClass* Class = UCompositeModifierCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Conditions", &UCompositeModifierCondition::execOnRep_Conditions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCompositeModifierCondition_OnRep_Conditions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositeModifierCondition_OnRep_Conditions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CompositeModifierCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositeModifierCondition_OnRep_Conditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositeModifierCondition, nullptr, "OnRep_Conditions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositeModifierCondition_OnRep_Conditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeModifierCondition_OnRep_Conditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositeModifierCondition_OnRep_Conditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCompositeModifierCondition_OnRep_Conditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCompositeModifierCondition_NoRegister()
	{
		return UCompositeModifierCondition::StaticClass();
	}
	struct Z_Construct_UClass_UCompositeModifierCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__conditions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__conditions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositeModifierCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCompositeModifierCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompositeModifierCondition_OnRep_Conditions, "OnRep_Conditions" }, // 1458857235
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeModifierCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CompositeModifierCondition.h" },
		{ "ModuleRelativePath", "Public/CompositeModifierCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeModifierCondition_Statics::NewProp__conditions_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CompositeModifierCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeModifierCondition_Statics::NewProp__conditions = { "_conditions", "OnRep_Conditions", (EPropertyFlags)0x0040008100002028, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCompositeModifierCondition, _conditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCompositeModifierCondition_Statics::NewProp__conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeModifierCondition_Statics::NewProp__conditions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeModifierCondition_Statics::NewProp__conditions_Inner = { "_conditions", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEventDrivenModifierCondition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositeModifierCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeModifierCondition_Statics::NewProp__conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeModifierCondition_Statics::NewProp__conditions_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCompositeModifierCondition_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UConditionReceiver_NoRegister, (int32)VTABLE_OFFSET(UCompositeModifierCondition, IConditionReceiver), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositeModifierCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeModifierCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCompositeModifierCondition_Statics::ClassParams = {
		&UCompositeModifierCondition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCompositeModifierCondition_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeModifierCondition_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositeModifierCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeModifierCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositeModifierCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCompositeModifierCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCompositeModifierCondition, 3229119504);
	template<> COMPETENCE_API UClass* StaticClass<UCompositeModifierCondition>()
	{
		return UCompositeModifierCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompositeModifierCondition(Z_Construct_UClass_UCompositeModifierCondition, &UCompositeModifierCondition::StaticClass, TEXT("/Script/Competence"), TEXT("UCompositeModifierCondition"), false, nullptr, nullptr, nullptr);

	void UCompositeModifierCondition::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__conditions(TEXT("_conditions"));

		const bool bIsValid = true
			&& Name__conditions == ClassReps[(int32)ENetFields_Private::_conditions].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCompositeModifierCondition"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeModifierCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
