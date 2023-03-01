// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/OuterlineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOuterlineComponent() {}
// Cross Module References
	GFXUTILITIES_API UClass* Z_Construct_UClass_UOuterlineComponent_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UOuterlineComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOuterlineComponent::execSetIntensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_intensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntensity(Z_Param_intensity);
		P_NATIVE_END;
	}
	void UOuterlineComponent::StaticRegisterNativesUOuterlineComponent()
	{
		UClass* Class = UOuterlineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetIntensity", &UOuterlineComponent::execSetIntensity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOuterlineComponent_SetIntensity_Statics
	{
		struct OuterlineComponent_eventSetIntensity_Parms
		{
			float intensity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_intensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOuterlineComponent_SetIntensity_Statics::NewProp_intensity = { "intensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OuterlineComponent_eventSetIntensity_Parms, intensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOuterlineComponent_SetIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOuterlineComponent_SetIntensity_Statics::NewProp_intensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOuterlineComponent_SetIntensity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OuterlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOuterlineComponent_SetIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOuterlineComponent, nullptr, "SetIntensity", nullptr, nullptr, sizeof(OuterlineComponent_eventSetIntensity_Parms), Z_Construct_UFunction_UOuterlineComponent_SetIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOuterlineComponent_SetIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOuterlineComponent_SetIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOuterlineComponent_SetIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOuterlineComponent_SetIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOuterlineComponent_SetIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOuterlineComponent_NoRegister()
	{
		return UOuterlineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOuterlineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__overlaySkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__overlaySkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customDepthSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__customDepthSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cloneTranslucentMaterialDynamic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cloneTranslucentMaterialDynamic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cloneCustomDepthMaterialDynamic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cloneCustomDepthMaterialDynamic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloneTranslucentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloneTranslucentMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloneCustomDepthMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloneCustomDepthMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOuterlineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOuterlineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOuterlineComponent_SetIntensity, "SetIntensity" }, // 1831051157
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOuterlineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "OuterlineComponent.h" },
		{ "ModuleRelativePath", "Public/OuterlineComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__overlaySkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OuterlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__overlaySkeletalMesh = { "_overlaySkeletalMesh", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOuterlineComponent, _overlaySkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__overlaySkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__overlaySkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__customDepthSkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OuterlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__customDepthSkeletalMesh = { "_customDepthSkeletalMesh", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOuterlineComponent, _customDepthSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__customDepthSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__customDepthSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__cloneTranslucentMaterialDynamic_MetaData[] = {
		{ "ModuleRelativePath", "Public/OuterlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__cloneTranslucentMaterialDynamic = { "_cloneTranslucentMaterialDynamic", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOuterlineComponent, _cloneTranslucentMaterialDynamic), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__cloneTranslucentMaterialDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__cloneTranslucentMaterialDynamic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__cloneCustomDepthMaterialDynamic_MetaData[] = {
		{ "ModuleRelativePath", "Public/OuterlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__cloneCustomDepthMaterialDynamic = { "_cloneCustomDepthMaterialDynamic", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOuterlineComponent, _cloneCustomDepthMaterialDynamic), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__cloneCustomDepthMaterialDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__cloneCustomDepthMaterialDynamic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOuterlineComponent_Statics::NewProp_CloneTranslucentMaterial_MetaData[] = {
		{ "Category", "OuterlineComponent" },
		{ "ModuleRelativePath", "Public/OuterlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOuterlineComponent_Statics::NewProp_CloneTranslucentMaterial = { "CloneTranslucentMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOuterlineComponent, CloneTranslucentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOuterlineComponent_Statics::NewProp_CloneTranslucentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOuterlineComponent_Statics::NewProp_CloneTranslucentMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOuterlineComponent_Statics::NewProp_CloneCustomDepthMaterial_MetaData[] = {
		{ "Category", "OuterlineComponent" },
		{ "ModuleRelativePath", "Public/OuterlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOuterlineComponent_Statics::NewProp_CloneCustomDepthMaterial = { "CloneCustomDepthMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOuterlineComponent, CloneCustomDepthMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOuterlineComponent_Statics::NewProp_CloneCustomDepthMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOuterlineComponent_Statics::NewProp_CloneCustomDepthMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOuterlineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__overlaySkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__customDepthSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__cloneTranslucentMaterialDynamic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOuterlineComponent_Statics::NewProp__cloneCustomDepthMaterialDynamic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOuterlineComponent_Statics::NewProp_CloneTranslucentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOuterlineComponent_Statics::NewProp_CloneCustomDepthMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOuterlineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOuterlineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOuterlineComponent_Statics::ClassParams = {
		&UOuterlineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOuterlineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOuterlineComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOuterlineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOuterlineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOuterlineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOuterlineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOuterlineComponent, 2141283718);
	template<> GFXUTILITIES_API UClass* StaticClass<UOuterlineComponent>()
	{
		return UOuterlineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOuterlineComponent(Z_Construct_UClass_UOuterlineComponent, &UOuterlineComponent::StaticClass, TEXT("/Script/GFXUtilities"), TEXT("UOuterlineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOuterlineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
