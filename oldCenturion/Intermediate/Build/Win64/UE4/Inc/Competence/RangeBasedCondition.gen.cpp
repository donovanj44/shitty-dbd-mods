// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/RangeBasedCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangeBasedCondition() {}
// Cross Module References
	COMPETENCE_API UClass* Z_Construct_UClass_URangeBasedCondition_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_URangeBasedCondition();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_Competence();
// End Cross Module References
	DEFINE_FUNCTION(URangeBasedCondition::execOnRep_Range)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Range();
		P_NATIVE_END;
	}
	void URangeBasedCondition::StaticRegisterNativesURangeBasedCondition()
	{
		UClass* Class = URangeBasedCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Range", &URangeBasedCondition::execOnRep_Range },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URangeBasedCondition_OnRep_Range_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URangeBasedCondition_OnRep_Range_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RangeBasedCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URangeBasedCondition_OnRep_Range_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangeBasedCondition, nullptr, "OnRep_Range", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URangeBasedCondition_OnRep_Range_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URangeBasedCondition_OnRep_Range_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URangeBasedCondition_OnRep_Range()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URangeBasedCondition_OnRep_Range_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URangeBasedCondition_NoRegister()
	{
		return URangeBasedCondition::StaticClass();
	}
	struct Z_Construct_UClass_URangeBasedCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__range;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URangeBasedCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URangeBasedCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URangeBasedCondition_OnRep_Range, "OnRep_Range" }, // 3142890515
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangeBasedCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RangeBasedCondition.h" },
		{ "ModuleRelativePath", "Public/RangeBasedCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangeBasedCondition_Statics::NewProp__range_MetaData[] = {
		{ "ModuleRelativePath", "Public/RangeBasedCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangeBasedCondition_Statics::NewProp__range = { "_range", "OnRep_Range", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangeBasedCondition, _range), METADATA_PARAMS(Z_Construct_UClass_URangeBasedCondition_Statics::NewProp__range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangeBasedCondition_Statics::NewProp__range_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URangeBasedCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangeBasedCondition_Statics::NewProp__range,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URangeBasedCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URangeBasedCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URangeBasedCondition_Statics::ClassParams = {
		&URangeBasedCondition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URangeBasedCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URangeBasedCondition_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URangeBasedCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URangeBasedCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URangeBasedCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URangeBasedCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URangeBasedCondition, 1699903151);
	template<> COMPETENCE_API UClass* StaticClass<URangeBasedCondition>()
	{
		return URangeBasedCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URangeBasedCondition(Z_Construct_UClass_URangeBasedCondition, &URangeBasedCondition::StaticClass, TEXT("/Script/Competence"), TEXT("URangeBasedCondition"), false, nullptr, nullptr, nullptr);

	void URangeBasedCondition::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__range(TEXT("_range"));

		const bool bIsValid = true
			&& Name__range == ClassReps[(int32)ENetFields_Private::_range].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URangeBasedCondition"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URangeBasedCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
