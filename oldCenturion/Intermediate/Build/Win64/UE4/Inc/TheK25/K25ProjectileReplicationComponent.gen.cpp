// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ProjectileReplicationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ProjectileReplicationComponent() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25ProjectileReplicationComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ProjectileReplicationComponent();
	PROJECTILE_API UClass* Z_Construct_UClass_UBaseProjectileReplicationComponent();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FK25ProjectileDeactivationData();
	THEK25_API UClass* Z_Construct_UClass_AK25Projectile_NoRegister();
	PROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchInfo();
	THEK25_API UClass* Z_Construct_UClass_AK25Chain_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK25ProjectileReplicationComponent::execMulticast_DeactivateProjectile)
	{
		P_GET_OBJECT(AK25Projectile,Z_Param_projectile);
		P_GET_STRUCT(FK25ProjectileDeactivationData,Z_Param_deactivationData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DeactivateProjectile_Implementation(Z_Param_projectile,Z_Param_deactivationData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ProjectileReplicationComponent::execMulticast_SetAttachedChain)
	{
		P_GET_OBJECT(AK25Projectile,Z_Param_projectile);
		P_GET_OBJECT(AK25Chain,Z_Param_chainToAttach);
		P_GET_STRUCT(FLaunchInfo,Z_Param_launchInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetAttachedChain_Implementation(Z_Param_projectile,Z_Param_chainToAttach,Z_Param_launchInfo);
		P_NATIVE_END;
	}
	static FName NAME_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile = FName(TEXT("Multicast_DeactivateProjectile"));
	void UK25ProjectileReplicationComponent::Multicast_DeactivateProjectile(AK25Projectile* projectile, FK25ProjectileDeactivationData const& deactivationData)
	{
		K25ProjectileReplicationComponent_eventMulticast_DeactivateProjectile_Parms Parms;
		Parms.projectile=projectile;
		Parms.deactivationData=deactivationData;
		ProcessEvent(FindFunctionChecked(NAME_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile),&Parms);
	}
	static FName NAME_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain = FName(TEXT("Multicast_SetAttachedChain"));
	void UK25ProjectileReplicationComponent::Multicast_SetAttachedChain(AK25Projectile* projectile, AK25Chain* chainToAttach, FLaunchInfo launchInfo)
	{
		K25ProjectileReplicationComponent_eventMulticast_SetAttachedChain_Parms Parms;
		Parms.projectile=projectile;
		Parms.chainToAttach=chainToAttach;
		Parms.launchInfo=launchInfo;
		ProcessEvent(FindFunctionChecked(NAME_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain),&Parms);
	}
	void UK25ProjectileReplicationComponent::StaticRegisterNativesUK25ProjectileReplicationComponent()
	{
		UClass* Class = UK25ProjectileReplicationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_DeactivateProjectile", &UK25ProjectileReplicationComponent::execMulticast_DeactivateProjectile },
			{ "Multicast_SetAttachedChain", &UK25ProjectileReplicationComponent::execMulticast_SetAttachedChain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deactivationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_deactivationData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Statics::NewProp_deactivationData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Statics::NewProp_deactivationData = { "deactivationData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ProjectileReplicationComponent_eventMulticast_DeactivateProjectile_Parms, deactivationData), Z_Construct_UScriptStruct_FK25ProjectileDeactivationData, METADATA_PARAMS(Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Statics::NewProp_deactivationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Statics::NewProp_deactivationData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ProjectileReplicationComponent_eventMulticast_DeactivateProjectile_Parms, projectile), Z_Construct_UClass_AK25Projectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Statics::NewProp_deactivationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Statics::NewProp_projectile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ProjectileReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ProjectileReplicationComponent, nullptr, "Multicast_DeactivateProjectile", nullptr, nullptr, sizeof(K25ProjectileReplicationComponent_eventMulticast_DeactivateProjectile_Parms), Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_launchInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chainToAttach;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain_Statics::NewProp_launchInfo = { "launchInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ProjectileReplicationComponent_eventMulticast_SetAttachedChain_Parms, launchInfo), Z_Construct_UScriptStruct_FLaunchInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain_Statics::NewProp_chainToAttach = { "chainToAttach", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ProjectileReplicationComponent_eventMulticast_SetAttachedChain_Parms, chainToAttach), Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ProjectileReplicationComponent_eventMulticast_SetAttachedChain_Parms, projectile), Z_Construct_UClass_AK25Projectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain_Statics::NewProp_launchInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain_Statics::NewProp_chainToAttach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain_Statics::NewProp_projectile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ProjectileReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ProjectileReplicationComponent, nullptr, "Multicast_SetAttachedChain", nullptr, nullptr, sizeof(K25ProjectileReplicationComponent_eventMulticast_SetAttachedChain_Parms), Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25ProjectileReplicationComponent_NoRegister()
	{
		return UK25ProjectileReplicationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK25ProjectileReplicationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25ProjectileReplicationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseProjectileReplicationComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25ProjectileReplicationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile, "Multicast_DeactivateProjectile" }, // 147579373
		{ &Z_Construct_UFunction_UK25ProjectileReplicationComponent_Multicast_SetAttachedChain, "Multicast_SetAttachedChain" }, // 4191667972
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ProjectileReplicationComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25ProjectileReplicationComponent.h" },
		{ "ModuleRelativePath", "Public/K25ProjectileReplicationComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25ProjectileReplicationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25ProjectileReplicationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25ProjectileReplicationComponent_Statics::ClassParams = {
		&UK25ProjectileReplicationComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK25ProjectileReplicationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ProjectileReplicationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25ProjectileReplicationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25ProjectileReplicationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25ProjectileReplicationComponent, 1303430924);
	template<> THEK25_API UClass* StaticClass<UK25ProjectileReplicationComponent>()
	{
		return UK25ProjectileReplicationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25ProjectileReplicationComponent(Z_Construct_UClass_UK25ProjectileReplicationComponent, &UK25ProjectileReplicationComponent::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25ProjectileReplicationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25ProjectileReplicationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
