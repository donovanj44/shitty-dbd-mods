// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/OniCustomizationItemAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOniCustomizationItemAnimInstance() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UOniCustomizationItemAnimInstance_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UOniCustomizationItemAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheOni();
// End Cross Module References
	DEFINE_FUNCTION(UOniCustomizationItemAnimInstance::execSetIsInDemonMode)
	{
		P_GET_UBOOL(Z_Param_isInDemonMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsInDemonMode(Z_Param_isInDemonMode);
		P_NATIVE_END;
	}
	void UOniCustomizationItemAnimInstance::StaticRegisterNativesUOniCustomizationItemAnimInstance()
	{
		UClass* Class = UOniCustomizationItemAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetIsInDemonMode", &UOniCustomizationItemAnimInstance::execSetIsInDemonMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode_Statics
	{
		struct OniCustomizationItemAnimInstance_eventSetIsInDemonMode_Parms
		{
			bool isInDemonMode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isInDemonMode_MetaData[];
#endif
		static void NewProp_isInDemonMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInDemonMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode_Statics::NewProp_isInDemonMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode_Statics::NewProp_isInDemonMode_SetBit(void* Obj)
	{
		((OniCustomizationItemAnimInstance_eventSetIsInDemonMode_Parms*)Obj)->isInDemonMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode_Statics::NewProp_isInDemonMode = { "isInDemonMode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OniCustomizationItemAnimInstance_eventSetIsInDemonMode_Parms), &Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode_Statics::NewProp_isInDemonMode_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode_Statics::NewProp_isInDemonMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode_Statics::NewProp_isInDemonMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode_Statics::NewProp_isInDemonMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OniCustomizationItemAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOniCustomizationItemAnimInstance, nullptr, "SetIsInDemonMode", nullptr, nullptr, sizeof(OniCustomizationItemAnimInstance_eventSetIsInDemonMode_Parms), Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOniCustomizationItemAnimInstance_NoRegister()
	{
		return UOniCustomizationItemAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInDemonMode_MetaData[];
#endif
		static void NewProp__isInDemonMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInDemonMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOniCustomizationItemAnimInstance_SetIsInDemonMode, "SetIsInDemonMode" }, // 53445473
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "OniCustomizationItemAnimInstance.h" },
		{ "ModuleRelativePath", "Public/OniCustomizationItemAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::NewProp__isInDemonMode_MetaData[] = {
		{ "Category", "OniCustomizationItemAnimInstance" },
		{ "ModuleRelativePath", "Public/OniCustomizationItemAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::NewProp__isInDemonMode_SetBit(void* Obj)
	{
		((UOniCustomizationItemAnimInstance*)Obj)->_isInDemonMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::NewProp__isInDemonMode = { "_isInDemonMode", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOniCustomizationItemAnimInstance), &Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::NewProp__isInDemonMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::NewProp__isInDemonMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::NewProp__isInDemonMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::NewProp__isInDemonMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOniCustomizationItemAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::ClassParams = {
		&UOniCustomizationItemAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOniCustomizationItemAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOniCustomizationItemAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOniCustomizationItemAnimInstance, 1582156447);
	template<> THEONI_API UClass* StaticClass<UOniCustomizationItemAnimInstance>()
	{
		return UOniCustomizationItemAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOniCustomizationItemAnimInstance(Z_Construct_UClass_UOniCustomizationItemAnimInstance, &UOniCustomizationItemAnimInstance::StaticClass, TEXT("/Script/TheOni"), TEXT("UOniCustomizationItemAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOniCustomizationItemAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
