// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25UncontrolledProjectileReplicationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25UncontrolledProjectileReplicationComponent() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25UncontrolledProjectileReplicationComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25UncontrolledProjectileReplicationComponent();
	THEK25_API UClass* Z_Construct_UClass_UK25ProjectileReplicationComponent();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	PROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchInfo();
	THEK25_API UClass* Z_Construct_UClass_AK25UncontrolledProjectile_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK25UncontrolledProjectileReplicationComponent::execMulticast_LaunchProjectile)
	{
		P_GET_OBJECT(AK25UncontrolledProjectile,Z_Param_projectile);
		P_GET_STRUCT(FLaunchInfo,Z_Param_launchInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_LaunchProjectile_Implementation(Z_Param_projectile,Z_Param_launchInfo);
		P_NATIVE_END;
	}
	static FName NAME_UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile = FName(TEXT("Multicast_LaunchProjectile"));
	void UK25UncontrolledProjectileReplicationComponent::Multicast_LaunchProjectile(AK25UncontrolledProjectile* projectile, FLaunchInfo launchInfo)
	{
		K25UncontrolledProjectileReplicationComponent_eventMulticast_LaunchProjectile_Parms Parms;
		Parms.projectile=projectile;
		Parms.launchInfo=launchInfo;
		ProcessEvent(FindFunctionChecked(NAME_UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile),&Parms);
	}
	void UK25UncontrolledProjectileReplicationComponent::StaticRegisterNativesUK25UncontrolledProjectileReplicationComponent()
	{
		UClass* Class = UK25UncontrolledProjectileReplicationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_LaunchProjectile", &UK25UncontrolledProjectileReplicationComponent::execMulticast_LaunchProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_launchInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile_Statics::NewProp_launchInfo = { "launchInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25UncontrolledProjectileReplicationComponent_eventMulticast_LaunchProjectile_Parms, launchInfo), Z_Construct_UScriptStruct_FLaunchInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25UncontrolledProjectileReplicationComponent_eventMulticast_LaunchProjectile_Parms, projectile), Z_Construct_UClass_AK25UncontrolledProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile_Statics::NewProp_launchInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile_Statics::NewProp_projectile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25UncontrolledProjectileReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25UncontrolledProjectileReplicationComponent, nullptr, "Multicast_LaunchProjectile", nullptr, nullptr, sizeof(K25UncontrolledProjectileReplicationComponent_eventMulticast_LaunchProjectile_Parms), Z_Construct_UFunction_UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25UncontrolledProjectileReplicationComponent_NoRegister()
	{
		return UK25UncontrolledProjectileReplicationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK25UncontrolledProjectileReplicationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25UncontrolledProjectileReplicationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK25ProjectileReplicationComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25UncontrolledProjectileReplicationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile, "Multicast_LaunchProjectile" }, // 3404424317
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25UncontrolledProjectileReplicationComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25UncontrolledProjectileReplicationComponent.h" },
		{ "ModuleRelativePath", "Public/K25UncontrolledProjectileReplicationComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25UncontrolledProjectileReplicationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25UncontrolledProjectileReplicationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25UncontrolledProjectileReplicationComponent_Statics::ClassParams = {
		&UK25UncontrolledProjectileReplicationComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25UncontrolledProjectileReplicationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25UncontrolledProjectileReplicationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25UncontrolledProjectileReplicationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25UncontrolledProjectileReplicationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25UncontrolledProjectileReplicationComponent, 3282137130);
	template<> THEK25_API UClass* StaticClass<UK25UncontrolledProjectileReplicationComponent>()
	{
		return UK25UncontrolledProjectileReplicationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25UncontrolledProjectileReplicationComponent(Z_Construct_UClass_UK25UncontrolledProjectileReplicationComponent, &UK25UncontrolledProjectileReplicationComponent::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25UncontrolledProjectileReplicationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25UncontrolledProjectileReplicationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
