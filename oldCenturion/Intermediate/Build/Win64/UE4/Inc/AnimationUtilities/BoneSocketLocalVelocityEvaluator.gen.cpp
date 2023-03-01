// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/BoneSocketLocalVelocityEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneSocketLocalVelocityEvaluator() {}
// Cross Module References
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_NoRegister();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBoneSocketLocalVelocityEvaluator::execGetLocalVelocity)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_boneSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLocalVelocity(Z_Param_boneSocketName);
		P_NATIVE_END;
	}
	void UBoneSocketLocalVelocityEvaluator::StaticRegisterNativesUBoneSocketLocalVelocityEvaluator()
	{
		UClass* Class = UBoneSocketLocalVelocityEvaluator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocalVelocity", &UBoneSocketLocalVelocityEvaluator::execGetLocalVelocity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Statics
	{
		struct BoneSocketLocalVelocityEvaluator_eventGetLocalVelocity_Parms
		{
			FName boneSocketName;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boneSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_boneSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoneSocketLocalVelocityEvaluator_eventGetLocalVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Statics::NewProp_boneSocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Statics::NewProp_boneSocketName = { "boneSocketName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoneSocketLocalVelocityEvaluator_eventGetLocalVelocity_Parms, boneSocketName), METADATA_PARAMS(Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Statics::NewProp_boneSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Statics::NewProp_boneSocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Statics::NewProp_boneSocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneSocketLocalVelocityEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator, nullptr, "GetLocalVelocity", nullptr, nullptr, sizeof(BoneSocketLocalVelocityEvaluator_eventGetLocalVelocity_Parms), Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_NoRegister()
	{
		return UBoneSocketLocalVelocityEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trackedBoneSocketNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__trackedBoneSocketNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__trackedBoneSocketNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__meshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__meshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoneSocketLocalVelocityEvaluator_GetLocalVelocity, "GetLocalVelocity" }, // 2084126697
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BoneSocketLocalVelocityEvaluator.h" },
		{ "ModuleRelativePath", "Public/BoneSocketLocalVelocityEvaluator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::NewProp__trackedBoneSocketNames_MetaData[] = {
		{ "Category", "BoneSocketLocalVelocityEvaluator" },
		{ "ModuleRelativePath", "Public/BoneSocketLocalVelocityEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::NewProp__trackedBoneSocketNames = { "_trackedBoneSocketNames", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoneSocketLocalVelocityEvaluator, _trackedBoneSocketNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::NewProp__trackedBoneSocketNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::NewProp__trackedBoneSocketNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::NewProp__trackedBoneSocketNames_Inner = { "_trackedBoneSocketNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::NewProp__meshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoneSocketLocalVelocityEvaluator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BoneSocketLocalVelocityEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::NewProp__meshComponent = { "_meshComponent", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoneSocketLocalVelocityEvaluator, _meshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::NewProp__meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::NewProp__meshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::NewProp__trackedBoneSocketNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::NewProp__trackedBoneSocketNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::NewProp__meshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoneSocketLocalVelocityEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::ClassParams = {
		&UBoneSocketLocalVelocityEvaluator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoneSocketLocalVelocityEvaluator, 182417748);
	template<> ANIMATIONUTILITIES_API UClass* StaticClass<UBoneSocketLocalVelocityEvaluator>()
	{
		return UBoneSocketLocalVelocityEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoneSocketLocalVelocityEvaluator(Z_Construct_UClass_UBoneSocketLocalVelocityEvaluator, &UBoneSocketLocalVelocityEvaluator::StaticClass, TEXT("/Script/AnimationUtilities"), TEXT("UBoneSocketLocalVelocityEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoneSocketLocalVelocityEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
