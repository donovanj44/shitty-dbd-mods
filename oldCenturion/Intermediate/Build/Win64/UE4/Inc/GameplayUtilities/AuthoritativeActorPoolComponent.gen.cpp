// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/AuthoritativeActorPoolComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuthoritativeActorPoolComponent() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UAuthoritativeActorPoolComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UAuthoritativeActorPoolComponent::execAuthority_OnActorDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_destroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnActorDestroyed(Z_Param_destroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuthoritativeActorPoolComponent::execOnRep_Pool)
	{
		P_GET_TARRAY(AActor*,Z_Param_previousPool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Pool(Z_Param_previousPool);
		P_NATIVE_END;
	}
	void UAuthoritativeActorPoolComponent::StaticRegisterNativesUAuthoritativeActorPoolComponent()
	{
		UClass* Class = UAuthoritativeActorPoolComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnActorDestroyed", &UAuthoritativeActorPoolComponent::execAuthority_OnActorDestroyed },
			{ "OnRep_Pool", &UAuthoritativeActorPoolComponent::execOnRep_Pool },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Statics
	{
		struct AuthoritativeActorPoolComponent_eventAuthority_OnActorDestroyed_Parms
		{
			AActor* destroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Statics::NewProp_destroyedActor = { "destroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthoritativeActorPoolComponent_eventAuthority_OnActorDestroyed_Parms, destroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Statics::NewProp_destroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AuthoritativeActorPoolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuthoritativeActorPoolComponent, nullptr, "Authority_OnActorDestroyed", nullptr, nullptr, sizeof(AuthoritativeActorPoolComponent_eventAuthority_OnActorDestroyed_Parms), Z_Construct_UFunction_UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuthoritativeActorPoolComponent_OnRep_Pool_Statics
	{
		struct AuthoritativeActorPoolComponent_eventOnRep_Pool_Parms
		{
			TArray<AActor*> previousPool;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_previousPool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_previousPool_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAuthoritativeActorPoolComponent_OnRep_Pool_Statics::NewProp_previousPool = { "previousPool", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthoritativeActorPoolComponent_eventOnRep_Pool_Parms, previousPool), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuthoritativeActorPoolComponent_OnRep_Pool_Statics::NewProp_previousPool_Inner = { "previousPool", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuthoritativeActorPoolComponent_OnRep_Pool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthoritativeActorPoolComponent_OnRep_Pool_Statics::NewProp_previousPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthoritativeActorPoolComponent_OnRep_Pool_Statics::NewProp_previousPool_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthoritativeActorPoolComponent_OnRep_Pool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AuthoritativeActorPoolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuthoritativeActorPoolComponent_OnRep_Pool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuthoritativeActorPoolComponent, nullptr, "OnRep_Pool", nullptr, nullptr, sizeof(AuthoritativeActorPoolComponent_eventOnRep_Pool_Parms), Z_Construct_UFunction_UAuthoritativeActorPoolComponent_OnRep_Pool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativeActorPoolComponent_OnRep_Pool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuthoritativeActorPoolComponent_OnRep_Pool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativeActorPoolComponent_OnRep_Pool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuthoritativeActorPoolComponent_OnRep_Pool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuthoritativeActorPoolComponent_OnRep_Pool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister()
	{
		return UAuthoritativeActorPoolComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__size_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__actorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__actorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed, "Authority_OnActorDestroyed" }, // 3273578198
		{ &Z_Construct_UFunction_UAuthoritativeActorPoolComponent_OnRep_Pool, "OnRep_Pool" }, // 3108933535
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AuthoritativeActorPoolComponent.h" },
		{ "ModuleRelativePath", "Public/AuthoritativeActorPoolComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::NewProp__pool_MetaData[] = {
		{ "ModuleRelativePath", "Public/AuthoritativeActorPoolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::NewProp__pool = { "_pool", "OnRep_Pool", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAuthoritativeActorPoolComponent, _pool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::NewProp__pool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::NewProp__pool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::NewProp__pool_Inner = { "_pool", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::NewProp__size_MetaData[] = {
		{ "Category", "AuthoritativeActorPoolComponent" },
		{ "ModuleRelativePath", "Public/AuthoritativeActorPoolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::NewProp__size = { "_size", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAuthoritativeActorPoolComponent, _size), METADATA_PARAMS(Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::NewProp__size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::NewProp__size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::NewProp__actorClass_MetaData[] = {
		{ "Category", "AuthoritativeActorPoolComponent" },
		{ "ModuleRelativePath", "Public/AuthoritativeActorPoolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::NewProp__actorClass = { "_actorClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAuthoritativeActorPoolComponent, _actorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::NewProp__actorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::NewProp__actorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::NewProp__pool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::NewProp__pool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::NewProp__size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::NewProp__actorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuthoritativeActorPoolComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::ClassParams = {
		&UAuthoritativeActorPoolComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAuthoritativeActorPoolComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAuthoritativeActorPoolComponent, 3929271073);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UAuthoritativeActorPoolComponent>()
	{
		return UAuthoritativeActorPoolComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAuthoritativeActorPoolComponent(Z_Construct_UClass_UAuthoritativeActorPoolComponent, &UAuthoritativeActorPoolComponent::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UAuthoritativeActorPoolComponent"), false, nullptr, nullptr, nullptr);

	void UAuthoritativeActorPoolComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__pool(TEXT("_pool"));

		const bool bIsValid = true
			&& Name__pool == ClassReps[(int32)ENetFields_Private::_pool].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAuthoritativeActorPoolComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuthoritativeActorPoolComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
