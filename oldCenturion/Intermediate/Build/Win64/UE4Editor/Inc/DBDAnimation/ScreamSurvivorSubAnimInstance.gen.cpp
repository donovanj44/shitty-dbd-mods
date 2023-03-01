// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/ScreamSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreamSurvivorSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UScreamSurvivorSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UScreamSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
// End Cross Module References
	DEFINE_FUNCTION(UScreamSurvivorSubAnimInstance::execResetScreamTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetScreamTrigger();
		P_NATIVE_END;
	}
	void UScreamSurvivorSubAnimInstance::StaticRegisterNativesUScreamSurvivorSubAnimInstance()
	{
		UClass* Class = UScreamSurvivorSubAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetScreamTrigger", &UScreamSurvivorSubAnimInstance::execResetScreamTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScreamSurvivorSubAnimInstance_ResetScreamTrigger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreamSurvivorSubAnimInstance_ResetScreamTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreamSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreamSurvivorSubAnimInstance_ResetScreamTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreamSurvivorSubAnimInstance, nullptr, "ResetScreamTrigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreamSurvivorSubAnimInstance_ResetScreamTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreamSurvivorSubAnimInstance_ResetScreamTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreamSurvivorSubAnimInstance_ResetScreamTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreamSurvivorSubAnimInstance_ResetScreamTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScreamSurvivorSubAnimInstance_NoRegister()
	{
		return UScreamSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__screamTrigger_MetaData[];
#endif
		static void NewProp__screamTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__screamTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScreamSurvivorSubAnimInstance_ResetScreamTrigger, "ResetScreamTrigger" }, // 1903161522
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ScreamSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/ScreamSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::NewProp__screamTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScreamSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ScreamSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::NewProp__screamTrigger_SetBit(void* Obj)
	{
		((UScreamSurvivorSubAnimInstance*)Obj)->_screamTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::NewProp__screamTrigger = { "_screamTrigger", nullptr, (EPropertyFlags)0x0040000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScreamSurvivorSubAnimInstance), &Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::NewProp__screamTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::NewProp__screamTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::NewProp__screamTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::NewProp__screamTrigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreamSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::ClassParams = {
		&UScreamSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreamSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScreamSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScreamSurvivorSubAnimInstance, 1246141256);
	template<> DBDANIMATION_API UClass* StaticClass<UScreamSurvivorSubAnimInstance>()
	{
		return UScreamSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScreamSurvivorSubAnimInstance(Z_Construct_UClass_UScreamSurvivorSubAnimInstance, &UScreamSurvivorSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UScreamSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreamSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
