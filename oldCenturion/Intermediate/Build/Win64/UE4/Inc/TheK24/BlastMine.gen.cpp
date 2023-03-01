// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/BlastMine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlastMine() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UBlastMine_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UBlastMine();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSecondaryInteractionProperties();
// End Cross Module References
	DEFINE_FUNCTION(UBlastMine::execAuthority_OnRepairProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_IndividualChargeAmount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TotalChargeAmount);
		P_GET_OBJECT(AActor,Z_Param_ChargeInstigator);
		P_GET_UBOOL(Z_Param_WasCoop);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnRepairProgress(Z_Param_IndividualChargeAmount,Z_Param_TotalChargeAmount,Z_Param_ChargeInstigator,Z_Param_WasCoop,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlastMine::execClient_TrapActivatedLoudNotification)
	{
		P_GET_STRUCT(FTransform,Z_Param_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_TrapActivatedLoudNotification_Implementation(Z_Param_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlastMine::execOnRep_CurrentRepairInteractionWithAbility)
	{
		P_GET_OBJECT(UInteractionDefinition,Z_Param_oldRepairInteraction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentRepairInteractionWithAbility(Z_Param_oldRepairInteraction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlastMine::execOnRep_TrappedGenerator)
	{
		P_GET_OBJECT(AGenerator,Z_Param_oldGenerator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TrappedGenerator(Z_Param_oldGenerator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlastMine::execServer_OnActionInputPressed)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_OnActionInputPressed_Implementation(Z_Param_generator);
		P_NATIVE_END;
	}
	static FName NAME_UBlastMine_Client_TrapActivatedLoudNotification = FName(TEXT("Client_TrapActivatedLoudNotification"));
	void UBlastMine::Client_TrapActivatedLoudNotification(FTransform location)
	{
		BlastMine_eventClient_TrapActivatedLoudNotification_Parms Parms;
		Parms.location=location;
		ProcessEvent(FindFunctionChecked(NAME_UBlastMine_Client_TrapActivatedLoudNotification),&Parms);
	}
	static FName NAME_UBlastMine_OnActivateExplosion = FName(TEXT("OnActivateExplosion"));
	void UBlastMine::OnActivateExplosion(FTransform firecrackerTransform, AGenerator* generator)
	{
		BlastMine_eventOnActivateExplosion_Parms Parms;
		Parms.firecrackerTransform=firecrackerTransform;
		Parms.generator=generator;
		ProcessEvent(FindFunctionChecked(NAME_UBlastMine_OnActivateExplosion),&Parms);
	}
	static FName NAME_UBlastMine_Server_OnActionInputPressed = FName(TEXT("Server_OnActionInputPressed"));
	void UBlastMine::Server_OnActionInputPressed(AGenerator* generator)
	{
		BlastMine_eventServer_OnActionInputPressed_Parms Parms;
		Parms.generator=generator;
		ProcessEvent(FindFunctionChecked(NAME_UBlastMine_Server_OnActionInputPressed),&Parms);
	}
	static FName NAME_UBlastMine_ThrowBubbleIndicator_Cosmetic = FName(TEXT("ThrowBubbleIndicator_Cosmetic"));
	void UBlastMine::ThrowBubbleIndicator_Cosmetic(FTransform location)
	{
		BlastMine_eventThrowBubbleIndicator_Cosmetic_Parms Parms;
		Parms.location=location;
		ProcessEvent(FindFunctionChecked(NAME_UBlastMine_ThrowBubbleIndicator_Cosmetic),&Parms);
	}
	static FName NAME_UBlastMine_TrapAttachedToGenerator_Cosmetic = FName(TEXT("TrapAttachedToGenerator_Cosmetic"));
	void UBlastMine::TrapAttachedToGenerator_Cosmetic(AGenerator* trappedGenerator)
	{
		BlastMine_eventTrapAttachedToGenerator_Cosmetic_Parms Parms;
		Parms.trappedGenerator=trappedGenerator;
		ProcessEvent(FindFunctionChecked(NAME_UBlastMine_TrapAttachedToGenerator_Cosmetic),&Parms);
	}
	static FName NAME_UBlastMine_TrapDettachedToGenerator_Cosmetic = FName(TEXT("TrapDettachedToGenerator_Cosmetic"));
	void UBlastMine::TrapDettachedToGenerator_Cosmetic(AGenerator* trappedGenerator)
	{
		BlastMine_eventTrapDettachedToGenerator_Cosmetic_Parms Parms;
		Parms.trappedGenerator=trappedGenerator;
		ProcessEvent(FindFunctionChecked(NAME_UBlastMine_TrapDettachedToGenerator_Cosmetic),&Parms);
	}
	void UBlastMine::StaticRegisterNativesUBlastMine()
	{
		UClass* Class = UBlastMine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnRepairProgress", &UBlastMine::execAuthority_OnRepairProgress },
			{ "Client_TrapActivatedLoudNotification", &UBlastMine::execClient_TrapActivatedLoudNotification },
			{ "OnRep_CurrentRepairInteractionWithAbility", &UBlastMine::execOnRep_CurrentRepairInteractionWithAbility },
			{ "OnRep_TrappedGenerator", &UBlastMine::execOnRep_TrappedGenerator },
			{ "Server_OnActionInputPressed", &UBlastMine::execServer_OnActionInputPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics
	{
		struct BlastMine_eventAuthority_OnRepairProgress_Parms
		{
			float IndividualChargeAmount;
			float TotalChargeAmount;
			AActor* ChargeInstigator;
			bool WasCoop;
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static void NewProp_WasCoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasCoop;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChargeInstigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalChargeAmount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IndividualChargeAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlastMine_eventAuthority_OnRepairProgress_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::NewProp_WasCoop_SetBit(void* Obj)
	{
		((BlastMine_eventAuthority_OnRepairProgress_Parms*)Obj)->WasCoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::NewProp_WasCoop = { "WasCoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlastMine_eventAuthority_OnRepairProgress_Parms), &Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::NewProp_WasCoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::NewProp_ChargeInstigator = { "ChargeInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlastMine_eventAuthority_OnRepairProgress_Parms, ChargeInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::NewProp_TotalChargeAmount = { "TotalChargeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlastMine_eventAuthority_OnRepairProgress_Parms, TotalChargeAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::NewProp_IndividualChargeAmount = { "IndividualChargeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlastMine_eventAuthority_OnRepairProgress_Parms, IndividualChargeAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::NewProp_WasCoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::NewProp_ChargeInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::NewProp_TotalChargeAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::NewProp_IndividualChargeAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlastMine, nullptr, "Authority_OnRepairProgress", nullptr, nullptr, sizeof(BlastMine_eventAuthority_OnRepairProgress_Parms), Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlastMine_Client_TrapActivatedLoudNotification_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlastMine_Client_TrapActivatedLoudNotification_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlastMine_eventClient_TrapActivatedLoudNotification_Parms, location), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlastMine_Client_TrapActivatedLoudNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlastMine_Client_TrapActivatedLoudNotification_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlastMine_Client_TrapActivatedLoudNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlastMine_Client_TrapActivatedLoudNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlastMine, nullptr, "Client_TrapActivatedLoudNotification", nullptr, nullptr, sizeof(BlastMine_eventClient_TrapActivatedLoudNotification_Parms), Z_Construct_UFunction_UBlastMine_Client_TrapActivatedLoudNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_Client_TrapActivatedLoudNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01840CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlastMine_Client_TrapActivatedLoudNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_Client_TrapActivatedLoudNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlastMine_Client_TrapActivatedLoudNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlastMine_Client_TrapActivatedLoudNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlastMine_OnActivateExplosion_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_firecrackerTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlastMine_OnActivateExplosion_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlastMine_eventOnActivateExplosion_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlastMine_OnActivateExplosion_Statics::NewProp_firecrackerTransform = { "firecrackerTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlastMine_eventOnActivateExplosion_Parms, firecrackerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlastMine_OnActivateExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlastMine_OnActivateExplosion_Statics::NewProp_generator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlastMine_OnActivateExplosion_Statics::NewProp_firecrackerTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlastMine_OnActivateExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlastMine_OnActivateExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlastMine, nullptr, "OnActivateExplosion", nullptr, nullptr, sizeof(BlastMine_eventOnActivateExplosion_Parms), Z_Construct_UFunction_UBlastMine_OnActivateExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_OnActivateExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlastMine_OnActivateExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_OnActivateExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlastMine_OnActivateExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlastMine_OnActivateExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Statics
	{
		struct BlastMine_eventOnRep_CurrentRepairInteractionWithAbility_Parms
		{
			UInteractionDefinition* oldRepairInteraction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldRepairInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_oldRepairInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Statics::NewProp_oldRepairInteraction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Statics::NewProp_oldRepairInteraction = { "oldRepairInteraction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlastMine_eventOnRep_CurrentRepairInteractionWithAbility_Parms, oldRepairInteraction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Statics::NewProp_oldRepairInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Statics::NewProp_oldRepairInteraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Statics::NewProp_oldRepairInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlastMine, nullptr, "OnRep_CurrentRepairInteractionWithAbility", nullptr, nullptr, sizeof(BlastMine_eventOnRep_CurrentRepairInteractionWithAbility_Parms), Z_Construct_UFunction_UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlastMine_OnRep_CurrentRepairInteractionWithAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlastMine_OnRep_TrappedGenerator_Statics
	{
		struct BlastMine_eventOnRep_TrappedGenerator_Parms
		{
			AGenerator* oldGenerator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_oldGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlastMine_OnRep_TrappedGenerator_Statics::NewProp_oldGenerator = { "oldGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlastMine_eventOnRep_TrappedGenerator_Parms, oldGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlastMine_OnRep_TrappedGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlastMine_OnRep_TrappedGenerator_Statics::NewProp_oldGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlastMine_OnRep_TrappedGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlastMine_OnRep_TrappedGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlastMine, nullptr, "OnRep_TrappedGenerator", nullptr, nullptr, sizeof(BlastMine_eventOnRep_TrappedGenerator_Parms), Z_Construct_UFunction_UBlastMine_OnRep_TrappedGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_OnRep_TrappedGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlastMine_OnRep_TrappedGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_OnRep_TrappedGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlastMine_OnRep_TrappedGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlastMine_OnRep_TrappedGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlastMine_Server_OnActionInputPressed_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlastMine_Server_OnActionInputPressed_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlastMine_eventServer_OnActionInputPressed_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlastMine_Server_OnActionInputPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlastMine_Server_OnActionInputPressed_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlastMine_Server_OnActionInputPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlastMine_Server_OnActionInputPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlastMine, nullptr, "Server_OnActionInputPressed", nullptr, nullptr, sizeof(BlastMine_eventServer_OnActionInputPressed_Parms), Z_Construct_UFunction_UBlastMine_Server_OnActionInputPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_Server_OnActionInputPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlastMine_Server_OnActionInputPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_Server_OnActionInputPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlastMine_Server_OnActionInputPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlastMine_Server_OnActionInputPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlastMine_ThrowBubbleIndicator_Cosmetic_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlastMine_ThrowBubbleIndicator_Cosmetic_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlastMine_eventThrowBubbleIndicator_Cosmetic_Parms, location), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlastMine_ThrowBubbleIndicator_Cosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlastMine_ThrowBubbleIndicator_Cosmetic_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlastMine_ThrowBubbleIndicator_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlastMine_ThrowBubbleIndicator_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlastMine, nullptr, "ThrowBubbleIndicator_Cosmetic", nullptr, nullptr, sizeof(BlastMine_eventThrowBubbleIndicator_Cosmetic_Parms), Z_Construct_UFunction_UBlastMine_ThrowBubbleIndicator_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_ThrowBubbleIndicator_Cosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlastMine_ThrowBubbleIndicator_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_ThrowBubbleIndicator_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlastMine_ThrowBubbleIndicator_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlastMine_ThrowBubbleIndicator_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlastMine_TrapAttachedToGenerator_Cosmetic_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trappedGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlastMine_TrapAttachedToGenerator_Cosmetic_Statics::NewProp_trappedGenerator = { "trappedGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlastMine_eventTrapAttachedToGenerator_Cosmetic_Parms, trappedGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlastMine_TrapAttachedToGenerator_Cosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlastMine_TrapAttachedToGenerator_Cosmetic_Statics::NewProp_trappedGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlastMine_TrapAttachedToGenerator_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlastMine_TrapAttachedToGenerator_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlastMine, nullptr, "TrapAttachedToGenerator_Cosmetic", nullptr, nullptr, sizeof(BlastMine_eventTrapAttachedToGenerator_Cosmetic_Parms), Z_Construct_UFunction_UBlastMine_TrapAttachedToGenerator_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_TrapAttachedToGenerator_Cosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlastMine_TrapAttachedToGenerator_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_TrapAttachedToGenerator_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlastMine_TrapAttachedToGenerator_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlastMine_TrapAttachedToGenerator_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlastMine_TrapDettachedToGenerator_Cosmetic_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trappedGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlastMine_TrapDettachedToGenerator_Cosmetic_Statics::NewProp_trappedGenerator = { "trappedGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlastMine_eventTrapDettachedToGenerator_Cosmetic_Parms, trappedGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlastMine_TrapDettachedToGenerator_Cosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlastMine_TrapDettachedToGenerator_Cosmetic_Statics::NewProp_trappedGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlastMine_TrapDettachedToGenerator_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlastMine_TrapDettachedToGenerator_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlastMine, nullptr, "TrapDettachedToGenerator_Cosmetic", nullptr, nullptr, sizeof(BlastMine_eventTrapDettachedToGenerator_Cosmetic_Parms), Z_Construct_UFunction_UBlastMine_TrapDettachedToGenerator_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_TrapDettachedToGenerator_Cosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlastMine_TrapDettachedToGenerator_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMine_TrapDettachedToGenerator_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlastMine_TrapDettachedToGenerator_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlastMine_TrapDettachedToGenerator_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlastMine_NoRegister()
	{
		return UBlastMine::StaticClass();
	}
	struct Z_Construct_UClass_UBlastMine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__repairProgressGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__repairProgressGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__kickInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__kickInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__kickInteractionPlayerOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__kickInteractionPlayerOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__repairTimerDone_MetaData[];
#endif
		static void NewProp__repairTimerDone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__repairTimerDone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trapActivated_MetaData[];
#endif
		static void NewProp__trapActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__trapActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__progressPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__progressPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trappedGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__trappedGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentRepairInteractionWithAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentRepairInteractionWithAbility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canBeReusedAfterTrapActivation_MetaData[];
#endif
		static void NewProp__canBeReusedAfterTrapActivation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__canBeReusedAfterTrapActivation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canBeReusedOnTimerExpire_MetaData[];
#endif
		static void NewProp__canBeReusedOnTimerExpire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__canBeReusedOnTimerExpire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp___generatorTrapDurationLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp___generatorTrapDurationLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__progressPercentRequirementLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__progressPercentRequirementLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__kickChargePercentMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__kickChargePercentMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__kickChargePercentMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__kickChargePercentMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondsToActivatePerk_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__secondsToActivatePerk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondaryActionProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__secondaryActionProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firecrackerHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__firecrackerHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlastMine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlastMine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlastMine_Authority_OnRepairProgress, "Authority_OnRepairProgress" }, // 1987761186
		{ &Z_Construct_UFunction_UBlastMine_Client_TrapActivatedLoudNotification, "Client_TrapActivatedLoudNotification" }, // 2545790891
		{ &Z_Construct_UFunction_UBlastMine_OnActivateExplosion, "OnActivateExplosion" }, // 2560354398
		{ &Z_Construct_UFunction_UBlastMine_OnRep_CurrentRepairInteractionWithAbility, "OnRep_CurrentRepairInteractionWithAbility" }, // 859599279
		{ &Z_Construct_UFunction_UBlastMine_OnRep_TrappedGenerator, "OnRep_TrappedGenerator" }, // 2691985031
		{ &Z_Construct_UFunction_UBlastMine_Server_OnActionInputPressed, "Server_OnActionInputPressed" }, // 1626865148
		{ &Z_Construct_UFunction_UBlastMine_ThrowBubbleIndicator_Cosmetic, "ThrowBubbleIndicator_Cosmetic" }, // 1222496818
		{ &Z_Construct_UFunction_UBlastMine_TrapAttachedToGenerator_Cosmetic, "TrapAttachedToGenerator_Cosmetic" }, // 4135250657
		{ &Z_Construct_UFunction_UBlastMine_TrapDettachedToGenerator_Cosmetic, "TrapDettachedToGenerator_Cosmetic" }, // 3440193665
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlastMine.h" },
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::NewProp__repairProgressGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlastMine_Statics::NewProp__repairProgressGenerator = { "_repairProgressGenerator", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlastMine, _repairProgressGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::NewProp__repairProgressGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::NewProp__repairProgressGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::NewProp__kickInteraction_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlastMine_Statics::NewProp__kickInteraction = { "_kickInteraction", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlastMine, _kickInteraction), Z_Construct_UClass_UChargeableInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::NewProp__kickInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::NewProp__kickInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::NewProp__kickInteractionPlayerOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlastMine_Statics::NewProp__kickInteractionPlayerOwner = { "_kickInteractionPlayerOwner", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlastMine, _kickInteractionPlayerOwner), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::NewProp__kickInteractionPlayerOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::NewProp__kickInteractionPlayerOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::NewProp__repairTimerDone_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	void Z_Construct_UClass_UBlastMine_Statics::NewProp__repairTimerDone_SetBit(void* Obj)
	{
		((UBlastMine*)Obj)->_repairTimerDone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlastMine_Statics::NewProp__repairTimerDone = { "_repairTimerDone", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlastMine), &Z_Construct_UClass_UBlastMine_Statics::NewProp__repairTimerDone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::NewProp__repairTimerDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::NewProp__repairTimerDone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::NewProp__trapActivated_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	void Z_Construct_UClass_UBlastMine_Statics::NewProp__trapActivated_SetBit(void* Obj)
	{
		((UBlastMine*)Obj)->_trapActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlastMine_Statics::NewProp__trapActivated = { "_trapActivated", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlastMine), &Z_Construct_UClass_UBlastMine_Statics::NewProp__trapActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::NewProp__trapActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::NewProp__trapActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::NewProp__progressPercent_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlastMine_Statics::NewProp__progressPercent = { "_progressPercent", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlastMine, _progressPercent), METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::NewProp__progressPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::NewProp__progressPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::NewProp__trappedGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlastMine_Statics::NewProp__trappedGenerator = { "_trappedGenerator", "OnRep_TrappedGenerator", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlastMine, _trappedGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::NewProp__trappedGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::NewProp__trappedGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::NewProp__currentRepairInteractionWithAbility_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlastMine_Statics::NewProp__currentRepairInteractionWithAbility = { "_currentRepairInteractionWithAbility", "OnRep_CurrentRepairInteractionWithAbility", (EPropertyFlags)0x0040000100082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlastMine, _currentRepairInteractionWithAbility), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::NewProp__currentRepairInteractionWithAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::NewProp__currentRepairInteractionWithAbility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::NewProp__canBeReusedAfterTrapActivation_MetaData[] = {
		{ "Category", "BlastMine" },
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	void Z_Construct_UClass_UBlastMine_Statics::NewProp__canBeReusedAfterTrapActivation_SetBit(void* Obj)
	{
		((UBlastMine*)Obj)->_canBeReusedAfterTrapActivation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlastMine_Statics::NewProp__canBeReusedAfterTrapActivation = { "_canBeReusedAfterTrapActivation", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlastMine), &Z_Construct_UClass_UBlastMine_Statics::NewProp__canBeReusedAfterTrapActivation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::NewProp__canBeReusedAfterTrapActivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::NewProp__canBeReusedAfterTrapActivation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::NewProp__canBeReusedOnTimerExpire_MetaData[] = {
		{ "Category", "BlastMine" },
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	void Z_Construct_UClass_UBlastMine_Statics::NewProp__canBeReusedOnTimerExpire_SetBit(void* Obj)
	{
		((UBlastMine*)Obj)->_canBeReusedOnTimerExpire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlastMine_Statics::NewProp__canBeReusedOnTimerExpire = { "_canBeReusedOnTimerExpire", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlastMine), &Z_Construct_UClass_UBlastMine_Statics::NewProp__canBeReusedOnTimerExpire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::NewProp__canBeReusedOnTimerExpire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::NewProp__canBeReusedOnTimerExpire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::NewProp___generatorTrapDurationLevels_MetaData[] = {
		{ "Category", "BlastMine" },
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlastMine_Statics::NewProp___generatorTrapDurationLevels = { "__generatorTrapDurationLevels", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(__generatorTrapDurationLevels, UBlastMine), STRUCT_OFFSET(UBlastMine, __generatorTrapDurationLevels), METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::NewProp___generatorTrapDurationLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::NewProp___generatorTrapDurationLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::NewProp__progressPercentRequirementLevels_MetaData[] = {
		{ "Category", "BlastMine" },
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlastMine_Statics::NewProp__progressPercentRequirementLevels = { "_progressPercentRequirementLevels", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_progressPercentRequirementLevels, UBlastMine), STRUCT_OFFSET(UBlastMine, _progressPercentRequirementLevels), METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::NewProp__progressPercentRequirementLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::NewProp__progressPercentRequirementLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::NewProp__kickChargePercentMax_MetaData[] = {
		{ "Category", "BlastMine" },
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlastMine_Statics::NewProp__kickChargePercentMax = { "_kickChargePercentMax", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlastMine, _kickChargePercentMax), METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::NewProp__kickChargePercentMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::NewProp__kickChargePercentMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::NewProp__kickChargePercentMin_MetaData[] = {
		{ "Category", "BlastMine" },
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlastMine_Statics::NewProp__kickChargePercentMin = { "_kickChargePercentMin", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlastMine, _kickChargePercentMin), METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::NewProp__kickChargePercentMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::NewProp__kickChargePercentMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::NewProp__secondsToActivatePerk_MetaData[] = {
		{ "Category", "BlastMine" },
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlastMine_Statics::NewProp__secondsToActivatePerk = { "_secondsToActivatePerk", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlastMine, _secondsToActivatePerk), METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::NewProp__secondsToActivatePerk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::NewProp__secondsToActivatePerk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::NewProp__secondaryActionProperties_MetaData[] = {
		{ "Category", "BlastMine" },
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlastMine_Statics::NewProp__secondaryActionProperties = { "_secondaryActionProperties", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlastMine, _secondaryActionProperties), Z_Construct_UScriptStruct_FSecondaryInteractionProperties, METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::NewProp__secondaryActionProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::NewProp__secondaryActionProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMine_Statics::NewProp__firecrackerHeight_MetaData[] = {
		{ "Category", "BlastMine" },
		{ "ModuleRelativePath", "Public/BlastMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlastMine_Statics::NewProp__firecrackerHeight = { "_firecrackerHeight", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlastMine, _firecrackerHeight), METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::NewProp__firecrackerHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::NewProp__firecrackerHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlastMine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMine_Statics::NewProp__repairProgressGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMine_Statics::NewProp__kickInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMine_Statics::NewProp__kickInteractionPlayerOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMine_Statics::NewProp__repairTimerDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMine_Statics::NewProp__trapActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMine_Statics::NewProp__progressPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMine_Statics::NewProp__trappedGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMine_Statics::NewProp__currentRepairInteractionWithAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMine_Statics::NewProp__canBeReusedAfterTrapActivation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMine_Statics::NewProp__canBeReusedOnTimerExpire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMine_Statics::NewProp___generatorTrapDurationLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMine_Statics::NewProp__progressPercentRequirementLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMine_Statics::NewProp__kickChargePercentMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMine_Statics::NewProp__kickChargePercentMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMine_Statics::NewProp__secondsToActivatePerk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMine_Statics::NewProp__secondaryActionProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMine_Statics::NewProp__firecrackerHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlastMine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlastMine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlastMine_Statics::ClassParams = {
		&UBlastMine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlastMine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlastMine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlastMine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlastMine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlastMine, 513785377);
	template<> THEK24_API UClass* StaticClass<UBlastMine>()
	{
		return UBlastMine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlastMine(Z_Construct_UClass_UBlastMine, &UBlastMine::StaticClass, TEXT("/Script/TheK24"), TEXT("UBlastMine"), false, nullptr, nullptr, nullptr);

	void UBlastMine::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__currentRepairInteractionWithAbility(TEXT("_currentRepairInteractionWithAbility"));
		static const FName Name__trappedGenerator(TEXT("_trappedGenerator"));
		static const FName Name__progressPercent(TEXT("_progressPercent"));
		static const FName Name__trapActivated(TEXT("_trapActivated"));
		static const FName Name__repairTimerDone(TEXT("_repairTimerDone"));

		const bool bIsValid = true
			&& Name__currentRepairInteractionWithAbility == ClassReps[(int32)ENetFields_Private::_currentRepairInteractionWithAbility].Property->GetFName()
			&& Name__trappedGenerator == ClassReps[(int32)ENetFields_Private::_trappedGenerator].Property->GetFName()
			&& Name__progressPercent == ClassReps[(int32)ENetFields_Private::_progressPercent].Property->GetFName()
			&& Name__trapActivated == ClassReps[(int32)ENetFields_Private::_trapActivated].Property->GetFName()
			&& Name__repairTimerDone == ClassReps[(int32)ENetFields_Private::_repairTimerDone].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBlastMine"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlastMine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
