// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25AnimationFollowerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25AnimationFollowerActor() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_AK25AnimationFollowerActor_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25AnimationFollowerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMontagePlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAnimationMontageSlave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AK25AnimationFollowerActor::execOnMontageEnd)
	{
		P_GET_STRUCT(FAnimationMontageDescriptor,Z_Param_montage);
		P_GET_UBOOL(Z_Param_interrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageEnd(Z_Param_montage,Z_Param_interrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25AnimationFollowerActor::execOnMontageStarted)
	{
		P_GET_STRUCT(FAnimationMontageDescriptor,Z_Param_id);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageStarted(Z_Param_id,Z_Param_rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25AnimationFollowerActor::execOnMontageStopped)
	{
		P_GET_STRUCT(FAnimationMontageDescriptor,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageStopped(Z_Param_id);
		P_NATIVE_END;
	}
	void AK25AnimationFollowerActor::StaticRegisterNativesAK25AnimationFollowerActor()
	{
		UClass* Class = AK25AnimationFollowerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMontageEnd", &AK25AnimationFollowerActor::execOnMontageEnd },
			{ "OnMontageStarted", &AK25AnimationFollowerActor::execOnMontageStarted },
			{ "OnMontageStopped", &AK25AnimationFollowerActor::execOnMontageStopped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics
	{
		struct K25AnimationFollowerActor_eventOnMontageEnd_Parms
		{
			FAnimationMontageDescriptor montage;
			bool interrupted;
		};
		static void NewProp_interrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_interrupted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics::NewProp_interrupted_SetBit(void* Obj)
	{
		((K25AnimationFollowerActor_eventOnMontageEnd_Parms*)Obj)->interrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics::NewProp_interrupted = { "interrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25AnimationFollowerActor_eventOnMontageEnd_Parms), &Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics::NewProp_interrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics::NewProp_montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25AnimationFollowerActor_eventOnMontageEnd_Parms, montage), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics::NewProp_montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics::NewProp_montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics::NewProp_interrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics::NewProp_montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25AnimationFollowerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25AnimationFollowerActor, nullptr, "OnMontageEnd", nullptr, nullptr, sizeof(K25AnimationFollowerActor_eventOnMontageEnd_Parms), Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics
	{
		struct K25AnimationFollowerActor_eventOnMontageStarted_Parms
		{
			FAnimationMontageDescriptor id;
			float rate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::NewProp_rate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::NewProp_rate = { "rate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25AnimationFollowerActor_eventOnMontageStarted_Parms, rate), METADATA_PARAMS(Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::NewProp_rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::NewProp_rate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25AnimationFollowerActor_eventOnMontageStarted_Parms, id), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::NewProp_rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25AnimationFollowerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25AnimationFollowerActor, nullptr, "OnMontageStarted", nullptr, nullptr, sizeof(K25AnimationFollowerActor_eventOnMontageStarted_Parms), Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStopped_Statics
	{
		struct K25AnimationFollowerActor_eventOnMontageStopped_Parms
		{
			FAnimationMontageDescriptor id;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStopped_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStopped_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25AnimationFollowerActor_eventOnMontageStopped_Parms, id), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStopped_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStopped_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStopped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStopped_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25AnimationFollowerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25AnimationFollowerActor, nullptr, "OnMontageStopped", nullptr, nullptr, sizeof(K25AnimationFollowerActor_eventOnMontageStopped_Parms), Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AK25AnimationFollowerActor_NoRegister()
	{
		return AK25AnimationFollowerActor::StaticClass();
	}
	struct Z_Construct_UClass_AK25AnimationFollowerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__montagePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__montagePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__montageFollower_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__montageFollower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__skeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AK25AnimationFollowerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AK25AnimationFollowerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageEnd, "OnMontageEnd" }, // 1865883034
		{ &Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStarted, "OnMontageStarted" }, // 2340742787
		{ &Z_Construct_UFunction_AK25AnimationFollowerActor_OnMontageStopped, "OnMontageStopped" }, // 2023727076
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25AnimationFollowerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25AnimationFollowerActor.h" },
		{ "ModuleRelativePath", "Public/K25AnimationFollowerActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25AnimationFollowerActor_Statics::NewProp__montagePlayer_MetaData[] = {
		{ "Category", "K25AnimationFollowerActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25AnimationFollowerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25AnimationFollowerActor_Statics::NewProp__montagePlayer = { "_montagePlayer", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25AnimationFollowerActor, _montagePlayer), Z_Construct_UClass_UMontagePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25AnimationFollowerActor_Statics::NewProp__montagePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25AnimationFollowerActor_Statics::NewProp__montagePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25AnimationFollowerActor_Statics::NewProp__montageFollower_MetaData[] = {
		{ "Category", "K25AnimationFollowerActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25AnimationFollowerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25AnimationFollowerActor_Statics::NewProp__montageFollower = { "_montageFollower", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25AnimationFollowerActor, _montageFollower), Z_Construct_UClass_UAnimationMontageSlave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25AnimationFollowerActor_Statics::NewProp__montageFollower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25AnimationFollowerActor_Statics::NewProp__montageFollower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25AnimationFollowerActor_Statics::NewProp__skeletalMesh_MetaData[] = {
		{ "Category", "K25AnimationFollowerActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25AnimationFollowerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25AnimationFollowerActor_Statics::NewProp__skeletalMesh = { "_skeletalMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25AnimationFollowerActor, _skeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25AnimationFollowerActor_Statics::NewProp__skeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25AnimationFollowerActor_Statics::NewProp__skeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AK25AnimationFollowerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25AnimationFollowerActor_Statics::NewProp__montagePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25AnimationFollowerActor_Statics::NewProp__montageFollower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25AnimationFollowerActor_Statics::NewProp__skeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AK25AnimationFollowerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AK25AnimationFollowerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AK25AnimationFollowerActor_Statics::ClassParams = {
		&AK25AnimationFollowerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AK25AnimationFollowerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AK25AnimationFollowerActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AK25AnimationFollowerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AK25AnimationFollowerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AK25AnimationFollowerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AK25AnimationFollowerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AK25AnimationFollowerActor, 646479102);
	template<> THEK25_API UClass* StaticClass<AK25AnimationFollowerActor>()
	{
		return AK25AnimationFollowerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AK25AnimationFollowerActor(Z_Construct_UClass_AK25AnimationFollowerActor, &AK25AnimationFollowerActor::StaticClass, TEXT("/Script/TheK25"), TEXT("AK25AnimationFollowerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AK25AnimationFollowerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
