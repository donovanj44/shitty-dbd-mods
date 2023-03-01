// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/SendToDeathBedInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSendToDeathBedInteraction() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_USendToDeathBedInteraction_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_USendToDeathBedInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ADeathBedInteractable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USendToDeathBedInteraction::execGetOwningSurvivor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACamperPlayer**)Z_Param__Result=P_THIS->GetOwningSurvivor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USendToDeathBedInteraction::execMulticast_SendCamperToDeathBed)
	{
		P_GET_OBJECT(ADeathBedInteractable,Z_Param_deathBed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SendCamperToDeathBed_Implementation(Z_Param_deathBed);
		P_NATIVE_END;
	}
	static FName NAME_USendToDeathBedInteraction_FX_InteractionCancel = FName(TEXT("FX_InteractionCancel"));
	void USendToDeathBedInteraction::FX_InteractionCancel()
	{
		ProcessEvent(FindFunctionChecked(NAME_USendToDeathBedInteraction_FX_InteractionCancel),NULL);
	}
	static FName NAME_USendToDeathBedInteraction_FX_InteractionStart = FName(TEXT("FX_InteractionStart"));
	void USendToDeathBedInteraction::FX_InteractionStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_USendToDeathBedInteraction_FX_InteractionStart),NULL);
	}
	static FName NAME_USendToDeathBedInteraction_Multicast_SendCamperToDeathBed = FName(TEXT("Multicast_SendCamperToDeathBed"));
	void USendToDeathBedInteraction::Multicast_SendCamperToDeathBed(ADeathBedInteractable* deathBed)
	{
		SendToDeathBedInteraction_eventMulticast_SendCamperToDeathBed_Parms Parms;
		Parms.deathBed=deathBed;
		ProcessEvent(FindFunctionChecked(NAME_USendToDeathBedInteraction_Multicast_SendCamperToDeathBed),&Parms);
	}
	void USendToDeathBedInteraction::StaticRegisterNativesUSendToDeathBedInteraction()
	{
		UClass* Class = USendToDeathBedInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningSurvivor", &USendToDeathBedInteraction::execGetOwningSurvivor },
			{ "Multicast_SendCamperToDeathBed", &USendToDeathBedInteraction::execMulticast_SendCamperToDeathBed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USendToDeathBedInteraction_FX_InteractionCancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendToDeathBedInteraction_FX_InteractionCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SendToDeathBedInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USendToDeathBedInteraction_FX_InteractionCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USendToDeathBedInteraction, nullptr, "FX_InteractionCancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USendToDeathBedInteraction_FX_InteractionCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USendToDeathBedInteraction_FX_InteractionCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USendToDeathBedInteraction_FX_InteractionCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USendToDeathBedInteraction_FX_InteractionCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USendToDeathBedInteraction_FX_InteractionStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendToDeathBedInteraction_FX_InteractionStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SendToDeathBedInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USendToDeathBedInteraction_FX_InteractionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USendToDeathBedInteraction, nullptr, "FX_InteractionStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USendToDeathBedInteraction_FX_InteractionStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USendToDeathBedInteraction_FX_InteractionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USendToDeathBedInteraction_FX_InteractionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USendToDeathBedInteraction_FX_InteractionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USendToDeathBedInteraction_GetOwningSurvivor_Statics
	{
		struct SendToDeathBedInteraction_eventGetOwningSurvivor_Parms
		{
			ACamperPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USendToDeathBedInteraction_GetOwningSurvivor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendToDeathBedInteraction_eventGetOwningSurvivor_Parms, ReturnValue), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USendToDeathBedInteraction_GetOwningSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendToDeathBedInteraction_GetOwningSurvivor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendToDeathBedInteraction_GetOwningSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SendToDeathBedInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USendToDeathBedInteraction_GetOwningSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USendToDeathBedInteraction, nullptr, "GetOwningSurvivor", nullptr, nullptr, sizeof(SendToDeathBedInteraction_eventGetOwningSurvivor_Parms), Z_Construct_UFunction_USendToDeathBedInteraction_GetOwningSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USendToDeathBedInteraction_GetOwningSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USendToDeathBedInteraction_GetOwningSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USendToDeathBedInteraction_GetOwningSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USendToDeathBedInteraction_GetOwningSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USendToDeathBedInteraction_GetOwningSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USendToDeathBedInteraction_Multicast_SendCamperToDeathBed_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_deathBed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USendToDeathBedInteraction_Multicast_SendCamperToDeathBed_Statics::NewProp_deathBed = { "deathBed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendToDeathBedInteraction_eventMulticast_SendCamperToDeathBed_Parms, deathBed), Z_Construct_UClass_ADeathBedInteractable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USendToDeathBedInteraction_Multicast_SendCamperToDeathBed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendToDeathBedInteraction_Multicast_SendCamperToDeathBed_Statics::NewProp_deathBed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendToDeathBedInteraction_Multicast_SendCamperToDeathBed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SendToDeathBedInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USendToDeathBedInteraction_Multicast_SendCamperToDeathBed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USendToDeathBedInteraction, nullptr, "Multicast_SendCamperToDeathBed", nullptr, nullptr, sizeof(SendToDeathBedInteraction_eventMulticast_SendCamperToDeathBed_Parms), Z_Construct_UFunction_USendToDeathBedInteraction_Multicast_SendCamperToDeathBed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USendToDeathBedInteraction_Multicast_SendCamperToDeathBed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USendToDeathBedInteraction_Multicast_SendCamperToDeathBed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USendToDeathBedInteraction_Multicast_SendCamperToDeathBed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USendToDeathBedInteraction_Multicast_SendCamperToDeathBed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USendToDeathBedInteraction_Multicast_SendCamperToDeathBed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USendToDeathBedInteraction_NoRegister()
	{
		return USendToDeathBedInteraction::StaticClass();
	}
	struct Z_Construct_UClass_USendToDeathBedInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__deathBed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__deathBed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USendToDeathBedInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USendToDeathBedInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USendToDeathBedInteraction_FX_InteractionCancel, "FX_InteractionCancel" }, // 578419762
		{ &Z_Construct_UFunction_USendToDeathBedInteraction_FX_InteractionStart, "FX_InteractionStart" }, // 2014366424
		{ &Z_Construct_UFunction_USendToDeathBedInteraction_GetOwningSurvivor, "GetOwningSurvivor" }, // 1280455488
		{ &Z_Construct_UFunction_USendToDeathBedInteraction_Multicast_SendCamperToDeathBed, "Multicast_SendCamperToDeathBed" }, // 200995404
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USendToDeathBedInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SendToDeathBedInteraction.h" },
		{ "ModuleRelativePath", "Public/SendToDeathBedInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USendToDeathBedInteraction_Statics::NewProp__deathBed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SendToDeathBedInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USendToDeathBedInteraction_Statics::NewProp__deathBed = { "_deathBed", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USendToDeathBedInteraction, _deathBed), Z_Construct_UClass_ADeathBedInteractable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USendToDeathBedInteraction_Statics::NewProp__deathBed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USendToDeathBedInteraction_Statics::NewProp__deathBed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USendToDeathBedInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USendToDeathBedInteraction_Statics::NewProp__deathBed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USendToDeathBedInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USendToDeathBedInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USendToDeathBedInteraction_Statics::ClassParams = {
		&USendToDeathBedInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USendToDeathBedInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USendToDeathBedInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USendToDeathBedInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USendToDeathBedInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USendToDeathBedInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USendToDeathBedInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USendToDeathBedInteraction, 1235729560);
	template<> THEEXECUTIONER_API UClass* StaticClass<USendToDeathBedInteraction>()
	{
		return USendToDeathBedInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USendToDeathBedInteraction(Z_Construct_UClass_USendToDeathBedInteraction, &USendToDeathBedInteraction::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("USendToDeathBedInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USendToDeathBedInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
