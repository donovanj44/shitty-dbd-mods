// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/ExecutionerTormentAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExecutionerTormentAttack() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UExecutionerTormentAttack_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UExecutionerTormentAttack();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttack();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UExecutionerTormentAttack::execMulticast_TormentHitTarget)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_TormentHitTarget_Implementation(Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExecutionerTormentAttack::execServer_TormentTryHitTargetNotInCoolDown)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_TormentTryHitTargetNotInCoolDown_Validate(Z_Param_target))
		{
			RPC_ValidateFailed(TEXT("Server_TormentTryHitTargetNotInCoolDown_Validate"));
			return;
		}
		P_THIS->Server_TormentTryHitTargetNotInCoolDown_Implementation(Z_Param_target);
		P_NATIVE_END;
	}
	static FName NAME_UExecutionerTormentAttack_Multicast_TormentHitTarget = FName(TEXT("Multicast_TormentHitTarget"));
	void UExecutionerTormentAttack::Multicast_TormentHitTarget(ADBDPlayer* target)
	{
		ExecutionerTormentAttack_eventMulticast_TormentHitTarget_Parms Parms;
		Parms.target=target;
		ProcessEvent(FindFunctionChecked(NAME_UExecutionerTormentAttack_Multicast_TormentHitTarget),&Parms);
	}
	static FName NAME_UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown = FName(TEXT("Server_TormentTryHitTargetNotInCoolDown"));
	void UExecutionerTormentAttack::Server_TormentTryHitTargetNotInCoolDown(ADBDPlayer* target)
	{
		ExecutionerTormentAttack_eventServer_TormentTryHitTargetNotInCoolDown_Parms Parms;
		Parms.target=target;
		ProcessEvent(FindFunctionChecked(NAME_UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown),&Parms);
	}
	void UExecutionerTormentAttack::StaticRegisterNativesUExecutionerTormentAttack()
	{
		UClass* Class = UExecutionerTormentAttack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_TormentHitTarget", &UExecutionerTormentAttack::execMulticast_TormentHitTarget },
			{ "Server_TormentTryHitTargetNotInCoolDown", &UExecutionerTormentAttack::execServer_TormentTryHitTargetNotInCoolDown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExecutionerTormentAttack_Multicast_TormentHitTarget_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExecutionerTormentAttack_Multicast_TormentHitTarget_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExecutionerTormentAttack_eventMulticast_TormentHitTarget_Parms, target), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExecutionerTormentAttack_Multicast_TormentHitTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExecutionerTormentAttack_Multicast_TormentHitTarget_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExecutionerTormentAttack_Multicast_TormentHitTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExecutionerTormentAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExecutionerTormentAttack_Multicast_TormentHitTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExecutionerTormentAttack, nullptr, "Multicast_TormentHitTarget", nullptr, nullptr, sizeof(ExecutionerTormentAttack_eventMulticast_TormentHitTarget_Parms), Z_Construct_UFunction_UExecutionerTormentAttack_Multicast_TormentHitTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExecutionerTormentAttack_Multicast_TormentHitTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExecutionerTormentAttack_Multicast_TormentHitTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExecutionerTormentAttack_Multicast_TormentHitTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExecutionerTormentAttack_Multicast_TormentHitTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExecutionerTormentAttack_Multicast_TormentHitTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExecutionerTormentAttack_eventServer_TormentTryHitTargetNotInCoolDown_Parms, target), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExecutionerTormentAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExecutionerTormentAttack, nullptr, "Server_TormentTryHitTargetNotInCoolDown", nullptr, nullptr, sizeof(ExecutionerTormentAttack_eventServer_TormentTryHitTargetNotInCoolDown_Parms), Z_Construct_UFunction_UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExecutionerTormentAttack_NoRegister()
	{
		return UExecutionerTormentAttack::StaticClass();
	}
	struct Z_Construct_UClass_UExecutionerTormentAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExecutionerTormentAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttack,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExecutionerTormentAttack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExecutionerTormentAttack_Multicast_TormentHitTarget, "Multicast_TormentHitTarget" }, // 162397973
		{ &Z_Construct_UFunction_UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown, "Server_TormentTryHitTargetNotInCoolDown" }, // 112913249
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExecutionerTormentAttack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExecutionerTormentAttack.h" },
		{ "ModuleRelativePath", "Public/ExecutionerTormentAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExecutionerTormentAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExecutionerTormentAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExecutionerTormentAttack_Statics::ClassParams = {
		&UExecutionerTormentAttack::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UExecutionerTormentAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExecutionerTormentAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExecutionerTormentAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExecutionerTormentAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExecutionerTormentAttack, 1494445182);
	template<> THEEXECUTIONER_API UClass* StaticClass<UExecutionerTormentAttack>()
	{
		return UExecutionerTormentAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExecutionerTormentAttack(Z_Construct_UClass_UExecutionerTormentAttack, &UExecutionerTormentAttack::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UExecutionerTormentAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExecutionerTormentAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
