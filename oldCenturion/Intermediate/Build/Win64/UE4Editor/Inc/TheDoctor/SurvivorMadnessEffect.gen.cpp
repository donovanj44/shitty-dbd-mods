// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheDoctor/Public/SurvivorMadnessEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorMadnessEffect() {}
// Cross Module References
	THEDOCTOR_API UClass* Z_Construct_UClass_USurvivorMadnessEffect_NoRegister();
	THEDOCTOR_API UClass* Z_Construct_UClass_USurvivorMadnessEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheDoctor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMadness_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USurvivorMadnessEffect::execGetMadnessTier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMadnessTier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorMadnessEffect::execGetMadnessValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMadnessValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorMadnessEffect::execMulticast_OnMadnessTierDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_OnMadnessTierDown_Validate())
		{
			RPC_ValidateFailed(TEXT("Multicast_OnMadnessTierDown_Validate"));
			return;
		}
		P_THIS->Multicast_OnMadnessTierDown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorMadnessEffect::execMulticast_OnMadnessTierUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_OnMadnessTierUp_Validate())
		{
			RPC_ValidateFailed(TEXT("Multicast_OnMadnessTierUp_Validate"));
			return;
		}
		P_THIS->Multicast_OnMadnessTierUp_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorMadnessEffect::execMulticast_UpdateMadnessPlayerTags)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newMadness);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_UpdateMadnessPlayerTags_Validate(Z_Param_newMadness))
		{
			RPC_ValidateFailed(TEXT("Multicast_UpdateMadnessPlayerTags_Validate"));
			return;
		}
		P_THIS->Multicast_UpdateMadnessPlayerTags_Implementation(Z_Param_newMadness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorMadnessEffect::execOnShockTherapyReceived)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShockTherapyReceived();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorMadnessEffect::execOnSnapOutOfIt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSnapOutOfIt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorMadnessEffect::execOnStaticBlastReceived)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStaticBlastReceived();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorMadnessEffect::execServer_AddMadness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_madnessToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_AddMadness_Validate(Z_Param_madnessToAdd))
		{
			RPC_ValidateFailed(TEXT("Server_AddMadness_Validate"));
			return;
		}
		P_THIS->Server_AddMadness_Implementation(Z_Param_madnessToAdd);
		P_NATIVE_END;
	}
	static FName NAME_USurvivorMadnessEffect_Authority_OnMadnessScreamTimerEnd_BP = FName(TEXT("Authority_OnMadnessScreamTimerEnd_BP"));
	void USurvivorMadnessEffect::Authority_OnMadnessScreamTimerEnd_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorMadnessEffect_Authority_OnMadnessScreamTimerEnd_BP),NULL);
	}
	static FName NAME_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic = FName(TEXT("ChangeMadnessAudio_Cosmetic"));
	void USurvivorMadnessEffect::ChangeMadnessAudio_Cosmetic(const int32 madnessTier)
	{
		SurvivorMadnessEffect_eventChangeMadnessAudio_Cosmetic_Parms Parms;
		Parms.madnessTier=madnessTier;
		ProcessEvent(FindFunctionChecked(NAME_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic),&Parms);
	}
	static FName NAME_USurvivorMadnessEffect_Multicast_OnMadnessTierDown = FName(TEXT("Multicast_OnMadnessTierDown"));
	void USurvivorMadnessEffect::Multicast_OnMadnessTierDown()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorMadnessEffect_Multicast_OnMadnessTierDown),NULL);
	}
	static FName NAME_USurvivorMadnessEffect_Multicast_OnMadnessTierUp = FName(TEXT("Multicast_OnMadnessTierUp"));
	void USurvivorMadnessEffect::Multicast_OnMadnessTierUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorMadnessEffect_Multicast_OnMadnessTierUp),NULL);
	}
	static FName NAME_USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags = FName(TEXT("Multicast_UpdateMadnessPlayerTags"));
	void USurvivorMadnessEffect::Multicast_UpdateMadnessPlayerTags(int32 newMadness)
	{
		SurvivorMadnessEffect_eventMulticast_UpdateMadnessPlayerTags_Parms Parms;
		Parms.newMadness=newMadness;
		ProcessEvent(FindFunctionChecked(NAME_USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags),&Parms);
	}
	static FName NAME_USurvivorMadnessEffect_OnMadnessTierDown_BP = FName(TEXT("OnMadnessTierDown_BP"));
	void USurvivorMadnessEffect::OnMadnessTierDown_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorMadnessEffect_OnMadnessTierDown_BP),NULL);
	}
	static FName NAME_USurvivorMadnessEffect_OnMadnessTierUp_BP = FName(TEXT("OnMadnessTierUp_BP"));
	void USurvivorMadnessEffect::OnMadnessTierUp_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorMadnessEffect_OnMadnessTierUp_BP),NULL);
	}
	static FName NAME_USurvivorMadnessEffect_OnShockTherapyReceived_BP = FName(TEXT("OnShockTherapyReceived_BP"));
	void USurvivorMadnessEffect::OnShockTherapyReceived_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorMadnessEffect_OnShockTherapyReceived_BP),NULL);
	}
	static FName NAME_USurvivorMadnessEffect_OnSnapOutOfIt_BP = FName(TEXT("OnSnapOutOfIt_BP"));
	void USurvivorMadnessEffect::OnSnapOutOfIt_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorMadnessEffect_OnSnapOutOfIt_BP),NULL);
	}
	static FName NAME_USurvivorMadnessEffect_OnStaticBlastReceived_BP = FName(TEXT("OnStaticBlastReceived_BP"));
	void USurvivorMadnessEffect::OnStaticBlastReceived_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorMadnessEffect_OnStaticBlastReceived_BP),NULL);
	}
	static FName NAME_USurvivorMadnessEffect_Server_AddMadness = FName(TEXT("Server_AddMadness"));
	void USurvivorMadnessEffect::Server_AddMadness(float madnessToAdd)
	{
		SurvivorMadnessEffect_eventServer_AddMadness_Parms Parms;
		Parms.madnessToAdd=madnessToAdd;
		ProcessEvent(FindFunctionChecked(NAME_USurvivorMadnessEffect_Server_AddMadness),&Parms);
	}
	void USurvivorMadnessEffect::StaticRegisterNativesUSurvivorMadnessEffect()
	{
		UClass* Class = USurvivorMadnessEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMadnessTier", &USurvivorMadnessEffect::execGetMadnessTier },
			{ "GetMadnessValue", &USurvivorMadnessEffect::execGetMadnessValue },
			{ "Multicast_OnMadnessTierDown", &USurvivorMadnessEffect::execMulticast_OnMadnessTierDown },
			{ "Multicast_OnMadnessTierUp", &USurvivorMadnessEffect::execMulticast_OnMadnessTierUp },
			{ "Multicast_UpdateMadnessPlayerTags", &USurvivorMadnessEffect::execMulticast_UpdateMadnessPlayerTags },
			{ "OnShockTherapyReceived", &USurvivorMadnessEffect::execOnShockTherapyReceived },
			{ "OnSnapOutOfIt", &USurvivorMadnessEffect::execOnSnapOutOfIt },
			{ "OnStaticBlastReceived", &USurvivorMadnessEffect::execOnStaticBlastReceived },
			{ "Server_AddMadness", &USurvivorMadnessEffect::execServer_AddMadness },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurvivorMadnessEffect_Authority_OnMadnessScreamTimerEnd_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorMadnessEffect_Authority_OnMadnessScreamTimerEnd_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorMadnessEffect_Authority_OnMadnessScreamTimerEnd_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorMadnessEffect, nullptr, "Authority_OnMadnessScreamTimerEnd_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorMadnessEffect_Authority_OnMadnessScreamTimerEnd_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_Authority_OnMadnessScreamTimerEnd_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorMadnessEffect_Authority_OnMadnessScreamTimerEnd_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorMadnessEffect_Authority_OnMadnessScreamTimerEnd_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_madnessTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_madnessTier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic_Statics::NewProp_madnessTier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic_Statics::NewProp_madnessTier = { "madnessTier", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorMadnessEffect_eventChangeMadnessAudio_Cosmetic_Parms, madnessTier), METADATA_PARAMS(Z_Construct_UFunction_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic_Statics::NewProp_madnessTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic_Statics::NewProp_madnessTier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic_Statics::NewProp_madnessTier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorMadnessEffect, nullptr, "ChangeMadnessAudio_Cosmetic", nullptr, nullptr, sizeof(SurvivorMadnessEffect_eventChangeMadnessAudio_Cosmetic_Parms), Z_Construct_UFunction_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessTier_Statics
	{
		struct SurvivorMadnessEffect_eventGetMadnessTier_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorMadnessEffect_eventGetMadnessTier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessTier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessTier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessTier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorMadnessEffect, nullptr, "GetMadnessTier", nullptr, nullptr, sizeof(SurvivorMadnessEffect_eventGetMadnessTier_Parms), Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessTier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessTier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessTier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessTier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessTier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessValue_Statics
	{
		struct SurvivorMadnessEffect_eventGetMadnessValue_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorMadnessEffect_eventGetMadnessValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorMadnessEffect, nullptr, "GetMadnessValue", nullptr, nullptr, sizeof(SurvivorMadnessEffect_eventGetMadnessValue_Parms), Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_OnMadnessTierDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_OnMadnessTierDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_OnMadnessTierDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorMadnessEffect, nullptr, "Multicast_OnMadnessTierDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_OnMadnessTierDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_OnMadnessTierDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_OnMadnessTierDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_OnMadnessTierDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_OnMadnessTierUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_OnMadnessTierUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_OnMadnessTierUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorMadnessEffect, nullptr, "Multicast_OnMadnessTierUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_OnMadnessTierUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_OnMadnessTierUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_OnMadnessTierUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_OnMadnessTierUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newMadness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags_Statics::NewProp_newMadness = { "newMadness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorMadnessEffect_eventMulticast_UpdateMadnessPlayerTags_Parms, newMadness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags_Statics::NewProp_newMadness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorMadnessEffect, nullptr, "Multicast_UpdateMadnessPlayerTags", nullptr, nullptr, sizeof(SurvivorMadnessEffect_eventMulticast_UpdateMadnessPlayerTags_Parms), Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorMadnessEffect_OnMadnessTierDown_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorMadnessEffect_OnMadnessTierDown_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorMadnessEffect_OnMadnessTierDown_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorMadnessEffect, nullptr, "OnMadnessTierDown_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorMadnessEffect_OnMadnessTierDown_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_OnMadnessTierDown_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorMadnessEffect_OnMadnessTierDown_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorMadnessEffect_OnMadnessTierDown_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorMadnessEffect_OnMadnessTierUp_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorMadnessEffect_OnMadnessTierUp_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorMadnessEffect_OnMadnessTierUp_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorMadnessEffect, nullptr, "OnMadnessTierUp_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorMadnessEffect_OnMadnessTierUp_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_OnMadnessTierUp_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorMadnessEffect_OnMadnessTierUp_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorMadnessEffect_OnMadnessTierUp_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorMadnessEffect_OnShockTherapyReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorMadnessEffect_OnShockTherapyReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorMadnessEffect_OnShockTherapyReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorMadnessEffect, nullptr, "OnShockTherapyReceived", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorMadnessEffect_OnShockTherapyReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_OnShockTherapyReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorMadnessEffect_OnShockTherapyReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorMadnessEffect_OnShockTherapyReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorMadnessEffect_OnShockTherapyReceived_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorMadnessEffect_OnShockTherapyReceived_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorMadnessEffect_OnShockTherapyReceived_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorMadnessEffect, nullptr, "OnShockTherapyReceived_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorMadnessEffect_OnShockTherapyReceived_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_OnShockTherapyReceived_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorMadnessEffect_OnShockTherapyReceived_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorMadnessEffect_OnShockTherapyReceived_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorMadnessEffect_OnSnapOutOfIt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorMadnessEffect_OnSnapOutOfIt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorMadnessEffect_OnSnapOutOfIt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorMadnessEffect, nullptr, "OnSnapOutOfIt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorMadnessEffect_OnSnapOutOfIt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_OnSnapOutOfIt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorMadnessEffect_OnSnapOutOfIt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorMadnessEffect_OnSnapOutOfIt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorMadnessEffect_OnSnapOutOfIt_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorMadnessEffect_OnSnapOutOfIt_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorMadnessEffect_OnSnapOutOfIt_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorMadnessEffect, nullptr, "OnSnapOutOfIt_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorMadnessEffect_OnSnapOutOfIt_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_OnSnapOutOfIt_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorMadnessEffect_OnSnapOutOfIt_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorMadnessEffect_OnSnapOutOfIt_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorMadnessEffect_OnStaticBlastReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorMadnessEffect_OnStaticBlastReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorMadnessEffect_OnStaticBlastReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorMadnessEffect, nullptr, "OnStaticBlastReceived", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorMadnessEffect_OnStaticBlastReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_OnStaticBlastReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorMadnessEffect_OnStaticBlastReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorMadnessEffect_OnStaticBlastReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorMadnessEffect_OnStaticBlastReceived_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorMadnessEffect_OnStaticBlastReceived_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorMadnessEffect_OnStaticBlastReceived_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorMadnessEffect, nullptr, "OnStaticBlastReceived_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorMadnessEffect_OnStaticBlastReceived_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_OnStaticBlastReceived_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorMadnessEffect_OnStaticBlastReceived_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorMadnessEffect_OnStaticBlastReceived_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorMadnessEffect_Server_AddMadness_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_madnessToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USurvivorMadnessEffect_Server_AddMadness_Statics::NewProp_madnessToAdd = { "madnessToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorMadnessEffect_eventServer_AddMadness_Parms, madnessToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorMadnessEffect_Server_AddMadness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorMadnessEffect_Server_AddMadness_Statics::NewProp_madnessToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorMadnessEffect_Server_AddMadness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorMadnessEffect_Server_AddMadness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorMadnessEffect, nullptr, "Server_AddMadness", nullptr, nullptr, sizeof(SurvivorMadnessEffect_eventServer_AddMadness_Parms), Z_Construct_UFunction_USurvivorMadnessEffect_Server_AddMadness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_Server_AddMadness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorMadnessEffect_Server_AddMadness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorMadnessEffect_Server_AddMadness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorMadnessEffect_Server_AddMadness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorMadnessEffect_Server_AddMadness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USurvivorMadnessEffect_NoRegister()
	{
		return USurvivorMadnessEffect::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorMadnessEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__madness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__madness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorMadnessEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheDoctor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurvivorMadnessEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurvivorMadnessEffect_Authority_OnMadnessScreamTimerEnd_BP, "Authority_OnMadnessScreamTimerEnd_BP" }, // 3053249840
		{ &Z_Construct_UFunction_USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic, "ChangeMadnessAudio_Cosmetic" }, // 1022660475
		{ &Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessTier, "GetMadnessTier" }, // 2650203196
		{ &Z_Construct_UFunction_USurvivorMadnessEffect_GetMadnessValue, "GetMadnessValue" }, // 818129292
		{ &Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_OnMadnessTierDown, "Multicast_OnMadnessTierDown" }, // 2524804712
		{ &Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_OnMadnessTierUp, "Multicast_OnMadnessTierUp" }, // 1456108607
		{ &Z_Construct_UFunction_USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags, "Multicast_UpdateMadnessPlayerTags" }, // 2772085458
		{ &Z_Construct_UFunction_USurvivorMadnessEffect_OnMadnessTierDown_BP, "OnMadnessTierDown_BP" }, // 60943252
		{ &Z_Construct_UFunction_USurvivorMadnessEffect_OnMadnessTierUp_BP, "OnMadnessTierUp_BP" }, // 119087344
		{ &Z_Construct_UFunction_USurvivorMadnessEffect_OnShockTherapyReceived, "OnShockTherapyReceived" }, // 2080792283
		{ &Z_Construct_UFunction_USurvivorMadnessEffect_OnShockTherapyReceived_BP, "OnShockTherapyReceived_BP" }, // 2718925149
		{ &Z_Construct_UFunction_USurvivorMadnessEffect_OnSnapOutOfIt, "OnSnapOutOfIt" }, // 1762632480
		{ &Z_Construct_UFunction_USurvivorMadnessEffect_OnSnapOutOfIt_BP, "OnSnapOutOfIt_BP" }, // 1081290437
		{ &Z_Construct_UFunction_USurvivorMadnessEffect_OnStaticBlastReceived, "OnStaticBlastReceived" }, // 201203820
		{ &Z_Construct_UFunction_USurvivorMadnessEffect_OnStaticBlastReceived_BP, "OnStaticBlastReceived_BP" }, // 2615401826
		{ &Z_Construct_UFunction_USurvivorMadnessEffect_Server_AddMadness, "Server_AddMadness" }, // 2063432374
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorMadnessEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SurvivorMadnessEffect.h" },
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorMadnessEffect_Statics::NewProp__madness_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorMadnessEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorMadnessEffect_Statics::NewProp__madness = { "_madness", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorMadnessEffect, _madness), METADATA_PARAMS(Z_Construct_UClass_USurvivorMadnessEffect_Statics::NewProp__madness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorMadnessEffect_Statics::NewProp__madness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurvivorMadnessEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorMadnessEffect_Statics::NewProp__madness,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USurvivorMadnessEffect_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMadness_NoRegister, (int32)VTABLE_OFFSET(USurvivorMadnessEffect, IMadness), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorMadnessEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorMadnessEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorMadnessEffect_Statics::ClassParams = {
		&USurvivorMadnessEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USurvivorMadnessEffect_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorMadnessEffect_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivorMadnessEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorMadnessEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorMadnessEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorMadnessEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorMadnessEffect, 1183148293);
	template<> THEDOCTOR_API UClass* StaticClass<USurvivorMadnessEffect>()
	{
		return USurvivorMadnessEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorMadnessEffect(Z_Construct_UClass_USurvivorMadnessEffect, &USurvivorMadnessEffect::StaticClass, TEXT("/Script/TheDoctor"), TEXT("USurvivorMadnessEffect"), false, nullptr, nullptr, nullptr);

	void USurvivorMadnessEffect::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__madness(TEXT("_madness"));

		const bool bIsValid = true
			&& Name__madness == ClassReps[(int32)ENetFields_Private::_madness].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USurvivorMadnessEffect"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorMadnessEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
