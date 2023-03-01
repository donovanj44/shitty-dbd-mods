// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/GeneratorAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UGeneratorAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UGeneratorAnimInstance();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_USleepingAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGeneratorAnimInstance::execSetSkillCheckSuccess)
	{
		P_GET_UBOOL(Z_Param_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkillCheckSuccess(Z_Param_success);
		P_NATIVE_END;
	}
	void UGeneratorAnimInstance::StaticRegisterNativesUGeneratorAnimInstance()
	{
		UClass* Class = UGeneratorAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSkillCheckSuccess", &UGeneratorAnimInstance::execSetSkillCheckSuccess },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeneratorAnimInstance_SetSkillCheckSuccess_Statics
	{
		struct GeneratorAnimInstance_eventSetSkillCheckSuccess_Parms
		{
			bool success;
		};
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeneratorAnimInstance_SetSkillCheckSuccess_Statics::NewProp_success_SetBit(void* Obj)
	{
		((GeneratorAnimInstance_eventSetSkillCheckSuccess_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeneratorAnimInstance_SetSkillCheckSuccess_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorAnimInstance_eventSetSkillCheckSuccess_Parms), &Z_Construct_UFunction_UGeneratorAnimInstance_SetSkillCheckSuccess_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorAnimInstance_SetSkillCheckSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorAnimInstance_SetSkillCheckSuccess_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorAnimInstance_SetSkillCheckSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorAnimInstance_SetSkillCheckSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorAnimInstance, nullptr, "SetSkillCheckSuccess", nullptr, nullptr, sizeof(GeneratorAnimInstance_eventSetSkillCheckSuccess_Parms), Z_Construct_UFunction_UGeneratorAnimInstance_SetSkillCheckSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorAnimInstance_SetSkillCheckSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorAnimInstance_SetSkillCheckSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorAnimInstance_SetSkillCheckSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorAnimInstance_SetSkillCheckSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorAnimInstance_SetSkillCheckSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGeneratorAnimInstance_NoRegister()
	{
		return UGeneratorAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UGeneratorAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__percentComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__percentComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isActivated_MetaData[];
#endif
		static void NewProp__isActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rushFailed_MetaData[];
#endif
		static void NewProp__rushFailed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__rushFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeneratorAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USleepingAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeneratorAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeneratorAnimInstance_SetSkillCheckSuccess, "SetSkillCheckSuccess" }, // 3765994350
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "GeneratorAnimInstance.h" },
		{ "ModuleRelativePath", "Public/GeneratorAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__percentComplete_MetaData[] = {
		{ "Category", "GeneratorAnimInstance" },
		{ "ModuleRelativePath", "Public/GeneratorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__percentComplete = { "_percentComplete", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorAnimInstance, _percentComplete), METADATA_PARAMS(Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__percentComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__percentComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__isActivated_MetaData[] = {
		{ "Category", "GeneratorAnimInstance" },
		{ "ModuleRelativePath", "Public/GeneratorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__isActivated_SetBit(void* Obj)
	{
		((UGeneratorAnimInstance*)Obj)->_isActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__isActivated = { "_isActivated", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGeneratorAnimInstance), &Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__isActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__isActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__isActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__rushFailed_MetaData[] = {
		{ "Category", "GeneratorAnimInstance" },
		{ "ModuleRelativePath", "Public/GeneratorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__rushFailed_SetBit(void* Obj)
	{
		((UGeneratorAnimInstance*)Obj)->_rushFailed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__rushFailed = { "_rushFailed", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGeneratorAnimInstance), &Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__rushFailed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__rushFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__rushFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__owningGenerator_MetaData[] = {
		{ "Category", "GeneratorAnimInstance" },
		{ "ModuleRelativePath", "Public/GeneratorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__owningGenerator = { "_owningGenerator", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorAnimInstance, _owningGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__owningGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__owningGenerator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeneratorAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__percentComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__isActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__rushFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorAnimInstance_Statics::NewProp__owningGenerator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeneratorAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneratorAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeneratorAnimInstance_Statics::ClassParams = {
		&UGeneratorAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGeneratorAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGeneratorAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeneratorAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeneratorAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeneratorAnimInstance, 1498821399);
	template<> DBDANIMATION_API UClass* StaticClass<UGeneratorAnimInstance>()
	{
		return UGeneratorAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeneratorAnimInstance(Z_Construct_UClass_UGeneratorAnimInstance, &UGeneratorAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UGeneratorAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneratorAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
