// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/DownedByBasicAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDownedByBasicAttack() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDownedByBasicAttack_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDownedByBasicAttack();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	DEFINE_FUNCTION(UDownedByBasicAttack::execOnRep_ReplicatedIsTrue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedIsTrue();
		P_NATIVE_END;
	}
	void UDownedByBasicAttack::StaticRegisterNativesUDownedByBasicAttack()
	{
		UClass* Class = UDownedByBasicAttack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ReplicatedIsTrue", &UDownedByBasicAttack::execOnRep_ReplicatedIsTrue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDownedByBasicAttack_OnRep_ReplicatedIsTrue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDownedByBasicAttack_OnRep_ReplicatedIsTrue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DownedByBasicAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDownedByBasicAttack_OnRep_ReplicatedIsTrue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDownedByBasicAttack, nullptr, "OnRep_ReplicatedIsTrue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDownedByBasicAttack_OnRep_ReplicatedIsTrue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDownedByBasicAttack_OnRep_ReplicatedIsTrue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDownedByBasicAttack_OnRep_ReplicatedIsTrue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDownedByBasicAttack_OnRep_ReplicatedIsTrue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDownedByBasicAttack_NoRegister()
	{
		return UDownedByBasicAttack::StaticClass();
	}
	struct Z_Construct_UClass_UDownedByBasicAttack_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDownedByBasicAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDownedByBasicAttack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDownedByBasicAttack_OnRep_ReplicatedIsTrue, "OnRep_ReplicatedIsTrue" }, // 2950174700
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownedByBasicAttack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DownedByBasicAttack.h" },
		{ "ModuleRelativePath", "Public/DownedByBasicAttack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownedByBasicAttack_Statics::NewProp__replicatedIsTrue_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownedByBasicAttack.h" },
	};
#endif
	void Z_Construct_UClass_UDownedByBasicAttack_Statics::NewProp__replicatedIsTrue_SetBit(void* Obj)
	{
		((UDownedByBasicAttack*)Obj)->_replicatedIsTrue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDownedByBasicAttack_Statics::NewProp__replicatedIsTrue = { "_replicatedIsTrue", "OnRep_ReplicatedIsTrue", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDownedByBasicAttack), &Z_Construct_UClass_UDownedByBasicAttack_Statics::NewProp__replicatedIsTrue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDownedByBasicAttack_Statics::NewProp__replicatedIsTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDownedByBasicAttack_Statics::NewProp__replicatedIsTrue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDownedByBasicAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownedByBasicAttack_Statics::NewProp__replicatedIsTrue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDownedByBasicAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDownedByBasicAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDownedByBasicAttack_Statics::ClassParams = {
		&UDownedByBasicAttack::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDownedByBasicAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDownedByBasicAttack_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDownedByBasicAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDownedByBasicAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDownedByBasicAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDownedByBasicAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDownedByBasicAttack, 4134157573);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UDownedByBasicAttack>()
	{
		return UDownedByBasicAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDownedByBasicAttack(Z_Construct_UClass_UDownedByBasicAttack, &UDownedByBasicAttack::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UDownedByBasicAttack"), false, nullptr, nullptr, nullptr);

	void UDownedByBasicAttack::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__replicatedIsTrue(TEXT("_replicatedIsTrue"));

		const bool bIsValid = true
			&& Name__replicatedIsTrue == ClassReps[(int32)ENetFields_Private::_replicatedIsTrue].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDownedByBasicAttack"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDownedByBasicAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
