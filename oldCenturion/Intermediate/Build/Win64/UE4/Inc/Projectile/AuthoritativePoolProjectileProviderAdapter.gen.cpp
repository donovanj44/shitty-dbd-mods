// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Projectile/Public/AuthoritativePoolProjectileProviderAdapter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuthoritativePoolProjectileProviderAdapter() {}
// Cross Module References
	PROJECTILE_API UClass* Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_NoRegister();
	PROJECTILE_API UClass* Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Projectile();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister();
	PROJECTILE_API UClass* Z_Construct_UClass_UProjectileProvider_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAuthoritativePoolProjectileProviderAdapter::execInit)
	{
		P_GET_OBJECT(UAuthoritativeActorPoolComponent,Z_Param_pool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_pool);
		P_NATIVE_END;
	}
	void UAuthoritativePoolProjectileProviderAdapter::StaticRegisterNativesUAuthoritativePoolProjectileProviderAdapter()
	{
		UClass* Class = UAuthoritativePoolProjectileProviderAdapter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UAuthoritativePoolProjectileProviderAdapter::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuthoritativePoolProjectileProviderAdapter_Init_Statics
	{
		struct AuthoritativePoolProjectileProviderAdapter_eventInit_Parms
		{
			UAuthoritativeActorPoolComponent* pool;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthoritativePoolProjectileProviderAdapter_Init_Statics::NewProp_pool_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuthoritativePoolProjectileProviderAdapter_Init_Statics::NewProp_pool = { "pool", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthoritativePoolProjectileProviderAdapter_eventInit_Parms, pool), Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAuthoritativePoolProjectileProviderAdapter_Init_Statics::NewProp_pool_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativePoolProjectileProviderAdapter_Init_Statics::NewProp_pool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuthoritativePoolProjectileProviderAdapter_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthoritativePoolProjectileProviderAdapter_Init_Statics::NewProp_pool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthoritativePoolProjectileProviderAdapter_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AuthoritativePoolProjectileProviderAdapter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuthoritativePoolProjectileProviderAdapter_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter, nullptr, "Init", nullptr, nullptr, sizeof(AuthoritativePoolProjectileProviderAdapter_eventInit_Parms), Z_Construct_UFunction_UAuthoritativePoolProjectileProviderAdapter_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativePoolProjectileProviderAdapter_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuthoritativePoolProjectileProviderAdapter_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativePoolProjectileProviderAdapter_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuthoritativePoolProjectileProviderAdapter_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuthoritativePoolProjectileProviderAdapter_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_NoRegister()
	{
		return UAuthoritativePoolProjectileProviderAdapter::StaticClass();
	}
	struct Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Projectile,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuthoritativePoolProjectileProviderAdapter_Init, "Init" }, // 253410456
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AuthoritativePoolProjectileProviderAdapter.h" },
		{ "ModuleRelativePath", "Public/AuthoritativePoolProjectileProviderAdapter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics::NewProp__pool_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AuthoritativePoolProjectileProviderAdapter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics::NewProp__pool = { "_pool", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAuthoritativePoolProjectileProviderAdapter, _pool), Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics::NewProp__pool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics::NewProp__pool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics::NewProp__pool,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UProjectileProvider_NoRegister, (int32)VTABLE_OFFSET(UAuthoritativePoolProjectileProviderAdapter, IProjectileProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuthoritativePoolProjectileProviderAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics::ClassParams = {
		&UAuthoritativePoolProjectileProviderAdapter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAuthoritativePoolProjectileProviderAdapter, 1284393651);
	template<> PROJECTILE_API UClass* StaticClass<UAuthoritativePoolProjectileProviderAdapter>()
	{
		return UAuthoritativePoolProjectileProviderAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAuthoritativePoolProjectileProviderAdapter(Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter, &UAuthoritativePoolProjectileProviderAdapter::StaticClass, TEXT("/Script/Projectile"), TEXT("UAuthoritativePoolProjectileProviderAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuthoritativePoolProjectileProviderAdapter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
