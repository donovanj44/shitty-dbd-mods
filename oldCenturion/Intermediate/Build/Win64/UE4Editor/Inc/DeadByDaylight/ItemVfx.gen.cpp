// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ItemVfx.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemVfx() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AItemVfx_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AItemVfx();
	VFXUTILITIES_API UClass* Z_Construct_UClass_ABaseVFX();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AItemVfx::execAddParticleSystemComponent)
	{
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_particleSystemComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddParticleSystemComponent(Z_Param_particleSystemComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemVfx::execClearParticleSystems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearParticleSystems();
		P_NATIVE_END;
	}
	static FName NAME_AItemVfx_AttachToSkeletalMesh = FName(TEXT("AttachToSkeletalMesh"));
	void AItemVfx::AttachToSkeletalMesh(USkeletalMeshComponent* SkeletonPart)
	{
		ItemVfx_eventAttachToSkeletalMesh_Parms Parms;
		Parms.SkeletonPart=SkeletonPart;
		ProcessEvent(FindFunctionChecked(NAME_AItemVfx_AttachToSkeletalMesh),&Parms);
	}
	static FName NAME_AItemVfx_OnAttackBegin = FName(TEXT("OnAttackBegin"));
	void AItemVfx::OnAttackBegin()
	{
		ProcessEvent(FindFunctionChecked(NAME_AItemVfx_OnAttackBegin),NULL);
	}
	static FName NAME_AItemVfx_OnAttackEnd = FName(TEXT("OnAttackEnd"));
	void AItemVfx::OnAttackEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_AItemVfx_OnAttackEnd),NULL);
	}
	void AItemVfx::StaticRegisterNativesAItemVfx()
	{
		UClass* Class = AItemVfx::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddParticleSystemComponent", &AItemVfx::execAddParticleSystemComponent },
			{ "ClearParticleSystems", &AItemVfx::execClearParticleSystems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItemVfx_AddParticleSystemComponent_Statics
	{
		struct ItemVfx_eventAddParticleSystemComponent_Parms
		{
			UParticleSystemComponent* particleSystemComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_particleSystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_particleSystemComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemVfx_AddParticleSystemComponent_Statics::NewProp_particleSystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemVfx_AddParticleSystemComponent_Statics::NewProp_particleSystemComponent = { "particleSystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemVfx_eventAddParticleSystemComponent_Parms, particleSystemComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AItemVfx_AddParticleSystemComponent_Statics::NewProp_particleSystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemVfx_AddParticleSystemComponent_Statics::NewProp_particleSystemComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemVfx_AddParticleSystemComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemVfx_AddParticleSystemComponent_Statics::NewProp_particleSystemComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemVfx_AddParticleSystemComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemVfx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemVfx_AddParticleSystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemVfx, nullptr, "AddParticleSystemComponent", nullptr, nullptr, sizeof(ItemVfx_eventAddParticleSystemComponent_Parms), Z_Construct_UFunction_AItemVfx_AddParticleSystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemVfx_AddParticleSystemComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemVfx_AddParticleSystemComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemVfx_AddParticleSystemComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemVfx_AddParticleSystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemVfx_AddParticleSystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemVfx_AttachToSkeletalMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletonPart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemVfx_AttachToSkeletalMesh_Statics::NewProp_SkeletonPart_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemVfx_AttachToSkeletalMesh_Statics::NewProp_SkeletonPart = { "SkeletonPart", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemVfx_eventAttachToSkeletalMesh_Parms, SkeletonPart), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AItemVfx_AttachToSkeletalMesh_Statics::NewProp_SkeletonPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemVfx_AttachToSkeletalMesh_Statics::NewProp_SkeletonPart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemVfx_AttachToSkeletalMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemVfx_AttachToSkeletalMesh_Statics::NewProp_SkeletonPart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemVfx_AttachToSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemVfx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemVfx_AttachToSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemVfx, nullptr, "AttachToSkeletalMesh", nullptr, nullptr, sizeof(ItemVfx_eventAttachToSkeletalMesh_Parms), Z_Construct_UFunction_AItemVfx_AttachToSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemVfx_AttachToSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemVfx_AttachToSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemVfx_AttachToSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemVfx_AttachToSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemVfx_AttachToSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemVfx_ClearParticleSystems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemVfx_ClearParticleSystems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemVfx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemVfx_ClearParticleSystems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemVfx, nullptr, "ClearParticleSystems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemVfx_ClearParticleSystems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemVfx_ClearParticleSystems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemVfx_ClearParticleSystems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemVfx_ClearParticleSystems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemVfx_OnAttackBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemVfx_OnAttackBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemVfx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemVfx_OnAttackBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemVfx, nullptr, "OnAttackBegin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemVfx_OnAttackBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemVfx_OnAttackBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemVfx_OnAttackBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemVfx_OnAttackBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemVfx_OnAttackEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemVfx_OnAttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemVfx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemVfx_OnAttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemVfx, nullptr, "OnAttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemVfx_OnAttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemVfx_OnAttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemVfx_OnAttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemVfx_OnAttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AItemVfx_NoRegister()
	{
		return AItemVfx::StaticClass();
	}
	struct Z_Construct_UClass_AItemVfx_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__particleSystems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__particleSystems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__particleSystems_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemVfx_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseVFX,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItemVfx_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemVfx_AddParticleSystemComponent, "AddParticleSystemComponent" }, // 3320311763
		{ &Z_Construct_UFunction_AItemVfx_AttachToSkeletalMesh, "AttachToSkeletalMesh" }, // 2293130120
		{ &Z_Construct_UFunction_AItemVfx_ClearParticleSystems, "ClearParticleSystems" }, // 4227391083
		{ &Z_Construct_UFunction_AItemVfx_OnAttackBegin, "OnAttackBegin" }, // 3645720892
		{ &Z_Construct_UFunction_AItemVfx_OnAttackEnd, "OnAttackEnd" }, // 979539473
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemVfx_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemVfx.h" },
		{ "ModuleRelativePath", "Public/ItemVfx.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemVfx_Statics::NewProp__particleSystems_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ItemVfx.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AItemVfx_Statics::NewProp__particleSystems = { "_particleSystems", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemVfx, _particleSystems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AItemVfx_Statics::NewProp__particleSystems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemVfx_Statics::NewProp__particleSystems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemVfx_Statics::NewProp__particleSystems_Inner = { "_particleSystems", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemVfx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemVfx_Statics::NewProp__particleSystems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemVfx_Statics::NewProp__particleSystems_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemVfx_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemVfx>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItemVfx_Statics::ClassParams = {
		&AItemVfx::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItemVfx_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItemVfx_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItemVfx_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItemVfx_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItemVfx()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItemVfx_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItemVfx, 1362633532);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AItemVfx>()
	{
		return AItemVfx::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItemVfx(Z_Construct_UClass_AItemVfx, &AItemVfx::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AItemVfx"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemVfx);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
