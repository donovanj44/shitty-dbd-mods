// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/MaterialHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialHelper() {}
// Cross Module References
	GFXUTILITIES_API UClass* Z_Construct_UClass_UMaterialHelper_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UMaterialHelper();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UBatchMeshCommands();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMaterialHelper::execRefreshMesh)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_mc);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshMesh(Z_Param_mc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialHelper::execRefreshMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshMeshes();
		P_NATIVE_END;
	}
	void UMaterialHelper::StaticRegisterNativesUMaterialHelper()
	{
		UClass* Class = UMaterialHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RefreshMesh", &UMaterialHelper::execRefreshMesh },
			{ "RefreshMeshes", &UMaterialHelper::execRefreshMeshes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialHelper_RefreshMesh_Statics
	{
		struct MaterialHelper_eventRefreshMesh_Parms
		{
			UMeshComponent* mc;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialHelper_RefreshMesh_Statics::NewProp_mc_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialHelper_RefreshMesh_Statics::NewProp_mc = { "mc", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialHelper_eventRefreshMesh_Parms, mc), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMaterialHelper_RefreshMesh_Statics::NewProp_mc_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialHelper_RefreshMesh_Statics::NewProp_mc_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialHelper_RefreshMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialHelper_RefreshMesh_Statics::NewProp_mc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialHelper_RefreshMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialHelper_RefreshMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialHelper, nullptr, "RefreshMesh", nullptr, nullptr, sizeof(MaterialHelper_eventRefreshMesh_Parms), Z_Construct_UFunction_UMaterialHelper_RefreshMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialHelper_RefreshMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialHelper_RefreshMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialHelper_RefreshMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialHelper_RefreshMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialHelper_RefreshMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialHelper_RefreshMeshes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialHelper_RefreshMeshes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialHelper_RefreshMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialHelper, nullptr, "RefreshMeshes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialHelper_RefreshMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialHelper_RefreshMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialHelper_RefreshMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialHelper_RefreshMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMaterialHelper_NoRegister()
	{
		return UMaterialHelper::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBatchMeshCommands,
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialHelper_RefreshMesh, "RefreshMesh" }, // 62184647
		{ &Z_Construct_UFunction_UMaterialHelper_RefreshMeshes, "RefreshMeshes" }, // 2155150681
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialHelper_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MaterialHelper.h" },
		{ "ModuleRelativePath", "Public/MaterialHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialHelper_Statics::ClassParams = {
		&UMaterialHelper::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialHelper, 1930694083);
	template<> GFXUTILITIES_API UClass* StaticClass<UMaterialHelper>()
	{
		return UMaterialHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialHelper(Z_Construct_UClass_UMaterialHelper, &UMaterialHelper::StaticClass, TEXT("/Script/GFXUtilities"), TEXT("UMaterialHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
