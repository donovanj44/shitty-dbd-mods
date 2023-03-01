// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25AttackSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25AttackSubAnimInstance() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25AttackSubAnimInstance_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25AttackSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UKillerAttackSubAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackType();
// End Cross Module References
	DEFINE_FUNCTION(UK25AttackSubAnimInstance::execOnAttackStart)
	{
		P_GET_ENUM(EAttackType,Z_Param_attackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackStart(EAttackType(Z_Param_attackType));
		P_NATIVE_END;
	}
	void UK25AttackSubAnimInstance::StaticRegisterNativesUK25AttackSubAnimInstance()
	{
		UClass* Class = UK25AttackSubAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttackStart", &UK25AttackSubAnimInstance::execOnAttackStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart_Statics
	{
		struct K25AttackSubAnimInstance_eventOnAttackStart_Parms
		{
			EAttackType attackType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_attackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart_Statics::NewProp_attackType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25AttackSubAnimInstance_eventOnAttackStart_Parms, attackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart_Statics::NewProp_attackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart_Statics::NewProp_attackType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart_Statics::NewProp_attackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart_Statics::NewProp_attackType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25AttackSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25AttackSubAnimInstance, nullptr, "OnAttackStart", nullptr, nullptr, sizeof(K25AttackSubAnimInstance_eventOnAttackStart_Parms), Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25AttackSubAnimInstance_NoRegister()
	{
		return UK25AttackSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UK25AttackSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasDownedTargetHoldingLamentConfiguration_MetaData[];
#endif
		static void NewProp__hasDownedTargetHoldingLamentConfiguration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasDownedTargetHoldingLamentConfiguration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerAttackSubAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25AttackSubAnimInstance_OnAttackStart, "OnAttackStart" }, // 4010572235
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "K25AttackSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/K25AttackSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::NewProp__hasDownedTargetHoldingLamentConfiguration_MetaData[] = {
		{ "Category", "K25AttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/K25AttackSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::NewProp__hasDownedTargetHoldingLamentConfiguration_SetBit(void* Obj)
	{
		((UK25AttackSubAnimInstance*)Obj)->_hasDownedTargetHoldingLamentConfiguration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::NewProp__hasDownedTargetHoldingLamentConfiguration = { "_hasDownedTargetHoldingLamentConfiguration", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK25AttackSubAnimInstance), &Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::NewProp__hasDownedTargetHoldingLamentConfiguration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::NewProp__hasDownedTargetHoldingLamentConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::NewProp__hasDownedTargetHoldingLamentConfiguration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::NewProp__hasDownedTargetHoldingLamentConfiguration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25AttackSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::ClassParams = {
		&UK25AttackSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25AttackSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25AttackSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25AttackSubAnimInstance, 2864845741);
	template<> THEK25_API UClass* StaticClass<UK25AttackSubAnimInstance>()
	{
		return UK25AttackSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25AttackSubAnimInstance(Z_Construct_UClass_UK25AttackSubAnimInstance, &UK25AttackSubAnimInstance::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25AttackSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25AttackSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
