// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinJumpAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinJumpAttack() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinJumpAttack_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinJumpAttack();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttack();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	THETWINS_API UClass* Z_Construct_UClass_AConjoinedTwin_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTwinJumpAttack::execClient_Debug_PrintFinalDecisionOnScreen)
	{
		P_GET_UBOOL(Z_Param_foundPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_Debug_PrintFinalDecisionOnScreen_Implementation(Z_Param_foundPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinJumpAttack::execMulticast_AttachToSurvivor)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_survivorToAttachTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_AttachToSurvivor_Implementation(Z_Param_survivorToAttachTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinJumpAttack::execMulticast_DestroyTwinOnWrongLanding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DestroyTwinOnWrongLanding_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinJumpAttack::execMulticast_SetIsForbiddenLandingLocation)
	{
		P_GET_UBOOL(Z_Param_isForbiddenLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetIsForbiddenLandingLocation_Implementation(Z_Param_isForbiddenLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinJumpAttack::execOnRep_ShouldTwinHaveJumpObjectType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ShouldTwinHaveJumpObjectType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinJumpAttack::execServer_OnJumpStartTwin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_OnJumpStartTwin_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_OnJumpStartTwin_Validate"));
			return;
		}
		P_THIS->Server_OnJumpStartTwin_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinJumpAttack::execServer_StopJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_StopJump_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_StopJump_Validate"));
			return;
		}
		P_THIS->Server_StopJump_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen = FName(TEXT("Client_Debug_PrintFinalDecisionOnScreen"));
	void UTwinJumpAttack::Client_Debug_PrintFinalDecisionOnScreen(bool foundPath)
	{
		TwinJumpAttack_eventClient_Debug_PrintFinalDecisionOnScreen_Parms Parms;
		Parms.foundPath=foundPath ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen),&Parms);
	}
	static FName NAME_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged = FName(TEXT("Cosmetic_OnIsForbiddenLandingLocationChanged"));
	void UTwinJumpAttack::Cosmetic_OnIsForbiddenLandingLocationChanged(bool isForbiddenLocation, AConjoinedTwin* twin)
	{
		TwinJumpAttack_eventCosmetic_OnIsForbiddenLandingLocationChanged_Parms Parms;
		Parms.isForbiddenLocation=isForbiddenLocation ? true : false;
		Parms.twin=twin;
		ProcessEvent(FindFunctionChecked(NAME_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged),&Parms);
	}
	static FName NAME_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged = FName(TEXT("Cosmetic_OnJumpCooldownChanged"));
	void UTwinJumpAttack::Cosmetic_OnJumpCooldownChanged(bool isInJumpCooldown, AConjoinedTwin* owningTwin)
	{
		TwinJumpAttack_eventCosmetic_OnJumpCooldownChanged_Parms Parms;
		Parms.isInJumpCooldown=isInJumpCooldown ? true : false;
		Parms.owningTwin=owningTwin;
		ProcessEvent(FindFunctionChecked(NAME_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged),&Parms);
	}
	static FName NAME_UTwinJumpAttack_Cosmetic_OnJumpLanded = FName(TEXT("Cosmetic_OnJumpLanded"));
	void UTwinJumpAttack::Cosmetic_OnJumpLanded(AConjoinedTwin* owningTwin)
	{
		TwinJumpAttack_eventCosmetic_OnJumpLanded_Parms Parms;
		Parms.owningTwin=owningTwin;
		ProcessEvent(FindFunctionChecked(NAME_UTwinJumpAttack_Cosmetic_OnJumpLanded),&Parms);
	}
	static FName NAME_UTwinJumpAttack_Cosmetic_OnJumpObstructed = FName(TEXT("Cosmetic_OnJumpObstructed"));
	void UTwinJumpAttack::Cosmetic_OnJumpObstructed(AConjoinedTwin* owningTwin, UPhysicalMaterial* physicalMaterial, FVector position, FVector normal)
	{
		TwinJumpAttack_eventCosmetic_OnJumpObstructed_Parms Parms;
		Parms.owningTwin=owningTwin;
		Parms.physicalMaterial=physicalMaterial;
		Parms.position=position;
		Parms.normal=normal;
		ProcessEvent(FindFunctionChecked(NAME_UTwinJumpAttack_Cosmetic_OnJumpObstructed),&Parms);
	}
	static FName NAME_UTwinJumpAttack_Cosmetic_OnJumpStarted = FName(TEXT("Cosmetic_OnJumpStarted"));
	void UTwinJumpAttack::Cosmetic_OnJumpStarted(AConjoinedTwin* owningTwin)
	{
		TwinJumpAttack_eventCosmetic_OnJumpStarted_Parms Parms;
		Parms.owningTwin=owningTwin;
		ProcessEvent(FindFunctionChecked(NAME_UTwinJumpAttack_Cosmetic_OnJumpStarted),&Parms);
	}
	static FName NAME_UTwinJumpAttack_Multicast_AttachToSurvivor = FName(TEXT("Multicast_AttachToSurvivor"));
	void UTwinJumpAttack::Multicast_AttachToSurvivor(ADBDPlayer* survivorToAttachTo)
	{
		TwinJumpAttack_eventMulticast_AttachToSurvivor_Parms Parms;
		Parms.survivorToAttachTo=survivorToAttachTo;
		ProcessEvent(FindFunctionChecked(NAME_UTwinJumpAttack_Multicast_AttachToSurvivor),&Parms);
	}
	static FName NAME_UTwinJumpAttack_Multicast_DestroyTwinOnWrongLanding = FName(TEXT("Multicast_DestroyTwinOnWrongLanding"));
	void UTwinJumpAttack::Multicast_DestroyTwinOnWrongLanding()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTwinJumpAttack_Multicast_DestroyTwinOnWrongLanding),NULL);
	}
	static FName NAME_UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation = FName(TEXT("Multicast_SetIsForbiddenLandingLocation"));
	void UTwinJumpAttack::Multicast_SetIsForbiddenLandingLocation(bool isForbiddenLocation)
	{
		TwinJumpAttack_eventMulticast_SetIsForbiddenLandingLocation_Parms Parms;
		Parms.isForbiddenLocation=isForbiddenLocation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation),&Parms);
	}
	static FName NAME_UTwinJumpAttack_Server_OnJumpStartTwin = FName(TEXT("Server_OnJumpStartTwin"));
	void UTwinJumpAttack::Server_OnJumpStartTwin()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTwinJumpAttack_Server_OnJumpStartTwin),NULL);
	}
	static FName NAME_UTwinJumpAttack_Server_StopJump = FName(TEXT("Server_StopJump"));
	void UTwinJumpAttack::Server_StopJump()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTwinJumpAttack_Server_StopJump),NULL);
	}
	void UTwinJumpAttack::StaticRegisterNativesUTwinJumpAttack()
	{
		UClass* Class = UTwinJumpAttack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_Debug_PrintFinalDecisionOnScreen", &UTwinJumpAttack::execClient_Debug_PrintFinalDecisionOnScreen },
			{ "Multicast_AttachToSurvivor", &UTwinJumpAttack::execMulticast_AttachToSurvivor },
			{ "Multicast_DestroyTwinOnWrongLanding", &UTwinJumpAttack::execMulticast_DestroyTwinOnWrongLanding },
			{ "Multicast_SetIsForbiddenLandingLocation", &UTwinJumpAttack::execMulticast_SetIsForbiddenLandingLocation },
			{ "OnRep_ShouldTwinHaveJumpObjectType", &UTwinJumpAttack::execOnRep_ShouldTwinHaveJumpObjectType },
			{ "Server_OnJumpStartTwin", &UTwinJumpAttack::execServer_OnJumpStartTwin },
			{ "Server_StopJump", &UTwinJumpAttack::execServer_StopJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Statics
	{
		static void NewProp_foundPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_foundPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Statics::NewProp_foundPath_SetBit(void* Obj)
	{
		((TwinJumpAttack_eventClient_Debug_PrintFinalDecisionOnScreen_Parms*)Obj)->foundPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Statics::NewProp_foundPath = { "foundPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TwinJumpAttack_eventClient_Debug_PrintFinalDecisionOnScreen_Parms), &Z_Construct_UFunction_UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Statics::NewProp_foundPath_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Statics::NewProp_foundPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinJumpAttack, nullptr, "Client_Debug_PrintFinalDecisionOnScreen", nullptr, nullptr, sizeof(TwinJumpAttack_eventClient_Debug_PrintFinalDecisionOnScreen_Parms), Z_Construct_UFunction_UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_twin;
		static void NewProp_isForbiddenLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isForbiddenLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Statics::NewProp_twin = { "twin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttack_eventCosmetic_OnIsForbiddenLandingLocationChanged_Parms, twin), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Statics::NewProp_isForbiddenLocation_SetBit(void* Obj)
	{
		((TwinJumpAttack_eventCosmetic_OnIsForbiddenLandingLocationChanged_Parms*)Obj)->isForbiddenLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Statics::NewProp_isForbiddenLocation = { "isForbiddenLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TwinJumpAttack_eventCosmetic_OnIsForbiddenLandingLocationChanged_Parms), &Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Statics::NewProp_isForbiddenLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Statics::NewProp_twin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Statics::NewProp_isForbiddenLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinJumpAttack, nullptr, "Cosmetic_OnIsForbiddenLandingLocationChanged", nullptr, nullptr, sizeof(TwinJumpAttack_eventCosmetic_OnIsForbiddenLandingLocationChanged_Parms), Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owningTwin;
		static void NewProp_isInJumpCooldown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInJumpCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Statics::NewProp_owningTwin = { "owningTwin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttack_eventCosmetic_OnJumpCooldownChanged_Parms, owningTwin), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Statics::NewProp_isInJumpCooldown_SetBit(void* Obj)
	{
		((TwinJumpAttack_eventCosmetic_OnJumpCooldownChanged_Parms*)Obj)->isInJumpCooldown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Statics::NewProp_isInJumpCooldown = { "isInJumpCooldown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TwinJumpAttack_eventCosmetic_OnJumpCooldownChanged_Parms), &Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Statics::NewProp_isInJumpCooldown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Statics::NewProp_owningTwin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Statics::NewProp_isInJumpCooldown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinJumpAttack, nullptr, "Cosmetic_OnJumpCooldownChanged", nullptr, nullptr, sizeof(TwinJumpAttack_eventCosmetic_OnJumpCooldownChanged_Parms), Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpLanded_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owningTwin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpLanded_Statics::NewProp_owningTwin = { "owningTwin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttack_eventCosmetic_OnJumpLanded_Parms, owningTwin), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpLanded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpLanded_Statics::NewProp_owningTwin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpLanded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpLanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinJumpAttack, nullptr, "Cosmetic_OnJumpLanded", nullptr, nullptr, sizeof(TwinJumpAttack_eventCosmetic_OnJumpLanded_Parms), Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpLanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpLanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpLanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpLanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpLanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpLanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_physicalMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owningTwin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed_Statics::NewProp_normal = { "normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttack_eventCosmetic_OnJumpObstructed_Parms, normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttack_eventCosmetic_OnJumpObstructed_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed_Statics::NewProp_physicalMaterial = { "physicalMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttack_eventCosmetic_OnJumpObstructed_Parms, physicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed_Statics::NewProp_owningTwin = { "owningTwin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttack_eventCosmetic_OnJumpObstructed_Parms, owningTwin), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed_Statics::NewProp_normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed_Statics::NewProp_physicalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed_Statics::NewProp_owningTwin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinJumpAttack, nullptr, "Cosmetic_OnJumpObstructed", nullptr, nullptr, sizeof(TwinJumpAttack_eventCosmetic_OnJumpObstructed_Parms), Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpStarted_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owningTwin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpStarted_Statics::NewProp_owningTwin = { "owningTwin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttack_eventCosmetic_OnJumpStarted_Parms, owningTwin), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpStarted_Statics::NewProp_owningTwin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinJumpAttack, nullptr, "Cosmetic_OnJumpStarted", nullptr, nullptr, sizeof(TwinJumpAttack_eventCosmetic_OnJumpStarted_Parms), Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinJumpAttack_Multicast_AttachToSurvivor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivorToAttachTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinJumpAttack_Multicast_AttachToSurvivor_Statics::NewProp_survivorToAttachTo = { "survivorToAttachTo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttack_eventMulticast_AttachToSurvivor_Parms, survivorToAttachTo), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinJumpAttack_Multicast_AttachToSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttack_Multicast_AttachToSurvivor_Statics::NewProp_survivorToAttachTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttack_Multicast_AttachToSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinJumpAttack_Multicast_AttachToSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinJumpAttack, nullptr, "Multicast_AttachToSurvivor", nullptr, nullptr, sizeof(TwinJumpAttack_eventMulticast_AttachToSurvivor_Parms), Z_Construct_UFunction_UTwinJumpAttack_Multicast_AttachToSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Multicast_AttachToSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttack_Multicast_AttachToSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Multicast_AttachToSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinJumpAttack_Multicast_AttachToSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinJumpAttack_Multicast_AttachToSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinJumpAttack_Multicast_DestroyTwinOnWrongLanding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttack_Multicast_DestroyTwinOnWrongLanding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinJumpAttack_Multicast_DestroyTwinOnWrongLanding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinJumpAttack, nullptr, "Multicast_DestroyTwinOnWrongLanding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttack_Multicast_DestroyTwinOnWrongLanding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Multicast_DestroyTwinOnWrongLanding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinJumpAttack_Multicast_DestroyTwinOnWrongLanding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinJumpAttack_Multicast_DestroyTwinOnWrongLanding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Statics
	{
		static void NewProp_isForbiddenLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isForbiddenLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Statics::NewProp_isForbiddenLocation_SetBit(void* Obj)
	{
		((TwinJumpAttack_eventMulticast_SetIsForbiddenLandingLocation_Parms*)Obj)->isForbiddenLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Statics::NewProp_isForbiddenLocation = { "isForbiddenLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TwinJumpAttack_eventMulticast_SetIsForbiddenLandingLocation_Parms), &Z_Construct_UFunction_UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Statics::NewProp_isForbiddenLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Statics::NewProp_isForbiddenLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinJumpAttack, nullptr, "Multicast_SetIsForbiddenLandingLocation", nullptr, nullptr, sizeof(TwinJumpAttack_eventMulticast_SetIsForbiddenLandingLocation_Parms), Z_Construct_UFunction_UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinJumpAttack_OnRep_ShouldTwinHaveJumpObjectType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttack_OnRep_ShouldTwinHaveJumpObjectType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinJumpAttack_OnRep_ShouldTwinHaveJumpObjectType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinJumpAttack, nullptr, "OnRep_ShouldTwinHaveJumpObjectType", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttack_OnRep_ShouldTwinHaveJumpObjectType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_OnRep_ShouldTwinHaveJumpObjectType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinJumpAttack_OnRep_ShouldTwinHaveJumpObjectType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinJumpAttack_OnRep_ShouldTwinHaveJumpObjectType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinJumpAttack_Server_OnJumpStartTwin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttack_Server_OnJumpStartTwin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinJumpAttack_Server_OnJumpStartTwin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinJumpAttack, nullptr, "Server_OnJumpStartTwin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttack_Server_OnJumpStartTwin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Server_OnJumpStartTwin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinJumpAttack_Server_OnJumpStartTwin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinJumpAttack_Server_OnJumpStartTwin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinJumpAttack_Server_StopJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttack_Server_StopJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinJumpAttack_Server_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinJumpAttack, nullptr, "Server_StopJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttack_Server_StopJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttack_Server_StopJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinJumpAttack_Server_StopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinJumpAttack_Server_StopJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTwinJumpAttack_NoRegister()
	{
		return UTwinJumpAttack::StaticClass();
	}
	struct Z_Construct_UClass_UTwinJumpAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shouldTwinHaveJumpObjectType_MetaData[];
#endif
		static void NewProp__shouldTwinHaveJumpObjectType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__shouldTwinHaveJumpObjectType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__authorizedLandingHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__authorizedLandingHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__leftRightObstructionAnglePrecision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__leftRightObstructionAnglePrecision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__upDownObstructionAnglePrecision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__upDownObstructionAnglePrecision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__jumpAngleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__jumpAngleCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__jumpVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__jumpVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinJumpAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttack,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTwinJumpAttack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen, "Client_Debug_PrintFinalDecisionOnScreen" }, // 2413598632
		{ &Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged, "Cosmetic_OnIsForbiddenLandingLocationChanged" }, // 4224514584
		{ &Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged, "Cosmetic_OnJumpCooldownChanged" }, // 979213069
		{ &Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpLanded, "Cosmetic_OnJumpLanded" }, // 1448666645
		{ &Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpObstructed, "Cosmetic_OnJumpObstructed" }, // 3665665916
		{ &Z_Construct_UFunction_UTwinJumpAttack_Cosmetic_OnJumpStarted, "Cosmetic_OnJumpStarted" }, // 1379012540
		{ &Z_Construct_UFunction_UTwinJumpAttack_Multicast_AttachToSurvivor, "Multicast_AttachToSurvivor" }, // 2482188593
		{ &Z_Construct_UFunction_UTwinJumpAttack_Multicast_DestroyTwinOnWrongLanding, "Multicast_DestroyTwinOnWrongLanding" }, // 347965415
		{ &Z_Construct_UFunction_UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation, "Multicast_SetIsForbiddenLandingLocation" }, // 321820450
		{ &Z_Construct_UFunction_UTwinJumpAttack_OnRep_ShouldTwinHaveJumpObjectType, "OnRep_ShouldTwinHaveJumpObjectType" }, // 3120539387
		{ &Z_Construct_UFunction_UTwinJumpAttack_Server_OnJumpStartTwin, "Server_OnJumpStartTwin" }, // 2295958429
		{ &Z_Construct_UFunction_UTwinJumpAttack_Server_StopJump, "Server_StopJump" }, // 2644654425
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinJumpAttack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TwinJumpAttack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__shouldTwinHaveJumpObjectType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	void Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__shouldTwinHaveJumpObjectType_SetBit(void* Obj)
	{
		((UTwinJumpAttack*)Obj)->_shouldTwinHaveJumpObjectType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__shouldTwinHaveJumpObjectType = { "_shouldTwinHaveJumpObjectType", "OnRep_ShouldTwinHaveJumpObjectType", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTwinJumpAttack), &Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__shouldTwinHaveJumpObjectType_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__shouldTwinHaveJumpObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__shouldTwinHaveJumpObjectType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__authorizedLandingHeight_MetaData[] = {
		{ "Category", "TwinJumpAttack" },
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__authorizedLandingHeight = { "_authorizedLandingHeight", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinJumpAttack, _authorizedLandingHeight), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__authorizedLandingHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__authorizedLandingHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__leftRightObstructionAnglePrecision_MetaData[] = {
		{ "Category", "TwinJumpAttack" },
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__leftRightObstructionAnglePrecision = { "_leftRightObstructionAnglePrecision", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinJumpAttack, _leftRightObstructionAnglePrecision), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__leftRightObstructionAnglePrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__leftRightObstructionAnglePrecision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__upDownObstructionAnglePrecision_MetaData[] = {
		{ "Category", "TwinJumpAttack" },
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__upDownObstructionAnglePrecision = { "_upDownObstructionAnglePrecision", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinJumpAttack, _upDownObstructionAnglePrecision), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__upDownObstructionAnglePrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__upDownObstructionAnglePrecision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__jumpAngleCurve_MetaData[] = {
		{ "Category", "TwinJumpAttack" },
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__jumpAngleCurve = { "_jumpAngleCurve", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinJumpAttack, _jumpAngleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__jumpAngleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__jumpAngleCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__jumpVelocity_MetaData[] = {
		{ "Category", "TwinJumpAttack" },
		{ "ModuleRelativePath", "Public/TwinJumpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__jumpVelocity = { "_jumpVelocity", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinJumpAttack, _jumpVelocity), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__jumpVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__jumpVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwinJumpAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__shouldTwinHaveJumpObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__authorizedLandingHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__leftRightObstructionAnglePrecision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__upDownObstructionAnglePrecision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__jumpAngleCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinJumpAttack_Statics::NewProp__jumpVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinJumpAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinJumpAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinJumpAttack_Statics::ClassParams = {
		&UTwinJumpAttack::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTwinJumpAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwinJumpAttack_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTwinJumpAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinJumpAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinJumpAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinJumpAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinJumpAttack, 3790386640);
	template<> THETWINS_API UClass* StaticClass<UTwinJumpAttack>()
	{
		return UTwinJumpAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinJumpAttack(Z_Construct_UClass_UTwinJumpAttack, &UTwinJumpAttack::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinJumpAttack"), false, nullptr, nullptr, nullptr);

	void UTwinJumpAttack::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__shouldTwinHaveJumpObjectType(TEXT("_shouldTwinHaveJumpObjectType"));

		const bool bIsValid = true
			&& Name__shouldTwinHaveJumpObjectType == ClassReps[(int32)ENetFields_Private::_shouldTwinHaveJumpObjectType].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTwinJumpAttack"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinJumpAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
