// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26FireCrowProjectileInteractionDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26FireCrowProjectileInteractionDefinition() {}
// Cross Module References
	THEK26_API UFunction* Z_Construct_UDelegateFunction_TheK26_K26FireCrowProjectileInteractionDefinitionOnProjectileFired__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	THEK26_API UClass* Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26CooldownInteractionDefinition_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26PathHandlerComponent_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26AmmoHandlerComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TheK26_K26FireCrowProjectileInteractionDefinitionOnProjectileFired__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TheK26_K26FireCrowProjectileInteractionDefinitionOnProjectileFired__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26FireCrowProjectileInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TheK26_K26FireCrowProjectileInteractionDefinitionOnProjectileFired__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TheK26, nullptr, "K26FireCrowProjectileInteractionDefinitionOnProjectileFired__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TheK26_K26FireCrowProjectileInteractionDefinitionOnProjectileFired__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheK26_K26FireCrowProjectileInteractionDefinitionOnProjectileFired__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TheK26_K26FireCrowProjectileInteractionDefinitionOnProjectileFired__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TheK26_K26FireCrowProjectileInteractionDefinitionOnProjectileFired__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UK26FireCrowProjectileInteractionDefinition::execMulticast_OnProjectileFired)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnProjectileFired_Implementation(Z_Param_killer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26FireCrowProjectileInteractionDefinition::execServer_RequestFireOnAmmo)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_RequestFireOnAmmo_Implementation(Z_Param_killer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26FireCrowProjectileInteractionDefinition::execSetDependencies)
	{
		P_GET_OBJECT(UK26AmmoHandlerComponent,Z_Param_ammoHandler);
		P_GET_OBJECT(UK26PathHandlerComponent,Z_Param_pathHandler);
		P_GET_OBJECT(UK26CooldownInteractionDefinition,Z_Param_cooldownInteraction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDependencies(Z_Param_ammoHandler,Z_Param_pathHandler,Z_Param_cooldownInteraction);
		P_NATIVE_END;
	}
	static FName NAME_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired = FName(TEXT("Multicast_OnProjectileFired"));
	void UK26FireCrowProjectileInteractionDefinition::Multicast_OnProjectileFired(const ASlasherPlayer* killer)
	{
		K26FireCrowProjectileInteractionDefinition_eventMulticast_OnProjectileFired_Parms Parms;
		Parms.killer=killer;
		ProcessEvent(FindFunctionChecked(NAME_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired),&Parms);
	}
	static FName NAME_UK26FireCrowProjectileInteractionDefinition_Server_RequestFireOnAmmo = FName(TEXT("Server_RequestFireOnAmmo"));
	void UK26FireCrowProjectileInteractionDefinition::Server_RequestFireOnAmmo(ASlasherPlayer* killer)
	{
		K26FireCrowProjectileInteractionDefinition_eventServer_RequestFireOnAmmo_Parms Parms;
		Parms.killer=killer;
		ProcessEvent(FindFunctionChecked(NAME_UK26FireCrowProjectileInteractionDefinition_Server_RequestFireOnAmmo),&Parms);
	}
	void UK26FireCrowProjectileInteractionDefinition::StaticRegisterNativesUK26FireCrowProjectileInteractionDefinition()
	{
		UClass* Class = UK26FireCrowProjectileInteractionDefinition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_OnProjectileFired", &UK26FireCrowProjectileInteractionDefinition::execMulticast_OnProjectileFired },
			{ "Server_RequestFireOnAmmo", &UK26FireCrowProjectileInteractionDefinition::execServer_RequestFireOnAmmo },
			{ "SetDependencies", &UK26FireCrowProjectileInteractionDefinition::execSetDependencies },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_killer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired_Statics::NewProp_killer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26FireCrowProjectileInteractionDefinition_eventMulticast_OnProjectileFired_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired_Statics::NewProp_killer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired_Statics::NewProp_killer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26FireCrowProjectileInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition, nullptr, "Multicast_OnProjectileFired", nullptr, nullptr, sizeof(K26FireCrowProjectileInteractionDefinition_eventMulticast_OnProjectileFired_Parms), Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Server_RequestFireOnAmmo_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Server_RequestFireOnAmmo_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26FireCrowProjectileInteractionDefinition_eventServer_RequestFireOnAmmo_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Server_RequestFireOnAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Server_RequestFireOnAmmo_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Server_RequestFireOnAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26FireCrowProjectileInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Server_RequestFireOnAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition, nullptr, "Server_RequestFireOnAmmo", nullptr, nullptr, sizeof(K26FireCrowProjectileInteractionDefinition_eventServer_RequestFireOnAmmo_Parms), Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Server_RequestFireOnAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Server_RequestFireOnAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Server_RequestFireOnAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Server_RequestFireOnAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Server_RequestFireOnAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Server_RequestFireOnAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics
	{
		struct K26FireCrowProjectileInteractionDefinition_eventSetDependencies_Parms
		{
			UK26AmmoHandlerComponent* ammoHandler;
			UK26PathHandlerComponent* pathHandler;
			UK26CooldownInteractionDefinition* cooldownInteraction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cooldownInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cooldownInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pathHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pathHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammoHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ammoHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::NewProp_cooldownInteraction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::NewProp_cooldownInteraction = { "cooldownInteraction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26FireCrowProjectileInteractionDefinition_eventSetDependencies_Parms, cooldownInteraction), Z_Construct_UClass_UK26CooldownInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::NewProp_cooldownInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::NewProp_cooldownInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::NewProp_pathHandler_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::NewProp_pathHandler = { "pathHandler", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26FireCrowProjectileInteractionDefinition_eventSetDependencies_Parms, pathHandler), Z_Construct_UClass_UK26PathHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::NewProp_pathHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::NewProp_pathHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::NewProp_ammoHandler_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::NewProp_ammoHandler = { "ammoHandler", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26FireCrowProjectileInteractionDefinition_eventSetDependencies_Parms, ammoHandler), Z_Construct_UClass_UK26AmmoHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::NewProp_ammoHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::NewProp_ammoHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::NewProp_cooldownInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::NewProp_pathHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::NewProp_ammoHandler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26FireCrowProjectileInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition, nullptr, "SetDependencies", nullptr, nullptr, sizeof(K26FireCrowProjectileInteractionDefinition_eventSetDependencies_Parms), Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_NoRegister()
	{
		return UK26FireCrowProjectileInteractionDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pathHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pathHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ammoHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ammoHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cooldownInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProjectileFired_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProjectileFired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired, "Multicast_OnProjectileFired" }, // 2879051767
		{ &Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_Server_RequestFireOnAmmo, "Server_RequestFireOnAmmo" }, // 4173266677
		{ &Z_Construct_UFunction_UK26FireCrowProjectileInteractionDefinition_SetDependencies, "SetDependencies" }, // 1646790435
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "K26FireCrowProjectileInteractionDefinition.h" },
		{ "ModuleRelativePath", "Public/K26FireCrowProjectileInteractionDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp__pathHandler_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26FireCrowProjectileInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp__pathHandler = { "_pathHandler", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26FireCrowProjectileInteractionDefinition, _pathHandler), Z_Construct_UClass_UK26PathHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp__pathHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp__pathHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp__ammoHandler_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26FireCrowProjectileInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp__ammoHandler = { "_ammoHandler", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26FireCrowProjectileInteractionDefinition, _ammoHandler), Z_Construct_UClass_UK26AmmoHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp__ammoHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp__ammoHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp__cooldownInteraction_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26FireCrowProjectileInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp__cooldownInteraction = { "_cooldownInteraction", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26FireCrowProjectileInteractionDefinition, _cooldownInteraction), Z_Construct_UClass_UK26CooldownInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp__cooldownInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp__cooldownInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp_OnProjectileFired_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26FireCrowProjectileInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp_OnProjectileFired = { "OnProjectileFired", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26FireCrowProjectileInteractionDefinition, OnProjectileFired), Z_Construct_UDelegateFunction_TheK26_K26FireCrowProjectileInteractionDefinitionOnProjectileFired__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp_OnProjectileFired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp_OnProjectileFired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp__pathHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp__ammoHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp__cooldownInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::NewProp_OnProjectileFired,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26FireCrowProjectileInteractionDefinition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::ClassParams = {
		&UK26FireCrowProjectileInteractionDefinition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26FireCrowProjectileInteractionDefinition, 3878369004);
	template<> THEK26_API UClass* StaticClass<UK26FireCrowProjectileInteractionDefinition>()
	{
		return UK26FireCrowProjectileInteractionDefinition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26FireCrowProjectileInteractionDefinition(Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition, &UK26FireCrowProjectileInteractionDefinition::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26FireCrowProjectileInteractionDefinition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26FireCrowProjectileInteractionDefinition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
