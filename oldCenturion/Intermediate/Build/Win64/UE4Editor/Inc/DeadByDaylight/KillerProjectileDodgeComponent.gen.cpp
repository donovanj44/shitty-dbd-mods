// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillerProjectileDodgeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerProjectileDodgeComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerProjectileDodgeComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerProjectileDodgeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AKillerProjectile_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UKillerProjectileDodgeComponent::execOnKillerProjectileFinished)
	{
		P_GET_OBJECT(AActor,Z_Param_survivorHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerProjectileFinished(Z_Param_survivorHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKillerProjectileDodgeComponent::execOnKillerProjectileFinishedWithoutCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerProjectileFinishedWithoutCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKillerProjectileDodgeComponent::execOnKillerProjectileLaunched)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerProjectileLaunched();
		P_NATIVE_END;
	}
	void UKillerProjectileDodgeComponent::StaticRegisterNativesUKillerProjectileDodgeComponent()
	{
		UClass* Class = UKillerProjectileDodgeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnKillerProjectileFinished", &UKillerProjectileDodgeComponent::execOnKillerProjectileFinished },
			{ "OnKillerProjectileFinishedWithoutCollision", &UKillerProjectileDodgeComponent::execOnKillerProjectileFinishedWithoutCollision },
			{ "OnKillerProjectileLaunched", &UKillerProjectileDodgeComponent::execOnKillerProjectileLaunched },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinished_Statics
	{
		struct KillerProjectileDodgeComponent_eventOnKillerProjectileFinished_Parms
		{
			AActor* survivorHit;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivorHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinished_Statics::NewProp_survivorHit = { "survivorHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerProjectileDodgeComponent_eventOnKillerProjectileFinished_Parms, survivorHit), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinished_Statics::NewProp_survivorHit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerProjectileDodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerProjectileDodgeComponent, nullptr, "OnKillerProjectileFinished", nullptr, nullptr, sizeof(KillerProjectileDodgeComponent_eventOnKillerProjectileFinished_Parms), Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinishedWithoutCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinishedWithoutCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerProjectileDodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinishedWithoutCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerProjectileDodgeComponent, nullptr, "OnKillerProjectileFinishedWithoutCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinishedWithoutCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinishedWithoutCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinishedWithoutCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinishedWithoutCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileLaunched_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileLaunched_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerProjectileDodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileLaunched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerProjectileDodgeComponent, nullptr, "OnKillerProjectileLaunched", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileLaunched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileLaunched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileLaunched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileLaunched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKillerProjectileDodgeComponent_NoRegister()
	{
		return UKillerProjectileDodgeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__proximitySurvivors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__proximitySurvivors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__proximitySurvivors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killerProjectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinished, "OnKillerProjectileFinished" }, // 236603759
		{ &Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileFinishedWithoutCollision, "OnKillerProjectileFinishedWithoutCollision" }, // 325963238
		{ &Z_Construct_UFunction_UKillerProjectileDodgeComponent_OnKillerProjectileLaunched, "OnKillerProjectileLaunched" }, // 1430197715
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KillerProjectileDodgeComponent.h" },
		{ "ModuleRelativePath", "Public/KillerProjectileDodgeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::NewProp__proximitySurvivors_MetaData[] = {
		{ "ModuleRelativePath", "Public/KillerProjectileDodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::NewProp__proximitySurvivors = { "_proximitySurvivors", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerProjectileDodgeComponent, _proximitySurvivors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::NewProp__proximitySurvivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::NewProp__proximitySurvivors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::NewProp__proximitySurvivors_Inner = { "_proximitySurvivors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::NewProp__killerProjectile_MetaData[] = {
		{ "ModuleRelativePath", "Public/KillerProjectileDodgeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::NewProp__killerProjectile = { "_killerProjectile", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerProjectileDodgeComponent, _killerProjectile), Z_Construct_UClass_AKillerProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::NewProp__killerProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::NewProp__killerProjectile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::NewProp__proximitySurvivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::NewProp__proximitySurvivors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::NewProp__killerProjectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerProjectileDodgeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::ClassParams = {
		&UKillerProjectileDodgeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerProjectileDodgeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerProjectileDodgeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerProjectileDodgeComponent, 2140524407);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UKillerProjectileDodgeComponent>()
	{
		return UKillerProjectileDodgeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerProjectileDodgeComponent(Z_Construct_UClass_UKillerProjectileDodgeComponent, &UKillerProjectileDodgeComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UKillerProjectileDodgeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerProjectileDodgeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
