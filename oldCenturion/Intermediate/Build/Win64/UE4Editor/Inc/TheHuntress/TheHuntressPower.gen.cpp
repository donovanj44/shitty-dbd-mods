// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHuntress/Public/TheHuntressPower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheHuntressPower() {}
// Cross Module References
	THEHUNTRESS_API UClass* Z_Construct_UClass_ATheHuntressPower_NoRegister();
	THEHUNTRESS_API UClass* Z_Construct_UClass_ATheHuntressPower();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable();
	UPackage* Z_Construct_UPackage__Script_TheHuntress();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	THEHUNTRESS_API UClass* Z_Construct_UClass_UHatchetCooldown_NoRegister();
	PROJECTILE_API UClass* Z_Construct_UClass_UBaseProjectileLauncher_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATheHuntressPower::execGetOwningKiller)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASlasherPlayer**)Z_Param__Result=P_THIS->GetOwningKiller();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATheHuntressPower::execHasHatchet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasHatchet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATheHuntressPower::execIsHatchetThrowFullyCharged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHatchetThrowFullyCharged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATheHuntressPower::execSetHatchetVisible)
	{
		P_GET_UBOOL(Z_Param_visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHatchetVisible(Z_Param_visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATheHuntressPower::execSetPercentThrowStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPercentThrowStrength(Z_Param_percentStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATheHuntressPower::execStartHatchetShineCosmetic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartHatchetShineCosmetic_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ATheHuntressPower_Cosmetic_OnThrowInteractionCancelled = FName(TEXT("Cosmetic_OnThrowInteractionCancelled"));
	void ATheHuntressPower::Cosmetic_OnThrowInteractionCancelled()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATheHuntressPower_Cosmetic_OnThrowInteractionCancelled),NULL);
	}
	static FName NAME_ATheHuntressPower_Cosmetic_OnThrowInteractionStart = FName(TEXT("Cosmetic_OnThrowInteractionStart"));
	void ATheHuntressPower::Cosmetic_OnThrowInteractionStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATheHuntressPower_Cosmetic_OnThrowInteractionStart),NULL);
	}
	static FName NAME_ATheHuntressPower_GetAkAudioHatchetSpawner = FName(TEXT("GetAkAudioHatchetSpawner"));
	UAkComponent* ATheHuntressPower::GetAkAudioHatchetSpawner() const
	{
		TheHuntressPower_eventGetAkAudioHatchetSpawner_Parms Parms;
		const_cast<ATheHuntressPower*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATheHuntressPower_GetAkAudioHatchetSpawner),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATheHuntressPower_GetHatchetCooldown = FName(TEXT("GetHatchetCooldown"));
	UHatchetCooldown* ATheHuntressPower::GetHatchetCooldown() const
	{
		TheHuntressPower_eventGetHatchetCooldown_Parms Parms;
		const_cast<ATheHuntressPower*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATheHuntressPower_GetHatchetCooldown),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATheHuntressPower_GetHatchetProjectileLauncher = FName(TEXT("GetHatchetProjectileLauncher"));
	UBaseProjectileLauncher* ATheHuntressPower::GetHatchetProjectileLauncher() const
	{
		TheHuntressPower_eventGetHatchetProjectileLauncher_Parms Parms;
		const_cast<ATheHuntressPower*>(this)->ProcessEvent(FindFunctionChecked(NAME_ATheHuntressPower_GetHatchetProjectileLauncher),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ATheHuntressPower_PrintDebugThrowInfo = FName(TEXT("PrintDebugThrowInfo"));
	void ATheHuntressPower::PrintDebugThrowInfo()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATheHuntressPower_PrintDebugThrowInfo),NULL);
	}
	static FName NAME_ATheHuntressPower_StartHatchetShineCosmetic = FName(TEXT("StartHatchetShineCosmetic"));
	void ATheHuntressPower::StartHatchetShineCosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATheHuntressPower_StartHatchetShineCosmetic),NULL);
	}
	void ATheHuntressPower::StaticRegisterNativesATheHuntressPower()
	{
		UClass* Class = ATheHuntressPower::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningKiller", &ATheHuntressPower::execGetOwningKiller },
			{ "HasHatchet", &ATheHuntressPower::execHasHatchet },
			{ "IsHatchetThrowFullyCharged", &ATheHuntressPower::execIsHatchetThrowFullyCharged },
			{ "SetHatchetVisible", &ATheHuntressPower::execSetHatchetVisible },
			{ "SetPercentThrowStrength", &ATheHuntressPower::execSetPercentThrowStrength },
			{ "StartHatchetShineCosmetic", &ATheHuntressPower::execStartHatchetShineCosmetic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATheHuntressPower_Cosmetic_OnThrowInteractionCancelled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATheHuntressPower_Cosmetic_OnThrowInteractionCancelled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheHuntressPower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheHuntressPower_Cosmetic_OnThrowInteractionCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATheHuntressPower, nullptr, "Cosmetic_OnThrowInteractionCancelled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATheHuntressPower_Cosmetic_OnThrowInteractionCancelled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_Cosmetic_OnThrowInteractionCancelled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATheHuntressPower_Cosmetic_OnThrowInteractionCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATheHuntressPower_Cosmetic_OnThrowInteractionCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATheHuntressPower_Cosmetic_OnThrowInteractionStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATheHuntressPower_Cosmetic_OnThrowInteractionStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheHuntressPower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheHuntressPower_Cosmetic_OnThrowInteractionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATheHuntressPower, nullptr, "Cosmetic_OnThrowInteractionStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATheHuntressPower_Cosmetic_OnThrowInteractionStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_Cosmetic_OnThrowInteractionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATheHuntressPower_Cosmetic_OnThrowInteractionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATheHuntressPower_Cosmetic_OnThrowInteractionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATheHuntressPower_GetAkAudioHatchetSpawner_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATheHuntressPower_GetAkAudioHatchetSpawner_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATheHuntressPower_GetAkAudioHatchetSpawner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheHuntressPower_eventGetAkAudioHatchetSpawner_Parms, ReturnValue), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATheHuntressPower_GetAkAudioHatchetSpawner_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_GetAkAudioHatchetSpawner_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATheHuntressPower_GetAkAudioHatchetSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheHuntressPower_GetAkAudioHatchetSpawner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATheHuntressPower_GetAkAudioHatchetSpawner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheHuntressPower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheHuntressPower_GetAkAudioHatchetSpawner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATheHuntressPower, nullptr, "GetAkAudioHatchetSpawner", nullptr, nullptr, sizeof(TheHuntressPower_eventGetAkAudioHatchetSpawner_Parms), Z_Construct_UFunction_ATheHuntressPower_GetAkAudioHatchetSpawner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_GetAkAudioHatchetSpawner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATheHuntressPower_GetAkAudioHatchetSpawner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_GetAkAudioHatchetSpawner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATheHuntressPower_GetAkAudioHatchetSpawner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATheHuntressPower_GetAkAudioHatchetSpawner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATheHuntressPower_GetHatchetCooldown_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATheHuntressPower_GetHatchetCooldown_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATheHuntressPower_GetHatchetCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheHuntressPower_eventGetHatchetCooldown_Parms, ReturnValue), Z_Construct_UClass_UHatchetCooldown_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATheHuntressPower_GetHatchetCooldown_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_GetHatchetCooldown_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATheHuntressPower_GetHatchetCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheHuntressPower_GetHatchetCooldown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATheHuntressPower_GetHatchetCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheHuntressPower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheHuntressPower_GetHatchetCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATheHuntressPower, nullptr, "GetHatchetCooldown", nullptr, nullptr, sizeof(TheHuntressPower_eventGetHatchetCooldown_Parms), Z_Construct_UFunction_ATheHuntressPower_GetHatchetCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_GetHatchetCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATheHuntressPower_GetHatchetCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_GetHatchetCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATheHuntressPower_GetHatchetCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATheHuntressPower_GetHatchetCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATheHuntressPower_GetHatchetProjectileLauncher_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATheHuntressPower_GetHatchetProjectileLauncher_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATheHuntressPower_GetHatchetProjectileLauncher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheHuntressPower_eventGetHatchetProjectileLauncher_Parms, ReturnValue), Z_Construct_UClass_UBaseProjectileLauncher_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATheHuntressPower_GetHatchetProjectileLauncher_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_GetHatchetProjectileLauncher_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATheHuntressPower_GetHatchetProjectileLauncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheHuntressPower_GetHatchetProjectileLauncher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATheHuntressPower_GetHatchetProjectileLauncher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheHuntressPower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheHuntressPower_GetHatchetProjectileLauncher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATheHuntressPower, nullptr, "GetHatchetProjectileLauncher", nullptr, nullptr, sizeof(TheHuntressPower_eventGetHatchetProjectileLauncher_Parms), Z_Construct_UFunction_ATheHuntressPower_GetHatchetProjectileLauncher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_GetHatchetProjectileLauncher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATheHuntressPower_GetHatchetProjectileLauncher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_GetHatchetProjectileLauncher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATheHuntressPower_GetHatchetProjectileLauncher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATheHuntressPower_GetHatchetProjectileLauncher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATheHuntressPower_GetOwningKiller_Statics
	{
		struct TheHuntressPower_eventGetOwningKiller_Parms
		{
			ASlasherPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATheHuntressPower_GetOwningKiller_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheHuntressPower_eventGetOwningKiller_Parms, ReturnValue), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATheHuntressPower_GetOwningKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheHuntressPower_GetOwningKiller_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATheHuntressPower_GetOwningKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheHuntressPower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheHuntressPower_GetOwningKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATheHuntressPower, nullptr, "GetOwningKiller", nullptr, nullptr, sizeof(TheHuntressPower_eventGetOwningKiller_Parms), Z_Construct_UFunction_ATheHuntressPower_GetOwningKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_GetOwningKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATheHuntressPower_GetOwningKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_GetOwningKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATheHuntressPower_GetOwningKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATheHuntressPower_GetOwningKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATheHuntressPower_HasHatchet_Statics
	{
		struct TheHuntressPower_eventHasHatchet_Parms
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
	void Z_Construct_UFunction_ATheHuntressPower_HasHatchet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TheHuntressPower_eventHasHatchet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATheHuntressPower_HasHatchet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TheHuntressPower_eventHasHatchet_Parms), &Z_Construct_UFunction_ATheHuntressPower_HasHatchet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATheHuntressPower_HasHatchet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheHuntressPower_HasHatchet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATheHuntressPower_HasHatchet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheHuntressPower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheHuntressPower_HasHatchet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATheHuntressPower, nullptr, "HasHatchet", nullptr, nullptr, sizeof(TheHuntressPower_eventHasHatchet_Parms), Z_Construct_UFunction_ATheHuntressPower_HasHatchet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_HasHatchet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATheHuntressPower_HasHatchet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_HasHatchet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATheHuntressPower_HasHatchet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATheHuntressPower_HasHatchet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATheHuntressPower_IsHatchetThrowFullyCharged_Statics
	{
		struct TheHuntressPower_eventIsHatchetThrowFullyCharged_Parms
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
	void Z_Construct_UFunction_ATheHuntressPower_IsHatchetThrowFullyCharged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TheHuntressPower_eventIsHatchetThrowFullyCharged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATheHuntressPower_IsHatchetThrowFullyCharged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TheHuntressPower_eventIsHatchetThrowFullyCharged_Parms), &Z_Construct_UFunction_ATheHuntressPower_IsHatchetThrowFullyCharged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATheHuntressPower_IsHatchetThrowFullyCharged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheHuntressPower_IsHatchetThrowFullyCharged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATheHuntressPower_IsHatchetThrowFullyCharged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheHuntressPower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheHuntressPower_IsHatchetThrowFullyCharged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATheHuntressPower, nullptr, "IsHatchetThrowFullyCharged", nullptr, nullptr, sizeof(TheHuntressPower_eventIsHatchetThrowFullyCharged_Parms), Z_Construct_UFunction_ATheHuntressPower_IsHatchetThrowFullyCharged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_IsHatchetThrowFullyCharged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATheHuntressPower_IsHatchetThrowFullyCharged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_IsHatchetThrowFullyCharged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATheHuntressPower_IsHatchetThrowFullyCharged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATheHuntressPower_IsHatchetThrowFullyCharged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATheHuntressPower_PrintDebugThrowInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATheHuntressPower_PrintDebugThrowInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheHuntressPower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheHuntressPower_PrintDebugThrowInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATheHuntressPower, nullptr, "PrintDebugThrowInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATheHuntressPower_PrintDebugThrowInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_PrintDebugThrowInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATheHuntressPower_PrintDebugThrowInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATheHuntressPower_PrintDebugThrowInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible_Statics
	{
		struct TheHuntressPower_eventSetHatchetVisible_Parms
		{
			bool visible;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_visible_MetaData[];
#endif
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible_Statics::NewProp_visible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((TheHuntressPower_eventSetHatchetVisible_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TheHuntressPower_eventSetHatchetVisible_Parms), &Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible_Statics::NewProp_visible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible_Statics::NewProp_visible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible_Statics::NewProp_visible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheHuntressPower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATheHuntressPower, nullptr, "SetHatchetVisible", nullptr, nullptr, sizeof(TheHuntressPower_eventSetHatchetVisible_Parms), Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATheHuntressPower_SetPercentThrowStrength_Statics
	{
		struct TheHuntressPower_eventSetPercentThrowStrength_Parms
		{
			float percentStrength;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_percentStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATheHuntressPower_SetPercentThrowStrength_Statics::NewProp_percentStrength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATheHuntressPower_SetPercentThrowStrength_Statics::NewProp_percentStrength = { "percentStrength", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheHuntressPower_eventSetPercentThrowStrength_Parms, percentStrength), METADATA_PARAMS(Z_Construct_UFunction_ATheHuntressPower_SetPercentThrowStrength_Statics::NewProp_percentStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_SetPercentThrowStrength_Statics::NewProp_percentStrength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATheHuntressPower_SetPercentThrowStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheHuntressPower_SetPercentThrowStrength_Statics::NewProp_percentStrength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATheHuntressPower_SetPercentThrowStrength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheHuntressPower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheHuntressPower_SetPercentThrowStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATheHuntressPower, nullptr, "SetPercentThrowStrength", nullptr, nullptr, sizeof(TheHuntressPower_eventSetPercentThrowStrength_Parms), Z_Construct_UFunction_ATheHuntressPower_SetPercentThrowStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_SetPercentThrowStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATheHuntressPower_SetPercentThrowStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_SetPercentThrowStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATheHuntressPower_SetPercentThrowStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATheHuntressPower_SetPercentThrowStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATheHuntressPower_StartHatchetShineCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATheHuntressPower_StartHatchetShineCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheHuntressPower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheHuntressPower_StartHatchetShineCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATheHuntressPower, nullptr, "StartHatchetShineCosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATheHuntressPower_StartHatchetShineCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATheHuntressPower_StartHatchetShineCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATheHuntressPower_StartHatchetShineCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATheHuntressPower_StartHatchetShineCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATheHuntressPower_NoRegister()
	{
		return ATheHuntressPower::StaticClass();
	}
	struct Z_Construct_UClass_ATheHuntressPower_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATheHuntressPower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACollectable,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHuntress,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATheHuntressPower_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATheHuntressPower_Cosmetic_OnThrowInteractionCancelled, "Cosmetic_OnThrowInteractionCancelled" }, // 3288317472
		{ &Z_Construct_UFunction_ATheHuntressPower_Cosmetic_OnThrowInteractionStart, "Cosmetic_OnThrowInteractionStart" }, // 2295382967
		{ &Z_Construct_UFunction_ATheHuntressPower_GetAkAudioHatchetSpawner, "GetAkAudioHatchetSpawner" }, // 2323981968
		{ &Z_Construct_UFunction_ATheHuntressPower_GetHatchetCooldown, "GetHatchetCooldown" }, // 3001668695
		{ &Z_Construct_UFunction_ATheHuntressPower_GetHatchetProjectileLauncher, "GetHatchetProjectileLauncher" }, // 767188115
		{ &Z_Construct_UFunction_ATheHuntressPower_GetOwningKiller, "GetOwningKiller" }, // 3544231477
		{ &Z_Construct_UFunction_ATheHuntressPower_HasHatchet, "HasHatchet" }, // 452512055
		{ &Z_Construct_UFunction_ATheHuntressPower_IsHatchetThrowFullyCharged, "IsHatchetThrowFullyCharged" }, // 3118819532
		{ &Z_Construct_UFunction_ATheHuntressPower_PrintDebugThrowInfo, "PrintDebugThrowInfo" }, // 1426819599
		{ &Z_Construct_UFunction_ATheHuntressPower_SetHatchetVisible, "SetHatchetVisible" }, // 3448987276
		{ &Z_Construct_UFunction_ATheHuntressPower_SetPercentThrowStrength, "SetPercentThrowStrength" }, // 1255067856
		{ &Z_Construct_UFunction_ATheHuntressPower_StartHatchetShineCosmetic, "StartHatchetShineCosmetic" }, // 569814591
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheHuntressPower_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TheHuntressPower.h" },
		{ "ModuleRelativePath", "Public/TheHuntressPower.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATheHuntressPower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheHuntressPower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATheHuntressPower_Statics::ClassParams = {
		&ATheHuntressPower::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATheHuntressPower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATheHuntressPower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATheHuntressPower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATheHuntressPower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATheHuntressPower, 262519209);
	template<> THEHUNTRESS_API UClass* StaticClass<ATheHuntressPower>()
	{
		return ATheHuntressPower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATheHuntressPower(Z_Construct_UClass_ATheHuntressPower, &ATheHuntressPower::StaticClass, TEXT("/Script/TheHuntress"), TEXT("ATheHuntressPower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheHuntressPower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
