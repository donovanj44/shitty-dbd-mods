// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25Gateway.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25Gateway() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_AK25Gateway_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25Gateway();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	SYSTEMUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FFastTimer();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpectatingActorLinker_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AK25Gateway::execIsGatewayPossessed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGatewayPossessed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Gateway::execMulticast_SetGatewayLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_possessionLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetGatewayLocation_Implementation(Z_Param_possessionLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Gateway::execMulticast_SetGatewayOrientation)
	{
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetGatewayOrientation_Implementation(Z_Param_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Gateway::execMulticast_SetGatewayTargetLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_targetLocation);
		P_GET_UBOOL(Z_Param_isValidLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetGatewayTargetLocation_Implementation(Z_Param_targetLocation,Z_Param_isValidLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Gateway::execOnRep_IsBeingPositionned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsBeingPositionned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Gateway::execOnRep_IsGatewayPossessed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsGatewayPossessed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Gateway::execServer_EndGatewayPossession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_EndGatewayPossession_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Gateway::execServer_SetGatewayOrientation)
	{
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetGatewayOrientation_Implementation(Z_Param_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Gateway::execServer_SetGatewayTargetLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_targetLocation);
		P_GET_UBOOL(Z_Param_isValidLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetGatewayTargetLocation_Implementation(Z_Param_targetLocation,Z_Param_isValidLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Gateway::execServer_SetIsGatewayBeingPositionned)
	{
		P_GET_UBOOL(Z_Param_isBeingPositionned);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetIsGatewayBeingPositionned_Implementation(Z_Param_isBeingPositionned);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25Gateway::execServer_StartGatewayPossession)
	{
		P_GET_STRUCT(FVector,Z_Param_possessionLocation);
		P_GET_STRUCT(FRotator,Z_Param_gatewayRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_StartGatewayPossession_Implementation(Z_Param_possessionLocation,Z_Param_gatewayRotation);
		P_NATIVE_END;
	}
	static FName NAME_AK25Gateway_Cosmetic_SetIsGatewayPositionValid = FName(TEXT("Cosmetic_SetIsGatewayPositionValid"));
	void AK25Gateway::Cosmetic_SetIsGatewayPositionValid(bool isGatewayPlacementValid)
	{
		K25Gateway_eventCosmetic_SetIsGatewayPositionValid_Parms Parms;
		Parms.isGatewayPlacementValid=isGatewayPlacementValid ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_Cosmetic_SetIsGatewayPositionValid),&Parms);
	}
	static FName NAME_AK25Gateway_Cosmetic_SetKillerVisualVisibility = FName(TEXT("Cosmetic_SetKillerVisualVisibility"));
	void AK25Gateway::Cosmetic_SetKillerVisualVisibility(bool isVisible)
	{
		K25Gateway_eventCosmetic_SetKillerVisualVisibility_Parms Parms;
		Parms.isVisible=isVisible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_Cosmetic_SetKillerVisualVisibility),&Parms);
	}
	static FName NAME_AK25Gateway_Cosmetic_TriggerGatewayPlacementCancel = FName(TEXT("Cosmetic_TriggerGatewayPlacementCancel"));
	void AK25Gateway::Cosmetic_TriggerGatewayPlacementCancel()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_Cosmetic_TriggerGatewayPlacementCancel),NULL);
	}
	static FName NAME_AK25Gateway_Cosmetic_TriggerGatewayPlacementStart = FName(TEXT("Cosmetic_TriggerGatewayPlacementStart"));
	void AK25Gateway::Cosmetic_TriggerGatewayPlacementStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_Cosmetic_TriggerGatewayPlacementStart),NULL);
	}
	static FName NAME_AK25Gateway_Cosmetic_TriggerGatewayPlacementStop = FName(TEXT("Cosmetic_TriggerGatewayPlacementStop"));
	void AK25Gateway::Cosmetic_TriggerGatewayPlacementStop()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_Cosmetic_TriggerGatewayPlacementStop),NULL);
	}
	static FName NAME_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects = FName(TEXT("Cosmetic_TriggerGatewayPossessedEffects"));
	void AK25Gateway::Cosmetic_TriggerGatewayPossessedEffects(const float transitionTime)
	{
		K25Gateway_eventCosmetic_TriggerGatewayPossessedEffects_Parms Parms;
		Parms.transitionTime=transitionTime;
		ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects),&Parms);
	}
	static FName NAME_AK25Gateway_Cosmetic_TriggerGatewayPossessionCancel = FName(TEXT("Cosmetic_TriggerGatewayPossessionCancel"));
	void AK25Gateway::Cosmetic_TriggerGatewayPossessionCancel()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_Cosmetic_TriggerGatewayPossessionCancel),NULL);
	}
	static FName NAME_AK25Gateway_Cosmetic_TriggerGatewayUnpossessedEffects = FName(TEXT("Cosmetic_TriggerGatewayUnpossessedEffects"));
	void AK25Gateway::Cosmetic_TriggerGatewayUnpossessedEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_Cosmetic_TriggerGatewayUnpossessedEffects),NULL);
	}
	static FName NAME_AK25Gateway_Cosmetic_TriggerInvalidGatewayPlacementSFX = FName(TEXT("Cosmetic_TriggerInvalidGatewayPlacementSFX"));
	void AK25Gateway::Cosmetic_TriggerInvalidGatewayPlacementSFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_Cosmetic_TriggerInvalidGatewayPlacementSFX),NULL);
	}
	static FName NAME_AK25Gateway_GetCameraComponent = FName(TEXT("GetCameraComponent"));
	UCameraComponent* AK25Gateway::GetCameraComponent() const
	{
		K25Gateway_eventGetCameraComponent_Parms Parms;
		const_cast<AK25Gateway*>(this)->ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_GetCameraComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AK25Gateway_Multicast_SetGatewayLocation = FName(TEXT("Multicast_SetGatewayLocation"));
	void AK25Gateway::Multicast_SetGatewayLocation(FVector possessionLocation)
	{
		K25Gateway_eventMulticast_SetGatewayLocation_Parms Parms;
		Parms.possessionLocation=possessionLocation;
		ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_Multicast_SetGatewayLocation),&Parms);
	}
	static FName NAME_AK25Gateway_Multicast_SetGatewayOrientation = FName(TEXT("Multicast_SetGatewayOrientation"));
	void AK25Gateway::Multicast_SetGatewayOrientation(FRotator rotation)
	{
		K25Gateway_eventMulticast_SetGatewayOrientation_Parms Parms;
		Parms.rotation=rotation;
		ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_Multicast_SetGatewayOrientation),&Parms);
	}
	static FName NAME_AK25Gateway_Multicast_SetGatewayTargetLocation = FName(TEXT("Multicast_SetGatewayTargetLocation"));
	void AK25Gateway::Multicast_SetGatewayTargetLocation(FVector targetLocation, bool isValidLocation)
	{
		K25Gateway_eventMulticast_SetGatewayTargetLocation_Parms Parms;
		Parms.targetLocation=targetLocation;
		Parms.isValidLocation=isValidLocation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_Multicast_SetGatewayTargetLocation),&Parms);
	}
	static FName NAME_AK25Gateway_Server_EndGatewayPossession = FName(TEXT("Server_EndGatewayPossession"));
	void AK25Gateway::Server_EndGatewayPossession()
	{
		ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_Server_EndGatewayPossession),NULL);
	}
	static FName NAME_AK25Gateway_Server_SetGatewayOrientation = FName(TEXT("Server_SetGatewayOrientation"));
	void AK25Gateway::Server_SetGatewayOrientation(FRotator rotation)
	{
		K25Gateway_eventServer_SetGatewayOrientation_Parms Parms;
		Parms.rotation=rotation;
		ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_Server_SetGatewayOrientation),&Parms);
	}
	static FName NAME_AK25Gateway_Server_SetGatewayTargetLocation = FName(TEXT("Server_SetGatewayTargetLocation"));
	void AK25Gateway::Server_SetGatewayTargetLocation(FVector targetLocation, bool isValidLocation)
	{
		K25Gateway_eventServer_SetGatewayTargetLocation_Parms Parms;
		Parms.targetLocation=targetLocation;
		Parms.isValidLocation=isValidLocation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_Server_SetGatewayTargetLocation),&Parms);
	}
	static FName NAME_AK25Gateway_Server_SetIsGatewayBeingPositionned = FName(TEXT("Server_SetIsGatewayBeingPositionned"));
	void AK25Gateway::Server_SetIsGatewayBeingPositionned(bool isBeingPositionned)
	{
		K25Gateway_eventServer_SetIsGatewayBeingPositionned_Parms Parms;
		Parms.isBeingPositionned=isBeingPositionned ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_Server_SetIsGatewayBeingPositionned),&Parms);
	}
	static FName NAME_AK25Gateway_Server_StartGatewayPossession = FName(TEXT("Server_StartGatewayPossession"));
	void AK25Gateway::Server_StartGatewayPossession(FVector possessionLocation, FRotator gatewayRotation)
	{
		K25Gateway_eventServer_StartGatewayPossession_Parms Parms;
		Parms.possessionLocation=possessionLocation;
		Parms.gatewayRotation=gatewayRotation;
		ProcessEvent(FindFunctionChecked(NAME_AK25Gateway_Server_StartGatewayPossession),&Parms);
	}
	void AK25Gateway::StaticRegisterNativesAK25Gateway()
	{
		UClass* Class = AK25Gateway::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsGatewayPossessed", &AK25Gateway::execIsGatewayPossessed },
			{ "Multicast_SetGatewayLocation", &AK25Gateway::execMulticast_SetGatewayLocation },
			{ "Multicast_SetGatewayOrientation", &AK25Gateway::execMulticast_SetGatewayOrientation },
			{ "Multicast_SetGatewayTargetLocation", &AK25Gateway::execMulticast_SetGatewayTargetLocation },
			{ "OnRep_IsBeingPositionned", &AK25Gateway::execOnRep_IsBeingPositionned },
			{ "OnRep_IsGatewayPossessed", &AK25Gateway::execOnRep_IsGatewayPossessed },
			{ "Server_EndGatewayPossession", &AK25Gateway::execServer_EndGatewayPossession },
			{ "Server_SetGatewayOrientation", &AK25Gateway::execServer_SetGatewayOrientation },
			{ "Server_SetGatewayTargetLocation", &AK25Gateway::execServer_SetGatewayTargetLocation },
			{ "Server_SetIsGatewayBeingPositionned", &AK25Gateway::execServer_SetIsGatewayBeingPositionned },
			{ "Server_StartGatewayPossession", &AK25Gateway::execServer_StartGatewayPossession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AK25Gateway_Cosmetic_SetIsGatewayPositionValid_Statics
	{
		static void NewProp_isGatewayPlacementValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGatewayPlacementValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AK25Gateway_Cosmetic_SetIsGatewayPositionValid_Statics::NewProp_isGatewayPlacementValid_SetBit(void* Obj)
	{
		((K25Gateway_eventCosmetic_SetIsGatewayPositionValid_Parms*)Obj)->isGatewayPlacementValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AK25Gateway_Cosmetic_SetIsGatewayPositionValid_Statics::NewProp_isGatewayPlacementValid = { "isGatewayPlacementValid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25Gateway_eventCosmetic_SetIsGatewayPositionValid_Parms), &Z_Construct_UFunction_AK25Gateway_Cosmetic_SetIsGatewayPositionValid_Statics::NewProp_isGatewayPlacementValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Gateway_Cosmetic_SetIsGatewayPositionValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Gateway_Cosmetic_SetIsGatewayPositionValid_Statics::NewProp_isGatewayPlacementValid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Cosmetic_SetIsGatewayPositionValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_Cosmetic_SetIsGatewayPositionValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "Cosmetic_SetIsGatewayPositionValid", nullptr, nullptr, sizeof(K25Gateway_eventCosmetic_SetIsGatewayPositionValid_Parms), Z_Construct_UFunction_AK25Gateway_Cosmetic_SetIsGatewayPositionValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Cosmetic_SetIsGatewayPositionValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Cosmetic_SetIsGatewayPositionValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Cosmetic_SetIsGatewayPositionValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_Cosmetic_SetIsGatewayPositionValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_Cosmetic_SetIsGatewayPositionValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_Cosmetic_SetKillerVisualVisibility_Statics
	{
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AK25Gateway_Cosmetic_SetKillerVisualVisibility_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((K25Gateway_eventCosmetic_SetKillerVisualVisibility_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AK25Gateway_Cosmetic_SetKillerVisualVisibility_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25Gateway_eventCosmetic_SetKillerVisualVisibility_Parms), &Z_Construct_UFunction_AK25Gateway_Cosmetic_SetKillerVisualVisibility_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Gateway_Cosmetic_SetKillerVisualVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Gateway_Cosmetic_SetKillerVisualVisibility_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Cosmetic_SetKillerVisualVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_Cosmetic_SetKillerVisualVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "Cosmetic_SetKillerVisualVisibility", nullptr, nullptr, sizeof(K25Gateway_eventCosmetic_SetKillerVisualVisibility_Parms), Z_Construct_UFunction_AK25Gateway_Cosmetic_SetKillerVisualVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Cosmetic_SetKillerVisualVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Cosmetic_SetKillerVisualVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Cosmetic_SetKillerVisualVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_Cosmetic_SetKillerVisualVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_Cosmetic_SetKillerVisualVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementCancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "Cosmetic_TriggerGatewayPlacementCancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "Cosmetic_TriggerGatewayPlacementStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementStop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "Cosmetic_TriggerGatewayPlacementStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transitionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_transitionTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects_Statics::NewProp_transitionTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects_Statics::NewProp_transitionTime = { "transitionTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Gateway_eventCosmetic_TriggerGatewayPossessedEffects_Parms, transitionTime), METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects_Statics::NewProp_transitionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects_Statics::NewProp_transitionTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects_Statics::NewProp_transitionTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "Cosmetic_TriggerGatewayPossessedEffects", nullptr, nullptr, sizeof(K25Gateway_eventCosmetic_TriggerGatewayPossessedEffects_Parms), Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessionCancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessionCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessionCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "Cosmetic_TriggerGatewayPossessionCancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessionCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessionCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessionCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessionCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayUnpossessedEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayUnpossessedEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayUnpossessedEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "Cosmetic_TriggerGatewayUnpossessedEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayUnpossessedEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayUnpossessedEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayUnpossessedEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayUnpossessedEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerInvalidGatewayPlacementSFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerInvalidGatewayPlacementSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerInvalidGatewayPlacementSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "Cosmetic_TriggerInvalidGatewayPlacementSFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerInvalidGatewayPlacementSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerInvalidGatewayPlacementSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerInvalidGatewayPlacementSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerInvalidGatewayPlacementSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_GetCameraComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_GetCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK25Gateway_GetCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Gateway_eventGetCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_GetCameraComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_GetCameraComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Gateway_GetCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Gateway_GetCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_GetCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_GetCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "GetCameraComponent", nullptr, nullptr, sizeof(K25Gateway_eventGetCameraComponent_Parms), Z_Construct_UFunction_AK25Gateway_GetCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_GetCameraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_GetCameraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_GetCameraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_GetCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_GetCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_IsGatewayPossessed_Statics
	{
		struct K25Gateway_eventIsGatewayPossessed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AK25Gateway_IsGatewayPossessed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((K25Gateway_eventIsGatewayPossessed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AK25Gateway_IsGatewayPossessed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25Gateway_eventIsGatewayPossessed_Parms), &Z_Construct_UFunction_AK25Gateway_IsGatewayPossessed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Gateway_IsGatewayPossessed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Gateway_IsGatewayPossessed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_IsGatewayPossessed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_IsGatewayPossessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "IsGatewayPossessed", nullptr, nullptr, sizeof(K25Gateway_eventIsGatewayPossessed_Parms), Z_Construct_UFunction_AK25Gateway_IsGatewayPossessed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_IsGatewayPossessed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_IsGatewayPossessed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_IsGatewayPossessed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_IsGatewayPossessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_IsGatewayPossessed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_possessionLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayLocation_Statics::NewProp_possessionLocation = { "possessionLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Gateway_eventMulticast_SetGatewayLocation_Parms, possessionLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayLocation_Statics::NewProp_possessionLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "Multicast_SetGatewayLocation", nullptr, nullptr, sizeof(K25Gateway_eventMulticast_SetGatewayLocation_Parms), Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayOrientation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayOrientation_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Gateway_eventMulticast_SetGatewayOrientation_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayOrientation_Statics::NewProp_rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayOrientation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "Multicast_SetGatewayOrientation", nullptr, nullptr, sizeof(K25Gateway_eventMulticast_SetGatewayOrientation_Parms), Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayTargetLocation_Statics
	{
		static void NewProp_isValidLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isValidLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayTargetLocation_Statics::NewProp_isValidLocation_SetBit(void* Obj)
	{
		((K25Gateway_eventMulticast_SetGatewayTargetLocation_Parms*)Obj)->isValidLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayTargetLocation_Statics::NewProp_isValidLocation = { "isValidLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25Gateway_eventMulticast_SetGatewayTargetLocation_Parms), &Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayTargetLocation_Statics::NewProp_isValidLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayTargetLocation_Statics::NewProp_targetLocation = { "targetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Gateway_eventMulticast_SetGatewayTargetLocation_Parms, targetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayTargetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayTargetLocation_Statics::NewProp_isValidLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayTargetLocation_Statics::NewProp_targetLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "Multicast_SetGatewayTargetLocation", nullptr, nullptr, sizeof(K25Gateway_eventMulticast_SetGatewayTargetLocation_Parms), Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayTargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_OnRep_IsBeingPositionned_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_OnRep_IsBeingPositionned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_OnRep_IsBeingPositionned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "OnRep_IsBeingPositionned", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_OnRep_IsBeingPositionned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_OnRep_IsBeingPositionned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_OnRep_IsBeingPositionned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_OnRep_IsBeingPositionned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_OnRep_IsGatewayPossessed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_OnRep_IsGatewayPossessed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_OnRep_IsGatewayPossessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "OnRep_IsGatewayPossessed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_OnRep_IsGatewayPossessed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_OnRep_IsGatewayPossessed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_OnRep_IsGatewayPossessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_OnRep_IsGatewayPossessed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_Server_EndGatewayPossession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Server_EndGatewayPossession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_Server_EndGatewayPossession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "Server_EndGatewayPossession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Server_EndGatewayPossession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Server_EndGatewayPossession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_Server_EndGatewayPossession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_Server_EndGatewayPossession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_Server_SetGatewayOrientation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25Gateway_Server_SetGatewayOrientation_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Gateway_eventServer_SetGatewayOrientation_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Gateway_Server_SetGatewayOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Gateway_Server_SetGatewayOrientation_Statics::NewProp_rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Server_SetGatewayOrientation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_Server_SetGatewayOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "Server_SetGatewayOrientation", nullptr, nullptr, sizeof(K25Gateway_eventServer_SetGatewayOrientation_Parms), Z_Construct_UFunction_AK25Gateway_Server_SetGatewayOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Server_SetGatewayOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A40C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Server_SetGatewayOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Server_SetGatewayOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_Server_SetGatewayOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_Server_SetGatewayOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_Server_SetGatewayTargetLocation_Statics
	{
		static void NewProp_isValidLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isValidLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AK25Gateway_Server_SetGatewayTargetLocation_Statics::NewProp_isValidLocation_SetBit(void* Obj)
	{
		((K25Gateway_eventServer_SetGatewayTargetLocation_Parms*)Obj)->isValidLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AK25Gateway_Server_SetGatewayTargetLocation_Statics::NewProp_isValidLocation = { "isValidLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25Gateway_eventServer_SetGatewayTargetLocation_Parms), &Z_Construct_UFunction_AK25Gateway_Server_SetGatewayTargetLocation_Statics::NewProp_isValidLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25Gateway_Server_SetGatewayTargetLocation_Statics::NewProp_targetLocation = { "targetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Gateway_eventServer_SetGatewayTargetLocation_Parms, targetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Gateway_Server_SetGatewayTargetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Gateway_Server_SetGatewayTargetLocation_Statics::NewProp_isValidLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Gateway_Server_SetGatewayTargetLocation_Statics::NewProp_targetLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Server_SetGatewayTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_Server_SetGatewayTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "Server_SetGatewayTargetLocation", nullptr, nullptr, sizeof(K25Gateway_eventServer_SetGatewayTargetLocation_Parms), Z_Construct_UFunction_AK25Gateway_Server_SetGatewayTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Server_SetGatewayTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A40C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Server_SetGatewayTargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Server_SetGatewayTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_Server_SetGatewayTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_Server_SetGatewayTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_Server_SetIsGatewayBeingPositionned_Statics
	{
		static void NewProp_isBeingPositionned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBeingPositionned;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AK25Gateway_Server_SetIsGatewayBeingPositionned_Statics::NewProp_isBeingPositionned_SetBit(void* Obj)
	{
		((K25Gateway_eventServer_SetIsGatewayBeingPositionned_Parms*)Obj)->isBeingPositionned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AK25Gateway_Server_SetIsGatewayBeingPositionned_Statics::NewProp_isBeingPositionned = { "isBeingPositionned", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25Gateway_eventServer_SetIsGatewayBeingPositionned_Parms), &Z_Construct_UFunction_AK25Gateway_Server_SetIsGatewayBeingPositionned_Statics::NewProp_isBeingPositionned_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Gateway_Server_SetIsGatewayBeingPositionned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Gateway_Server_SetIsGatewayBeingPositionned_Statics::NewProp_isBeingPositionned,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Server_SetIsGatewayBeingPositionned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_Server_SetIsGatewayBeingPositionned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "Server_SetIsGatewayBeingPositionned", nullptr, nullptr, sizeof(K25Gateway_eventServer_SetIsGatewayBeingPositionned_Parms), Z_Construct_UFunction_AK25Gateway_Server_SetIsGatewayBeingPositionned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Server_SetIsGatewayBeingPositionned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Server_SetIsGatewayBeingPositionned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Server_SetIsGatewayBeingPositionned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_Server_SetIsGatewayBeingPositionned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_Server_SetIsGatewayBeingPositionned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25Gateway_Server_StartGatewayPossession_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gatewayRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_possessionLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25Gateway_Server_StartGatewayPossession_Statics::NewProp_gatewayRotation = { "gatewayRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Gateway_eventServer_StartGatewayPossession_Parms, gatewayRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25Gateway_Server_StartGatewayPossession_Statics::NewProp_possessionLocation = { "possessionLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Gateway_eventServer_StartGatewayPossession_Parms, possessionLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25Gateway_Server_StartGatewayPossession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Gateway_Server_StartGatewayPossession_Statics::NewProp_gatewayRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25Gateway_Server_StartGatewayPossession_Statics::NewProp_possessionLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25Gateway_Server_StartGatewayPossession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25Gateway_Server_StartGatewayPossession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25Gateway, nullptr, "Server_StartGatewayPossession", nullptr, nullptr, sizeof(K25Gateway_eventServer_StartGatewayPossession_Parms), Z_Construct_UFunction_AK25Gateway_Server_StartGatewayPossession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Server_StartGatewayPossession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A40CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25Gateway_Server_StartGatewayPossession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25Gateway_Server_StartGatewayPossession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25Gateway_Server_StartGatewayPossession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25Gateway_Server_StartGatewayPossession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AK25Gateway_NoRegister()
	{
		return AK25Gateway::StaticClass();
	}
	struct Z_Construct_UClass_AK25Gateway_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__possessionTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__possessionTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingPositionned_MetaData[];
#endif
		static void NewProp__isBeingPositionned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingPositionned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isGatewayPossessed_MetaData[];
#endif
		static void NewProp__isGatewayPossessed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isGatewayPossessed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraPlacementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cameraPlacementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__targetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__visualComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__visualComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxGatewayPossessionDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxGatewayPossessionDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumCameraPitchOrientationAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__minimumCameraPitchOrientationAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumCameraPitchOrientationAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maximumCameraPitchOrientationAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pitchLevelChangeZoneThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pitchLevelChangeZoneThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pitchLevelChangeAngleThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pitchLevelChangeAngleThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gatewayPlacementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gatewayPlacementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxDistanceFromPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxDistanceFromPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minDistanceFromPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__minDistanceFromPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumTimeBeforeTargetLocationMulticast_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minimumTimeBeforeTargetLocationMulticast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__indicatorVelocityEasingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__indicatorVelocityEasingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumIndicatorVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minimumIndicatorVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorGatewayRotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__survivorGatewayRotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__distancePercentLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__distancePercentLocations;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__distancePercentLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rayCastLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rayCastLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rayCastZOffet_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rayCastZOffet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AK25Gateway_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AK25Gateway_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AK25Gateway_Cosmetic_SetIsGatewayPositionValid, "Cosmetic_SetIsGatewayPositionValid" }, // 2585661468
		{ &Z_Construct_UFunction_AK25Gateway_Cosmetic_SetKillerVisualVisibility, "Cosmetic_SetKillerVisualVisibility" }, // 739908569
		{ &Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementCancel, "Cosmetic_TriggerGatewayPlacementCancel" }, // 3341915633
		{ &Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementStart, "Cosmetic_TriggerGatewayPlacementStart" }, // 3350747343
		{ &Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPlacementStop, "Cosmetic_TriggerGatewayPlacementStop" }, // 1496346174
		{ &Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects, "Cosmetic_TriggerGatewayPossessedEffects" }, // 1839460089
		{ &Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayPossessionCancel, "Cosmetic_TriggerGatewayPossessionCancel" }, // 2513885269
		{ &Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerGatewayUnpossessedEffects, "Cosmetic_TriggerGatewayUnpossessedEffects" }, // 1552477853
		{ &Z_Construct_UFunction_AK25Gateway_Cosmetic_TriggerInvalidGatewayPlacementSFX, "Cosmetic_TriggerInvalidGatewayPlacementSFX" }, // 969560081
		{ &Z_Construct_UFunction_AK25Gateway_GetCameraComponent, "GetCameraComponent" }, // 3986238217
		{ &Z_Construct_UFunction_AK25Gateway_IsGatewayPossessed, "IsGatewayPossessed" }, // 1527845928
		{ &Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayLocation, "Multicast_SetGatewayLocation" }, // 1589699837
		{ &Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayOrientation, "Multicast_SetGatewayOrientation" }, // 4071931706
		{ &Z_Construct_UFunction_AK25Gateway_Multicast_SetGatewayTargetLocation, "Multicast_SetGatewayTargetLocation" }, // 1865662236
		{ &Z_Construct_UFunction_AK25Gateway_OnRep_IsBeingPositionned, "OnRep_IsBeingPositionned" }, // 3035920905
		{ &Z_Construct_UFunction_AK25Gateway_OnRep_IsGatewayPossessed, "OnRep_IsGatewayPossessed" }, // 1458093580
		{ &Z_Construct_UFunction_AK25Gateway_Server_EndGatewayPossession, "Server_EndGatewayPossession" }, // 3375873883
		{ &Z_Construct_UFunction_AK25Gateway_Server_SetGatewayOrientation, "Server_SetGatewayOrientation" }, // 1240066553
		{ &Z_Construct_UFunction_AK25Gateway_Server_SetGatewayTargetLocation, "Server_SetGatewayTargetLocation" }, // 964289470
		{ &Z_Construct_UFunction_AK25Gateway_Server_SetIsGatewayBeingPositionned, "Server_SetIsGatewayBeingPositionned" }, // 1190566834
		{ &Z_Construct_UFunction_AK25Gateway_Server_StartGatewayPossession, "Server_StartGatewayPossession" }, // 1681055455
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25Gateway.h" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__possessionTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__possessionTimer = { "_possessionTimer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _possessionTimer), Z_Construct_UScriptStruct_FFastTimer, METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__possessionTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__possessionTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__isBeingPositionned_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	void Z_Construct_UClass_AK25Gateway_Statics::NewProp__isBeingPositionned_SetBit(void* Obj)
	{
		((AK25Gateway*)Obj)->_isBeingPositionned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__isBeingPositionned = { "_isBeingPositionned", "OnRep_IsBeingPositionned", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AK25Gateway), &Z_Construct_UClass_AK25Gateway_Statics::NewProp__isBeingPositionned_SetBit, METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__isBeingPositionned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__isBeingPositionned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__isGatewayPossessed_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	void Z_Construct_UClass_AK25Gateway_Statics::NewProp__isGatewayPossessed_SetBit(void* Obj)
	{
		((AK25Gateway*)Obj)->_isGatewayPossessed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__isGatewayPossessed = { "_isGatewayPossessed", "OnRep_IsGatewayPossessed", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AK25Gateway), &Z_Construct_UClass_AK25Gateway_Statics::NewProp__isGatewayPossessed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__isGatewayPossessed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__isGatewayPossessed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__cameraPlacementComponent_MetaData[] = {
		{ "Category", "K25Gateway" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__cameraPlacementComponent = { "_cameraPlacementComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _cameraPlacementComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__cameraPlacementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__cameraPlacementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__targetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__targetLocation = { "_targetLocation", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _targetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__targetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__targetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__visualComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__visualComponent = { "_visualComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _visualComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__visualComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__visualComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__maxGatewayPossessionDuration_MetaData[] = {
		{ "Category", "K25Gateway" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__maxGatewayPossessionDuration = { "_maxGatewayPossessionDuration", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _maxGatewayPossessionDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__maxGatewayPossessionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__maxGatewayPossessionDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__minimumCameraPitchOrientationAngle_MetaData[] = {
		{ "Category", "K25Gateway" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__minimumCameraPitchOrientationAngle = { "_minimumCameraPitchOrientationAngle", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _minimumCameraPitchOrientationAngle), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__minimumCameraPitchOrientationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__minimumCameraPitchOrientationAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__maximumCameraPitchOrientationAngle_MetaData[] = {
		{ "Category", "K25Gateway" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__maximumCameraPitchOrientationAngle = { "_maximumCameraPitchOrientationAngle", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _maximumCameraPitchOrientationAngle), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__maximumCameraPitchOrientationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__maximumCameraPitchOrientationAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__pitchLevelChangeZoneThreshold_MetaData[] = {
		{ "Category", "K25Gateway" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__pitchLevelChangeZoneThreshold = { "_pitchLevelChangeZoneThreshold", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _pitchLevelChangeZoneThreshold), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__pitchLevelChangeZoneThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__pitchLevelChangeZoneThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__pitchLevelChangeAngleThreshold_MetaData[] = {
		{ "Category", "K25Gateway" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__pitchLevelChangeAngleThreshold = { "_pitchLevelChangeAngleThreshold", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _pitchLevelChangeAngleThreshold), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__pitchLevelChangeAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__pitchLevelChangeAngleThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__gatewayPlacementSpeed_MetaData[] = {
		{ "Category", "K25Gateway" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__gatewayPlacementSpeed = { "_gatewayPlacementSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _gatewayPlacementSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__gatewayPlacementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__gatewayPlacementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__maxDistanceFromPlayer_MetaData[] = {
		{ "Category", "K25Gateway" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__maxDistanceFromPlayer = { "_maxDistanceFromPlayer", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _maxDistanceFromPlayer), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__maxDistanceFromPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__maxDistanceFromPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__minDistanceFromPlayer_MetaData[] = {
		{ "Category", "K25Gateway" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__minDistanceFromPlayer = { "_minDistanceFromPlayer", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _minDistanceFromPlayer), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__minDistanceFromPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__minDistanceFromPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__minimumTimeBeforeTargetLocationMulticast_MetaData[] = {
		{ "Category", "K25Gateway" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__minimumTimeBeforeTargetLocationMulticast = { "_minimumTimeBeforeTargetLocationMulticast", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _minimumTimeBeforeTargetLocationMulticast), METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__minimumTimeBeforeTargetLocationMulticast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__minimumTimeBeforeTargetLocationMulticast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__indicatorVelocityEasingFactor_MetaData[] = {
		{ "Category", "K25Gateway" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__indicatorVelocityEasingFactor = { "_indicatorVelocityEasingFactor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _indicatorVelocityEasingFactor), METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__indicatorVelocityEasingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__indicatorVelocityEasingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__minimumIndicatorVelocity_MetaData[] = {
		{ "Category", "K25Gateway" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__minimumIndicatorVelocity = { "_minimumIndicatorVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _minimumIndicatorVelocity), METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__minimumIndicatorVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__minimumIndicatorVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__survivorGatewayRotationSpeed_MetaData[] = {
		{ "Category", "K25Gateway" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__survivorGatewayRotationSpeed = { "_survivorGatewayRotationSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _survivorGatewayRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__survivorGatewayRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__survivorGatewayRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__distancePercentLocations_MetaData[] = {
		{ "Category", "K25Gateway" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__distancePercentLocations = { "_distancePercentLocations", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _distancePercentLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__distancePercentLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__distancePercentLocations_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__distancePercentLocations_Inner = { "_distancePercentLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__rayCastLength_MetaData[] = {
		{ "Category", "K25Gateway" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__rayCastLength = { "_rayCastLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _rayCastLength), METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__rayCastLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__rayCastLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25Gateway_Statics::NewProp__rayCastZOffet_MetaData[] = {
		{ "Category", "K25Gateway" },
		{ "ModuleRelativePath", "Public/K25Gateway.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25Gateway_Statics::NewProp__rayCastZOffet = { "_rayCastZOffet", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25Gateway, _rayCastZOffet), METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::NewProp__rayCastZOffet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::NewProp__rayCastZOffet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AK25Gateway_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__possessionTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__isBeingPositionned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__isGatewayPossessed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__cameraPlacementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__targetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__visualComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__maxGatewayPossessionDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__minimumCameraPitchOrientationAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__maximumCameraPitchOrientationAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__pitchLevelChangeZoneThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__pitchLevelChangeAngleThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__gatewayPlacementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__maxDistanceFromPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__minDistanceFromPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__minimumTimeBeforeTargetLocationMulticast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__indicatorVelocityEasingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__minimumIndicatorVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__survivorGatewayRotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__distancePercentLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__distancePercentLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__rayCastLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25Gateway_Statics::NewProp__rayCastZOffet,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AK25Gateway_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USpectatingActorLinker_NoRegister, (int32)VTABLE_OFFSET(AK25Gateway, ISpectatingActorLinker), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AK25Gateway_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AK25Gateway>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AK25Gateway_Statics::ClassParams = {
		&AK25Gateway::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AK25Gateway_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AK25Gateway_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AK25Gateway_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AK25Gateway()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AK25Gateway_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AK25Gateway, 1847945122);
	template<> THEK25_API UClass* StaticClass<AK25Gateway>()
	{
		return AK25Gateway::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AK25Gateway(Z_Construct_UClass_AK25Gateway, &AK25Gateway::StaticClass, TEXT("/Script/TheK25"), TEXT("AK25Gateway"), false, nullptr, nullptr, nullptr);

	void AK25Gateway::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isGatewayPossessed(TEXT("_isGatewayPossessed"));
		static const FName Name__isBeingPositionned(TEXT("_isBeingPositionned"));

		const bool bIsValid = true
			&& Name__isGatewayPossessed == ClassReps[(int32)ENetFields_Private::_isGatewayPossessed].Property->GetFName()
			&& Name__isBeingPositionned == ClassReps[(int32)ENetFields_Private::_isBeingPositionned].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AK25Gateway"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AK25Gateway);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
