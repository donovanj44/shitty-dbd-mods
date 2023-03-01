// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/HarpoonProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHarpoonProjectile() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_AHarpoonProjectile_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_AHarpoonProjectile();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AKillerProjectile();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UPoolableActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHarpoonProjectileMovementComponent_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UGunslingerHarpoon_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHarpoonProjectile::execOnHarpoonStop)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHarpoonStop(Z_Param_Out_result);
		P_NATIVE_END;
	}
	void AHarpoonProjectile::StaticRegisterNativesAHarpoonProjectile()
	{
		UClass* Class = AHarpoonProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHarpoonStop", &AHarpoonProjectile::execOnHarpoonStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHarpoonProjectile_OnHarpoonStop_Statics
	{
		struct HarpoonProjectile_eventOnHarpoonStop_Parms
		{
			FHitResult result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHarpoonProjectile_OnHarpoonStop_Statics::NewProp_result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHarpoonProjectile_OnHarpoonStop_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HarpoonProjectile_eventOnHarpoonStop_Parms, result), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AHarpoonProjectile_OnHarpoonStop_Statics::NewProp_result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHarpoonProjectile_OnHarpoonStop_Statics::NewProp_result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHarpoonProjectile_OnHarpoonStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHarpoonProjectile_OnHarpoonStop_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHarpoonProjectile_OnHarpoonStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HarpoonProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHarpoonProjectile_OnHarpoonStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHarpoonProjectile, nullptr, "OnHarpoonStop", nullptr, nullptr, sizeof(HarpoonProjectile_eventOnHarpoonStop_Parms), Z_Construct_UFunction_AHarpoonProjectile_OnHarpoonStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHarpoonProjectile_OnHarpoonStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHarpoonProjectile_OnHarpoonStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHarpoonProjectile_OnHarpoonStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHarpoonProjectile_OnHarpoonStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHarpoonProjectile_OnHarpoonStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHarpoonProjectile_NoRegister()
	{
		return AHarpoonProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AHarpoonProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__poolableActorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__poolableActorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__skeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__environmentCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__environmentCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__movement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__movement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__launchDistanceFromCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__launchDistanceFromCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHarpoonProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AKillerProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHarpoonProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHarpoonProjectile_OnHarpoonStop, "OnHarpoonStop" }, // 458252128
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HarpoonProjectile.h" },
		{ "ModuleRelativePath", "Public/HarpoonProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__poolableActorComponent_MetaData[] = {
		{ "Category", "HarpoonProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HarpoonProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__poolableActorComponent = { "_poolableActorComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonProjectile, _poolableActorComponent), Z_Construct_UClass_UPoolableActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__poolableActorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__poolableActorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__skeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HarpoonProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HarpoonProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__skeletalMesh = { "_skeletalMesh", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonProjectile, _skeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__skeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__skeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__targetCollider_MetaData[] = {
		{ "Category", "HarpoonProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HarpoonProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__targetCollider = { "_targetCollider", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonProjectile, _targetCollider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__targetCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__targetCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__environmentCollider_MetaData[] = {
		{ "Category", "HarpoonProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HarpoonProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__environmentCollider = { "_environmentCollider", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonProjectile, _environmentCollider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__environmentCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__environmentCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__movement_MetaData[] = {
		{ "Category", "HarpoonProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HarpoonProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__movement = { "_movement", nullptr, (EPropertyFlags)0x00400000000a2009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonProjectile, _movement), Z_Construct_UClass_UHarpoonProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__movement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__launchDistanceFromCamera_MetaData[] = {
		{ "Category", "HarpoonProjectile" },
		{ "ModuleRelativePath", "Public/HarpoonProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__launchDistanceFromCamera = { "_launchDistanceFromCamera", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonProjectile, _launchDistanceFromCamera), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__launchDistanceFromCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__launchDistanceFromCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHarpoonProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__poolableActorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__skeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__targetCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__environmentCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__movement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonProjectile_Statics::NewProp__launchDistanceFromCamera,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHarpoonProjectile_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGunslingerHarpoon_NoRegister, (int32)VTABLE_OFFSET(AHarpoonProjectile, IGunslingerHarpoon), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHarpoonProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHarpoonProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHarpoonProjectile_Statics::ClassParams = {
		&AHarpoonProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHarpoonProjectile_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonProjectile_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHarpoonProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHarpoonProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHarpoonProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHarpoonProjectile, 2009436772);
	template<> THEGUNSLINGER_API UClass* StaticClass<AHarpoonProjectile>()
	{
		return AHarpoonProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHarpoonProjectile(Z_Construct_UClass_AHarpoonProjectile, &AHarpoonProjectile::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("AHarpoonProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHarpoonProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
