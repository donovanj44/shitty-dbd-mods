// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDPlayerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDPlayerData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerDataOnItemUseButtonStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDPlayerData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDPlayerData();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	NETWORKUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerDataOnItemUseButtonStateChanged__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventDBDPlayerDataOnItemUseButtonStateChanged_Parms
		{
			bool isPressed;
		};
		static void NewProp_isPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerDataOnItemUseButtonStateChanged__DelegateSignature_Statics::NewProp_isPressed_SetBit(void* Obj)
	{
		((_Script_DeadByDaylight_eventDBDPlayerDataOnItemUseButtonStateChanged_Parms*)Obj)->isPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerDataOnItemUseButtonStateChanged__DelegateSignature_Statics::NewProp_isPressed = { "isPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_DeadByDaylight_eventDBDPlayerDataOnItemUseButtonStateChanged_Parms), &Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerDataOnItemUseButtonStateChanged__DelegateSignature_Statics::NewProp_isPressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerDataOnItemUseButtonStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerDataOnItemUseButtonStateChanged__DelegateSignature_Statics::NewProp_isPressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerDataOnItemUseButtonStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerDataOnItemUseButtonStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "DBDPlayerDataOnItemUseButtonStateChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventDBDPlayerDataOnItemUseButtonStateChanged_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerDataOnItemUseButtonStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerDataOnItemUseButtonStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerDataOnItemUseButtonStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerDataOnItemUseButtonStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerDataOnItemUseButtonStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerDataOnItemUseButtonStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UDBDPlayerData::execDidRenderingFeaturesComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DidRenderingFeaturesComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDPlayerData::execGetControlRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetControlRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDPlayerData::execGetInteractionInputMashed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInteractionInputMashed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDPlayerData::execGetLeftRightInputMashed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLeftRightInputMashed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDPlayerData::execGetUseInputPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseInputPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDPlayerData::execIsCampaignDataSynced)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCampaignDataSynced();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDPlayerData::execIsIntroCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsIntroCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDPlayerData::execIsLoadoutSpawned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoadoutSpawned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDPlayerData::execServer_CampaignDataSynced)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_CampaignDataSynced_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_CampaignDataSynced_Validate"));
			return;
		}
		P_THIS->Server_CampaignDataSynced_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDPlayerData::execServer_LoadoutSpawned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_LoadoutSpawned_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_LoadoutSpawned_Validate"));
			return;
		}
		P_THIS->Server_LoadoutSpawned_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDPlayerData::execServer_RenderingFeaturesCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_RenderingFeaturesCompleted_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_RenderingFeaturesCompleted_Validate"));
			return;
		}
		P_THIS->Server_RenderingFeaturesCompleted_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDPlayerData::execServer_SetIntroCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetIntroCompleted_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_SetIntroCompleted_Validate"));
			return;
		}
		P_THIS->Server_SetIntroCompleted_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDPlayerData::execSetCampaignDataSynced)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCampaignDataSynced();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDPlayerData::execSetIntroCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntroCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDPlayerData::execSetLoadoutSpawned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutSpawned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDPlayerData::execSetRenderingFeaturesCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderingFeaturesCompleted();
		P_NATIVE_END;
	}
	static FName NAME_UDBDPlayerData_Server_CampaignDataSynced = FName(TEXT("Server_CampaignDataSynced"));
	void UDBDPlayerData::Server_CampaignDataSynced()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDBDPlayerData_Server_CampaignDataSynced),NULL);
	}
	static FName NAME_UDBDPlayerData_Server_LoadoutSpawned = FName(TEXT("Server_LoadoutSpawned"));
	void UDBDPlayerData::Server_LoadoutSpawned()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDBDPlayerData_Server_LoadoutSpawned),NULL);
	}
	static FName NAME_UDBDPlayerData_Server_RenderingFeaturesCompleted = FName(TEXT("Server_RenderingFeaturesCompleted"));
	void UDBDPlayerData::Server_RenderingFeaturesCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDBDPlayerData_Server_RenderingFeaturesCompleted),NULL);
	}
	static FName NAME_UDBDPlayerData_Server_SetIntroCompleted = FName(TEXT("Server_SetIntroCompleted"));
	void UDBDPlayerData::Server_SetIntroCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDBDPlayerData_Server_SetIntroCompleted),NULL);
	}
	void UDBDPlayerData::StaticRegisterNativesUDBDPlayerData()
	{
		UClass* Class = UDBDPlayerData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DidRenderingFeaturesComplete", &UDBDPlayerData::execDidRenderingFeaturesComplete },
			{ "GetControlRotation", &UDBDPlayerData::execGetControlRotation },
			{ "GetInteractionInputMashed", &UDBDPlayerData::execGetInteractionInputMashed },
			{ "GetLeftRightInputMashed", &UDBDPlayerData::execGetLeftRightInputMashed },
			{ "GetUseInputPressed", &UDBDPlayerData::execGetUseInputPressed },
			{ "IsCampaignDataSynced", &UDBDPlayerData::execIsCampaignDataSynced },
			{ "IsIntroCompleted", &UDBDPlayerData::execIsIntroCompleted },
			{ "IsLoadoutSpawned", &UDBDPlayerData::execIsLoadoutSpawned },
			{ "Server_CampaignDataSynced", &UDBDPlayerData::execServer_CampaignDataSynced },
			{ "Server_LoadoutSpawned", &UDBDPlayerData::execServer_LoadoutSpawned },
			{ "Server_RenderingFeaturesCompleted", &UDBDPlayerData::execServer_RenderingFeaturesCompleted },
			{ "Server_SetIntroCompleted", &UDBDPlayerData::execServer_SetIntroCompleted },
			{ "SetCampaignDataSynced", &UDBDPlayerData::execSetCampaignDataSynced },
			{ "SetIntroCompleted", &UDBDPlayerData::execSetIntroCompleted },
			{ "SetLoadoutSpawned", &UDBDPlayerData::execSetLoadoutSpawned },
			{ "SetRenderingFeaturesCompleted", &UDBDPlayerData::execSetRenderingFeaturesCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDPlayerData_DidRenderingFeaturesComplete_Statics
	{
		struct DBDPlayerData_eventDidRenderingFeaturesComplete_Parms
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
	void Z_Construct_UFunction_UDBDPlayerData_DidRenderingFeaturesComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDPlayerData_eventDidRenderingFeaturesComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDPlayerData_DidRenderingFeaturesComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerData_eventDidRenderingFeaturesComplete_Parms), &Z_Construct_UFunction_UDBDPlayerData_DidRenderingFeaturesComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDPlayerData_DidRenderingFeaturesComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDPlayerData_DidRenderingFeaturesComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDPlayerData_DidRenderingFeaturesComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDPlayerData_DidRenderingFeaturesComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDPlayerData, nullptr, "DidRenderingFeaturesComplete", nullptr, nullptr, sizeof(DBDPlayerData_eventDidRenderingFeaturesComplete_Parms), Z_Construct_UFunction_UDBDPlayerData_DidRenderingFeaturesComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_DidRenderingFeaturesComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDPlayerData_DidRenderingFeaturesComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_DidRenderingFeaturesComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDPlayerData_DidRenderingFeaturesComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDPlayerData_DidRenderingFeaturesComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDPlayerData_GetControlRotation_Statics
	{
		struct DBDPlayerData_eventGetControlRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDPlayerData_GetControlRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerData_eventGetControlRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDPlayerData_GetControlRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDPlayerData_GetControlRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDPlayerData_GetControlRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDPlayerData_GetControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDPlayerData, nullptr, "GetControlRotation", nullptr, nullptr, sizeof(DBDPlayerData_eventGetControlRotation_Parms), Z_Construct_UFunction_UDBDPlayerData_GetControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_GetControlRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDPlayerData_GetControlRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_GetControlRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDPlayerData_GetControlRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDPlayerData_GetControlRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDPlayerData_GetInteractionInputMashed_Statics
	{
		struct DBDPlayerData_eventGetInteractionInputMashed_Parms
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
	void Z_Construct_UFunction_UDBDPlayerData_GetInteractionInputMashed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDPlayerData_eventGetInteractionInputMashed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDPlayerData_GetInteractionInputMashed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerData_eventGetInteractionInputMashed_Parms), &Z_Construct_UFunction_UDBDPlayerData_GetInteractionInputMashed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDPlayerData_GetInteractionInputMashed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDPlayerData_GetInteractionInputMashed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDPlayerData_GetInteractionInputMashed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDPlayerData_GetInteractionInputMashed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDPlayerData, nullptr, "GetInteractionInputMashed", nullptr, nullptr, sizeof(DBDPlayerData_eventGetInteractionInputMashed_Parms), Z_Construct_UFunction_UDBDPlayerData_GetInteractionInputMashed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_GetInteractionInputMashed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDPlayerData_GetInteractionInputMashed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_GetInteractionInputMashed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDPlayerData_GetInteractionInputMashed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDPlayerData_GetInteractionInputMashed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDPlayerData_GetLeftRightInputMashed_Statics
	{
		struct DBDPlayerData_eventGetLeftRightInputMashed_Parms
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
	void Z_Construct_UFunction_UDBDPlayerData_GetLeftRightInputMashed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDPlayerData_eventGetLeftRightInputMashed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDPlayerData_GetLeftRightInputMashed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerData_eventGetLeftRightInputMashed_Parms), &Z_Construct_UFunction_UDBDPlayerData_GetLeftRightInputMashed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDPlayerData_GetLeftRightInputMashed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDPlayerData_GetLeftRightInputMashed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDPlayerData_GetLeftRightInputMashed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDPlayerData_GetLeftRightInputMashed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDPlayerData, nullptr, "GetLeftRightInputMashed", nullptr, nullptr, sizeof(DBDPlayerData_eventGetLeftRightInputMashed_Parms), Z_Construct_UFunction_UDBDPlayerData_GetLeftRightInputMashed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_GetLeftRightInputMashed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDPlayerData_GetLeftRightInputMashed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_GetLeftRightInputMashed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDPlayerData_GetLeftRightInputMashed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDPlayerData_GetLeftRightInputMashed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDPlayerData_GetUseInputPressed_Statics
	{
		struct DBDPlayerData_eventGetUseInputPressed_Parms
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
	void Z_Construct_UFunction_UDBDPlayerData_GetUseInputPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDPlayerData_eventGetUseInputPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDPlayerData_GetUseInputPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerData_eventGetUseInputPressed_Parms), &Z_Construct_UFunction_UDBDPlayerData_GetUseInputPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDPlayerData_GetUseInputPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDPlayerData_GetUseInputPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDPlayerData_GetUseInputPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDPlayerData_GetUseInputPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDPlayerData, nullptr, "GetUseInputPressed", nullptr, nullptr, sizeof(DBDPlayerData_eventGetUseInputPressed_Parms), Z_Construct_UFunction_UDBDPlayerData_GetUseInputPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_GetUseInputPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDPlayerData_GetUseInputPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_GetUseInputPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDPlayerData_GetUseInputPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDPlayerData_GetUseInputPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDPlayerData_IsCampaignDataSynced_Statics
	{
		struct DBDPlayerData_eventIsCampaignDataSynced_Parms
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
	void Z_Construct_UFunction_UDBDPlayerData_IsCampaignDataSynced_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDPlayerData_eventIsCampaignDataSynced_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDPlayerData_IsCampaignDataSynced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerData_eventIsCampaignDataSynced_Parms), &Z_Construct_UFunction_UDBDPlayerData_IsCampaignDataSynced_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDPlayerData_IsCampaignDataSynced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDPlayerData_IsCampaignDataSynced_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDPlayerData_IsCampaignDataSynced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDPlayerData_IsCampaignDataSynced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDPlayerData, nullptr, "IsCampaignDataSynced", nullptr, nullptr, sizeof(DBDPlayerData_eventIsCampaignDataSynced_Parms), Z_Construct_UFunction_UDBDPlayerData_IsCampaignDataSynced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_IsCampaignDataSynced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDPlayerData_IsCampaignDataSynced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_IsCampaignDataSynced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDPlayerData_IsCampaignDataSynced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDPlayerData_IsCampaignDataSynced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDPlayerData_IsIntroCompleted_Statics
	{
		struct DBDPlayerData_eventIsIntroCompleted_Parms
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
	void Z_Construct_UFunction_UDBDPlayerData_IsIntroCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDPlayerData_eventIsIntroCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDPlayerData_IsIntroCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerData_eventIsIntroCompleted_Parms), &Z_Construct_UFunction_UDBDPlayerData_IsIntroCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDPlayerData_IsIntroCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDPlayerData_IsIntroCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDPlayerData_IsIntroCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDPlayerData_IsIntroCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDPlayerData, nullptr, "IsIntroCompleted", nullptr, nullptr, sizeof(DBDPlayerData_eventIsIntroCompleted_Parms), Z_Construct_UFunction_UDBDPlayerData_IsIntroCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_IsIntroCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDPlayerData_IsIntroCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_IsIntroCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDPlayerData_IsIntroCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDPlayerData_IsIntroCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDPlayerData_IsLoadoutSpawned_Statics
	{
		struct DBDPlayerData_eventIsLoadoutSpawned_Parms
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
	void Z_Construct_UFunction_UDBDPlayerData_IsLoadoutSpawned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDPlayerData_eventIsLoadoutSpawned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDPlayerData_IsLoadoutSpawned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerData_eventIsLoadoutSpawned_Parms), &Z_Construct_UFunction_UDBDPlayerData_IsLoadoutSpawned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDPlayerData_IsLoadoutSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDPlayerData_IsLoadoutSpawned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDPlayerData_IsLoadoutSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDPlayerData_IsLoadoutSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDPlayerData, nullptr, "IsLoadoutSpawned", nullptr, nullptr, sizeof(DBDPlayerData_eventIsLoadoutSpawned_Parms), Z_Construct_UFunction_UDBDPlayerData_IsLoadoutSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_IsLoadoutSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDPlayerData_IsLoadoutSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_IsLoadoutSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDPlayerData_IsLoadoutSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDPlayerData_IsLoadoutSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDPlayerData_Server_CampaignDataSynced_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDPlayerData_Server_CampaignDataSynced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDPlayerData_Server_CampaignDataSynced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDPlayerData, nullptr, "Server_CampaignDataSynced", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDPlayerData_Server_CampaignDataSynced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_Server_CampaignDataSynced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDPlayerData_Server_CampaignDataSynced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDPlayerData_Server_CampaignDataSynced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDPlayerData_Server_LoadoutSpawned_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDPlayerData_Server_LoadoutSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDPlayerData_Server_LoadoutSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDPlayerData, nullptr, "Server_LoadoutSpawned", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDPlayerData_Server_LoadoutSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_Server_LoadoutSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDPlayerData_Server_LoadoutSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDPlayerData_Server_LoadoutSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDPlayerData_Server_RenderingFeaturesCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDPlayerData_Server_RenderingFeaturesCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDPlayerData_Server_RenderingFeaturesCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDPlayerData, nullptr, "Server_RenderingFeaturesCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDPlayerData_Server_RenderingFeaturesCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_Server_RenderingFeaturesCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDPlayerData_Server_RenderingFeaturesCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDPlayerData_Server_RenderingFeaturesCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDPlayerData_Server_SetIntroCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDPlayerData_Server_SetIntroCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDPlayerData_Server_SetIntroCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDPlayerData, nullptr, "Server_SetIntroCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDPlayerData_Server_SetIntroCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_Server_SetIntroCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDPlayerData_Server_SetIntroCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDPlayerData_Server_SetIntroCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDPlayerData_SetCampaignDataSynced_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDPlayerData_SetCampaignDataSynced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDPlayerData_SetCampaignDataSynced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDPlayerData, nullptr, "SetCampaignDataSynced", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDPlayerData_SetCampaignDataSynced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_SetCampaignDataSynced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDPlayerData_SetCampaignDataSynced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDPlayerData_SetCampaignDataSynced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDPlayerData_SetIntroCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDPlayerData_SetIntroCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDPlayerData_SetIntroCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDPlayerData, nullptr, "SetIntroCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDPlayerData_SetIntroCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_SetIntroCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDPlayerData_SetIntroCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDPlayerData_SetIntroCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDPlayerData_SetLoadoutSpawned_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDPlayerData_SetLoadoutSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDPlayerData_SetLoadoutSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDPlayerData, nullptr, "SetLoadoutSpawned", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDPlayerData_SetLoadoutSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_SetLoadoutSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDPlayerData_SetLoadoutSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDPlayerData_SetLoadoutSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDPlayerData_SetRenderingFeaturesCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDPlayerData_SetRenderingFeaturesCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDPlayerData_SetRenderingFeaturesCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDPlayerData, nullptr, "SetRenderingFeaturesCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDPlayerData_SetRenderingFeaturesCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDPlayerData_SetRenderingFeaturesCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDPlayerData_SetRenderingFeaturesCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDPlayerData_SetRenderingFeaturesCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDPlayerData_NoRegister()
	{
		return UDBDPlayerData::StaticClass();
	}
	struct Z_Construct_UClass_UDBDPlayerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__controlRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__controlRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemUseButtonStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemUseButtonStateChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDPlayerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDPlayerData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDPlayerData_DidRenderingFeaturesComplete, "DidRenderingFeaturesComplete" }, // 2594979547
		{ &Z_Construct_UFunction_UDBDPlayerData_GetControlRotation, "GetControlRotation" }, // 1558321738
		{ &Z_Construct_UFunction_UDBDPlayerData_GetInteractionInputMashed, "GetInteractionInputMashed" }, // 478717645
		{ &Z_Construct_UFunction_UDBDPlayerData_GetLeftRightInputMashed, "GetLeftRightInputMashed" }, // 1333549423
		{ &Z_Construct_UFunction_UDBDPlayerData_GetUseInputPressed, "GetUseInputPressed" }, // 4031954831
		{ &Z_Construct_UFunction_UDBDPlayerData_IsCampaignDataSynced, "IsCampaignDataSynced" }, // 1583827284
		{ &Z_Construct_UFunction_UDBDPlayerData_IsIntroCompleted, "IsIntroCompleted" }, // 3321360677
		{ &Z_Construct_UFunction_UDBDPlayerData_IsLoadoutSpawned, "IsLoadoutSpawned" }, // 3669451631
		{ &Z_Construct_UFunction_UDBDPlayerData_Server_CampaignDataSynced, "Server_CampaignDataSynced" }, // 3349326952
		{ &Z_Construct_UFunction_UDBDPlayerData_Server_LoadoutSpawned, "Server_LoadoutSpawned" }, // 755287448
		{ &Z_Construct_UFunction_UDBDPlayerData_Server_RenderingFeaturesCompleted, "Server_RenderingFeaturesCompleted" }, // 1312468651
		{ &Z_Construct_UFunction_UDBDPlayerData_Server_SetIntroCompleted, "Server_SetIntroCompleted" }, // 1770115112
		{ &Z_Construct_UFunction_UDBDPlayerData_SetCampaignDataSynced, "SetCampaignDataSynced" }, // 2567331425
		{ &Z_Construct_UFunction_UDBDPlayerData_SetIntroCompleted, "SetIntroCompleted" }, // 3100694667
		{ &Z_Construct_UFunction_UDBDPlayerData_SetLoadoutSpawned, "SetLoadoutSpawned" }, // 1035323100
		{ &Z_Construct_UFunction_UDBDPlayerData_SetRenderingFeaturesCompleted, "SetRenderingFeaturesCompleted" }, // 611296253
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPlayerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDPlayerData.h" },
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPlayerData_Statics::NewProp__controlRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDPlayerData_Statics::NewProp__controlRotation = { "_controlRotation", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDPlayerData, _controlRotation), Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16, METADATA_PARAMS(Z_Construct_UClass_UDBDPlayerData_Statics::NewProp__controlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPlayerData_Statics::NewProp__controlRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPlayerData_Statics::NewProp_OnItemUseButtonStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDBDPlayerData_Statics::NewProp_OnItemUseButtonStateChanged = { "OnItemUseButtonStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDPlayerData, OnItemUseButtonStateChanged), Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerDataOnItemUseButtonStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDBDPlayerData_Statics::NewProp_OnItemUseButtonStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPlayerData_Statics::NewProp_OnItemUseButtonStateChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPlayerData_Statics::NewProp__controlRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPlayerData_Statics::NewProp_OnItemUseButtonStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDPlayerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDPlayerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDPlayerData_Statics::ClassParams = {
		&UDBDPlayerData::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDPlayerData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPlayerData_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDPlayerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPlayerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDPlayerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDPlayerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDPlayerData, 1086630170);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDPlayerData>()
	{
		return UDBDPlayerData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDPlayerData(Z_Construct_UClass_UDBDPlayerData, &UDBDPlayerData::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDPlayerData"), false, nullptr, nullptr, nullptr);

	void UDBDPlayerData::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__controlRotation(TEXT("_controlRotation"));

		const bool bIsValid = true
			&& Name__controlRotation == ClassReps[(int32)ENetFields_Private::_controlRotation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDBDPlayerData"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDPlayerData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
