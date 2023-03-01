// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/SlaveAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlaveAnimInstance() {}
// Cross Module References
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_USlaveAnimInstance_NoRegister();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_USlaveAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USlaveAnimInstance::execGetMasterMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMasterMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlaveAnimInstance::execSetMasterMesh)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_masterMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMasterMesh(Z_Param_masterMesh);
		P_NATIVE_END;
	}
	void USlaveAnimInstance::StaticRegisterNativesUSlaveAnimInstance()
	{
		UClass* Class = USlaveAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMasterMesh", &USlaveAnimInstance::execGetMasterMesh },
			{ "SetMasterMesh", &USlaveAnimInstance::execSetMasterMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USlaveAnimInstance_GetMasterMesh_Statics
	{
		struct SlaveAnimInstance_eventGetMasterMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlaveAnimInstance_GetMasterMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlaveAnimInstance_GetMasterMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlaveAnimInstance_eventGetMasterMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USlaveAnimInstance_GetMasterMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlaveAnimInstance_GetMasterMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlaveAnimInstance_GetMasterMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlaveAnimInstance_GetMasterMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlaveAnimInstance_GetMasterMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SlaveAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlaveAnimInstance_GetMasterMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlaveAnimInstance, nullptr, "GetMasterMesh", nullptr, nullptr, sizeof(SlaveAnimInstance_eventGetMasterMesh_Parms), Z_Construct_UFunction_USlaveAnimInstance_GetMasterMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlaveAnimInstance_GetMasterMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlaveAnimInstance_GetMasterMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlaveAnimInstance_GetMasterMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlaveAnimInstance_GetMasterMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlaveAnimInstance_GetMasterMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlaveAnimInstance_SetMasterMesh_Statics
	{
		struct SlaveAnimInstance_eventSetMasterMesh_Parms
		{
			USkeletalMeshComponent* masterMesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_masterMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_masterMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlaveAnimInstance_SetMasterMesh_Statics::NewProp_masterMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlaveAnimInstance_SetMasterMesh_Statics::NewProp_masterMesh = { "masterMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlaveAnimInstance_eventSetMasterMesh_Parms, masterMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USlaveAnimInstance_SetMasterMesh_Statics::NewProp_masterMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlaveAnimInstance_SetMasterMesh_Statics::NewProp_masterMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlaveAnimInstance_SetMasterMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlaveAnimInstance_SetMasterMesh_Statics::NewProp_masterMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlaveAnimInstance_SetMasterMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SlaveAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlaveAnimInstance_SetMasterMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlaveAnimInstance, nullptr, "SetMasterMesh", nullptr, nullptr, sizeof(SlaveAnimInstance_eventSetMasterMesh_Parms), Z_Construct_UFunction_USlaveAnimInstance_SetMasterMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlaveAnimInstance_SetMasterMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlaveAnimInstance_SetMasterMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlaveAnimInstance_SetMasterMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlaveAnimInstance_SetMasterMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlaveAnimInstance_SetMasterMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USlaveAnimInstance_NoRegister()
	{
		return USlaveAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USlaveAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__masterMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__masterMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlaveAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USlaveAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USlaveAnimInstance_GetMasterMesh, "GetMasterMesh" }, // 802568496
		{ &Z_Construct_UFunction_USlaveAnimInstance_SetMasterMesh, "SetMasterMesh" }, // 1460280687
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlaveAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SlaveAnimInstance.h" },
		{ "ModuleRelativePath", "Public/SlaveAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlaveAnimInstance_Statics::NewProp__masterMesh_MetaData[] = {
		{ "Category", "SlaveAnimInstance" },
		{ "ModuleRelativePath", "Public/SlaveAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USlaveAnimInstance_Statics::NewProp__masterMesh = { "_masterMesh", nullptr, (EPropertyFlags)0x002408000008201c, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlaveAnimInstance, _masterMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlaveAnimInstance_Statics::NewProp__masterMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlaveAnimInstance_Statics::NewProp__masterMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlaveAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlaveAnimInstance_Statics::NewProp__masterMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlaveAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlaveAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlaveAnimInstance_Statics::ClassParams = {
		&USlaveAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USlaveAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USlaveAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USlaveAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlaveAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlaveAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlaveAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlaveAnimInstance, 190082250);
	template<> ANIMATIONUTILITIES_API UClass* StaticClass<USlaveAnimInstance>()
	{
		return USlaveAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlaveAnimInstance(Z_Construct_UClass_USlaveAnimInstance, &USlaveAnimInstance::StaticClass, TEXT("/Script/AnimationUtilities"), TEXT("USlaveAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlaveAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
