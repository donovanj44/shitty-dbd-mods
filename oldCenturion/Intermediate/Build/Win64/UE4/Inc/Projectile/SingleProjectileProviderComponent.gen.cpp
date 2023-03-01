// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Projectile/Public/SingleProjectileProviderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleProjectileProviderComponent() {}
// Cross Module References
	PROJECTILE_API UClass* Z_Construct_UClass_USingleProjectileProviderComponent_NoRegister();
	PROJECTILE_API UClass* Z_Construct_UClass_USingleProjectileProviderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Projectile();
	PROJECTILE_API UClass* Z_Construct_UClass_ABaseProjectile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECTILE_API UClass* Z_Construct_UClass_UProjectileProvider_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USingleProjectileProviderComponent::execOnRep_Projectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Projectile();
		P_NATIVE_END;
	}
	void USingleProjectileProviderComponent::StaticRegisterNativesUSingleProjectileProviderComponent()
	{
		UClass* Class = USingleProjectileProviderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Projectile", &USingleProjectileProviderComponent::execOnRep_Projectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USingleProjectileProviderComponent_OnRep_Projectile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USingleProjectileProviderComponent_OnRep_Projectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SingleProjectileProviderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USingleProjectileProviderComponent_OnRep_Projectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USingleProjectileProviderComponent, nullptr, "OnRep_Projectile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USingleProjectileProviderComponent_OnRep_Projectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USingleProjectileProviderComponent_OnRep_Projectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USingleProjectileProviderComponent_OnRep_Projectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USingleProjectileProviderComponent_OnRep_Projectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USingleProjectileProviderComponent_NoRegister()
	{
		return USingleProjectileProviderComponent::StaticClass();
	}
	struct Z_Construct_UClass_USingleProjectileProviderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__projectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__projectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__projectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USingleProjectileProviderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Projectile,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USingleProjectileProviderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USingleProjectileProviderComponent_OnRep_Projectile, "OnRep_Projectile" }, // 1628625004
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleProjectileProviderComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SingleProjectileProviderComponent.h" },
		{ "ModuleRelativePath", "Public/SingleProjectileProviderComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleProjectileProviderComponent_Statics::NewProp__projectile_MetaData[] = {
		{ "ModuleRelativePath", "Public/SingleProjectileProviderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USingleProjectileProviderComponent_Statics::NewProp__projectile = { "_projectile", "OnRep_Projectile", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USingleProjectileProviderComponent, _projectile), Z_Construct_UClass_ABaseProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USingleProjectileProviderComponent_Statics::NewProp__projectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingleProjectileProviderComponent_Statics::NewProp__projectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleProjectileProviderComponent_Statics::NewProp__projectileClass_MetaData[] = {
		{ "Category", "SingleProjectileProviderComponent" },
		{ "ModuleRelativePath", "Public/SingleProjectileProviderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USingleProjectileProviderComponent_Statics::NewProp__projectileClass = { "_projectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USingleProjectileProviderComponent, _projectileClass), Z_Construct_UClass_ABaseProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USingleProjectileProviderComponent_Statics::NewProp__projectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingleProjectileProviderComponent_Statics::NewProp__projectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USingleProjectileProviderComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleProjectileProviderComponent_Statics::NewProp__projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleProjectileProviderComponent_Statics::NewProp__projectileClass,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USingleProjectileProviderComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UProjectileProvider_NoRegister, (int32)VTABLE_OFFSET(USingleProjectileProviderComponent, IProjectileProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USingleProjectileProviderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleProjectileProviderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USingleProjectileProviderComponent_Statics::ClassParams = {
		&USingleProjectileProviderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USingleProjectileProviderComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USingleProjectileProviderComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USingleProjectileProviderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USingleProjectileProviderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USingleProjectileProviderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USingleProjectileProviderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USingleProjectileProviderComponent, 1113021428);
	template<> PROJECTILE_API UClass* StaticClass<USingleProjectileProviderComponent>()
	{
		return USingleProjectileProviderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USingleProjectileProviderComponent(Z_Construct_UClass_USingleProjectileProviderComponent, &USingleProjectileProviderComponent::StaticClass, TEXT("/Script/Projectile"), TEXT("USingleProjectileProviderComponent"), false, nullptr, nullptr, nullptr);

	void USingleProjectileProviderComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__projectile(TEXT("_projectile"));

		const bool bIsValid = true
			&& Name__projectile == ClassReps[(int32)ENetFields_Private::_projectile].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USingleProjectileProviderComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USingleProjectileProviderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
