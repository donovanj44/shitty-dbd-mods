// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheNightmare/Public/GeneratorTeleportInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorTeleportInteraction() {}
// Cross Module References
	THENIGHTMARE_API UClass* Z_Construct_UClass_UGeneratorTeleportInteraction_NoRegister();
	THENIGHTMARE_API UClass* Z_Construct_UClass_UGeneratorTeleportInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheNightmare();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UTimerObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGeneratorTeleportInteraction::execAuthority_StartTeleportCooldown)
	{
		P_GET_UBOOL(Z_Param_teleported);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_StartTeleportCooldown(Z_Param_teleported);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorTeleportInteraction::execAuthority_TeleportPlayerToGenerator)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_playerToTeleport);
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Authority_TeleportPlayerToGenerator(Z_Param_playerToTeleport,Z_Param_generator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorTeleportInteraction::execCanTeleportAtGenerator)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanTeleportAtGenerator(Z_Param_generator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorTeleportInteraction::execGetInlineGenerator)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGenerator**)Z_Param__Result=P_THIS->GetInlineGenerator(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorTeleportInteraction::execGetOwningPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetOwningPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorTeleportInteraction::execInitializeTunableValues)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTunableValues(Z_Param_killer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorTeleportInteraction::execIsTeleportAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTeleportAvailable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorTeleportInteraction::execMulticast_OnTeleportLocationChosen)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_GET_STRUCT(FTransform,Z_Param_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnTeleportLocationChosen_Implementation(Z_Param_generator,Z_Param_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorTeleportInteraction::execMulticast_TeleportPlayer)
	{
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_TeleportPlayer_Implementation(Z_Param_location,Z_Param_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorTeleportInteraction::execOnBloodSpurts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBloodSpurts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorTeleportInteraction::execOnIntroCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIntroCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorTeleportInteraction::execOnRep_SelectedGenerator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SelectedGenerator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorTeleportInteraction::execOnRep_TeleportCooldownTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TeleportCooldownTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorTeleportInteraction::execServer_SetSelectedGenerator)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetSelectedGenerator_Validate(Z_Param_generator))
		{
			RPC_ValidateFailed(TEXT("Server_SetSelectedGenerator_Validate"));
			return;
		}
		P_THIS->Server_SetSelectedGenerator_Implementation(Z_Param_generator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorTeleportInteraction::execStartBloodSpurts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartBloodSpurts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorTeleportInteraction::execStopBloodSpurts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopBloodSpurts();
		P_NATIVE_END;
	}
	static FName NAME_UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen = FName(TEXT("Multicast_OnTeleportLocationChosen"));
	void UGeneratorTeleportInteraction::Multicast_OnTeleportLocationChosen(AGenerator* generator, FTransform location)
	{
		GeneratorTeleportInteraction_eventMulticast_OnTeleportLocationChosen_Parms Parms;
		Parms.generator=generator;
		Parms.location=location;
		ProcessEvent(FindFunctionChecked(NAME_UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen),&Parms);
	}
	static FName NAME_UGeneratorTeleportInteraction_Multicast_TeleportPlayer = FName(TEXT("Multicast_TeleportPlayer"));
	void UGeneratorTeleportInteraction::Multicast_TeleportPlayer(FVector location, FRotator rotation)
	{
		GeneratorTeleportInteraction_eventMulticast_TeleportPlayer_Parms Parms;
		Parms.location=location;
		Parms.rotation=rotation;
		ProcessEvent(FindFunctionChecked(NAME_UGeneratorTeleportInteraction_Multicast_TeleportPlayer),&Parms);
	}
	static FName NAME_UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet = FName(TEXT("OnLocallySelectedGeneratorSet"));
	void UGeneratorTeleportInteraction::OnLocallySelectedGeneratorSet(AGenerator* selectedGenerator)
	{
		GeneratorTeleportInteraction_eventOnLocallySelectedGeneratorSet_Parms Parms;
		Parms.selectedGenerator=selectedGenerator;
		ProcessEvent(FindFunctionChecked(NAME_UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet),&Parms);
	}
	static FName NAME_UGeneratorTeleportInteraction_OnSelectedGeneratorSet = FName(TEXT("OnSelectedGeneratorSet"));
	void UGeneratorTeleportInteraction::OnSelectedGeneratorSet(AGenerator* selectedGenerator)
	{
		GeneratorTeleportInteraction_eventOnSelectedGeneratorSet_Parms Parms;
		Parms.selectedGenerator=selectedGenerator;
		ProcessEvent(FindFunctionChecked(NAME_UGeneratorTeleportInteraction_OnSelectedGeneratorSet),&Parms);
	}
	static FName NAME_UGeneratorTeleportInteraction_OnTeleported = FName(TEXT("OnTeleported"));
	void UGeneratorTeleportInteraction::OnTeleported(FTransform transformBeforeTeleport)
	{
		GeneratorTeleportInteraction_eventOnTeleported_Parms Parms;
		Parms.transformBeforeTeleport=transformBeforeTeleport;
		ProcessEvent(FindFunctionChecked(NAME_UGeneratorTeleportInteraction_OnTeleported),&Parms);
	}
	static FName NAME_UGeneratorTeleportInteraction_OnTeleportLocationChosen = FName(TEXT("OnTeleportLocationChosen"));
	void UGeneratorTeleportInteraction::OnTeleportLocationChosen(AGenerator* generator, FTransform location)
	{
		GeneratorTeleportInteraction_eventOnTeleportLocationChosen_Parms Parms;
		Parms.generator=generator;
		Parms.location=location;
		ProcessEvent(FindFunctionChecked(NAME_UGeneratorTeleportInteraction_OnTeleportLocationChosen),&Parms);
	}
	static FName NAME_UGeneratorTeleportInteraction_OnTeleportReady = FName(TEXT("OnTeleportReady"));
	void UGeneratorTeleportInteraction::OnTeleportReady()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGeneratorTeleportInteraction_OnTeleportReady),NULL);
	}
	static FName NAME_UGeneratorTeleportInteraction_Server_SetSelectedGenerator = FName(TEXT("Server_SetSelectedGenerator"));
	void UGeneratorTeleportInteraction::Server_SetSelectedGenerator(AGenerator* generator)
	{
		GeneratorTeleportInteraction_eventServer_SetSelectedGenerator_Parms Parms;
		Parms.generator=generator;
		ProcessEvent(FindFunctionChecked(NAME_UGeneratorTeleportInteraction_Server_SetSelectedGenerator),&Parms);
	}
	static FName NAME_UGeneratorTeleportInteraction_ShowBloodSpurtsVFX = FName(TEXT("ShowBloodSpurtsVFX"));
	void UGeneratorTeleportInteraction::ShowBloodSpurtsVFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGeneratorTeleportInteraction_ShowBloodSpurtsVFX),NULL);
	}
	void UGeneratorTeleportInteraction::StaticRegisterNativesUGeneratorTeleportInteraction()
	{
		UClass* Class = UGeneratorTeleportInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_StartTeleportCooldown", &UGeneratorTeleportInteraction::execAuthority_StartTeleportCooldown },
			{ "Authority_TeleportPlayerToGenerator", &UGeneratorTeleportInteraction::execAuthority_TeleportPlayerToGenerator },
			{ "CanTeleportAtGenerator", &UGeneratorTeleportInteraction::execCanTeleportAtGenerator },
			{ "GetInlineGenerator", &UGeneratorTeleportInteraction::execGetInlineGenerator },
			{ "GetOwningPlayer", &UGeneratorTeleportInteraction::execGetOwningPlayer },
			{ "InitializeTunableValues", &UGeneratorTeleportInteraction::execInitializeTunableValues },
			{ "IsTeleportAvailable", &UGeneratorTeleportInteraction::execIsTeleportAvailable },
			{ "Multicast_OnTeleportLocationChosen", &UGeneratorTeleportInteraction::execMulticast_OnTeleportLocationChosen },
			{ "Multicast_TeleportPlayer", &UGeneratorTeleportInteraction::execMulticast_TeleportPlayer },
			{ "OnBloodSpurts", &UGeneratorTeleportInteraction::execOnBloodSpurts },
			{ "OnIntroCompleted", &UGeneratorTeleportInteraction::execOnIntroCompleted },
			{ "OnRep_SelectedGenerator", &UGeneratorTeleportInteraction::execOnRep_SelectedGenerator },
			{ "OnRep_TeleportCooldownTimer", &UGeneratorTeleportInteraction::execOnRep_TeleportCooldownTimer },
			{ "Server_SetSelectedGenerator", &UGeneratorTeleportInteraction::execServer_SetSelectedGenerator },
			{ "StartBloodSpurts", &UGeneratorTeleportInteraction::execStartBloodSpurts },
			{ "StopBloodSpurts", &UGeneratorTeleportInteraction::execStopBloodSpurts },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Statics
	{
		struct GeneratorTeleportInteraction_eventAuthority_StartTeleportCooldown_Parms
		{
			bool teleported;
		};
		static void NewProp_teleported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_teleported;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Statics::NewProp_teleported_SetBit(void* Obj)
	{
		((GeneratorTeleportInteraction_eventAuthority_StartTeleportCooldown_Parms*)Obj)->teleported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Statics::NewProp_teleported = { "teleported", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorTeleportInteraction_eventAuthority_StartTeleportCooldown_Parms), &Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Statics::NewProp_teleported_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Statics::NewProp_teleported,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "Authority_StartTeleportCooldown", nullptr, nullptr, sizeof(GeneratorTeleportInteraction_eventAuthority_StartTeleportCooldown_Parms), Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_StartTeleportCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Statics
	{
		struct GeneratorTeleportInteraction_eventAuthority_TeleportPlayerToGenerator_Parms
		{
			ADBDPlayer* playerToTeleport;
			AGenerator* generator;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerToTeleport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeneratorTeleportInteraction_eventAuthority_TeleportPlayerToGenerator_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorTeleportInteraction_eventAuthority_TeleportPlayerToGenerator_Parms), &Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorTeleportInteraction_eventAuthority_TeleportPlayerToGenerator_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Statics::NewProp_playerToTeleport = { "playerToTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorTeleportInteraction_eventAuthority_TeleportPlayerToGenerator_Parms, playerToTeleport), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Statics::NewProp_generator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Statics::NewProp_playerToTeleport,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "Authority_TeleportPlayerToGenerator", nullptr, nullptr, sizeof(GeneratorTeleportInteraction_eventAuthority_TeleportPlayerToGenerator_Parms), Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_CanTeleportAtGenerator_Statics
	{
		struct GeneratorTeleportInteraction_eventCanTeleportAtGenerator_Parms
		{
			AGenerator* generator;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeneratorTeleportInteraction_CanTeleportAtGenerator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeneratorTeleportInteraction_eventCanTeleportAtGenerator_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_CanTeleportAtGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorTeleportInteraction_eventCanTeleportAtGenerator_Parms), &Z_Construct_UFunction_UGeneratorTeleportInteraction_CanTeleportAtGenerator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_CanTeleportAtGenerator_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorTeleportInteraction_eventCanTeleportAtGenerator_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorTeleportInteraction_CanTeleportAtGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_CanTeleportAtGenerator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_CanTeleportAtGenerator_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_CanTeleportAtGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_CanTeleportAtGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "CanTeleportAtGenerator", nullptr, nullptr, sizeof(GeneratorTeleportInteraction_eventCanTeleportAtGenerator_Parms), Z_Construct_UFunction_UGeneratorTeleportInteraction_CanTeleportAtGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_CanTeleportAtGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_CanTeleportAtGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_CanTeleportAtGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_CanTeleportAtGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_CanTeleportAtGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator_Statics
	{
		struct GeneratorTeleportInteraction_eventGetInlineGenerator_Parms
		{
			const ADBDPlayer* player;
			AGenerator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorTeleportInteraction_eventGetInlineGenerator_Parms, ReturnValue), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorTeleportInteraction_eventGetInlineGenerator_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "GetInlineGenerator", nullptr, nullptr, sizeof(GeneratorTeleportInteraction_eventGetInlineGenerator_Parms), Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_GetOwningPlayer_Statics
	{
		struct GeneratorTeleportInteraction_eventGetOwningPlayer_Parms
		{
			ADBDPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_GetOwningPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorTeleportInteraction_eventGetOwningPlayer_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorTeleportInteraction_GetOwningPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_GetOwningPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_GetOwningPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_GetOwningPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "GetOwningPlayer", nullptr, nullptr, sizeof(GeneratorTeleportInteraction_eventGetOwningPlayer_Parms), Z_Construct_UFunction_UGeneratorTeleportInteraction_GetOwningPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_GetOwningPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_GetOwningPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_GetOwningPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_GetOwningPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_GetOwningPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_InitializeTunableValues_Statics
	{
		struct GeneratorTeleportInteraction_eventInitializeTunableValues_Parms
		{
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_InitializeTunableValues_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorTeleportInteraction_eventInitializeTunableValues_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorTeleportInteraction_InitializeTunableValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_InitializeTunableValues_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_InitializeTunableValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_InitializeTunableValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "InitializeTunableValues", nullptr, nullptr, sizeof(GeneratorTeleportInteraction_eventInitializeTunableValues_Parms), Z_Construct_UFunction_UGeneratorTeleportInteraction_InitializeTunableValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_InitializeTunableValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_InitializeTunableValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_InitializeTunableValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_InitializeTunableValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_InitializeTunableValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_IsTeleportAvailable_Statics
	{
		struct GeneratorTeleportInteraction_eventIsTeleportAvailable_Parms
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
	void Z_Construct_UFunction_UGeneratorTeleportInteraction_IsTeleportAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeneratorTeleportInteraction_eventIsTeleportAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_IsTeleportAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorTeleportInteraction_eventIsTeleportAvailable_Parms), &Z_Construct_UFunction_UGeneratorTeleportInteraction_IsTeleportAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorTeleportInteraction_IsTeleportAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_IsTeleportAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_IsTeleportAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_IsTeleportAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "IsTeleportAvailable", nullptr, nullptr, sizeof(GeneratorTeleportInteraction_eventIsTeleportAvailable_Parms), Z_Construct_UFunction_UGeneratorTeleportInteraction_IsTeleportAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_IsTeleportAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_IsTeleportAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_IsTeleportAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_IsTeleportAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_IsTeleportAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorTeleportInteraction_eventMulticast_OnTeleportLocationChosen_Parms, location), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorTeleportInteraction_eventMulticast_OnTeleportLocationChosen_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "Multicast_OnTeleportLocationChosen", nullptr, nullptr, sizeof(GeneratorTeleportInteraction_eventMulticast_OnTeleportLocationChosen_Parms), Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorTeleportInteraction_eventMulticast_TeleportPlayer_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorTeleportInteraction_eventMulticast_TeleportPlayer_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "Multicast_TeleportPlayer", nullptr, nullptr, sizeof(GeneratorTeleportInteraction_eventMulticast_TeleportPlayer_Parms), Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_TeleportPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_OnBloodSpurts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_OnBloodSpurts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_OnBloodSpurts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "OnBloodSpurts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnBloodSpurts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnBloodSpurts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_OnBloodSpurts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_OnBloodSpurts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_OnIntroCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_OnIntroCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_OnIntroCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "OnIntroCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnIntroCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnIntroCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_OnIntroCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_OnIntroCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectedGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet_Statics::NewProp_selectedGenerator = { "selectedGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorTeleportInteraction_eventOnLocallySelectedGeneratorSet_Parms, selectedGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet_Statics::NewProp_selectedGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "OnLocallySelectedGeneratorSet", nullptr, nullptr, sizeof(GeneratorTeleportInteraction_eventOnLocallySelectedGeneratorSet_Parms), Z_Construct_UFunction_UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_OnRep_SelectedGenerator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_OnRep_SelectedGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_OnRep_SelectedGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "OnRep_SelectedGenerator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnRep_SelectedGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnRep_SelectedGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_OnRep_SelectedGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_OnRep_SelectedGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_OnRep_TeleportCooldownTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_OnRep_TeleportCooldownTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_OnRep_TeleportCooldownTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "OnRep_TeleportCooldownTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnRep_TeleportCooldownTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnRep_TeleportCooldownTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_OnRep_TeleportCooldownTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_OnRep_TeleportCooldownTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_OnSelectedGeneratorSet_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectedGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_OnSelectedGeneratorSet_Statics::NewProp_selectedGenerator = { "selectedGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorTeleportInteraction_eventOnSelectedGeneratorSet_Parms, selectedGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorTeleportInteraction_OnSelectedGeneratorSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_OnSelectedGeneratorSet_Statics::NewProp_selectedGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_OnSelectedGeneratorSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_OnSelectedGeneratorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "OnSelectedGeneratorSet", nullptr, nullptr, sizeof(GeneratorTeleportInteraction_eventOnSelectedGeneratorSet_Parms), Z_Construct_UFunction_UGeneratorTeleportInteraction_OnSelectedGeneratorSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnSelectedGeneratorSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnSelectedGeneratorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnSelectedGeneratorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_OnSelectedGeneratorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_OnSelectedGeneratorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleported_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_transformBeforeTeleport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleported_Statics::NewProp_transformBeforeTeleport = { "transformBeforeTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorTeleportInteraction_eventOnTeleported_Parms, transformBeforeTeleport), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleported_Statics::NewProp_transformBeforeTeleport,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleported_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "OnTeleported", nullptr, nullptr, sizeof(GeneratorTeleportInteraction_eventOnTeleported_Parms), Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportLocationChosen_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportLocationChosen_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorTeleportInteraction_eventOnTeleportLocationChosen_Parms, location), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportLocationChosen_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorTeleportInteraction_eventOnTeleportLocationChosen_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportLocationChosen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportLocationChosen_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportLocationChosen_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportLocationChosen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportLocationChosen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "OnTeleportLocationChosen", nullptr, nullptr, sizeof(GeneratorTeleportInteraction_eventOnTeleportLocationChosen_Parms), Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportLocationChosen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportLocationChosen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportLocationChosen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportLocationChosen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportLocationChosen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportLocationChosen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "OnTeleportReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_Server_SetSelectedGenerator_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorTeleportInteraction_Server_SetSelectedGenerator_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorTeleportInteraction_eventServer_SetSelectedGenerator_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorTeleportInteraction_Server_SetSelectedGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorTeleportInteraction_Server_SetSelectedGenerator_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_Server_SetSelectedGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_Server_SetSelectedGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "Server_SetSelectedGenerator", nullptr, nullptr, sizeof(GeneratorTeleportInteraction_eventServer_SetSelectedGenerator_Parms), Z_Construct_UFunction_UGeneratorTeleportInteraction_Server_SetSelectedGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_Server_SetSelectedGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_Server_SetSelectedGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_Server_SetSelectedGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_Server_SetSelectedGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_Server_SetSelectedGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_ShowBloodSpurtsVFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_ShowBloodSpurtsVFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_ShowBloodSpurtsVFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "ShowBloodSpurtsVFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_ShowBloodSpurtsVFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_ShowBloodSpurtsVFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_ShowBloodSpurtsVFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_ShowBloodSpurtsVFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_StartBloodSpurts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_StartBloodSpurts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_StartBloodSpurts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "StartBloodSpurts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_StartBloodSpurts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_StartBloodSpurts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_StartBloodSpurts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_StartBloodSpurts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorTeleportInteraction_StopBloodSpurts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorTeleportInteraction_StopBloodSpurts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorTeleportInteraction_StopBloodSpurts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorTeleportInteraction, nullptr, "StopBloodSpurts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorTeleportInteraction_StopBloodSpurts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorTeleportInteraction_StopBloodSpurts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorTeleportInteraction_StopBloodSpurts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorTeleportInteraction_StopBloodSpurts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGeneratorTeleportInteraction_NoRegister()
	{
		return UGeneratorTeleportInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UGeneratorTeleportInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__downRaycastLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__downRaycastLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorTeleportMaxAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__generatorTeleportMaxAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__capsuleTraceAngleIncrement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__capsuleTraceAngleIncrement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collisionCheckLocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__collisionCheckLocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collisionCheckCapsuleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__collisionCheckCapsuleRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collisionCheckCapsuleHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__collisionCheckCapsuleHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodSpurtInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__bloodSpurtInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__teleportFailed_MetaData[];
#endif
		static void NewProp__teleportFailed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__teleportFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInteractionOngoing_MetaData[];
#endif
		static void NewProp__isInteractionOngoing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInteractionOngoing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selectedTeleportLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__selectedTeleportLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__locallySelectedGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__locallySelectedGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selectedGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__selectedGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__teleportCooldownTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__teleportCooldownTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBloodSpurtsAINoiseEventRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OnBloodSpurtsAINoiseEventRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheNightmare,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_StartTeleportCooldown, "Authority_StartTeleportCooldown" }, // 3942246419
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator, "Authority_TeleportPlayerToGenerator" }, // 3149890968
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_CanTeleportAtGenerator, "CanTeleportAtGenerator" }, // 4118374175
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_GetInlineGenerator, "GetInlineGenerator" }, // 3094055306
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_GetOwningPlayer, "GetOwningPlayer" }, // 3053584349
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_InitializeTunableValues, "InitializeTunableValues" }, // 3651351174
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_IsTeleportAvailable, "IsTeleportAvailable" }, // 790907635
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen, "Multicast_OnTeleportLocationChosen" }, // 1754043266
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_Multicast_TeleportPlayer, "Multicast_TeleportPlayer" }, // 2042686931
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_OnBloodSpurts, "OnBloodSpurts" }, // 378381152
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_OnIntroCompleted, "OnIntroCompleted" }, // 746704390
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet, "OnLocallySelectedGeneratorSet" }, // 1353985121
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_OnRep_SelectedGenerator, "OnRep_SelectedGenerator" }, // 597885600
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_OnRep_TeleportCooldownTimer, "OnRep_TeleportCooldownTimer" }, // 1264478591
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_OnSelectedGeneratorSet, "OnSelectedGeneratorSet" }, // 3101999385
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleported, "OnTeleported" }, // 2046131770
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportLocationChosen, "OnTeleportLocationChosen" }, // 1229759209
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_OnTeleportReady, "OnTeleportReady" }, // 1798667945
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_Server_SetSelectedGenerator, "Server_SetSelectedGenerator" }, // 3848181331
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_ShowBloodSpurtsVFX, "ShowBloodSpurtsVFX" }, // 2314785616
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_StartBloodSpurts, "StartBloodSpurts" }, // 1614371932
		{ &Z_Construct_UFunction_UGeneratorTeleportInteraction_StopBloodSpurts, "StopBloodSpurts" }, // 1683399699
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GeneratorTeleportInteraction.h" },
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__downRaycastLength_MetaData[] = {
		{ "Category", "GeneratorTeleportInteraction" },
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__downRaycastLength = { "_downRaycastLength", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorTeleportInteraction, _downRaycastLength), METADATA_PARAMS(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__downRaycastLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__downRaycastLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__generatorTeleportMaxAngle_MetaData[] = {
		{ "Category", "GeneratorTeleportInteraction" },
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__generatorTeleportMaxAngle = { "_generatorTeleportMaxAngle", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorTeleportInteraction, _generatorTeleportMaxAngle), METADATA_PARAMS(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__generatorTeleportMaxAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__generatorTeleportMaxAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__capsuleTraceAngleIncrement_MetaData[] = {
		{ "Category", "GeneratorTeleportInteraction" },
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__capsuleTraceAngleIncrement = { "_capsuleTraceAngleIncrement", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorTeleportInteraction, _capsuleTraceAngleIncrement), METADATA_PARAMS(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__capsuleTraceAngleIncrement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__capsuleTraceAngleIncrement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__collisionCheckLocationOffset_MetaData[] = {
		{ "Category", "GeneratorTeleportInteraction" },
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__collisionCheckLocationOffset = { "_collisionCheckLocationOffset", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorTeleportInteraction, _collisionCheckLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__collisionCheckLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__collisionCheckLocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__collisionCheckCapsuleRadius_MetaData[] = {
		{ "Category", "GeneratorTeleportInteraction" },
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__collisionCheckCapsuleRadius = { "_collisionCheckCapsuleRadius", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorTeleportInteraction, _collisionCheckCapsuleRadius), METADATA_PARAMS(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__collisionCheckCapsuleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__collisionCheckCapsuleRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__collisionCheckCapsuleHalfHeight_MetaData[] = {
		{ "Category", "GeneratorTeleportInteraction" },
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__collisionCheckCapsuleHalfHeight = { "_collisionCheckCapsuleHalfHeight", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorTeleportInteraction, _collisionCheckCapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__collisionCheckCapsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__collisionCheckCapsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__bloodSpurtInterval_MetaData[] = {
		{ "Category", "GeneratorTeleportInteraction" },
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__bloodSpurtInterval = { "_bloodSpurtInterval", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorTeleportInteraction, _bloodSpurtInterval), METADATA_PARAMS(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__bloodSpurtInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__bloodSpurtInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__teleportFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GeneratorTeleportInteraction" },
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	void Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__teleportFailed_SetBit(void* Obj)
	{
		((UGeneratorTeleportInteraction*)Obj)->_teleportFailed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__teleportFailed = { "_teleportFailed", nullptr, (EPropertyFlags)0x0040000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGeneratorTeleportInteraction), &Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__teleportFailed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__teleportFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__teleportFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__isInteractionOngoing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GeneratorTeleportInteraction" },
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	void Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__isInteractionOngoing_SetBit(void* Obj)
	{
		((UGeneratorTeleportInteraction*)Obj)->_isInteractionOngoing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__isInteractionOngoing = { "_isInteractionOngoing", nullptr, (EPropertyFlags)0x0040000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGeneratorTeleportInteraction), &Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__isInteractionOngoing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__isInteractionOngoing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__isInteractionOngoing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__selectedTeleportLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GeneratorTeleportInteraction" },
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__selectedTeleportLocation = { "_selectedTeleportLocation", nullptr, (EPropertyFlags)0x0040000000002024, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorTeleportInteraction, _selectedTeleportLocation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__selectedTeleportLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__selectedTeleportLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__locallySelectedGenerator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GeneratorTeleportInteraction" },
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__locallySelectedGenerator = { "_locallySelectedGenerator", nullptr, (EPropertyFlags)0x0040000000002004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorTeleportInteraction, _locallySelectedGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__locallySelectedGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__locallySelectedGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__selectedGenerator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GeneratorTeleportInteraction" },
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__selectedGenerator = { "_selectedGenerator", "OnRep_SelectedGenerator", (EPropertyFlags)0x0040000100002024, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorTeleportInteraction, _selectedGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__selectedGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__selectedGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__teleportCooldownTimer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__teleportCooldownTimer = { "_teleportCooldownTimer", "OnRep_TeleportCooldownTimer", (EPropertyFlags)0x0040000100082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorTeleportInteraction, _teleportCooldownTimer), Z_Construct_UClass_UTimerObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__teleportCooldownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__teleportCooldownTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp_OnBloodSpurtsAINoiseEventRange_MetaData[] = {
		{ "Category", "GeneratorTeleportInteraction" },
		{ "ModuleRelativePath", "Public/GeneratorTeleportInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp_OnBloodSpurtsAINoiseEventRange = { "OnBloodSpurtsAINoiseEventRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeneratorTeleportInteraction, OnBloodSpurtsAINoiseEventRange), METADATA_PARAMS(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp_OnBloodSpurtsAINoiseEventRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp_OnBloodSpurtsAINoiseEventRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__downRaycastLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__generatorTeleportMaxAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__capsuleTraceAngleIncrement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__collisionCheckLocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__collisionCheckCapsuleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__collisionCheckCapsuleHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__bloodSpurtInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__teleportFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__isInteractionOngoing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__selectedTeleportLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__locallySelectedGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__selectedGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp__teleportCooldownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::NewProp_OnBloodSpurtsAINoiseEventRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneratorTeleportInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::ClassParams = {
		&UGeneratorTeleportInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeneratorTeleportInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeneratorTeleportInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeneratorTeleportInteraction, 57660997);
	template<> THENIGHTMARE_API UClass* StaticClass<UGeneratorTeleportInteraction>()
	{
		return UGeneratorTeleportInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeneratorTeleportInteraction(Z_Construct_UClass_UGeneratorTeleportInteraction, &UGeneratorTeleportInteraction::StaticClass, TEXT("/Script/TheNightmare"), TEXT("UGeneratorTeleportInteraction"), false, nullptr, nullptr, nullptr);

	void UGeneratorTeleportInteraction::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__teleportCooldownTimer(TEXT("_teleportCooldownTimer"));
		static const FName Name__selectedGenerator(TEXT("_selectedGenerator"));
		static const FName Name__selectedTeleportLocation(TEXT("_selectedTeleportLocation"));

		const bool bIsValid = true
			&& Name__teleportCooldownTimer == ClassReps[(int32)ENetFields_Private::_teleportCooldownTimer].Property->GetFName()
			&& Name__selectedGenerator == ClassReps[(int32)ENetFields_Private::_selectedGenerator].Property->GetFName()
			&& Name__selectedTeleportLocation == ClassReps[(int32)ENetFields_Private::_selectedTeleportLocation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGeneratorTeleportInteraction"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneratorTeleportInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
