// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Window.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindow() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AWindow_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AWindow();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UMaterialHelper_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDNavEvadeLoopComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlockableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULocalPlayerTrackerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FVaultData();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FNativeBlockIndicatorData();
// End Cross Module References
	DEFINE_FUNCTION(AWindow::execAuthority_OnVaultInternal)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_UBOOL(Z_Param_canBlockVault);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnVaultInternal(Z_Param_player,Z_Param_canBlockVault);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindow::execAuthority_SetBlockedByLevel)
	{
		P_GET_UBOOL(Z_Param_isBlockedByLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetBlockedByLevel(Z_Param_isBlockedByLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindow::execForceBlockLocalWindowInteraction)
	{
		P_GET_UBOOL(Z_Param_blockInteraction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceBlockLocalWindowInteraction(Z_Param_blockInteraction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindow::execGetAudioComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAkComponent**)Z_Param__Result=P_THIS->GetAudioComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindow::execGetBlockedByLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBlockedByLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindow::execGetEntityAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UChildActorComponent**)Z_Param__Result=P_THIS->GetEntityAssets_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindow::execGetMaterialHelper)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialHelper**)Z_Param__Result=P_THIS->GetMaterialHelper_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindow::execIsWindowVaultBlockedFor)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWindowVaultBlockedFor(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindow::execIsWindowVaultBlockedForAnyPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWindowVaultBlockedForAnyPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindow::execNotifyOnFastVault)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_OBJECT(UInteractionDefinition,Z_Param_interaction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyOnFastVault(Z_Param_player,Z_Param_interaction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindow::execOnLocallyObservedChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocallyObservedChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindow::execOnRep_blockedByLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_blockedByLevel();
		P_NATIVE_END;
	}
	static FName NAME_AWindow_GetAudioComponent = FName(TEXT("GetAudioComponent"));
	UAkComponent* AWindow::GetAudioComponent() const
	{
		Window_eventGetAudioComponent_Parms Parms;
		const_cast<AWindow*>(this)->ProcessEvent(FindFunctionChecked(NAME_AWindow_GetAudioComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AWindow_GetEntityAssets = FName(TEXT("GetEntityAssets"));
	UChildActorComponent* AWindow::GetEntityAssets() const
	{
		Window_eventGetEntityAssets_Parms Parms;
		const_cast<AWindow*>(this)->ProcessEvent(FindFunctionChecked(NAME_AWindow_GetEntityAssets),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AWindow_GetMaterialHelper = FName(TEXT("GetMaterialHelper"));
	UMaterialHelper* AWindow::GetMaterialHelper() const
	{
		Window_eventGetMaterialHelper_Parms Parms;
		const_cast<AWindow*>(this)->ProcessEvent(FindFunctionChecked(NAME_AWindow_GetMaterialHelper),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AWindow_OnFastVault = FName(TEXT("OnFastVault"));
	void AWindow::OnFastVault(ADBDPlayer* player, UInteractionDefinition* interaction)
	{
		Window_eventOnFastVault_Parms Parms;
		Parms.player=player;
		Parms.interaction=interaction;
		ProcessEvent(FindFunctionChecked(NAME_AWindow_OnFastVault),&Parms);
	}
	void AWindow::StaticRegisterNativesAWindow()
	{
		UClass* Class = AWindow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnVaultInternal", &AWindow::execAuthority_OnVaultInternal },
			{ "Authority_SetBlockedByLevel", &AWindow::execAuthority_SetBlockedByLevel },
			{ "ForceBlockLocalWindowInteraction", &AWindow::execForceBlockLocalWindowInteraction },
			{ "GetAudioComponent", &AWindow::execGetAudioComponent },
			{ "GetBlockedByLevel", &AWindow::execGetBlockedByLevel },
			{ "GetEntityAssets", &AWindow::execGetEntityAssets },
			{ "GetMaterialHelper", &AWindow::execGetMaterialHelper },
			{ "IsWindowVaultBlockedFor", &AWindow::execIsWindowVaultBlockedFor },
			{ "IsWindowVaultBlockedForAnyPlayer", &AWindow::execIsWindowVaultBlockedForAnyPlayer },
			{ "NotifyOnFastVault", &AWindow::execNotifyOnFastVault },
			{ "OnLocallyObservedChanged", &AWindow::execOnLocallyObservedChanged },
			{ "OnRep_blockedByLevel", &AWindow::execOnRep_blockedByLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWindow_Authority_OnVaultInternal_Statics
	{
		struct Window_eventAuthority_OnVaultInternal_Parms
		{
			ADBDPlayer* player;
			bool canBlockVault;
		};
		static void NewProp_canBlockVault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canBlockVault;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWindow_Authority_OnVaultInternal_Statics::NewProp_canBlockVault_SetBit(void* Obj)
	{
		((Window_eventAuthority_OnVaultInternal_Parms*)Obj)->canBlockVault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWindow_Authority_OnVaultInternal_Statics::NewProp_canBlockVault = { "canBlockVault", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Window_eventAuthority_OnVaultInternal_Parms), &Z_Construct_UFunction_AWindow_Authority_OnVaultInternal_Statics::NewProp_canBlockVault_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWindow_Authority_OnVaultInternal_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Window_eventAuthority_OnVaultInternal_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWindow_Authority_OnVaultInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_Authority_OnVaultInternal_Statics::NewProp_canBlockVault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_Authority_OnVaultInternal_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_Authority_OnVaultInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_Authority_OnVaultInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "Authority_OnVaultInternal", nullptr, nullptr, sizeof(Window_eventAuthority_OnVaultInternal_Parms), Z_Construct_UFunction_AWindow_Authority_OnVaultInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_Authority_OnVaultInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_Authority_OnVaultInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_Authority_OnVaultInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_Authority_OnVaultInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_Authority_OnVaultInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_Authority_SetBlockedByLevel_Statics
	{
		struct Window_eventAuthority_SetBlockedByLevel_Parms
		{
			bool isBlockedByLevel;
		};
		static void NewProp_isBlockedByLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBlockedByLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWindow_Authority_SetBlockedByLevel_Statics::NewProp_isBlockedByLevel_SetBit(void* Obj)
	{
		((Window_eventAuthority_SetBlockedByLevel_Parms*)Obj)->isBlockedByLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWindow_Authority_SetBlockedByLevel_Statics::NewProp_isBlockedByLevel = { "isBlockedByLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Window_eventAuthority_SetBlockedByLevel_Parms), &Z_Construct_UFunction_AWindow_Authority_SetBlockedByLevel_Statics::NewProp_isBlockedByLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWindow_Authority_SetBlockedByLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_Authority_SetBlockedByLevel_Statics::NewProp_isBlockedByLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_Authority_SetBlockedByLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_Authority_SetBlockedByLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "Authority_SetBlockedByLevel", nullptr, nullptr, sizeof(Window_eventAuthority_SetBlockedByLevel_Parms), Z_Construct_UFunction_AWindow_Authority_SetBlockedByLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_Authority_SetBlockedByLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_Authority_SetBlockedByLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_Authority_SetBlockedByLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_Authority_SetBlockedByLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_Authority_SetBlockedByLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_ForceBlockLocalWindowInteraction_Statics
	{
		struct Window_eventForceBlockLocalWindowInteraction_Parms
		{
			bool blockInteraction;
		};
		static void NewProp_blockInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_blockInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWindow_ForceBlockLocalWindowInteraction_Statics::NewProp_blockInteraction_SetBit(void* Obj)
	{
		((Window_eventForceBlockLocalWindowInteraction_Parms*)Obj)->blockInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWindow_ForceBlockLocalWindowInteraction_Statics::NewProp_blockInteraction = { "blockInteraction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Window_eventForceBlockLocalWindowInteraction_Parms), &Z_Construct_UFunction_AWindow_ForceBlockLocalWindowInteraction_Statics::NewProp_blockInteraction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWindow_ForceBlockLocalWindowInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_ForceBlockLocalWindowInteraction_Statics::NewProp_blockInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_ForceBlockLocalWindowInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_ForceBlockLocalWindowInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "ForceBlockLocalWindowInteraction", nullptr, nullptr, sizeof(Window_eventForceBlockLocalWindowInteraction_Parms), Z_Construct_UFunction_AWindow_ForceBlockLocalWindowInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_ForceBlockLocalWindowInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_ForceBlockLocalWindowInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_ForceBlockLocalWindowInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_ForceBlockLocalWindowInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_ForceBlockLocalWindowInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_GetAudioComponent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_GetAudioComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWindow_GetAudioComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Window_eventGetAudioComponent_Parms, ReturnValue), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWindow_GetAudioComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_GetAudioComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWindow_GetAudioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_GetAudioComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_GetAudioComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_GetAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "GetAudioComponent", nullptr, nullptr, sizeof(Window_eventGetAudioComponent_Parms), Z_Construct_UFunction_AWindow_GetAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_GetAudioComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_GetAudioComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_GetAudioComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_GetAudioComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_GetAudioComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_GetBlockedByLevel_Statics
	{
		struct Window_eventGetBlockedByLevel_Parms
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
	void Z_Construct_UFunction_AWindow_GetBlockedByLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Window_eventGetBlockedByLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWindow_GetBlockedByLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Window_eventGetBlockedByLevel_Parms), &Z_Construct_UFunction_AWindow_GetBlockedByLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWindow_GetBlockedByLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_GetBlockedByLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_GetBlockedByLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_GetBlockedByLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "GetBlockedByLevel", nullptr, nullptr, sizeof(Window_eventGetBlockedByLevel_Parms), Z_Construct_UFunction_AWindow_GetBlockedByLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_GetBlockedByLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_GetBlockedByLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_GetBlockedByLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_GetBlockedByLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_GetBlockedByLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_GetEntityAssets_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_GetEntityAssets_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWindow_GetEntityAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Window_eventGetEntityAssets_Parms, ReturnValue), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWindow_GetEntityAssets_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_GetEntityAssets_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWindow_GetEntityAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_GetEntityAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_GetEntityAssets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_GetEntityAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "GetEntityAssets", nullptr, nullptr, sizeof(Window_eventGetEntityAssets_Parms), Z_Construct_UFunction_AWindow_GetEntityAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_GetEntityAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_GetEntityAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_GetEntityAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_GetEntityAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_GetEntityAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_GetMaterialHelper_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_GetMaterialHelper_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWindow_GetMaterialHelper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Window_eventGetMaterialHelper_Parms, ReturnValue), Z_Construct_UClass_UMaterialHelper_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWindow_GetMaterialHelper_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_GetMaterialHelper_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWindow_GetMaterialHelper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_GetMaterialHelper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_GetMaterialHelper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_GetMaterialHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "GetMaterialHelper", nullptr, nullptr, sizeof(Window_eventGetMaterialHelper_Parms), Z_Construct_UFunction_AWindow_GetMaterialHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_GetMaterialHelper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_GetMaterialHelper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_GetMaterialHelper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_GetMaterialHelper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_GetMaterialHelper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics
	{
		struct Window_eventIsWindowVaultBlockedFor_Parms
		{
			const ADBDPlayer* player;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
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
	void Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Window_eventIsWindowVaultBlockedFor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Window_eventIsWindowVaultBlockedFor_Parms), &Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Window_eventIsWindowVaultBlockedFor_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "IsWindowVaultBlockedFor", nullptr, nullptr, sizeof(Window_eventIsWindowVaultBlockedFor_Parms), Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_IsWindowVaultBlockedForAnyPlayer_Statics
	{
		struct Window_eventIsWindowVaultBlockedForAnyPlayer_Parms
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
	void Z_Construct_UFunction_AWindow_IsWindowVaultBlockedForAnyPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Window_eventIsWindowVaultBlockedForAnyPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWindow_IsWindowVaultBlockedForAnyPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Window_eventIsWindowVaultBlockedForAnyPlayer_Parms), &Z_Construct_UFunction_AWindow_IsWindowVaultBlockedForAnyPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWindow_IsWindowVaultBlockedForAnyPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_IsWindowVaultBlockedForAnyPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_IsWindowVaultBlockedForAnyPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_IsWindowVaultBlockedForAnyPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "IsWindowVaultBlockedForAnyPlayer", nullptr, nullptr, sizeof(Window_eventIsWindowVaultBlockedForAnyPlayer_Parms), Z_Construct_UFunction_AWindow_IsWindowVaultBlockedForAnyPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_IsWindowVaultBlockedForAnyPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_IsWindowVaultBlockedForAnyPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_IsWindowVaultBlockedForAnyPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_IsWindowVaultBlockedForAnyPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_IsWindowVaultBlockedForAnyPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_NotifyOnFastVault_Statics
	{
		struct Window_eventNotifyOnFastVault_Parms
		{
			ADBDPlayer* player;
			UInteractionDefinition* interaction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interaction;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_NotifyOnFastVault_Statics::NewProp_interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWindow_NotifyOnFastVault_Statics::NewProp_interaction = { "interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Window_eventNotifyOnFastVault_Parms, interaction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWindow_NotifyOnFastVault_Statics::NewProp_interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_NotifyOnFastVault_Statics::NewProp_interaction_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWindow_NotifyOnFastVault_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Window_eventNotifyOnFastVault_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWindow_NotifyOnFastVault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_NotifyOnFastVault_Statics::NewProp_interaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_NotifyOnFastVault_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_NotifyOnFastVault_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_NotifyOnFastVault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "NotifyOnFastVault", nullptr, nullptr, sizeof(Window_eventNotifyOnFastVault_Parms), Z_Construct_UFunction_AWindow_NotifyOnFastVault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_NotifyOnFastVault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_NotifyOnFastVault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_NotifyOnFastVault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_NotifyOnFastVault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_NotifyOnFastVault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_OnFastVault_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interaction;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_OnFastVault_Statics::NewProp_interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWindow_OnFastVault_Statics::NewProp_interaction = { "interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Window_eventOnFastVault_Parms, interaction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWindow_OnFastVault_Statics::NewProp_interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_OnFastVault_Statics::NewProp_interaction_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWindow_OnFastVault_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Window_eventOnFastVault_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWindow_OnFastVault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_OnFastVault_Statics::NewProp_interaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_OnFastVault_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_OnFastVault_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_OnFastVault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "OnFastVault", nullptr, nullptr, sizeof(Window_eventOnFastVault_Parms), Z_Construct_UFunction_AWindow_OnFastVault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_OnFastVault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_OnFastVault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_OnFastVault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_OnFastVault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_OnFastVault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_OnLocallyObservedChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_OnLocallyObservedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_OnLocallyObservedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "OnLocallyObservedChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_OnLocallyObservedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_OnLocallyObservedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_OnLocallyObservedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_OnLocallyObservedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_OnRep_blockedByLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_OnRep_blockedByLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_OnRep_blockedByLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "OnRep_blockedByLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_OnRep_blockedByLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_OnRep_blockedByLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_OnRep_blockedByLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_OnRep_blockedByLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWindow_NoRegister()
	{
		return AWindow::StaticClass();
	}
	struct Z_Construct_UClass_AWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__navEvadeLoopComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__navEvadeLoopComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blockableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blockableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__localPlayerTracker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__localPlayerTracker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorVaultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__survivorVaultData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivorVaultData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__survivorVaultData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_akAudioEventWindowsBlocStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_akAudioEventWindowsBlocStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_akAudioEventWindowsBlocStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_akAudioEventWindowsBlocStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__akAudioWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__akAudioWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__materialHelper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__materialHelper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__entityAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__entityAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBlockedByLevel_MetaData[];
#endif
		static void NewProp__isBlockedByLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBlockedByLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativeSmokeSelfIndicatorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NativeSmokeSelfIndicatorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativeEntityIndicatorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NativeEntityIndicatorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativeSmokeOtherIndicatorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NativeSmokeOtherIndicatorData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWindow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWindow_Authority_OnVaultInternal, "Authority_OnVaultInternal" }, // 2329502536
		{ &Z_Construct_UFunction_AWindow_Authority_SetBlockedByLevel, "Authority_SetBlockedByLevel" }, // 3818459575
		{ &Z_Construct_UFunction_AWindow_ForceBlockLocalWindowInteraction, "ForceBlockLocalWindowInteraction" }, // 1291245910
		{ &Z_Construct_UFunction_AWindow_GetAudioComponent, "GetAudioComponent" }, // 1741086098
		{ &Z_Construct_UFunction_AWindow_GetBlockedByLevel, "GetBlockedByLevel" }, // 3109879753
		{ &Z_Construct_UFunction_AWindow_GetEntityAssets, "GetEntityAssets" }, // 1550715598
		{ &Z_Construct_UFunction_AWindow_GetMaterialHelper, "GetMaterialHelper" }, // 2138636389
		{ &Z_Construct_UFunction_AWindow_IsWindowVaultBlockedFor, "IsWindowVaultBlockedFor" }, // 128117342
		{ &Z_Construct_UFunction_AWindow_IsWindowVaultBlockedForAnyPlayer, "IsWindowVaultBlockedForAnyPlayer" }, // 73964871
		{ &Z_Construct_UFunction_AWindow_NotifyOnFastVault, "NotifyOnFastVault" }, // 604416652
		{ &Z_Construct_UFunction_AWindow_OnFastVault, "OnFastVault" }, // 362266282
		{ &Z_Construct_UFunction_AWindow_OnLocallyObservedChanged, "OnLocallyObservedChanged" }, // 4085042924
		{ &Z_Construct_UFunction_AWindow_OnRep_blockedByLevel, "OnRep_blockedByLevel" }, // 1882149721
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Window.h" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindow_Statics::NewProp__navEvadeLoopComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Window" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindow_Statics::NewProp__navEvadeLoopComponent = { "_navEvadeLoopComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindow, _navEvadeLoopComponent), Z_Construct_UClass_UDBDNavEvadeLoopComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindow_Statics::NewProp__navEvadeLoopComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindow_Statics::NewProp__navEvadeLoopComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindow_Statics::NewProp__blockableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindow_Statics::NewProp__blockableComponent = { "_blockableComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindow, _blockableComponent), Z_Construct_UClass_UBlockableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindow_Statics::NewProp__blockableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindow_Statics::NewProp__blockableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindow_Statics::NewProp__localPlayerTracker_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindow_Statics::NewProp__localPlayerTracker = { "_localPlayerTracker", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindow, _localPlayerTracker), Z_Construct_UClass_ULocalPlayerTrackerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindow_Statics::NewProp__localPlayerTracker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindow_Statics::NewProp__localPlayerTracker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindow_Statics::NewProp__survivorVaultData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWindow_Statics::NewProp__survivorVaultData = { "_survivorVaultData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindow, _survivorVaultData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWindow_Statics::NewProp__survivorVaultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindow_Statics::NewProp__survivorVaultData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindow_Statics::NewProp__survivorVaultData_Key_KeyProp = { "_survivorVaultData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWindow_Statics::NewProp__survivorVaultData_ValueProp = { "_survivorVaultData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVaultData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindow_Statics::NewProp_akAudioEventWindowsBlocStop_MetaData[] = {
		{ "Category", "Window" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindow_Statics::NewProp_akAudioEventWindowsBlocStop = { "akAudioEventWindowsBlocStop", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindow, akAudioEventWindowsBlocStop), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindow_Statics::NewProp_akAudioEventWindowsBlocStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindow_Statics::NewProp_akAudioEventWindowsBlocStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindow_Statics::NewProp_akAudioEventWindowsBlocStart_MetaData[] = {
		{ "Category", "Window" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindow_Statics::NewProp_akAudioEventWindowsBlocStart = { "akAudioEventWindowsBlocStart", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindow, akAudioEventWindowsBlocStart), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindow_Statics::NewProp_akAudioEventWindowsBlocStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindow_Statics::NewProp_akAudioEventWindowsBlocStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindow_Statics::NewProp__akAudioWindow_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindow_Statics::NewProp__akAudioWindow = { "_akAudioWindow", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindow, _akAudioWindow), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindow_Statics::NewProp__akAudioWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindow_Statics::NewProp__akAudioWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindow_Statics::NewProp__materialHelper_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindow_Statics::NewProp__materialHelper = { "_materialHelper", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindow, _materialHelper), Z_Construct_UClass_UMaterialHelper_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindow_Statics::NewProp__materialHelper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindow_Statics::NewProp__materialHelper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindow_Statics::NewProp__entityAssets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindow_Statics::NewProp__entityAssets = { "_entityAssets", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindow, _entityAssets), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindow_Statics::NewProp__entityAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindow_Statics::NewProp__entityAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindow_Statics::NewProp__isBlockedByLevel_MetaData[] = {
		{ "Category", "Window" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	void Z_Construct_UClass_AWindow_Statics::NewProp__isBlockedByLevel_SetBit(void* Obj)
	{
		((AWindow*)Obj)->_isBlockedByLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWindow_Statics::NewProp__isBlockedByLevel = { "_isBlockedByLevel", "OnRep_blockedByLevel", (EPropertyFlags)0x0020080100000024, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWindow), &Z_Construct_UClass_AWindow_Statics::NewProp__isBlockedByLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWindow_Statics::NewProp__isBlockedByLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindow_Statics::NewProp__isBlockedByLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindow_Statics::NewProp_NativeSmokeSelfIndicatorData_MetaData[] = {
		{ "Category", "Window" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWindow_Statics::NewProp_NativeSmokeSelfIndicatorData = { "NativeSmokeSelfIndicatorData", nullptr, (EPropertyFlags)0x0020088000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindow, NativeSmokeSelfIndicatorData), Z_Construct_UScriptStruct_FNativeBlockIndicatorData, METADATA_PARAMS(Z_Construct_UClass_AWindow_Statics::NewProp_NativeSmokeSelfIndicatorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindow_Statics::NewProp_NativeSmokeSelfIndicatorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindow_Statics::NewProp_NativeEntityIndicatorData_MetaData[] = {
		{ "Category", "Window" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWindow_Statics::NewProp_NativeEntityIndicatorData = { "NativeEntityIndicatorData", nullptr, (EPropertyFlags)0x0020088000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindow, NativeEntityIndicatorData), Z_Construct_UScriptStruct_FNativeBlockIndicatorData, METADATA_PARAMS(Z_Construct_UClass_AWindow_Statics::NewProp_NativeEntityIndicatorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindow_Statics::NewProp_NativeEntityIndicatorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindow_Statics::NewProp_NativeSmokeOtherIndicatorData_MetaData[] = {
		{ "Category", "Window" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWindow_Statics::NewProp_NativeSmokeOtherIndicatorData = { "NativeSmokeOtherIndicatorData", nullptr, (EPropertyFlags)0x0020088000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindow, NativeSmokeOtherIndicatorData), Z_Construct_UScriptStruct_FNativeBlockIndicatorData, METADATA_PARAMS(Z_Construct_UClass_AWindow_Statics::NewProp_NativeSmokeOtherIndicatorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindow_Statics::NewProp_NativeSmokeOtherIndicatorData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindow_Statics::NewProp__navEvadeLoopComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindow_Statics::NewProp__blockableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindow_Statics::NewProp__localPlayerTracker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindow_Statics::NewProp__survivorVaultData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindow_Statics::NewProp__survivorVaultData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindow_Statics::NewProp__survivorVaultData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindow_Statics::NewProp_akAudioEventWindowsBlocStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindow_Statics::NewProp_akAudioEventWindowsBlocStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindow_Statics::NewProp__akAudioWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindow_Statics::NewProp__materialHelper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindow_Statics::NewProp__entityAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindow_Statics::NewProp__isBlockedByLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindow_Statics::NewProp_NativeSmokeSelfIndicatorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindow_Statics::NewProp_NativeEntityIndicatorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindow_Statics::NewProp_NativeSmokeOtherIndicatorData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWindow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWindow_Statics::ClassParams = {
		&AWindow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWindow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWindow_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWindow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWindow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWindow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWindow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWindow, 1494402435);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AWindow>()
	{
		return AWindow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWindow(Z_Construct_UClass_AWindow, &AWindow::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AWindow"), false, nullptr, nullptr, nullptr);

	void AWindow::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isBlockedByLevel(TEXT("_isBlockedByLevel"));

		const bool bIsValid = true
			&& Name__isBlockedByLevel == ClassReps[(int32)ENetFields_Private::_isBlockedByLevel].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWindow"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWindow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
