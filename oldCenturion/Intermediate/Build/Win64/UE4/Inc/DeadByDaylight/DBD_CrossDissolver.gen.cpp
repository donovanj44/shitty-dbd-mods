// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBD_CrossDissolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBD_CrossDissolver() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBD_CrossDissolver_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBD_CrossDissolver();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBD_CrossDissolver::execKillClone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillClone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBD_CrossDissolver::execMakeClone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeClone();
		P_NATIVE_END;
	}
	void UDBD_CrossDissolver::StaticRegisterNativesUDBD_CrossDissolver()
	{
		UClass* Class = UDBD_CrossDissolver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "KillClone", &UDBD_CrossDissolver::execKillClone },
			{ "MakeClone", &UDBD_CrossDissolver::execMakeClone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBD_CrossDissolver_KillClone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBD_CrossDissolver_KillClone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBD_CrossDissolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBD_CrossDissolver_KillClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBD_CrossDissolver, nullptr, "KillClone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBD_CrossDissolver_KillClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBD_CrossDissolver_KillClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBD_CrossDissolver_KillClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBD_CrossDissolver_KillClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBD_CrossDissolver_MakeClone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBD_CrossDissolver_MakeClone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBD_CrossDissolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBD_CrossDissolver_MakeClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBD_CrossDissolver, nullptr, "MakeClone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBD_CrossDissolver_MakeClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBD_CrossDissolver_MakeClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBD_CrossDissolver_MakeClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBD_CrossDissolver_MakeClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBD_CrossDissolver_NoRegister()
	{
		return UDBD_CrossDissolver::StaticClass();
	}
	struct Z_Construct_UClass_UDBD_CrossDissolver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClonedSkeletalMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClonedSkeletalMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClonedSkeletalMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BaseSkeletalMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseSkeletalMesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMaterials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBD_CrossDissolver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBD_CrossDissolver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBD_CrossDissolver_KillClone, "KillClone" }, // 4156956411
		{ &Z_Construct_UFunction_UDBD_CrossDissolver_MakeClone, "MakeClone" }, // 796476898
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBD_CrossDissolver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBD_CrossDissolver.h" },
		{ "ModuleRelativePath", "Public/DBD_CrossDissolver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_ClonedSkeletalMeshes_MetaData[] = {
		{ "Category", "DBD_CrossDissolver" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBD_CrossDissolver.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_ClonedSkeletalMeshes = { "ClonedSkeletalMeshes", nullptr, (EPropertyFlags)0x001000800000001c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBD_CrossDissolver, ClonedSkeletalMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_ClonedSkeletalMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_ClonedSkeletalMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_ClonedSkeletalMeshes_Inner = { "ClonedSkeletalMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_BaseSkeletalMesh_MetaData[] = {
		{ "Category", "DBD_CrossDissolver" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBD_CrossDissolver.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_BaseSkeletalMesh = { "BaseSkeletalMesh", nullptr, (EPropertyFlags)0x001000800000001c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBD_CrossDissolver, BaseSkeletalMesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_BaseSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_BaseSkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_BaseSkeletalMesh_Inner = { "BaseSkeletalMesh", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_NewMaterials_MetaData[] = {
		{ "Category", "DBD_CrossDissolver" },
		{ "ModuleRelativePath", "Public/DBD_CrossDissolver.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_NewMaterials = { "NewMaterials", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBD_CrossDissolver, NewMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_NewMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_NewMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_NewMaterials_Inner = { "NewMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBD_CrossDissolver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_ClonedSkeletalMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_ClonedSkeletalMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_BaseSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_BaseSkeletalMesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_NewMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBD_CrossDissolver_Statics::NewProp_NewMaterials_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBD_CrossDissolver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBD_CrossDissolver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBD_CrossDissolver_Statics::ClassParams = {
		&UDBD_CrossDissolver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBD_CrossDissolver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBD_CrossDissolver_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBD_CrossDissolver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBD_CrossDissolver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBD_CrossDissolver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBD_CrossDissolver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBD_CrossDissolver, 3810200530);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBD_CrossDissolver>()
	{
		return UDBD_CrossDissolver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBD_CrossDissolver(Z_Construct_UClass_UDBD_CrossDissolver, &UDBD_CrossDissolver::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBD_CrossDissolver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBD_CrossDissolver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
